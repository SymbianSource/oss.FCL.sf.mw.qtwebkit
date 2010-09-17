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

#if ENABLE(WORKERS)

#include "JSWorkerContext.h"

#include "Database.h"
#include "DatabaseSync.h"
#include "Event.h"
#include "EventListener.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "JSEventSource.h"
#include "JSMessageChannel.h"
#include "JSMessageEvent.h"
#include "JSNotificationCenter.h"
#include "JSWebSocket.h"
#include "JSWorkerContext.h"
#include "JSWorkerContextErrorHandler.h"
#include "JSWorkerLocation.h"
#include "JSWorkerNavigator.h"
#include "JSXMLHttpRequest.h"
#include "NotificationCenter.h"
#include "RegisteredEventListener.h"
#include "WorkerContext.h"
#include "WorkerLocation.h"
#include "WorkerNavigator.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWorkerContext);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWorkerContextTableValues[12] =
{
    { "self", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextSelf), (intptr_t)setJSWorkerContextSelf THUNK_GENERATOR(0) },
    { "location", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextLocation), (intptr_t)setJSWorkerContextLocation THUNK_GENERATOR(0) },
    { "onerror", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextOnerror), (intptr_t)setJSWorkerContextOnerror THUNK_GENERATOR(0) },
    { "navigator", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextNavigator), (intptr_t)setJSWorkerContextNavigator THUNK_GENERATOR(0) },
    { "webkitNotifications", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextWebkitNotifications), (intptr_t)0 THUNK_GENERATOR(0) },
    { "MessageEvent", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextMessageEventConstructor), (intptr_t)setJSWorkerContextMessageEventConstructor THUNK_GENERATOR(0) },
    { "WorkerLocation", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextWorkerLocationConstructor), (intptr_t)setJSWorkerContextWorkerLocationConstructor THUNK_GENERATOR(0) },
    { "MessageChannel", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextMessageChannelConstructor), (intptr_t)setJSWorkerContextMessageChannelConstructor THUNK_GENERATOR(0) },
    { "EventSource", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextEventSourceConstructor), (intptr_t)setJSWorkerContextEventSourceConstructor THUNK_GENERATOR(0) },
    { "XMLHttpRequest", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextXMLHttpRequestConstructor), (intptr_t)setJSWorkerContextXMLHttpRequestConstructor THUNK_GENERATOR(0) },
    { "WebSocket", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWorkerContextWebSocketConstructor), (intptr_t)setJSWorkerContextWebSocketConstructor THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWorkerContextTable = { 35, 31, JSWorkerContextTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWorkerContextPrototypeTableValues[12] =
{
    { "close", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionClose), (intptr_t)0 THUNK_GENERATOR(0) },
    { "importScripts", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionImportScripts), (intptr_t)0 THUNK_GENERATOR(0) },
    { "openDatabase", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionOpenDatabase), (intptr_t)5 THUNK_GENERATOR(0) },
    { "openDatabaseSync", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionOpenDatabaseSync), (intptr_t)5 THUNK_GENERATOR(0) },
    { "setTimeout", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionSetTimeout), (intptr_t)2 THUNK_GENERATOR(0) },
    { "clearTimeout", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionClearTimeout), (intptr_t)1 THUNK_GENERATOR(0) },
    { "setInterval", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionSetInterval), (intptr_t)2 THUNK_GENERATOR(0) },
    { "clearInterval", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionClearInterval), (intptr_t)1 THUNK_GENERATOR(0) },
    { "addEventListener", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionAddEventListener), (intptr_t)3 THUNK_GENERATOR(0) },
    { "removeEventListener", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionRemoveEventListener), (intptr_t)3 THUNK_GENERATOR(0) },
    { "dispatchEvent", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsWorkerContextPrototypeFunctionDispatchEvent), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWorkerContextPrototypeTable = { 35, 31, JSWorkerContextPrototypeTableValues, 0 };
static const HashTable* getJSWorkerContextPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSWorkerContextPrototypeTable);
}
const ClassInfo JSWorkerContextPrototype::s_info = { "WorkerContextPrototype", 0, 0, getJSWorkerContextPrototypeTable };

void* JSWorkerContextPrototype::operator new(size_t size, JSGlobalData* globalData)
{
    return globalData->heap.allocate(size);
}

bool JSWorkerContextPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, getJSWorkerContextPrototypeTable(exec), this, propertyName, slot);
}

bool JSWorkerContextPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, getJSWorkerContextPrototypeTable(exec), this, propertyName, descriptor);
}

static const HashTable* getJSWorkerContextTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->globalData(), &JSWorkerContextTable);
}
const ClassInfo JSWorkerContext::s_info = { "WorkerContext", &JSWorkerContextBase::s_info, 0, getJSWorkerContextTable };

JSWorkerContext::JSWorkerContext(NonNullPassRefPtr<Structure> structure, PassRefPtr<WorkerContext> impl)
    : JSWorkerContextBase(structure, impl)
{
}

JSWorkerContext::~JSWorkerContext()
{
    impl()->invalidateJSEventListeners(this);
}

bool JSWorkerContext::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    if (getOwnPropertySlotDelegate(exec, propertyName, slot))
        return true;
    return getStaticValueSlot<JSWorkerContext, Base>(exec, getJSWorkerContextTable(exec), this, propertyName, slot);
}

bool JSWorkerContext::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    if (getOwnPropertyDescriptorDelegate(exec, propertyName, descriptor))
        return true;
    return getStaticValueDescriptor<JSWorkerContext, Base>(exec, getJSWorkerContextTable(exec), this, propertyName, descriptor);
}

JSValue jsWorkerContextSelf(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->self()));
    return result;
}

JSValue jsWorkerContextLocation(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->location()));
    return result;
}

JSValue jsWorkerContextOnerror(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    if (EventListener* listener = imp->onerror()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(imp))
                return jsFunction;
        }
    }
    return jsNull();
}

JSValue jsWorkerContextNavigator(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->navigator()));
    return result;
}

JSValue jsWorkerContextWebkitNotifications(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->webkitNotifications()));
    return result;
}

JSValue jsWorkerContextMessageEventConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return JSMessageEvent::getConstructor(exec, castedThis);
}

JSValue jsWorkerContextWorkerLocationConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return JSWorkerLocation::getConstructor(exec, castedThis);
}

JSValue jsWorkerContextMessageChannelConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return castedThis->messageChannel(exec);
}

JSValue jsWorkerContextEventSourceConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return castedThis->eventSource(exec);
}

JSValue jsWorkerContextXMLHttpRequestConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return castedThis->xmlHttpRequest(exec);
}

JSValue jsWorkerContextWebSocketConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSWorkerContext* castedThis = static_cast<JSWorkerContext*>(asObject(slotBase));
    return castedThis->webSocket(exec);
}

void JSWorkerContext::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSWorkerContext, Base>(exec, propertyName, value, getJSWorkerContextTable(exec), this, slot);
}

void setJSWorkerContextSelf(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in object
    static_cast<JSWorkerContext*>(thisObject)->putDirect(Identifier(exec, "self"), value);
}

void setJSWorkerContextLocation(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in object
    static_cast<JSWorkerContext*>(thisObject)->putDirect(Identifier(exec, "location"), value);
}

void setJSWorkerContextOnerror(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(static_cast<JSWorkerContext*>(thisObject)->impl());
    imp->setOnerror(createJSWorkerContextErrorHandler(exec, value, thisObject));
}

void setJSWorkerContextNavigator(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in object
    static_cast<JSWorkerContext*>(thisObject)->putDirect(Identifier(exec, "navigator"), value);
}

void setJSWorkerContextMessageEventConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(Identifier(exec, "MessageEvent"), value);
}

void setJSWorkerContextWorkerLocationConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(Identifier(exec, "WorkerLocation"), value);
}

void setJSWorkerContextMessageChannelConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(Identifier(exec, "MessageChannel"), value);
}

void setJSWorkerContextEventSourceConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(Identifier(exec, "EventSource"), value);
}

void setJSWorkerContextXMLHttpRequestConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(Identifier(exec, "XMLHttpRequest"), value);
}

void setJSWorkerContextWebSocketConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    // Shadowing a built-in constructor
    static_cast<JSWorkerContext*>(thisObject)->putDirect(Identifier(exec, "WebSocket"), value);
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionClose(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());

    imp->close();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionImportScripts(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    return JSValue::encode(castedThis->importScripts(exec));
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionOpenDatabase(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    return JSValue::encode(castedThis->openDatabase(exec));
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionOpenDatabaseSync(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    return JSValue::encode(castedThis->openDatabaseSync(exec));
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionSetTimeout(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    return JSValue::encode(castedThis->setTimeout(exec));
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionClearTimeout(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    int handle = exec->argument(0).toInt32(exec);

    imp->clearTimeout(handle);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionSetInterval(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    return JSValue::encode(castedThis->setInterval(exec));
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionClearInterval(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    int handle = exec->argument(0).toInt32(exec);

    imp->clearInterval(handle);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionAddEventListener(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    imp->addEventListener(ustringToAtomicString(exec->argument(0).toString(exec)), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    imp->removeEventListener(ustringToAtomicString(exec->argument(0).toString(exec)), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWorkerContextPrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSWorkerContext* castedThis = toJSWorkerContext(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    WorkerContext* imp = static_cast<WorkerContext*>(castedThis->impl());
    ExceptionCode ec = 0;
    Event* evt = toEvent(exec->argument(0));


    JSC::JSValue result = jsBoolean(imp->dispatchEvent(evt, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


}

#endif // ENABLE(WORKERS)
