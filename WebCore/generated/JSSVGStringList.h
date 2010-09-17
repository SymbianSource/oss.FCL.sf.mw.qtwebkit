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

#ifndef JSSVGStringList_h
#define JSSVGStringList_h

#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include "SVGElement.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObjectWithGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class SVGStringList;

class JSSVGStringList : public DOMObjectWithGlobalPointer {
    typedef DOMObjectWithGlobalPointer Base;
public:
    JSSVGStringList(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<SVGStringList>);
    virtual ~JSSVGStringList();
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    SVGStringList* impl() const { return m_impl.get(); }

private:
    RefPtr<SVGStringList> m_impl;
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, SVGStringList*, SVGElement* context);
SVGStringList* toSVGStringList(JSC::JSValue);

class JSSVGStringListPrototype : public JSC::JSObjectWithGlobalObject {
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
    JSSVGStringListPrototype(JSC::JSGlobalObject* globalObject, NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObjectWithGlobalObject(globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsSVGStringListPrototypeFunctionClear(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGStringListPrototypeFunctionInitialize(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGStringListPrototypeFunctionGetItem(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGStringListPrototypeFunctionInsertItemBefore(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGStringListPrototypeFunctionReplaceItem(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGStringListPrototypeFunctionRemoveItem(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGStringListPrototypeFunctionAppendItem(JSC::ExecState*);
// Attributes

JSC::JSValue jsSVGStringListNumberOfItems(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGStringListConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
