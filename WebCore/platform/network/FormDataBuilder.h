/*
 * Copyright (C) 2008 Torch Mobile Inc. All rights reserved. (http://www.torchmobile.com/)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#ifndef FormDataBuilder_h
#define FormDataBuilder_h

#include "PlatformString.h"
#include <wtf/Noncopyable.h>

namespace WTF {
class CString;
}
using WTF::CString;

namespace WebCore {

class Document;
class TextEncoding;

class FormDataBuilder : public Noncopyable {
public:
    FormDataBuilder();
    ~FormDataBuilder();

    bool isPostMethod() const { return m_isPostMethod; }
    void setIsPostMethod(bool value) { m_isPostMethod = value; }

    bool isMultiPartForm() const { return m_isMultiPartForm; }
    void setIsMultiPartForm(bool value) { m_isMultiPartForm = value; }

    const String& action() const { return m_action; }

    const String& target() const { return m_target; }
    void setTarget(const String& target) { m_target = target; }

    String encodingType() const { return m_encodingType; }
    void setEncodingType(const String& value) { m_encodingType = value; }

    String acceptCharset() const { return m_acceptCharset; }
    void setAcceptCharset(const String& value) { m_acceptCharset = value; }

    void parseAction(const String&);
    void parseEncodingType(const String&);
    void parseMethodType(const String&);

    TextEncoding dataEncoding(Document*) const;

    // Helper functions used by HTMLFormElement/WMLGoElement for multi-part form data
    static Vector<char> generateUniqueBoundaryString();
    static void beginMultiPartHeader(Vector<char>&, const WTF::CString& boundary, const WTF::CString& name);
    static void addBoundaryToMultiPartHeader(Vector<char>&, const WTF::CString& boundary, bool isLastBoundary = false);
    static void addFilenameToMultiPartHeader(Vector<char>&, const TextEncoding&, const String& filename);
    static void addContentTypeToMultiPartHeader(Vector<char>&, const WTF::CString& mimeType);
    static void finishMultiPartHeader(Vector<char>&);

    // Helper functions used by HTMLFormElement/WMLGoElement for non multi-part form data
    static void addKeyValuePairAsFormData(Vector<char>&, const WTF::CString& key, const WTF::CString& value);
    static void encodeStringAsFormData(Vector<char>&, const WTF::CString&);

private:
    bool m_isPostMethod;
    bool m_isMultiPartForm;

    String m_action;
    String m_target;
    String m_encodingType;
    String m_acceptCharset;
};

}

#endif
