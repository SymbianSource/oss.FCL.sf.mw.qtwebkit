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

#if ENABLE(DEVICE_ORIENTATION)

#include "JSDeviceOrientationEvent.h"

#include "DeviceOrientationEvent.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSDeviceOrientationEvent);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDeviceOrientationEventTableValues[5] =
{
    { "alpha", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDeviceOrientationEventAlpha), (intptr_t)0 THUNK_GENERATOR(0) },
    { "beta", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDeviceOrientationEventBeta), (intptr_t)0 THUNK_GENERATOR(0) },
    { "gamma", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDeviceOrientationEventGamma), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDeviceOrientationEventConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDeviceOrientationEventTable = { 9, 7, JSDeviceOrientationEventTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDeviceOrientationEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDeviceOrientationEventConstructorTable = { 1, 0, JSDeviceOrientationEventConstructorTableValues, 0 };
class JSDeviceOrientationEventConstructor : public DOMConstructorObject {
public:
    JSDeviceOrientationEventConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSDeviceOrientationEventConstructor::s_info = { "DeviceOrientationEventConstructor", 0, &JSDeviceOrientationEventConstructorTable, 0 };

JSDeviceOrientationEventConstructor::JSDeviceOrientationEventConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSDeviceOrientationEventConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSDeviceOrientationEventPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSDeviceOrientationEventConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDeviceOrientationEventConstructor, DOMObject>(exec, &JSDeviceOrientationEventConstructorTable, this, propertyName, slot);
}

bool JSDeviceOrientationEventConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDeviceOrientationEventConstructor, DOMObject>(exec, &JSDeviceOrientationEventConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDeviceOrientationEventPrototypeTableValues[2] =
{
    { "initDeviceOrientationEvent", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsDeviceOrientationEventPrototypeFunctionInitDeviceOrientationEvent), (intptr_t)6 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDeviceOrientationEventPrototypeTable = { 2, 1, JSDeviceOrientationEventPrototypeTableValues, 0 };
const ClassInfo JSDeviceOrientationEventPrototype::s_info = { "DeviceOrientationEventPrototype", 0, &JSDeviceOrientationEventPrototypeTable, 0 };

JSObject* JSDeviceOrientationEventPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDeviceOrientationEvent>(exec, globalObject);
}

bool JSDeviceOrientationEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSDeviceOrientationEventPrototypeTable, this, propertyName, slot);
}

bool JSDeviceOrientationEventPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSDeviceOrientationEventPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSDeviceOrientationEvent::s_info = { "DeviceOrientationEvent", &JSEvent::s_info, &JSDeviceOrientationEventTable, 0 };

JSDeviceOrientationEvent::JSDeviceOrientationEvent(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<DeviceOrientationEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
}

JSObject* JSDeviceOrientationEvent::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSDeviceOrientationEventPrototype(globalObject, JSDeviceOrientationEventPrototype::createStructure(JSEventPrototype::self(exec, globalObject)));
}

bool JSDeviceOrientationEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDeviceOrientationEvent, Base>(exec, &JSDeviceOrientationEventTable, this, propertyName, slot);
}

bool JSDeviceOrientationEvent::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDeviceOrientationEvent, Base>(exec, &JSDeviceOrientationEventTable, this, propertyName, descriptor);
}

JSValue jsDeviceOrientationEventAlpha(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDeviceOrientationEvent* castedThis = static_cast<JSDeviceOrientationEvent*>(asObject(slotBase));
    return castedThis->alpha(exec);
}

JSValue jsDeviceOrientationEventBeta(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDeviceOrientationEvent* castedThis = static_cast<JSDeviceOrientationEvent*>(asObject(slotBase));
    return castedThis->beta(exec);
}

JSValue jsDeviceOrientationEventGamma(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDeviceOrientationEvent* castedThis = static_cast<JSDeviceOrientationEvent*>(asObject(slotBase));
    return castedThis->gamma(exec);
}

JSValue jsDeviceOrientationEventConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDeviceOrientationEvent* domObject = static_cast<JSDeviceOrientationEvent*>(asObject(slotBase));
    return JSDeviceOrientationEvent::getConstructor(exec, domObject->globalObject());
}
JSValue JSDeviceOrientationEvent::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDeviceOrientationEventConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDeviceOrientationEventPrototypeFunctionInitDeviceOrientationEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDeviceOrientationEvent::s_info))
        return throwVMTypeError(exec);
    JSDeviceOrientationEvent* castedThis = static_cast<JSDeviceOrientationEvent*>(asObject(thisValue));
    return JSValue::encode(castedThis->initDeviceOrientationEvent(exec));
}


}

#endif // ENABLE(DEVICE_ORIENTATION)
