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

#if ENABLE(INDEXED_DATABASE)

#include "JSIDBDatabaseError.h"

#include "IDBDatabaseError.h"
#include "KURL.h"
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSIDBDatabaseError);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBDatabaseErrorTableValues[4] =
{
    { "code", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseErrorCode), (intptr_t)setJSIDBDatabaseErrorCode THUNK_GENERATOR(0) },
    { "message", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseErrorMessage), (intptr_t)setJSIDBDatabaseErrorMessage THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBDatabaseErrorConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBDatabaseErrorTable = { 9, 7, JSIDBDatabaseErrorTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBDatabaseErrorConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBDatabaseErrorConstructorTable = { 1, 0, JSIDBDatabaseErrorConstructorTableValues, 0 };
class JSIDBDatabaseErrorConstructor : public DOMConstructorObject {
public:
    JSIDBDatabaseErrorConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSIDBDatabaseErrorConstructor::s_info = { "IDBDatabaseErrorConstructor", 0, &JSIDBDatabaseErrorConstructorTable, 0 };

JSIDBDatabaseErrorConstructor::JSIDBDatabaseErrorConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSIDBDatabaseErrorConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSIDBDatabaseErrorPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSIDBDatabaseErrorConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSIDBDatabaseErrorConstructor, DOMObject>(exec, &JSIDBDatabaseErrorConstructorTable, this, propertyName, slot);
}

bool JSIDBDatabaseErrorConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSIDBDatabaseErrorConstructor, DOMObject>(exec, &JSIDBDatabaseErrorConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBDatabaseErrorPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBDatabaseErrorPrototypeTable = { 1, 0, JSIDBDatabaseErrorPrototypeTableValues, 0 };
const ClassInfo JSIDBDatabaseErrorPrototype::s_info = { "IDBDatabaseErrorPrototype", 0, &JSIDBDatabaseErrorPrototypeTable, 0 };

JSObject* JSIDBDatabaseErrorPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSIDBDatabaseError>(exec, globalObject);
}

const ClassInfo JSIDBDatabaseError::s_info = { "IDBDatabaseError", 0, &JSIDBDatabaseErrorTable, 0 };

JSIDBDatabaseError::JSIDBDatabaseError(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<IDBDatabaseError> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSIDBDatabaseError::~JSIDBDatabaseError()
{
    forgetDOMObject(this, impl());
}

JSObject* JSIDBDatabaseError::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSIDBDatabaseErrorPrototype(globalObject, JSIDBDatabaseErrorPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSIDBDatabaseError::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSIDBDatabaseError, Base>(exec, &JSIDBDatabaseErrorTable, this, propertyName, slot);
}

bool JSIDBDatabaseError::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSIDBDatabaseError, Base>(exec, &JSIDBDatabaseErrorTable, this, propertyName, descriptor);
}

JSValue jsIDBDatabaseErrorCode(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBDatabaseError* castedThis = static_cast<JSIDBDatabaseError*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBDatabaseError* imp = static_cast<IDBDatabaseError*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->code());
    return result;
}

JSValue jsIDBDatabaseErrorMessage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBDatabaseError* castedThis = static_cast<JSIDBDatabaseError*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBDatabaseError* imp = static_cast<IDBDatabaseError*>(castedThis->impl());
    JSValue result = jsString(exec, imp->message());
    return result;
}

JSValue jsIDBDatabaseErrorConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBDatabaseError* domObject = static_cast<JSIDBDatabaseError*>(asObject(slotBase));
    return JSIDBDatabaseError::getConstructor(exec, domObject->globalObject());
}
void JSIDBDatabaseError::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSIDBDatabaseError, Base>(exec, propertyName, value, &JSIDBDatabaseErrorTable, this, slot);
}

void setJSIDBDatabaseErrorCode(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSIDBDatabaseError* castedThis = static_cast<JSIDBDatabaseError*>(thisObject);
    IDBDatabaseError* imp = static_cast<IDBDatabaseError*>(castedThis->impl());
    imp->setCode(value.toInt32(exec));
}

void setJSIDBDatabaseErrorMessage(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSIDBDatabaseError* castedThis = static_cast<JSIDBDatabaseError*>(thisObject);
    IDBDatabaseError* imp = static_cast<IDBDatabaseError*>(castedThis->impl());
    imp->setMessage(ustringToString(value.toString(exec)));
}

JSValue JSIDBDatabaseError::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSIDBDatabaseErrorConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, IDBDatabaseError* object)
{
    return getDOMObjectWrapper<JSIDBDatabaseError>(exec, globalObject, object);
}
IDBDatabaseError* toIDBDatabaseError(JSC::JSValue value)
{
    return value.inherits(&JSIDBDatabaseError::s_info) ? static_cast<JSIDBDatabaseError*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(INDEXED_DATABASE)
