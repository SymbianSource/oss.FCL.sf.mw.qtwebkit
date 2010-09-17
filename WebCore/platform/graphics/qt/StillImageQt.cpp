/*
 * Copyright (C) 2008 Holger Hans Peter Freyther
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "StillImageQt.h"

#include "GraphicsContext.h"
#include "IntSize.h"

#include <QPainter>

namespace WebCore {

StillImage::StillImage(const QPixmap& pixmap)
    : m_pixmap(new QPixmap(pixmap))
    , m_ownsPixmap(true)
{}

StillImage::StillImage(const QPixmap* pixmap)
    : m_pixmap(pixmap)
    , m_ownsPixmap(false)
{}

StillImage::~StillImage()
{
    if (m_ownsPixmap)
        delete m_pixmap;
}

IntSize StillImage::size() const
{
    return IntSize(m_pixmap->width(), m_pixmap->height());
}

NativeImagePtr StillImage::nativeImageForCurrentFrame()
{
    return const_cast<NativeImagePtr>(m_pixmap);
}

void StillImage::draw(GraphicsContext* ctxt, const FloatRect& dst,
                      const FloatRect& src, ColorSpace, CompositeOperator op)
{
    if (m_pixmap->isNull())
        return;


    FloatRect normalizedSrc = src.normalized();
    FloatRect normalizedDst = dst.normalized();

    QPainter* painter = ctxt->platformContext();
    QPainter::CompositionMode oldCompositionMode = painter->compositionMode();

    ctxt->setCompositeOperation(op);

    FloatSize shadowSize;
    float shadowBlur;
    Color shadowColor;
    if (ctxt->getShadow(shadowSize, shadowBlur, shadowColor)) {
        FloatRect shadowImageRect(normalizedDst);
        shadowImageRect.move(shadowSize.width(), shadowSize.height());

        QImage shadowImage(QSize(static_cast<int>(normalizedSrc.width()), static_cast<int>(normalizedSrc.height())), QImage::Format_ARGB32_Premultiplied);
        QPainter p(&shadowImage);
        p.setCompositionMode(QPainter::CompositionMode_Source);
        p.fillRect(shadowImage.rect(), shadowColor);
        p.setCompositionMode(QPainter::CompositionMode_DestinationIn);
        p.drawPixmap(QRect(0, 0, normalizedDst.width(), normalizedDst.height()), *m_pixmap, normalizedSrc);
        p.end();
        painter->drawImage(shadowImageRect, shadowImage, normalizedSrc);
    }

    painter->drawPixmap(normalizedDst, *m_pixmap, normalizedSrc);
    painter->setCompositionMode(oldCompositionMode);
}

}
