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
#include "PlatformHaptics.h"
#include "QtPlatformPlugin.h"
#include "qwebkitplatformplugin.h"

namespace WebCore {

static QtPlatformPlugin platformPlugin;
static QWebHapticFeedbackPlayer* player = 0;

void initHaptics()
{
    static bool pluginLoaded = false;

    if (!pluginLoaded) {
        if (platformPlugin.plugin() && platformPlugin.plugin()->supportsExtension(QWebKitPlatformPlugin::Haptics))
            player = platformPlugin.plugin()->createHapticFeedbackPlayer();
        pluginLoaded = true;
    }
}

static void hapticTypeToString(const EHapticTapType type, QString &string)
{
    switch (type) {
    case HBUTTON:
        string = "Button";
        break;
    case HLATCHEDBUTTONDOWN:
        string = "LatchedButtonDown";
        break;
    case HLATCHEDBUTTONUP:
        string = "LatchedButtonUp";
        break;
    case HLATCHEDBUTTONSTUCK:
        string = "LatchedButtonStuck";
        break;
    case HLINK:
        string = "Link";
        break;
    case HCHECKEDCHECKBOX:
        string = "CheckedCheckbox";
        break;
    case HUNCHECKEDCHECKBOX:
        string = "UncheckedCheckbox";
        break;
    default:
        string = "Undefined";
        break;
    }
}

void playPressHaptics(const EHapticTapType type, const EHapticTapStrength strength)
{
    if (!player)
        return;

    QString typestring;
    hapticTypeToString(type, typestring);

    player->playHapticFeedback(QWebHapticFeedbackPlayer::Press, typestring,
                               (QWebHapticFeedbackPlayer::HapticStrength) strength);
}

void playReleaseHaptics(const EHapticTapType type, const EHapticTapStrength strength)
{
    if (!player)
        return;

    QString typestring;
    hapticTypeToString(type, typestring);

    player->playHapticFeedback(QWebHapticFeedbackPlayer::Release, typestring,
                               (QWebHapticFeedbackPlayer::HapticStrength) strength);
}

} // namespace WebCore
