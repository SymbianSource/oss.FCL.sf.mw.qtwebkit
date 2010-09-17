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

#include "JSIDBObjectStoreRequest.h"

#include "DOMStringList.h"
#include "IDBBindingUtilities.h"
#include "IDBIndexRequest.h"
#include "IDBKey.h"
#include "IDBObjectStoreRequest.h"
#include "IDBRequest.h"
#include "JSDOMStringList.h"
#include "JSIDBIndexRequest.h"
#include "JSIDBRequest.h"
#include "KURL.h"
#include "SerializedScriptValue.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSIDBObjectStoreRequest);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBObjectStoreRequestTableValues[5] =
{
    { "name", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBObjectStoreRequestName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "keyPath", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBObjectStoreRequestKeyPath), (intptr_t)0 THUNK_GENERATOR(0) },
    { "indexNames", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBObjectStoreRequestIndexNames), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsIDBObjectStoreRequestConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBObjectStoreRequestTable = { 10, 7, JSIDBObjectStoreRequestTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBObjectStoreRequestConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBObjectStoreRequestConstructorTable = { 1, 0, JSIDBObjectStoreRequestConstructorTableValues, 0 };
class JSIDBObjectStoreRequestConstructor : public DOMConstructorObject {
public:
    JSIDBObjectStoreRequestConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSIDBObjectStoreRequestConstructor::s_info = { "IDBObjectStoreRequestConstructor", 0, &JSIDBObjectStoreRequestConstructorTable, 0 };

JSIDBObjectStoreRequestConstructor::JSIDBObjectStoreRequestConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSIDBObjectStoreRequestConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSIDBObjectStoreRequestPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSIDBObjectStoreRequestConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSIDBObjectStoreRequestConstructor, DOMObject>(exec, &JSIDBObjectStoreRequestConstructorTable, this, propertyName, slot);
}

bool JSIDBObjectStoreRequestConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSIDBObjectStoreRequestConstructor, DOMObject>(exec, &JSIDBObjectStoreRequestConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBObjectStoreRequestPrototypeTableValues[8] =
{
    { "get", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStoreRequestPrototypeFunctionGet), (intptr_t)1 THUNK_GENERATOR(0) },
    { "add", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStoreRequestPrototypeFunctionAdd), (intptr_t)2 THUNK_GENERATOR(0) },
    { "put", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStoreRequestPrototypeFunctionPut), (intptr_t)2 THUNK_GENERATOR(0) },
    { "remove", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStoreRequestPrototypeFunctionRemove), (intptr_t)1 THUNK_GENERATOR(0) },
    { "createIndex", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStoreRequestPrototypeFunctionCreateIndex), (intptr_t)3 THUNK_GENERATOR(0) },
    { "index", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStoreRequestPrototypeFunctionIndex), (intptr_t)1 THUNK_GENERATOR(0) },
    { "removeIndex", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsIDBObjectStoreRequestPrototypeFunctionRemoveIndex), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBObjectStoreRequestPrototypeTable = { 16, 15, JSIDBObjectStoreRequestPrototypeTableValues, 0 };
const ClassInfo JSIDBObjectStoreRequestPrototype::s_info = { "IDBObjectStoreRequestPrototype", 0, &JSIDBObjectStoreRequestPrototypeTable, 0 };

JSObject* JSIDBObjectStoreRequestPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSIDBObjectStoreRequest>(exec, globalObject);
}

bool JSIDBObjectStoreRequestPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSIDBObjectStoreRequestPrototypeTable, this, propertyName, slot);
}

bool JSIDBObjectStoreRequestPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSIDBObjectStoreRequestPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSIDBObjectStoreRequest::s_info = { "IDBObjectStoreRequest", 0, &JSIDBObjectStoreRequestTable, 0 };

JSIDBObjectStoreRequest::JSIDBObjectStoreRequest(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<IDBObjectStoreRequest> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSIDBObjectStoreRequest::~JSIDBObjectStoreRequest()
{
    forgetDOMObject(this, impl());
}

JSObject* JSIDBObjectStoreRequest::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSIDBObjectStoreRequestPrototype(globalObject, JSIDBObjectStoreRequestPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSIDBObjectStoreRequest::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSIDBObjectStoreRequest, Base>(exec, &JSIDBObjectStoreRequestTable, this, propertyName, slot);
}

bool JSIDBObjectStoreRequest::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSIDBObjectStoreRequest, Base>(exec, &JSIDBObjectStoreRequestTable, this, propertyName, descriptor);
}

JSValue jsIDBObjectStoreRequestName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBObjectStoreRequest* castedThis = static_cast<JSIDBObjectStoreRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBObjectStoreRequest* imp = static_cast<IDBObjectStoreRequest*>(castedThis->impl());
    JSValue result = jsString(exec, imp->name());
    return result;
}

JSValue jsIDBObjectStoreRequestKeyPath(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBObjectStoreRequest* castedThis = static_cast<JSIDBObjectStoreRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBObjectStoreRequest* imp = static_cast<IDBObjectStoreRequest*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, imp->keyPath());
    return result;
}

JSValue jsIDBObjectStoreRequestIndexNames(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBObjectStoreRequest* castedThis = static_cast<JSIDBObjectStoreRequest*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    IDBObjectStoreRequest* imp = static_cast<IDBObjectStoreRequest*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->indexNames()));
    return result;
}

JSValue jsIDBObjectStoreRequestConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSIDBObjectStoreRequest* domObject = static_cast<JSIDBObjectStoreRequest*>(asObject(slotBase));
    return JSIDBObjectStoreRequest::getConstructor(exec, domObject->globalObject());
}
JSValue JSIDBObjectStoreRequest::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSIDBObjectStoreRequestConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStoreRequestPrototypeFunctionGet(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBObjectStoreRequest::s_info))
        return throwVMTypeError(exec);
    JSIDBObjectStoreRequest* castedThis = static_cast<JSIDBObjectStoreRequest*>(asObject(thisValue));
    IDBObjectStoreRequest* imp = static_cast<IDBObjectStoreRequest*>(castedThis->impl());
    ScriptExecutionContext* scriptContext = static_cast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    RefPtr<IDBKey> key = createIDBKeyFromValue(exec, exec->argument(0));


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->get(scriptContext, key)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStoreRequestPrototypeFunctionAdd(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBObjectStoreRequest::s_info))
        return throwVMTypeError(exec);
    JSIDBObjectStoreRequest* castedThis = static_cast<JSIDBObjectStoreRequest*>(asObject(thisValue));
    IDBObjectStoreRequest* imp = static_cast<IDBObjectStoreRequest*>(castedThis->impl());
    ScriptExecutionContext* scriptContext = static_cast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    RefPtr<SerializedScriptValue> value = SerializedScriptValue::create(exec, exec->argument(0));

    int argsCount = exec->argumentCount();
    if (argsCount < 2) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->add(scriptContext, value)));
        return JSValue::encode(result);
    }

    RefPtr<IDBKey> key = createIDBKeyFromValue(exec, exec->argument(1));


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->add(scriptContext, value, key)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStoreRequestPrototypeFunctionPut(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBObjectStoreRequest::s_info))
        return throwVMTypeError(exec);
    JSIDBObjectStoreRequest* castedThis = static_cast<JSIDBObjectStoreRequest*>(asObject(thisValue));
    IDBObjectStoreRequest* imp = static_cast<IDBObjectStoreRequest*>(castedThis->impl());
    ScriptExecutionContext* scriptContext = static_cast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    RefPtr<SerializedScriptValue> value = SerializedScriptValue::create(exec, exec->argument(0));

    int argsCount = exec->argumentCount();
    if (argsCount < 2) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->put(scriptContext, value)));
        return JSValue::encode(result);
    }

    RefPtr<IDBKey> key = createIDBKeyFromValue(exec, exec->argument(1));


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->put(scriptContext, value, key)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStoreRequestPrototypeFunctionRemove(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBObjectStoreRequest::s_info))
        return throwVMTypeError(exec);
    JSIDBObjectStoreRequest* castedThis = static_cast<JSIDBObjectStoreRequest*>(asObject(thisValue));
    IDBObjectStoreRequest* imp = static_cast<IDBObjectStoreRequest*>(castedThis->impl());
    ScriptExecutionContext* scriptContext = static_cast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    RefPtr<IDBKey> key = createIDBKeyFromValue(exec, exec->argument(0));


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->remove(scriptContext, key)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStoreRequestPrototypeFunctionCreateIndex(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBObjectStoreRequest::s_info))
        return throwVMTypeError(exec);
    JSIDBObjectStoreRequest* castedThis = static_cast<JSIDBObjectStoreRequest*>(asObject(thisValue));
    IDBObjectStoreRequest* imp = static_cast<IDBObjectStoreRequest*>(castedThis->impl());
    ScriptExecutionContext* scriptContext = static_cast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    const String& name = ustringToString(exec->argument(0).toString(exec));
    const String& keyPath = valueToStringWithNullCheck(exec, exec->argument(1));

    int argsCount = exec->argumentCount();
    if (argsCount < 3) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->createIndex(scriptContext, name, keyPath)));
        return JSValue::encode(result);
    }

    bool unique = exec->argument(2).toBoolean(exec);


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->createIndex(scriptContext, name, keyPath, unique)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStoreRequestPrototypeFunctionIndex(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBObjectStoreRequest::s_info))
        return throwVMTypeError(exec);
    JSIDBObjectStoreRequest* castedThis = static_cast<JSIDBObjectStoreRequest*>(asObject(thisValue));
    IDBObjectStoreRequest* imp = static_cast<IDBObjectStoreRequest*>(castedThis->impl());
    const String& name = ustringToString(exec->argument(0).toString(exec));


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->index(name)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsIDBObjectStoreRequestPrototypeFunctionRemoveIndex(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSIDBObjectStoreRequest::s_info))
        return throwVMTypeError(exec);
    JSIDBObjectStoreRequest* castedThis = static_cast<JSIDBObjectStoreRequest*>(asObject(thisValue));
    IDBObjectStoreRequest* imp = static_cast<IDBObjectStoreRequest*>(castedThis->impl());
    ScriptExecutionContext* scriptContext = static_cast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    const String& name = ustringToString(exec->argument(0).toString(exec));


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->removeIndex(scriptContext, name)));
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, IDBObjectStoreRequest* object)
{
    return getDOMObjectWrapper<JSIDBObjectStoreRequest>(exec, globalObject, object);
}
IDBObjectStoreRequest* toIDBObjectStoreRequest(JSC::JSValue value)
{
    return value.inherits(&JSIDBObjectStoreRequest::s_info) ? static_cast<JSIDBObjectStoreRequest*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(INDEXED_DATABASE)