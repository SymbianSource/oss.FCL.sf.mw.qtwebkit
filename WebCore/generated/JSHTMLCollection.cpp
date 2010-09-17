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
#include "JSHTMLCollection.h"

#include "AtomicString.h"
#include "HTMLCollection.h"
#include "JSNode.h"
#include "Node.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLCollection);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLCollectionTableValues[3] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLCollectionLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLCollectionConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLCollectionTable = { 5, 3, JSHTMLCollectionTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLCollectionConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLCollectionConstructorTable = { 1, 0, JSHTMLCollectionConstructorTableValues, 0 };
class JSHTMLCollectionConstructor : public DOMConstructorObject {
public:
    JSHTMLCollectionConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLCollectionConstructor::s_info = { "HTMLCollectionConstructor", 0, &JSHTMLCollectionConstructorTable, 0 };

JSHTMLCollectionConstructor::JSHTMLCollectionConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSHTMLCollectionConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSHTMLCollectionPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLCollectionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLCollectionConstructor, DOMObject>(exec, &JSHTMLCollectionConstructorTable, this, propertyName, slot);
}

bool JSHTMLCollectionConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLCollectionConstructor, DOMObject>(exec, &JSHTMLCollectionConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLCollectionPrototypeTableValues[3] =
{
    { "item", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLCollectionPrototypeFunctionItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { "namedItem", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsHTMLCollectionPrototypeFunctionNamedItem), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLCollectionPrototypeTable = { 5, 3, JSHTMLCollectionPrototypeTableValues, 0 };
const ClassInfo JSHTMLCollectionPrototype::s_info = { "HTMLCollectionPrototype", 0, &JSHTMLCollectionPrototypeTable, 0 };

JSObject* JSHTMLCollectionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLCollection>(exec, globalObject);
}

bool JSHTMLCollectionPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLCollectionPrototypeTable, this, propertyName, slot);
}

bool JSHTMLCollectionPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSHTMLCollectionPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSHTMLCollection::s_info = { "HTMLCollection", 0, &JSHTMLCollectionTable, 0 };

JSHTMLCollection::JSHTMLCollection(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLCollection> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSHTMLCollection::~JSHTMLCollection()
{
    forgetDOMObject(this, impl());
}

JSObject* JSHTMLCollection::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLCollectionPrototype(globalObject, JSHTMLCollectionPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSHTMLCollection::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    JSValue proto = prototype();
    if (proto.isObject() && static_cast<JSObject*>(asObject(proto))->hasProperty(exec, propertyName))
        return false;

    const HashEntry* entry = JSHTMLCollectionTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<HTMLCollection*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<HTMLCollection*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    return getStaticValueSlot<JSHTMLCollection, Base>(exec, &JSHTMLCollectionTable, this, propertyName, slot);
}

bool JSHTMLCollection::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    JSValue proto = prototype();
    if (proto.isObject() && static_cast<JSObject*>(asObject(proto))->hasProperty(exec, propertyName))
        return false;

    const HashEntry* entry = JSHTMLCollectionTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(this, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<HTMLCollection*>(impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(this, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<HTMLCollection*>(impl()), propertyName)) {
        PropertySlot slot;
        slot.setCustom(this, nameGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), ReadOnly | DontDelete | DontEnum);
        return true;
    }
    return getStaticValueDescriptor<JSHTMLCollection, Base>(exec, &JSHTMLCollectionTable, this, propertyName, descriptor);
}

bool JSHTMLCollection::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<HTMLCollection*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValue jsHTMLCollectionLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLCollection* castedThis = static_cast<JSHTMLCollection*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLCollection* imp = static_cast<HTMLCollection*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->length());
    return result;
}

JSValue jsHTMLCollectionConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLCollection* domObject = static_cast<JSHTMLCollection*>(asObject(slotBase));
    return JSHTMLCollection::getConstructor(exec, domObject->globalObject());
}
void JSHTMLCollection::getOwnPropertyNames(ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    for (unsigned i = 0; i < static_cast<HTMLCollection*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(exec, propertyNames, mode);
}

JSValue JSHTMLCollection::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLCollectionConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLCollectionPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLCollection::s_info))
        return throwVMTypeError(exec);
    JSHTMLCollection* castedThis = static_cast<JSHTMLCollection*>(asObject(thisValue));
    return JSValue::encode(castedThis->item(exec));
}

EncodedJSValue JSC_HOST_CALL jsHTMLCollectionPrototypeFunctionNamedItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSHTMLCollection::s_info))
        return throwVMTypeError(exec);
    JSHTMLCollection* castedThis = static_cast<JSHTMLCollection*>(asObject(thisValue));
    return JSValue::encode(castedThis->namedItem(exec));
}


JSValue JSHTMLCollection::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSHTMLCollection* thisObj = static_cast<JSHTMLCollection*>(asObject(slotBase));
    return toJS(exec, thisObj->globalObject(), static_cast<HTMLCollection*>(thisObj->impl())->item(index));
}
HTMLCollection* toHTMLCollection(JSC::JSValue value)
{
    return value.inherits(&JSHTMLCollection::s_info) ? static_cast<JSHTMLCollection*>(asObject(value))->impl() : 0;
}

}
