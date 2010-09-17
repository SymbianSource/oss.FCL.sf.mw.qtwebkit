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

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGViewElement.h"

#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedPreserveAspectRatio.h"
#include "JSSVGAnimatedRect.h"
#include "JSSVGStringList.h"
#include "SVGStringList.h"
#include "SVGViewElement.h"
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGViewElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGViewElementTableValues[7] =
{
    { "viewTarget", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementViewTarget), (intptr_t)0 THUNK_GENERATOR(0) },
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementExternalResourcesRequired), (intptr_t)0 THUNK_GENERATOR(0) },
    { "viewBox", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementViewBox), (intptr_t)0 THUNK_GENERATOR(0) },
    { "preserveAspectRatio", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementPreserveAspectRatio), (intptr_t)0 THUNK_GENERATOR(0) },
    { "zoomAndPan", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementZoomAndPan), (intptr_t)setJSSVGViewElementZoomAndPan THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGViewElementTable = { 16, 15, JSSVGViewElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGViewElementConstructorTableValues[4] =
{
    { "SVG_ZOOMANDPAN_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementSVG_ZOOMANDPAN_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_ZOOMANDPAN_DISABLE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementSVG_ZOOMANDPAN_DISABLE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_ZOOMANDPAN_MAGNIFY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementSVG_ZOOMANDPAN_MAGNIFY), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGViewElementConstructorTable = { 9, 7, JSSVGViewElementConstructorTableValues, 0 };

COMPILE_ASSERT(0 == SVGViewElement::SVG_ZOOMANDPAN_UNKNOWN, SVGViewElementEnumSVG_ZOOMANDPAN_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGViewElement::SVG_ZOOMANDPAN_DISABLE, SVGViewElementEnumSVG_ZOOMANDPAN_DISABLEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGViewElement::SVG_ZOOMANDPAN_MAGNIFY, SVGViewElementEnumSVG_ZOOMANDPAN_MAGNIFYIsWrongUseDontCheckEnums);

class JSSVGViewElementConstructor : public DOMConstructorObject {
public:
    JSSVGViewElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValue prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSSVGViewElementConstructor::s_info = { "SVGViewElementConstructor", 0, &JSSVGViewElementConstructorTable, 0 };

JSSVGViewElementConstructor::JSSVGViewElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGViewElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSSVGViewElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGViewElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGViewElementConstructor, DOMObject>(exec, &JSSVGViewElementConstructorTable, this, propertyName, slot);
}

bool JSSVGViewElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGViewElementConstructor, DOMObject>(exec, &JSSVGViewElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGViewElementPrototypeTableValues[4] =
{
    { "SVG_ZOOMANDPAN_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementSVG_ZOOMANDPAN_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_ZOOMANDPAN_DISABLE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementSVG_ZOOMANDPAN_DISABLE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_ZOOMANDPAN_MAGNIFY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGViewElementSVG_ZOOMANDPAN_MAGNIFY), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGViewElementPrototypeTable = { 9, 7, JSSVGViewElementPrototypeTableValues, 0 };
const ClassInfo JSSVGViewElementPrototype::s_info = { "SVGViewElementPrototype", 0, &JSSVGViewElementPrototypeTable, 0 };

JSObject* JSSVGViewElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGViewElement>(exec, globalObject);
}

bool JSSVGViewElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGViewElementPrototype, JSObject>(exec, &JSSVGViewElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGViewElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGViewElementPrototype, JSObject>(exec, &JSSVGViewElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGViewElement::s_info = { "SVGViewElement", &JSSVGElement::s_info, &JSSVGViewElementTable, 0 };

JSSVGViewElement::JSSVGViewElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGViewElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGViewElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGViewElementPrototype(globalObject, JSSVGViewElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGViewElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGViewElement, Base>(exec, &JSSVGViewElementTable, this, propertyName, slot);
}

bool JSSVGViewElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGViewElement, Base>(exec, &JSSVGViewElementTable, this, propertyName, descriptor);
}

JSValue jsSVGViewElementViewTarget(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGViewElement* castedThis = static_cast<JSSVGViewElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewElement* imp = static_cast<SVGViewElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->viewTarget()), imp);
    return result;
}

JSValue jsSVGViewElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGViewElement* castedThis = static_cast<JSSVGViewElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewElement* imp = static_cast<SVGViewElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGViewElementViewBox(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGViewElement* castedThis = static_cast<JSSVGViewElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewElement* imp = static_cast<SVGViewElement*>(castedThis->impl());
    RefPtr<SVGAnimatedRect> obj = imp->viewBoxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGViewElementPreserveAspectRatio(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGViewElement* castedThis = static_cast<JSSVGViewElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewElement* imp = static_cast<SVGViewElement*>(castedThis->impl());
    RefPtr<SVGAnimatedPreserveAspectRatio> obj = imp->preserveAspectRatioAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGViewElementZoomAndPan(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGViewElement* castedThis = static_cast<JSSVGViewElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGViewElement* imp = static_cast<SVGViewElement*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->zoomAndPan());
    return result;
}

JSValue jsSVGViewElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGViewElement* domObject = static_cast<JSSVGViewElement*>(asObject(slotBase));
    return JSSVGViewElement::getConstructor(exec, domObject->globalObject());
}
void JSSVGViewElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGViewElement, Base>(exec, propertyName, value, &JSSVGViewElementTable, this, slot);
}

void setJSSVGViewElementZoomAndPan(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGViewElement* castedThis = static_cast<JSSVGViewElement*>(thisObject);
    SVGViewElement* imp = static_cast<SVGViewElement*>(castedThis->impl());
    imp->setZoomAndPan(value.toInt32(exec));
}

JSValue JSSVGViewElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGViewElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

JSValue jsSVGViewElementSVG_ZOOMANDPAN_UNKNOWN(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValue jsSVGViewElementSVG_ZOOMANDPAN_DISABLE(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValue jsSVGViewElementSVG_ZOOMANDPAN_MAGNIFY(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(2));
}


}

#endif // ENABLE(SVG)
