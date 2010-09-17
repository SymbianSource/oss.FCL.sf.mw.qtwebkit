/*
 * Copyright (C) 2010 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef DRTDevToolsCallArgs_h
#define DRTDevToolsCallArgs_h

#include "public/WebDevToolsMessageData.h"
#include "public/WebString.h"
#include <wtf/Assertions.h>

class DRTDevToolsCallArgs {
public:
    DRTDevToolsCallArgs(const WebKit::WebDevToolsMessageData& data)
        : m_data(data)
    {
        ++m_callsCount;

        // The same behaviour as we have in case of IPC.
        for (size_t i = 0; i < m_data.arguments.size(); ++i) {
            if (m_data.arguments[i].isNull())
                m_data.arguments[i] = WebKit::WebString::fromUTF8("");
        }
    }

    DRTDevToolsCallArgs(const DRTDevToolsCallArgs& args)
        : m_data(args.m_data)
    {
        ++m_callsCount;
    }

    ~DRTDevToolsCallArgs()
    {
        --m_callsCount;
        ASSERT(m_callsCount >= 0);
    }

    static int callsCount() { return m_callsCount; }

    WebKit::WebDevToolsMessageData m_data;

private:
    static int m_callsCount;
};

#endif // DRTDevToolsCallArgs_h
