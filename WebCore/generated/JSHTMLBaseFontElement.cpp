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
#include "JSHTMLBaseFontElement.h"

#include "HTMLBaseFontElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLBaseFontElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLBaseFontElementTableValues[5] =
{
    { "color", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBaseFontElementColor), (intptr_t)setJSHTMLBaseFontElementColor THUNK_GENERATOR(0) },
    { "face", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBaseFontElementFace), (intptr_t)setJSHTMLBaseFontElementFace THUNK_GENERATOR(0) },
    { "size", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBaseFontElementSize), (intptr_t)setJSHTMLBaseFontElementSize THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBaseFontElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLBaseFontElementTable = { 9, 7, JSHTMLBaseFontElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLBaseFontElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLBaseFontElementConstructorTable = { 1, 0, JSHTMLBaseFontElementConstructorTableValues, 0 };
class JSHTMLBaseFontElementConstructor : public DOMConstructorObject {
public:
    JSHTMLBaseFontElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSHTMLBaseFontElementConstructor::s_info = { "HTMLBaseFontElementConstructor", 0, &JSHTMLBaseFontElementConstructorTable, 0 };

JSHTMLBaseFontElementConstructor::JSHTMLBaseFontElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSHTMLBaseFontElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSHTMLBaseFontElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSHTMLBaseFontElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBaseFontElementConstructor, DOMObject>(exec, &JSHTMLBaseFontElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLBaseFontElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLBaseFontElementConstructor, DOMObject>(exec, &JSHTMLBaseFontElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLBaseFontElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLBaseFontElementPrototypeTable = { 1, 0, JSHTMLBaseFontElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLBaseFontElementPrototype::s_info = { "HTMLBaseFontElementPrototype", 0, &JSHTMLBaseFontElementPrototypeTable, 0 };

JSObject* JSHTMLBaseFontElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLBaseFontElement>(exec, globalObject);
}

const ClassInfo JSHTMLBaseFontElement::s_info = { "HTMLBaseFontElement", &JSHTMLElement::s_info, &JSHTMLBaseFontElementTable, 0 };

JSHTMLBaseFontElement::JSHTMLBaseFontElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLBaseFontElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLBaseFontElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLBaseFontElementPrototype(globalObject, JSHTMLBaseFontElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLBaseFontElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBaseFontElement, Base>(exec, &JSHTMLBaseFontElementTable, this, propertyName, slot);
}

bool JSHTMLBaseFontElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLBaseFontElement, Base>(exec, &JSHTMLBaseFontElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLBaseFontElementColor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLBaseFontElement* castedThis = static_cast<JSHTMLBaseFontElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBaseFontElement* imp = static_cast<HTMLBaseFontElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::colorAttr));
    return result;
}

JSValue jsHTMLBaseFontElementFace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLBaseFontElement* castedThis = static_cast<JSHTMLBaseFontElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBaseFontElement* imp = static_cast<HTMLBaseFontElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(WebCore::HTMLNames::faceAttr));
    return result;
}

JSValue jsHTMLBaseFontElementSize(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLBaseFontElement* castedThis = static_cast<JSHTMLBaseFontElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBaseFontElement* imp = static_cast<HTMLBaseFontElement*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->getIntegralAttribute(WebCore::HTMLNames::sizeAttr));
    return result;
}

JSValue jsHTMLBaseFontElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLBaseFontElement* domObject = static_cast<JSHTMLBaseFontElement*>(asObject(slotBase));
    return JSHTMLBaseFontElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLBaseFontElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLBaseFontElement, Base>(exec, propertyName, value, &JSHTMLBaseFontElementTable, this, slot);
}

void setJSHTMLBaseFontElementColor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLBaseFontElement* castedThis = static_cast<JSHTMLBaseFontElement*>(thisObject);
    HTMLBaseFontElement* imp = static_cast<HTMLBaseFontElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::colorAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLBaseFontElementFace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLBaseFontElement* castedThis = static_cast<JSHTMLBaseFontElement*>(thisObject);
    HTMLBaseFontElement* imp = static_cast<HTMLBaseFontElement*>(castedThis->impl());
    imp->setAttribute(WebCore::HTMLNames::faceAttr, valueToStringWithNullCheck(exec, value));
}

void setJSHTMLBaseFontElementSize(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLBaseFontElement* castedThis = static_cast<JSHTMLBaseFontElement*>(thisObject);
    HTMLBaseFontElement* imp = static_cast<HTMLBaseFontElement*>(castedThis->impl());
    imp->setIntegralAttribute(WebCore::HTMLNames::sizeAttr, value.toInt32(exec));
}

JSValue JSHTMLBaseFontElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLBaseFontElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
