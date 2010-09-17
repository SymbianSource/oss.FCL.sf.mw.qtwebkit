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

#include "JSSVGNumber.h"

#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGNumber);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGNumberTableValues[3] =
{
    { "value", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGNumberValue), (intptr_t)setJSSVGNumberValue THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGNumberConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGNumberTable = { 4, 3, JSSVGNumberTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGNumberConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGNumberConstructorTable = { 1, 0, JSSVGNumberConstructorTableValues, 0 };
class JSSVGNumberConstructor : public DOMConstructorObject {
public:
    JSSVGNumberConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGNumberConstructor::s_info = { "SVGNumberConstructor", 0, &JSSVGNumberConstructorTable, 0 };

JSSVGNumberConstructor::JSSVGNumberConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGNumberConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSSVGNumberPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGNumberConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGNumberConstructor, DOMObject>(exec, &JSSVGNumberConstructorTable, this, propertyName, slot);
}

bool JSSVGNumberConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGNumberConstructor, DOMObject>(exec, &JSSVGNumberConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGNumberPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGNumberPrototypeTable = { 1, 0, JSSVGNumberPrototypeTableValues, 0 };
const ClassInfo JSSVGNumberPrototype::s_info = { "SVGNumberPrototype", 0, &JSSVGNumberPrototypeTable, 0 };

JSObject* JSSVGNumberPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGNumber>(exec, globalObject);
}

const ClassInfo JSSVGNumber::s_info = { "SVGNumber", 0, &JSSVGNumberTable, 0 };

JSSVGNumber::JSSVGNumber(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<JSSVGPODTypeWrapper<float> > impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSSVGNumber::~JSSVGNumber()
{
    forgetDOMObject(this, impl());
    JSSVGContextCache::forgetWrapper(this);
}

JSObject* JSSVGNumber::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGNumberPrototype(globalObject, JSSVGNumberPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGNumber::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGNumber, Base>(exec, &JSSVGNumberTable, this, propertyName, slot);
}

bool JSSVGNumber::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGNumber, Base>(exec, &JSSVGNumberTable, this, propertyName, descriptor);
}

JSValue jsSVGNumberValue(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGNumber* castedThis = static_cast<JSSVGNumber*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    float imp(*castedThis->impl());
    JSValue result =  jsNumber(exec, imp);
    return result;
}

JSValue jsSVGNumberConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGNumber* domObject = static_cast<JSSVGNumber*>(asObject(slotBase));
    return JSSVGNumber::getConstructor(exec, domObject->globalObject());
}
void JSSVGNumber::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGNumber, Base>(exec, propertyName, value, &JSSVGNumberTable, this, slot);
}

void setJSSVGNumberValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGNumber* castedThis = static_cast<JSSVGNumber*>(thisObject);
    JSSVGPODTypeWrapper<float> * imp = static_cast<JSSVGPODTypeWrapper<float> *>(castedThis->impl());
    float podImp(*imp);
    podImp = value.toFloat(exec);
    imp->commitChange(podImp, castedThis);
}

JSValue JSSVGNumber::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGNumberConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, JSSVGPODTypeWrapper<float>* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGNumber, JSSVGPODTypeWrapper<float> >(exec, globalObject, object, context);
}
float toSVGNumber(JSC::JSValue value)
{
    return value.inherits(&JSSVGNumber::s_info) ? (float) *static_cast<JSSVGNumber*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)