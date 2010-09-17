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

#ifndef JSSVGPreserveAspectRatio_h
#define JSSVGPreserveAspectRatio_h

#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include "JSSVGPODTypeWrapper.h"
#include "SVGElement.h"
#include "SVGPreserveAspectRatio.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObjectWithGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSSVGPreserveAspectRatio : public DOMObjectWithGlobalPointer {
    typedef DOMObjectWithGlobalPointer Base;
public:
    JSSVGPreserveAspectRatio(NonNullPassRefPtr<JSC::Structure>, JSDOMGlobalObject*, PassRefPtr<JSSVGPODTypeWrapper<SVGPreserveAspectRatio> >);
    virtual ~JSSVGPreserveAspectRatio();
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
    JSSVGPODTypeWrapper<SVGPreserveAspectRatio> * impl() const { return m_impl.get(); }

private:
    RefPtr<JSSVGPODTypeWrapper<SVGPreserveAspectRatio> > m_impl;
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, JSSVGPODTypeWrapper<SVGPreserveAspectRatio>*, SVGElement*);
SVGPreserveAspectRatio toSVGPreserveAspectRatio(JSC::JSValue);

class JSSVGPreserveAspectRatioPrototype : public JSC::JSObjectWithGlobalObject {
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
    JSSVGPreserveAspectRatioPrototype(JSC::JSGlobalObject* globalObject, NonNullPassRefPtr<JSC::Structure> structure) : JSC::JSObjectWithGlobalObject(globalObject, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Attributes

JSC::JSValue jsSVGPreserveAspectRatioAlign(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGPreserveAspectRatioAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPreserveAspectRatioMeetOrSlice(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
void setJSSVGPreserveAspectRatioMeetOrSlice(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPreserveAspectRatioConstructor(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
// Constants

JSC::JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_UNKNOWN(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_NONE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMINYMIN(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMIDYMIN(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMAXYMIN(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMINYMID(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMIDYMID(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMAXYMID(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMINYMAX(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMIDYMAX(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMAXYMAX(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPreserveAspectRatioSVG_MEETORSLICE_UNKNOWN(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPreserveAspectRatioSVG_MEETORSLICE_MEET(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);
JSC::JSValue jsSVGPreserveAspectRatioSVG_MEETORSLICE_SLICE(JSC::ExecState*, JSC::JSValue, const JSC::Identifier&);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
