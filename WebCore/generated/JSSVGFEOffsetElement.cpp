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

#if ENABLE(SVG) && ENABLE(FILTERS)

#include "JSSVGFEOffsetElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEOffsetElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEOffsetElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEOffsetElementTableValues[12] =
{
    { "in1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementIn1), (intptr_t)0 THUNK_GENERATOR(0) },
    { "dx", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementDx), (intptr_t)0 THUNK_GENERATOR(0) },
    { "dy", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementDy), (intptr_t)0 THUNK_GENERATOR(0) },
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementWidth), (intptr_t)0 THUNK_GENERATOR(0) },
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementHeight), (intptr_t)0 THUNK_GENERATOR(0) },
    { "result", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementResult), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEOffsetElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEOffsetElementTable = { 35, 31, JSSVGFEOffsetElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEOffsetElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEOffsetElementConstructorTable = { 1, 0, JSSVGFEOffsetElementConstructorTableValues, 0 };
class JSSVGFEOffsetElementConstructor : public DOMConstructorObject {
public:
    JSSVGFEOffsetElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGFEOffsetElementConstructor::s_info = { "SVGFEOffsetElementConstructor", 0, &JSSVGFEOffsetElementConstructorTable, 0 };

JSSVGFEOffsetElementConstructor::JSSVGFEOffsetElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGFEOffsetElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSSVGFEOffsetElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGFEOffsetElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEOffsetElementConstructor, DOMObject>(exec, &JSSVGFEOffsetElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFEOffsetElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEOffsetElementConstructor, DOMObject>(exec, &JSSVGFEOffsetElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEOffsetElementPrototypeTableValues[2] =
{
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGFEOffsetElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEOffsetElementPrototypeTable = { 2, 1, JSSVGFEOffsetElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEOffsetElementPrototype::s_info = { "SVGFEOffsetElementPrototype", 0, &JSSVGFEOffsetElementPrototypeTable, 0 };

JSObject* JSSVGFEOffsetElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEOffsetElement>(exec, globalObject);
}

bool JSSVGFEOffsetElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGFEOffsetElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGFEOffsetElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGFEOffsetElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGFEOffsetElement::s_info = { "SVGFEOffsetElement", &JSSVGElement::s_info, &JSSVGFEOffsetElementTable, 0 };

JSSVGFEOffsetElement::JSSVGFEOffsetElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEOffsetElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGFEOffsetElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFEOffsetElementPrototype(globalObject, JSSVGFEOffsetElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEOffsetElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEOffsetElement, Base>(exec, &JSSVGFEOffsetElementTable, this, propertyName, slot);
}

bool JSSVGFEOffsetElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEOffsetElement, Base>(exec, &JSSVGFEOffsetElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFEOffsetElementIn1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEOffsetElement* castedThis = static_cast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEOffsetElementDx(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEOffsetElement* castedThis = static_cast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->dxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEOffsetElementDy(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEOffsetElement* castedThis = static_cast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->dyAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEOffsetElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEOffsetElement* castedThis = static_cast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEOffsetElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEOffsetElement* castedThis = static_cast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEOffsetElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEOffsetElement* castedThis = static_cast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEOffsetElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEOffsetElement* castedThis = static_cast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEOffsetElementResult(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEOffsetElement* castedThis = static_cast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEOffsetElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEOffsetElement* castedThis = static_cast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEOffsetElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEOffsetElement* castedThis = static_cast<JSSVGFEOffsetElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}

JSValue jsSVGFEOffsetElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEOffsetElement* domObject = static_cast<JSSVGFEOffsetElement*>(asObject(slotBase));
    return JSSVGFEOffsetElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGFEOffsetElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEOffsetElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGFEOffsetElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGFEOffsetElement::s_info))
        return throwVMTypeError(exec);
    JSSVGFEOffsetElement* castedThis = static_cast<JSSVGFEOffsetElement*>(asObject(thisValue));
    SVGFEOffsetElement* imp = static_cast<SVGFEOffsetElement*>(castedThis->impl());
    const String& name = ustringToString(exec->argument(0).toString(exec));


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)
