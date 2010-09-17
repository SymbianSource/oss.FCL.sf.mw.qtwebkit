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

#include "JSSVGRadialGradientElement.h"

#include "JSSVGAnimatedLength.h"
#include "SVGRadialGradientElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGRadialGradientElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGRadialGradientElementTableValues[7] =
{
    { "cx", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRadialGradientElementCx), (intptr_t)0 THUNK_GENERATOR(0) },
    { "cy", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRadialGradientElementCy), (intptr_t)0 THUNK_GENERATOR(0) },
    { "r", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRadialGradientElementR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "fx", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRadialGradientElementFx), (intptr_t)0 THUNK_GENERATOR(0) },
    { "fy", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRadialGradientElementFy), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGRadialGradientElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGRadialGradientElementTable = { 18, 15, JSSVGRadialGradientElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGRadialGradientElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGRadialGradientElementConstructorTable = { 1, 0, JSSVGRadialGradientElementConstructorTableValues, 0 };
class JSSVGRadialGradientElementConstructor : public DOMConstructorObject {
public:
    JSSVGRadialGradientElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGRadialGradientElementConstructor::s_info = { "SVGRadialGradientElementConstructor", 0, &JSSVGRadialGradientElementConstructorTable, 0 };

JSSVGRadialGradientElementConstructor::JSSVGRadialGradientElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGRadialGradientElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSSVGRadialGradientElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGRadialGradientElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGRadialGradientElementConstructor, DOMObject>(exec, &JSSVGRadialGradientElementConstructorTable, this, propertyName, slot);
}

bool JSSVGRadialGradientElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGRadialGradientElementConstructor, DOMObject>(exec, &JSSVGRadialGradientElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGRadialGradientElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGRadialGradientElementPrototypeTable = { 1, 0, JSSVGRadialGradientElementPrototypeTableValues, 0 };
const ClassInfo JSSVGRadialGradientElementPrototype::s_info = { "SVGRadialGradientElementPrototype", 0, &JSSVGRadialGradientElementPrototypeTable, 0 };

JSObject* JSSVGRadialGradientElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGRadialGradientElement>(exec, globalObject);
}

const ClassInfo JSSVGRadialGradientElement::s_info = { "SVGRadialGradientElement", &JSSVGGradientElement::s_info, &JSSVGRadialGradientElementTable, 0 };

JSSVGRadialGradientElement::JSSVGRadialGradientElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGRadialGradientElement> impl)
    : JSSVGGradientElement(structure, globalObject, impl)
{
}

JSObject* JSSVGRadialGradientElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGRadialGradientElementPrototype(globalObject, JSSVGRadialGradientElementPrototype::createStructure(JSSVGGradientElementPrototype::self(exec, globalObject)));
}

bool JSSVGRadialGradientElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGRadialGradientElement, Base>(exec, &JSSVGRadialGradientElementTable, this, propertyName, slot);
}

bool JSSVGRadialGradientElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGRadialGradientElement, Base>(exec, &JSSVGRadialGradientElementTable, this, propertyName, descriptor);
}

JSValue jsSVGRadialGradientElementCx(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGRadialGradientElement* castedThis = static_cast<JSSVGRadialGradientElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGRadialGradientElement* imp = static_cast<SVGRadialGradientElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->cxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGRadialGradientElementCy(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGRadialGradientElement* castedThis = static_cast<JSSVGRadialGradientElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGRadialGradientElement* imp = static_cast<SVGRadialGradientElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->cyAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGRadialGradientElementR(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGRadialGradientElement* castedThis = static_cast<JSSVGRadialGradientElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGRadialGradientElement* imp = static_cast<SVGRadialGradientElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->rAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGRadialGradientElementFx(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGRadialGradientElement* castedThis = static_cast<JSSVGRadialGradientElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGRadialGradientElement* imp = static_cast<SVGRadialGradientElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->fxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGRadialGradientElementFy(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGRadialGradientElement* castedThis = static_cast<JSSVGRadialGradientElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGRadialGradientElement* imp = static_cast<SVGRadialGradientElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->fyAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGRadialGradientElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGRadialGradientElement* domObject = static_cast<JSSVGRadialGradientElement*>(asObject(slotBase));
    return JSSVGRadialGradientElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGRadialGradientElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGRadialGradientElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
