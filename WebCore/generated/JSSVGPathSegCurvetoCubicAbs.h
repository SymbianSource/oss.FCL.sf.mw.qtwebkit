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

#ifndef JSSVGPathSegCurvetoCubicAbs_h
#define JSSVGPathSegCurvetoCubicAbs_h

#if ENABLE(SVG)

#include "JSSVGPathSeg.h"
#include "SVGElement.h"
#include <runtime/JSObjectWithGlobalObject.h>

namespace WebCore {

class SVGPathSegCurvetoCubicAbs;

class JSSVGPathSegCurvetoCubicAbs : public JSSVGPathSeg {
    typedef JSSVGPathSeg Base;
public:
    JSSVGPathSegCurvetoCubicAbs(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<SVGPathSegCurvetoCubicAbs>);
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

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSSVGPathSegCurvetoCubicAbsPrototype : public JSC::JSObjectWithGlobalObject {
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }
    JSSVGPathSegCurvetoCubicAbsPrototype(JSC::JSGlobalObject* globalObject, NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObjectWithGlobalObject(globalObject, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsSVGPathSegCurvetoCubicAbsX(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGPathSegCurvetoCubicAbsX(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoCubicAbsY(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGPathSegCurvetoCubicAbsY(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoCubicAbsX1(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGPathSegCurvetoCubicAbsX1(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoCubicAbsY1(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGPathSegCurvetoCubicAbsY1(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoCubicAbsX2(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGPathSegCurvetoCubicAbsX2(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoCubicAbsY2(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGPathSegCurvetoCubicAbsY2(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoCubicAbsConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
