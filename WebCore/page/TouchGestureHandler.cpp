/*
    Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies)

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "TouchGestureHandler.h"

#include <math.h>

#ifndef M_PI
#define M_PI 3.1415926536
#endif

namespace WebCore {

TouchGestureHandler::TouchGestureHandler()
{
    reset();
}

void TouchGestureHandler::updateRefreshNeededState(const Vector<const PlatformTouchPoint*>& touchPoints)
{
    // Number of touchpoints changed
    if (touchPoints.size() != m_prevSize)
        m_refreshNeeded = true;
    else {
        for (int i = 0; i < touchPoints.size(); ++i) {
            // Touchpoints in pressed state or ids mismatch
            if (touchPoints[i]->state() == PlatformTouchPoint::TouchPressed
                || touchPoints[i]->id() != m_prevIds[i]) m_refreshNeeded = true;
        }
    }

    m_prevSize = touchPoints.size();
    for (int i = 0; i < touchPoints.size(); ++i)
        m_prevIds[i] = touchPoints[i]->id();
}

void TouchGestureHandler::updateTouchPoints(const Vector<const PlatformTouchPoint*>& touchPoints)
{
    if (touchPoints.isEmpty())
        return;

    updateRefreshNeededState(touchPoints);

    if (m_refreshNeeded) {
        m_pos = calcPos(touchPoints);
        IntSize clientOffset = touchPoints[0]->screenPos() - touchPoints[0]->pos();
        m_screenPos = m_pos + clientOffset;

        if (touchPoints.size() > 1) {
            m_prevAngle = calcAngle(touchPoints[0]->pos(), touchPoints[1]->pos());
            m_prevDistance = calcDistance(touchPoints[0]->pos(), touchPoints[1]->pos());
        }
        m_refreshNeeded = false;
        return;
    }

    // Pan
    IntPoint nextPos = calcPos(touchPoints);
    m_translate += (nextPos - m_pos);
    m_pos = nextPos;
    IntSize clientOffset = touchPoints[0]->screenPos() - touchPoints[0]->pos();
    m_screenPos = m_pos + clientOffset;

    if (touchPoints.size() > 1) {
        // Rotate
        float angle = calcAngle(touchPoints[0]->pos(), touchPoints[1]->pos());
        m_rotate += diffAngle(m_prevAngle, angle);
        m_prevAngle = angle;

        // Pinch
        float distance = calcDistance(touchPoints[0]->pos(), touchPoints[1]->pos());
        float nextScale = m_scale * (distance / (m_prevDistance ? m_prevDistance : 0.0001f));
        m_scale = nextScale;
        m_prevDistance = distance;
    }
}

void TouchGestureHandler::reset()
{
    m_refreshNeeded = true;
    m_scale = 1.0;
    m_rotate = 0;
    m_translate = IntPoint(0, 0);
    m_pos = IntPoint(0, 0);
    m_screenPos = IntPoint(0, 0);
    m_prevSize = 0;
}

float TouchGestureHandler::calcAngle(const IntPoint& p1, const IntPoint& p2) const
{
    float deltaX = p1.x() - p2.x();
    float deltaY = p1.y() - p2.y();
    return atan2(deltaY, deltaX);
}

float TouchGestureHandler::diffAngle(float alpha, float beta) const
{
    float between = beta - alpha;

    if (between > M_PI)
        between -= 2 * M_PI;
    else if (between < -M_PI)
        between += 2 * M_PI;

    return between;
}

IntPoint TouchGestureHandler::calcPos(const Vector<const PlatformTouchPoint*>& touchPoints) const
{
    if (touchPoints.size() == 1)
        return touchPoints[0]->pos();

    IntPoint pos;
    pos.setX((touchPoints[0]->pos().x() + touchPoints[1]->pos().x()) / 2);
    pos.setY((touchPoints[0]->pos().y() + touchPoints[1]->pos().y()) / 2);
    return pos;
}

float TouchGestureHandler::calcDistance(const IntPoint& p1, const IntPoint& p2) const
{
    float dx = p1.x() - p2.x();
    float dy = p1.y() - p2.y();
    return sqrt(dx * dx + dy * dy);
}

}
