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

#ifndef TouchGestureHandler_h
#define TouchGestureHandler_h

#include "PlatformTouchEvent.h"

namespace WebCore {

class TouchGestureHandler {

public:
    TouchGestureHandler();

    void reset();
    void updateTouchPoints(const Vector<const PlatformTouchPoint*>& touchPoints);

    int translateX() const { return m_translate.x(); }
    int translateY() const { return m_translate.y(); }
    const IntPoint& pos() const { return m_pos; }
    const IntPoint& screenPos() const { return m_screenPos; }
    float scale() const { return m_scale; }
    float rotate() const { return m_rotate; }

private:
    float calcAngle(const IntPoint& p1, const IntPoint& p2) const;
    float diffAngle(float alpha, float beta) const;
    IntPoint calcPos(const Vector<const PlatformTouchPoint*>& touchPoints) const;
    float calcDistance(const IntPoint& p1, const IntPoint& p2) const;
    void updateRefreshNeededState(const Vector<const PlatformTouchPoint*>& touchPoints);

    bool m_refreshNeeded;
    IntPoint m_translate;
    float m_scale;
    float m_rotate;
    IntPoint m_pos;
    IntPoint m_screenPos;
    float m_prevAngle;
    int m_prevSize;
    int m_prevIds[2];
    float m_prevDistance;
};

}

#endif // TouchGestureHandler_h
