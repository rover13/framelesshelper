/*
 * MIT License
 *
 * Copyright (C) 2020 by wangwenx190 (Yuhang Zhao)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "framelessquickhelper.h"

#include "framelesswindowsmanager.h"
#include <QQuickWindow>

FramelessQuickHelper::FramelessQuickHelper(QQuickItem *parent) : QQuickItem(parent) {}

int FramelessQuickHelper::borderWidth() const
{
    return FramelessWindowsManager::getBorderWidth(window());
}

void FramelessQuickHelper::setBorderWidth(const int val)
{
    FramelessWindowsManager::setBorderWidth(window(), val);
    Q_EMIT borderWidthChanged(val);
}

int FramelessQuickHelper::borderHeight() const
{
    return FramelessWindowsManager::getBorderHeight(window());
}

void FramelessQuickHelper::setBorderHeight(const int val)
{
    FramelessWindowsManager::setBorderHeight(window(), val);
    Q_EMIT borderHeightChanged(val);
}

int FramelessQuickHelper::titleBarHeight() const
{
    return FramelessWindowsManager::getTitleBarHeight(window());
}

void FramelessQuickHelper::setTitleBarHeight(const int val)
{
    FramelessWindowsManager::setTitleBarHeight(window(), val);
    Q_EMIT titleBarHeightChanged(val);
}

bool FramelessQuickHelper::resizable() const
{
    return FramelessWindowsManager::getResizable(window());
}

void FramelessQuickHelper::setResizable(const bool val)
{
    FramelessWindowsManager::setResizable(window(), val);
    Q_EMIT resizableChanged(val);
}

bool FramelessQuickHelper::titleBarEnabled() const
{
    return FramelessWindowsManager::getTitleBarEnabled(window());
}

void FramelessQuickHelper::setTitleBarEnabled(const bool val)
{
    FramelessWindowsManager::setTitleBarEnabled(window(), val);
    Q_EMIT titleBarEnabledChanged(val);
}

QSize FramelessQuickHelper::minimumSize() const
{
    return FramelessWindowsManager::getMinimumSize(window());
}

void FramelessQuickHelper::setMinimumSize(const QSize &val)
{
    FramelessWindowsManager::setMinimumSize(window(), val);
    Q_EMIT minimumSizeChanged(val);
}

QSize FramelessQuickHelper::maximumSize() const
{
    return FramelessWindowsManager::getMaximumSize(window());
}

void FramelessQuickHelper::setMaximumSize(const QSize &val)
{
    FramelessWindowsManager::setMaximumSize(window(), val);
    Q_EMIT maximumSizeChanged(val);
}

void FramelessQuickHelper::removeWindowFrame(const bool center)
{
    FramelessWindowsManager::addWindow(window(), center);
}

QSize FramelessQuickHelper::desktopSize() const
{
    return FramelessWindowsManager::getDesktopSize(window());
}

QRect FramelessQuickHelper::desktopAvailableGeometry() const
{
    return FramelessWindowsManager::getDesktopAvailableGeometry(window());
}

QSize FramelessQuickHelper::desktopAvailableSize() const
{
    return FramelessWindowsManager::getDesktopAvailableSize(window());
}

void FramelessQuickHelper::moveWindowToDesktopCenter(const bool realCenter)
{
    FramelessWindowsManager::moveWindowToDesktopCenter(window(), realCenter);
}

void FramelessQuickHelper::addIgnoreArea(const QRect &val)
{
    FramelessWindowsManager::addIgnoreArea(window(), val);
}

void FramelessQuickHelper::addDraggableArea(const QRect &val)
{
    FramelessWindowsManager::addDraggableArea(window(), val);
}

void FramelessQuickHelper::addIgnoreObject(QQuickItem *val)
{
    Q_ASSERT(val);
    FramelessWindowsManager::addIgnoreObject(window(), val);
}

void FramelessQuickHelper::addDraggableObject(QQuickItem *val)
{
    Q_ASSERT(val);
    FramelessWindowsManager::addDraggableObject(window(), val);
}
