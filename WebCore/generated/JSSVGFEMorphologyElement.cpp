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

#include "JSSVGFEMorphologyElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEMorphologyElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEMorphologyElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEMorphologyElementTableValues[13] =
{
    { "in1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementIn1), (intptr_t)0 THUNK_GENERATOR(0) },
    { "operator", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementOperator), (intptr_t)0 THUNK_GENERATOR(0) },
    { "radiusX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementRadiusX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "radiusY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementRadiusY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementWidth), (intptr_t)0 THUNK_GENERATOR(0) },
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementHeight), (intptr_t)0 THUNK_GENERATOR(0) },
    { "result", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementResult), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEMorphologyElementTable = { 34, 31, JSSVGFEMorphologyElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEMorphologyElementConstructorTableValues[4] =
{
    { "SVG_MORPHOLOGY_OPERATOR_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_MORPHOLOGY_OPERATOR_ERODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_ERODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_MORPHOLOGY_OPERATOR_DILATE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_DILATE), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEMorphologyElementConstructorTable = { 8, 7, JSSVGFEMorphologyElementConstructorTableValues, 0 };
class JSSVGFEMorphologyElementConstructor : public DOMConstructorObject {
public:
    JSSVGFEMorphologyElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGFEMorphologyElementConstructor::s_info = { "SVGFEMorphologyElementConstructor", 0, &JSSVGFEMorphologyElementConstructorTable, 0 };

JSSVGFEMorphologyElementConstructor::JSSVGFEMorphologyElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGFEMorphologyElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSSVGFEMorphologyElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGFEMorphologyElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEMorphologyElementConstructor, DOMObject>(exec, &JSSVGFEMorphologyElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFEMorphologyElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEMorphologyElementConstructor, DOMObject>(exec, &JSSVGFEMorphologyElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEMorphologyElementPrototypeTableValues[6] =
{
    { "SVG_MORPHOLOGY_OPERATOR_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_MORPHOLOGY_OPERATOR_ERODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_ERODE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_MORPHOLOGY_OPERATOR_DILATE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_DILATE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "setRadius", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGFEMorphologyElementPrototypeFunctionSetRadius), (intptr_t)2 THUNK_GENERATOR(0) },
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGFEMorphologyElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEMorphologyElementPrototypeTable = { 17, 15, JSSVGFEMorphologyElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEMorphologyElementPrototype::s_info = { "SVGFEMorphologyElementPrototype", 0, &JSSVGFEMorphologyElementPrototypeTable, 0 };

JSObject* JSSVGFEMorphologyElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEMorphologyElement>(exec, globalObject);
}

bool JSSVGFEMorphologyElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGFEMorphologyElementPrototype, JSObject>(exec, &JSSVGFEMorphologyElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGFEMorphologyElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSSVGFEMorphologyElementPrototype, JSObject>(exec, &JSSVGFEMorphologyElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGFEMorphologyElement::s_info = { "SVGFEMorphologyElement", &JSSVGElement::s_info, &JSSVGFEMorphologyElementTable, 0 };

JSSVGFEMorphologyElement::JSSVGFEMorphologyElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEMorphologyElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGFEMorphologyElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFEMorphologyElementPrototype(globalObject, JSSVGFEMorphologyElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEMorphologyElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEMorphologyElement, Base>(exec, &JSSVGFEMorphologyElementTable, this, propertyName, slot);
}

bool JSSVGFEMorphologyElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEMorphologyElement, Base>(exec, &JSSVGFEMorphologyElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFEMorphologyElementIn1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEMorphologyElement* castedThis = static_cast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* imp = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEMorphologyElementOperator(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEMorphologyElement* castedThis = static_cast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* imp = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->_operatorAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEMorphologyElementRadiusX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEMorphologyElement* castedThis = static_cast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* imp = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->radiusXAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEMorphologyElementRadiusY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEMorphologyElement* castedThis = static_cast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* imp = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->radiusYAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEMorphologyElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEMorphologyElement* castedThis = static_cast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* imp = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEMorphologyElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEMorphologyElement* castedThis = static_cast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* imp = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEMorphologyElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEMorphologyElement* castedThis = static_cast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* imp = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEMorphologyElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEMorphologyElement* castedThis = static_cast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* imp = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEMorphologyElementResult(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEMorphologyElement* castedThis = static_cast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* imp = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEMorphologyElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEMorphologyElement* castedThis = static_cast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* imp = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGFEMorphologyElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEMorphologyElement* castedThis = static_cast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEMorphologyElement* imp = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}

JSValue jsSVGFEMorphologyElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEMorphologyElement* domObject = static_cast<JSSVGFEMorphologyElement*>(asObject(slotBase));
    return JSSVGFEMorphologyElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGFEMorphologyElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEMorphologyElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGFEMorphologyElementPrototypeFunctionSetRadius(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGFEMorphologyElement::s_info))
        return throwVMTypeError(exec);
    JSSVGFEMorphologyElement* castedThis = static_cast<JSSVGFEMorphologyElement*>(asObject(thisValue));
    SVGFEMorphologyElement* imp = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    float radiusX = exec->argument(0).toFloat(exec);
    float radiusY = exec->argument(1).toFloat(exec);

    imp->setRadius(radiusX, radiusY);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGFEMorphologyElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGFEMorphologyElement::s_info))
        return throwVMTypeError(exec);
    JSSVGFEMorphologyElement* castedThis = static_cast<JSSVGFEMorphologyElement*>(asObject(thisValue));
    SVGFEMorphologyElement* imp = static_cast<SVGFEMorphologyElement*>(castedThis->impl());
    const String& name = ustringToString(exec->argument(0).toString(exec));


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}

// Constant getters

JSValue jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_UNKNOWN(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValue jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_ERODE(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValue jsSVGFEMorphologyElementSVG_MORPHOLOGY_OPERATOR_DILATE(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(2));
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)