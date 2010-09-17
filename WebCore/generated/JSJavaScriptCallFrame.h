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

#ifndef JSJavaScriptCallFrame_h
#define JSJavaScriptCallFrame_h

#if ENABLE(JAVASCRIPT_DEBUGGER)

#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObjectWithGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JavaScriptCallFrame;

class JSJavaScriptCallFrame : public DOMObjectWithGlobalPointer {
    typedef DOMObjectWithGlobalPointer Base;
public:
    JSJavaScriptCallFrame(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<JavaScriptCallFrame>);
    virtual ~JSJavaScriptCallFrame();
    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertyDescriptor&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }


    // Custom attributes
    JSC::JSValue scopeChain(JSC::ExecState*) const;
    JSC::JSValue thisObject(JSC::ExecState*) const;
    JSC::JSValue type(JSC::ExecState*) const;

    // Custom functions
    JSC::JSValue evaluate(JSC::ExecState*);
    JSC::JSValue scopeType(JSC::ExecState*);
    JavaScriptCallFrame* impl() const { return m_impl.get(); }

private:
    RefPtr<JavaScriptCallFrame> m_impl;
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, JavaScriptCallFrame*);
JavaScriptCallFrame* toJavaScriptCallFrame(JSC::JSValue);

class JSJavaScriptCallFramePrototype : public JSC::JSObjectWithGlobalObject {
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
    JSJavaScriptCallFramePrototype(JSC::JSGlobalObject* globalObject, NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObjectWithGlobalObject(globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsJavaScriptCallFramePrototypeFunctionEvaluate(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsJavaScriptCallFramePrototypeFunctionScopeType(JSC::ExecState*);
// Attributes

JSC::JSValue jsJavaScriptCallFrameCaller(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsJavaScriptCallFrameSourceID(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsJavaScriptCallFrameLine(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsJavaScriptCallFrameScopeChain(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsJavaScriptCallFrameThisObject(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsJavaScriptCallFrameFunctionName(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsJavaScriptCallFrameType(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
// Constants

JSC::JSValue jsJavaScriptCallFrameGLOBAL_SCOPE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsJavaScriptCallFrameLOCAL_SCOPE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsJavaScriptCallFrameWITH_SCOPE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsJavaScriptCallFrameCLOSURE_SCOPE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsJavaScriptCallFrameCATCH_SCOPE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(JAVASCRIPT_DEBUGGER)

#endif
