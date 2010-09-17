/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

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

#ifndef JSDocument_h
#define JSDocument_h

#include "Document.h"
#include "JSNode.h"
#include <runtime/JSObjectWithGlobalObject.h>
#include <runtime/Lookup.h>
#include <wtf/AlwaysInline.h>

namespace WebCore {

class Document;

class JSDocument : public JSNode {
    typedef JSNode Base;
public:
    JSDocument(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<Document>);
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }

    virtual void markChildren(JSC::MarkStack&);

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom attributes
    JSC::JSValue location(JSC::ExecState*) const;
    void setLocation(JSC::ExecState*, JSC::JSValue);
    Document* impl() const
    {
        return static_cast<Document*>(Base::impl());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesMarkChildren | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

ALWAYS_INLINE bool JSDocument::getOwnPropertySlot(JSC::ExecState* exec, const JSC::Identifier& propertyName, JSC::PropertySlot& slot)
{
    return JSC::getStaticValueSlot<JSDocument, Base>(exec, s_info.staticPropHashTable, this, propertyName, slot);
}

ALWAYS_INLINE bool JSDocument::getOwnPropertyDescriptor(JSC::ExecState* exec, const JSC::Identifier& propertyName, JSC::PropertyDescriptor& descriptor)
{
    return JSC::getStaticValueDescriptor<JSDocument, Base>(exec, s_info.staticPropHashTable, this, propertyName, descriptor);
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Document*);
Document* toDocument(JSC::JSValue);

class JSDocumentPrototype : public JSC::JSObjectWithGlobalObject {
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }
    JSDocumentPrototype(JSC::JSGlobalObject* globalObject, NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObjectWithGlobalObject(globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesMarkChildren | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateElement(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateDocumentFragment(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateTextNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateComment(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateCDATASection(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateProcessingInstruction(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateAttribute(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateEntityReference(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionGetElementsByTagName(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionImportNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateElementNS(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateAttributeNS(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionGetElementsByTagNameNS(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionGetElementById(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionAdoptNode(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateEvent(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateRange(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateNodeIterator(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateTreeWalker(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionGetOverrideStyle(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateExpression(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCreateNSResolver(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionEvaluate(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionExecCommand(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionQueryCommandEnabled(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionQueryCommandIndeterm(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionQueryCommandState(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionQueryCommandSupported(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionQueryCommandValue(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionGetElementsByName(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionElementFromPoint(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionCaretRangeFromPoint(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionGetSelection(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionGetCSSCanvasContext(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionGetElementsByClassName(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionQuerySelector(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsDocumentPrototypeFunctionQuerySelectorAll(JSC::ExecState*);
// Attributes

JSC::JSValue jsDocumentDoctype(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentImplementation(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentDocumentElement(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentInputEncoding(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentXMLEncoding(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentXMLVersion(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentXMLVersion(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentXMLStandalone(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentXMLStandalone(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentDocumentURI(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentDocumentURI(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentDefaultView(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentStyleSheets(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentTitle(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentTitle(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentReferrer(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentDomain(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentDomain(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentURL(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentCookie(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentCookie(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentBody(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentBody(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentHead(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentImages(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentApplets(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentLinks(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentForms(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentAnchors(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentLastModified(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentLocation(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentLocation(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentCharset(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentCharset(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentDefaultCharset(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentReadyState(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentCharacterSet(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentPreferredStylesheetSet(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsDocumentSelectedStylesheetSet(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentSelectedStylesheetSet(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnabort(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnabort(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnblur(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnblur(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnchange(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnchange(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnclick(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnclick(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOncontextmenu(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOncontextmenu(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOndblclick(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOndblclick(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOndrag(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOndrag(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOndragend(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOndragend(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOndragenter(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOndragenter(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOndragleave(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOndragleave(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOndragover(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOndragover(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOndragstart(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOndragstart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOndrop(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOndrop(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnerror(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnfocus(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnfocus(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOninput(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOninput(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOninvalid(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOninvalid(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnkeydown(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnkeydown(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnkeypress(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnkeypress(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnkeyup(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnkeyup(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnload(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnmousedown(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnmousedown(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnmousemove(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnmousemove(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnmouseout(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnmouseout(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnmouseover(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnmouseover(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnmouseup(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnmouseup(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnmousewheel(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnmousewheel(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnscroll(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnscroll(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnselect(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnselect(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnsubmit(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnsubmit(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnbeforecut(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnbeforecut(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOncut(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOncut(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnbeforecopy(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnbeforecopy(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOncopy(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOncopy(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnbeforepaste(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnbeforepaste(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnpaste(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnpaste(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnreset(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnreset(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnsearch(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnsearch(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOnselectstart(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOnselectstart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOntouchstart(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOntouchstart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOntouchmove(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOntouchmove(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOntouchend(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOntouchend(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOntouchcancel(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOntouchcancel(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOntransformactionstart(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOntransformactionstart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOntransformactionupdate(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOntransformactionupdate(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentOntransformactionend(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSDocumentOntransformactionend(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsDocumentConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif
