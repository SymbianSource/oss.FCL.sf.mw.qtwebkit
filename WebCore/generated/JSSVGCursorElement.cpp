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

#include "JSSVGCursorElement.h"

#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGStringList.h"
#include "SVGCursorElement.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGCursorElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGCursorElementTableValues[9] =
{
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGCursorElementX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGCursorElementY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "href", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGCursorElementHref), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredFeatures", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGCursorElementRequiredFeatures), (intptr_t)0 THUNK_GENERATOR(0) },
    { "requiredExtensions", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGCursorElementRequiredExtensions), (intptr_t)0 THUNK_GENERATOR(0) },
    { "systemLanguage", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGCursorElementSystemLanguage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGCursorElementExternalResourcesRequired), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGCursorElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGCursorElementTable = { 18, 15, JSSVGCursorElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGCursorElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGCursorElementConstructorTable = { 1, 0, JSSVGCursorElementConstructorTableValues, 0 };
class JSSVGCursorElementConstructor : public DOMConstructorObject {
public:
    JSSVGCursorElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGCursorElementConstructor::s_info = { "SVGCursorElementConstructor", 0, &JSSVGCursorElementConstructorTable, 0 };

JSSVGCursorElementConstructor::JSSVGCursorElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGCursorElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSSVGCursorElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGCursorElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGCursorElementConstructor, DOMObject>(exec, &JSSVGCursorElementConstructorTable, this, propertyName, slot);
}

bool JSSVGCursorElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGCursorElementConstructor, DOMObject>(exec, &JSSVGCursorElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGCursorElementPrototypeTableValues[2] =
{
    { "hasExtension", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGCursorElementPrototypeFunctionHasExtension), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGCursorElementPrototypeTable = { 2, 1, JSSVGCursorElementPrototypeTableValues, 0 };
const ClassInfo JSSVGCursorElementPrototype::s_info = { "SVGCursorElementPrototype", 0, &JSSVGCursorElementPrototypeTable, 0 };

JSObject* JSSVGCursorElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGCursorElement>(exec, globalObject);
}

bool JSSVGCursorElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGCursorElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGCursorElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGCursorElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGCursorElement::s_info = { "SVGCursorElement", &JSSVGElement::s_info, &JSSVGCursorElementTable, 0 };

JSSVGCursorElement::JSSVGCursorElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGCursorElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGCursorElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGCursorElementPrototype(globalObject, JSSVGCursorElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGCursorElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGCursorElement, Base>(exec, &JSSVGCursorElementTable, this, propertyName, slot);
}

bool JSSVGCursorElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGCursorElement, Base>(exec, &JSSVGCursorElementTable, this, propertyName, descriptor);
}

JSValue jsSVGCursorElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGCursorElement* castedThis = static_cast<JSSVGCursorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGCursorElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGCursorElement* castedThis = static_cast<JSSVGCursorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGCursorElementHref(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGCursorElement* castedThis = static_cast<JSSVGCursorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGCursorElementRequiredFeatures(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGCursorElement* castedThis = static_cast<JSSVGCursorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredFeatures()), imp);
    return result;
}

JSValue jsSVGCursorElementRequiredExtensions(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGCursorElement* castedThis = static_cast<JSSVGCursorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredExtensions()), imp);
    return result;
}

JSValue jsSVGCursorElementSystemLanguage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGCursorElement* castedThis = static_cast<JSSVGCursorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->systemLanguage()), imp);
    return result;
}

JSValue jsSVGCursorElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGCursorElement* castedThis = static_cast<JSSVGCursorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGCursorElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGCursorElement* domObject = static_cast<JSSVGCursorElement*>(asObject(slotBase));
    return JSSVGCursorElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGCursorElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGCursorElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGCursorElementPrototypeFunctionHasExtension(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGCursorElement::s_info))
        return throwVMTypeError(exec);
    JSSVGCursorElement* castedThis = static_cast<JSSVGCursorElement*>(asObject(thisValue));
    SVGCursorElement* imp = static_cast<SVGCursorElement*>(castedThis->impl());
    const String& extension = ustringToString(exec->argument(0).toString(exec));


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return JSValue::encode(result);
}


}

#endif // ENABLE(SVG)
