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

#if ENABLE(3D_CANVAS)

#include "JSArrayBufferView.h"

#include "ArrayBuffer.h"
#include "ArrayBufferView.h"
#include "JSArrayBuffer.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSArrayBufferView);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSArrayBufferViewTableValues[5] =
{
    { "buffer", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsArrayBufferViewBuffer), (intptr_t)0 THUNK_GENERATOR(0) },
    { "byteOffset", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsArrayBufferViewByteOffset), (intptr_t)0 THUNK_GENERATOR(0) },
    { "byteLength", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsArrayBufferViewByteLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsArrayBufferViewLength), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSArrayBufferViewTable = { 8, 7, JSArrayBufferViewTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSArrayBufferViewPrototypeTableValues[2] =
{
    { "slice", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsArrayBufferViewPrototypeFunctionSlice), (intptr_t)2 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSArrayBufferViewPrototypeTable = { 2, 1, JSArrayBufferViewPrototypeTableValues, 0 };
const ClassInfo JSArrayBufferViewPrototype::s_info = { "ArrayBufferViewPrototype", 0, &JSArrayBufferViewPrototypeTable, 0 };

JSObject* JSArrayBufferViewPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSArrayBufferView>(exec, globalObject);
}

bool JSArrayBufferViewPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSArrayBufferViewPrototypeTable, this, propertyName, slot);
}

bool JSArrayBufferViewPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSArrayBufferViewPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSArrayBufferView::s_info = { "ArrayBufferView", 0, &JSArrayBufferViewTable, 0 };

JSArrayBufferView::JSArrayBufferView(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<ArrayBufferView> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSArrayBufferView::~JSArrayBufferView()
{
    forgetDOMObject(this, impl());
}

JSObject* JSArrayBufferView::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSArrayBufferViewPrototype(globalObject, JSArrayBufferViewPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSArrayBufferView::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSArrayBufferView, Base>(exec, &JSArrayBufferViewTable, this, propertyName, slot);
}

bool JSArrayBufferView::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSArrayBufferView, Base>(exec, &JSArrayBufferViewTable, this, propertyName, descriptor);
}

JSValue jsArrayBufferViewBuffer(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSArrayBufferView* castedThis = static_cast<JSArrayBufferView*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ArrayBufferView* imp = static_cast<ArrayBufferView*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->buffer()));
    return result;
}

JSValue jsArrayBufferViewByteOffset(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSArrayBufferView* castedThis = static_cast<JSArrayBufferView*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ArrayBufferView* imp = static_cast<ArrayBufferView*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->byteOffset());
    return result;
}

JSValue jsArrayBufferViewByteLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSArrayBufferView* castedThis = static_cast<JSArrayBufferView*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ArrayBufferView* imp = static_cast<ArrayBufferView*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->byteLength());
    return result;
}

JSValue jsArrayBufferViewLength(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSArrayBufferView* castedThis = static_cast<JSArrayBufferView*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ArrayBufferView* imp = static_cast<ArrayBufferView*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->length());
    return result;
}

EncodedJSValue JSC_HOST_CALL jsArrayBufferViewPrototypeFunctionSlice(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSArrayBufferView::s_info))
        return throwVMTypeError(exec);
    JSArrayBufferView* castedThis = static_cast<JSArrayBufferView*>(asObject(thisValue));
    return JSValue::encode(castedThis->slice(exec));
}

ArrayBufferView* toArrayBufferView(JSC::JSValue value)
{
    return value.inherits(&JSArrayBufferView::s_info) ? static_cast<JSArrayBufferView*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(3D_CANVAS)