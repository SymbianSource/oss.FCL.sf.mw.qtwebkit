/*
 * Copyright (C) 2010 Apple Inc. All rights reserved.
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
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "ImmutableArray.h"

namespace WebKit {

ImmutableArray::ImmutableArray()
    : m_entries(0)
    , m_size(0)
{
    memset(&m_callbacks, 0, sizeof(m_callbacks));
}

ImmutableArray::ImmutableArray(const void** entries, size_t size, const ImmutableArrayCallbacks* callbacks)
    : m_entries(new void*[size])
    , m_size(size)
    , m_callbacks(*callbacks)
{
    memcpy(m_entries, entries, m_size);
    for (size_t i = 0; i < m_size; ++i)
        m_callbacks.ref(m_entries[i]);
}

ImmutableArray::ImmutableArray(void** entries, size_t size, const ImmutableArrayCallbacks* callbacks, AdoptTag)
    : m_entries(entries)
    , m_size(size)
    , m_callbacks(*callbacks)
{
}

ImmutableArray::~ImmutableArray()
{
    if (!m_entries)
        return;

    for (size_t i = 0; i < m_size; ++i)
        m_callbacks.deref(m_entries[i]);
    delete [] m_entries;
}

} // namespace WebKit