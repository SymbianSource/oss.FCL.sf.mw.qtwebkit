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
#include "JSBlob.h"

#include "Blob.h"
#include "KURL.h"
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSBlob);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSBlobTableValues[4] =
{
    { "size", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBlobSize), (intptr_t)0 THUNK_GENERATOR(0) },
    { "type", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBlobType), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsBlobConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSBlobTable = { 8, 7, JSBlobTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSBlobConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSBlobConstructorTable = { 1, 0, JSBlobConstructorTableValues, 0 };
class JSBlobConstructor : public DOMConstructorObject {
public:
    JSBlobConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSBlobConstructor::s_info = { "BlobConstructor", 0, &JSBlobConstructorTable, 0 };

JSBlobConstructor::JSBlobConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSBlobConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSBlobPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSBlobConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSBlobConstructor, DOMObject>(exec, &JSBlobConstructorTable, this, propertyName, slot);
}

bool JSBlobConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSBlobConstructor, DOMObject>(exec, &JSBlobConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSBlobPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSBlobPrototypeTable = { 1, 0, JSBlobPrototypeTableValues, 0 };
const ClassInfo JSBlobPrototype::s_info = { "BlobPrototype", 0, &JSBlobPrototypeTable, 0 };

JSObject* JSBlobPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSBlob>(exec, globalObject);
}

const ClassInfo JSBlob::s_info = { "Blob", 0, &JSBlobTable, 0 };

JSBlob::JSBlob(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<Blob> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSBlob::~JSBlob()
{
    forgetDOMObject(this, impl());
}

JSObject* JSBlob::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSBlobPrototype(globalObject, JSBlobPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSBlob::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSBlob, Base>(exec, &JSBlobTable, this, propertyName, slot);
}

bool JSBlob::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSBlob, Base>(exec, &JSBlobTable, this, propertyName, descriptor);
}

JSValue jsBlobSize(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSBlob* castedThis = static_cast<JSBlob*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Blob* imp = static_cast<Blob*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->size());
    return result;
}

JSValue jsBlobType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSBlob* castedThis = static_cast<JSBlob*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Blob* imp = static_cast<Blob*>(castedThis->impl());
    JSValue result = jsString(exec, imp->type());
    return result;
}

JSValue jsBlobConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSBlob* domObject = static_cast<JSBlob*>(asObject(slotBase));
    return JSBlob::getConstructor(exec, domObject->globalObject());
}
JSValue JSBlob::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSBlobConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Blob* object)
{
    return getDOMObjectWrapper<JSBlob>(exec, globalObject, object);
}
Blob* toBlob(JSC::JSValue value)
{
    return value.inherits(&JSBlob::s_info) ? static_cast<JSBlob*>(asObject(value))->impl() : 0;
}

}
