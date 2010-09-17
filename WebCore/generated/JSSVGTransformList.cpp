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

#include "JSSVGTransformList.h"

#include "JSSVGMatrix.h"
#include "JSSVGPODListCustom.h"
#include "JSSVGTransform.h"
#include "SVGTransform.h"
#include "SVGTransformList.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGTransformList);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGTransformListTableValues[3] =
{
    { "numberOfItems", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformListNumberOfItems), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformListConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGTransformListTable = { 4, 3, JSSVGTransformListTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGTransformListConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGTransformListConstructorTable = { 1, 0, JSSVGTransformListConstructorTableValues, 0 };
class JSSVGTransformListConstructor : public DOMConstructorObject {
public:
    JSSVGTransformListConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGTransformListConstructor::s_info = { "SVGTransformListConstructor", 0, &JSSVGTransformListConstructorTable, 0 };

JSSVGTransformListConstructor::JSSVGTransformListConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGTransformListConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSSVGTransformListPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGTransformListConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTransformListConstructor, DOMObject>(exec, &JSSVGTransformListConstructorTable, this, propertyName, slot);
}

bool JSSVGTransformListConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGTransformListConstructor, DOMObject>(exec, &JSSVGTransformListConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGTransformListPrototypeTableValues[10] =
{
    { "clear", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformListPrototypeFunctionClear), (intptr_t)0 THUNK_GENERATOR(0) },
    { "initialize", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformListPrototypeFunctionInitialize), (intptr_t)1 THUNK_GENERATOR(0) },
    { "getItem", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformListPrototypeFunctionGetItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { "insertItemBefore", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformListPrototypeFunctionInsertItemBefore), (intptr_t)2 THUNK_GENERATOR(0) },
    { "replaceItem", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformListPrototypeFunctionReplaceItem), (intptr_t)2 THUNK_GENERATOR(0) },
    { "removeItem", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformListPrototypeFunctionRemoveItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { "appendItem", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformListPrototypeFunctionAppendItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { "createSVGTransformFromMatrix", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformListPrototypeFunctionCreateSVGTransformFromMatrix), (intptr_t)1 THUNK_GENERATOR(0) },
    { "consolidate", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformListPrototypeFunctionConsolidate), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGTransformListPrototypeTable = { 33, 31, JSSVGTransformListPrototypeTableValues, 0 };
const ClassInfo JSSVGTransformListPrototype::s_info = { "SVGTransformListPrototype", 0, &JSSVGTransformListPrototypeTable, 0 };

JSObject* JSSVGTransformListPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGTransformList>(exec, globalObject);
}

bool JSSVGTransformListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGTransformListPrototypeTable, this, propertyName, slot);
}

bool JSSVGTransformListPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGTransformListPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGTransformList::s_info = { "SVGTransformList", 0, &JSSVGTransformListTable, 0 };

JSSVGTransformList::JSSVGTransformList(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGTransformList> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSSVGTransformList::~JSSVGTransformList()
{
    forgetDOMObject(this, impl());
    JSSVGContextCache::forgetWrapper(this);
}

JSObject* JSSVGTransformList::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGTransformListPrototype(globalObject, JSSVGTransformListPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGTransformList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTransformList, Base>(exec, &JSSVGTransformListTable, this, propertyName, slot);
}

bool JSSVGTransformList::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGTransformList, Base>(exec, &JSSVGTransformListTable, this, propertyName, descriptor);
}

JSValue jsSVGTransformListNumberOfItems(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTransformList* castedThis = static_cast<JSSVGTransformList*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTransformList* imp = static_cast<SVGTransformList*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->numberOfItems());
    return result;
}

JSValue jsSVGTransformListConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTransformList* domObject = static_cast<JSSVGTransformList*>(asObject(slotBase));
    return JSSVGTransformList::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGTransformList::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGTransformListConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGTransformListPrototypeFunctionClear(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTransformList::s_info))
        return throwVMTypeError(exec);
    JSSVGTransformList* castedThis = static_cast<JSSVGTransformList*>(asObject(thisValue));
    return JSValue::encode(JSSVGPODListCustom::clear<JSSVGTransformList, SVGTransform>(castedThis, exec, toSVGTransform));
}

EncodedJSValue JSC_HOST_CALL jsSVGTransformListPrototypeFunctionInitialize(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTransformList::s_info))
        return throwVMTypeError(exec);
    JSSVGTransformList* castedThis = static_cast<JSSVGTransformList*>(asObject(thisValue));
    return JSValue::encode(JSSVGPODListCustom::initialize<JSSVGTransformList, SVGTransform>(castedThis, exec, toSVGTransform));
}

EncodedJSValue JSC_HOST_CALL jsSVGTransformListPrototypeFunctionGetItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTransformList::s_info))
        return throwVMTypeError(exec);
    JSSVGTransformList* castedThis = static_cast<JSSVGTransformList*>(asObject(thisValue));
    return JSValue::encode(JSSVGPODListCustom::getItem<JSSVGTransformList, SVGTransform>(castedThis, exec, toSVGTransform));
}

EncodedJSValue JSC_HOST_CALL jsSVGTransformListPrototypeFunctionInsertItemBefore(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTransformList::s_info))
        return throwVMTypeError(exec);
    JSSVGTransformList* castedThis = static_cast<JSSVGTransformList*>(asObject(thisValue));
    return JSValue::encode(JSSVGPODListCustom::insertItemBefore<JSSVGTransformList, SVGTransform>(castedThis, exec, toSVGTransform));
}

EncodedJSValue JSC_HOST_CALL jsSVGTransformListPrototypeFunctionReplaceItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTransformList::s_info))
        return throwVMTypeError(exec);
    JSSVGTransformList* castedThis = static_cast<JSSVGTransformList*>(asObject(thisValue));
    return JSValue::encode(JSSVGPODListCustom::replaceItem<JSSVGTransformList, SVGTransform>(castedThis, exec, toSVGTransform));
}

EncodedJSValue JSC_HOST_CALL jsSVGTransformListPrototypeFunctionRemoveItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTransformList::s_info))
        return throwVMTypeError(exec);
    JSSVGTransformList* castedThis = static_cast<JSSVGTransformList*>(asObject(thisValue));
    return JSValue::encode(JSSVGPODListCustom::removeItem<JSSVGTransformList, SVGTransform>(castedThis, exec, toSVGTransform));
}

EncodedJSValue JSC_HOST_CALL jsSVGTransformListPrototypeFunctionAppendItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTransformList::s_info))
        return throwVMTypeError(exec);
    JSSVGTransformList* castedThis = static_cast<JSSVGTransformList*>(asObject(thisValue));
    return JSValue::encode(JSSVGPODListCustom::appendItem<JSSVGTransformList, SVGTransform>(castedThis, exec, toSVGTransform));
}

EncodedJSValue JSC_HOST_CALL jsSVGTransformListPrototypeFunctionCreateSVGTransformFromMatrix(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTransformList::s_info))
        return throwVMTypeError(exec);
    JSSVGTransformList* castedThis = static_cast<JSSVGTransformList*>(asObject(thisValue));
    SVGTransformList* imp = static_cast<SVGTransformList*>(castedThis->impl());
    AffineTransform matrix = toSVGMatrix(exec->argument(0));


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), JSSVGStaticPODTypeWrapper<SVGTransform>::create(imp->createSVGTransformFromMatrix(matrix)).get(), 0 /* no context on purpose */);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGTransformListPrototypeFunctionConsolidate(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTransformList::s_info))
        return throwVMTypeError(exec);
    JSSVGTransformList* castedThis = static_cast<JSSVGTransformList*>(asObject(thisValue));
    SVGTransformList* imp = static_cast<SVGTransformList*>(castedThis->impl());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), JSSVGStaticPODTypeWrapper<SVGTransform>::create(imp->consolidate()).get(), 0 /* no context on purpose */);
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGTransformList* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGTransformList>(exec, globalObject, object, context);
}
SVGTransformList* toSVGTransformList(JSC::JSValue value)
{
    return value.inherits(&JSSVGTransformList::s_info) ? static_cast<JSSVGTransformList*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SVG)
