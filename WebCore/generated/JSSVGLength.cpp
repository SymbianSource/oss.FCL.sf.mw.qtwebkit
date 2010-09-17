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

#include "JSSVGLength.h"

#include "KURL.h"
#include "SVGLength.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGLength);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGLengthTableValues[6] =
{
    { "unitType", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthUnitType), (intptr_t)0 THUNK_GENERATOR(0) },
    { "value", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthValue), (intptr_t)setJSSVGLengthValue THUNK_GENERATOR(0) },
    { "valueInSpecifiedUnits", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthValueInSpecifiedUnits), (intptr_t)setJSSVGLengthValueInSpecifiedUnits THUNK_GENERATOR(0) },
    { "valueAsString", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthValueAsString), (intptr_t)setJSSVGLengthValueAsString THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGLengthTable = { 17, 15, JSSVGLengthTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGLengthConstructorTableValues[12] =
{
    { "SVG_LENGTHTYPE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_NUMBER", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_NUMBER), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_PERCENTAGE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_PERCENTAGE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_EMS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_EMS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_EXS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_EXS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_PX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_PX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_CM", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_CM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_MM", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_MM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_IN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_IN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_PT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_PT), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_PC", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_PC), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGLengthConstructorTable = { 33, 31, JSSVGLengthConstructorTableValues, 0 };

COMPILE_ASSERT(0 == SVGLength::SVG_LENGTHTYPE_UNKNOWN, SVGLengthEnumSVG_LENGTHTYPE_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGLength::SVG_LENGTHTYPE_NUMBER, SVGLengthEnumSVG_LENGTHTYPE_NUMBERIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGLength::SVG_LENGTHTYPE_PERCENTAGE, SVGLengthEnumSVG_LENGTHTYPE_PERCENTAGEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == SVGLength::SVG_LENGTHTYPE_EMS, SVGLengthEnumSVG_LENGTHTYPE_EMSIsWrongUseDontCheckEnums);
COMPILE_ASSERT(4 == SVGLength::SVG_LENGTHTYPE_EXS, SVGLengthEnumSVG_LENGTHTYPE_EXSIsWrongUseDontCheckEnums);
COMPILE_ASSERT(5 == SVGLength::SVG_LENGTHTYPE_PX, SVGLengthEnumSVG_LENGTHTYPE_PXIsWrongUseDontCheckEnums);
COMPILE_ASSERT(6 == SVGLength::SVG_LENGTHTYPE_CM, SVGLengthEnumSVG_LENGTHTYPE_CMIsWrongUseDontCheckEnums);
COMPILE_ASSERT(7 == SVGLength::SVG_LENGTHTYPE_MM, SVGLengthEnumSVG_LENGTHTYPE_MMIsWrongUseDontCheckEnums);
COMPILE_ASSERT(8 == SVGLength::SVG_LENGTHTYPE_IN, SVGLengthEnumSVG_LENGTHTYPE_INIsWrongUseDontCheckEnums);
COMPILE_ASSERT(9 == SVGLength::SVG_LENGTHTYPE_PT, SVGLengthEnumSVG_LENGTHTYPE_PTIsWrongUseDontCheckEnums);
COMPILE_ASSERT(10 == SVGLength::SVG_LENGTHTYPE_PC, SVGLengthEnumSVG_LENGTHTYPE_PCIsWrongUseDontCheckEnums);

class JSSVGLengthConstructor : public DOMConstructorObject {
public:
    JSSVGLengthConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGLengthConstructor::s_info = { "SVGLengthConstructor", 0, &JSSVGLengthConstructorTable, 0 };

JSSVGLengthConstructor::JSSVGLengthConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGLengthConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSSVGLengthPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGLengthConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLengthConstructor, DOMObject>(exec, &JSSVGLengthConstructorTable, this, propertyName, slot);
}

bool JSSVGLengthConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGLengthConstructor, DOMObject>(exec, &JSSVGLengthConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGLengthPrototypeTableValues[14] =
{
    { "SVG_LENGTHTYPE_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_NUMBER", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_NUMBER), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_PERCENTAGE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_PERCENTAGE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_EMS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_EMS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_EXS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_EXS), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_PX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_PX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_CM", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_CM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_MM", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_MM), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_IN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_IN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_PT", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_PT), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_LENGTHTYPE_PC", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthSVG_LENGTHTYPE_PC), (intptr_t)0 THUNK_GENERATOR(0) },
    { "newValueSpecifiedUnits", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGLengthPrototypeFunctionNewValueSpecifiedUnits), (intptr_t)2 THUNK_GENERATOR(0) },
    { "convertToSpecifiedUnits", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGLengthPrototypeFunctionConvertToSpecifiedUnits), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGLengthPrototypeTable = { 33, 31, JSSVGLengthPrototypeTableValues, 0 };
const ClassInfo JSSVGLengthPrototype::s_info = { "SVGLengthPrototype", 0, &JSSVGLengthPrototypeTable, 0 };

JSObject* JSSVGLengthPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGLength>(exec, globalObject);
}

bool JSSVGLengthPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGLengthPrototype, JSObject>(exec, &JSSVGLengthPrototypeTable, this, propertyName, slot);
}

bool JSSVGLengthPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSSVGLengthPrototype, JSObject>(exec, &JSSVGLengthPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGLength::s_info = { "SVGLength", 0, &JSSVGLengthTable, 0 };

JSSVGLength::JSSVGLength(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<JSSVGPODTypeWrapper<SVGLength> > impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSSVGLength::~JSSVGLength()
{
    forgetDOMObject(this, impl());
    JSSVGContextCache::forgetWrapper(this);
}

JSObject* JSSVGLength::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGLengthPrototype(globalObject, JSSVGLengthPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGLength::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLength, Base>(exec, &JSSVGLengthTable, this, propertyName, slot);
}

bool JSSVGLength::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGLength, Base>(exec, &JSSVGLengthTable, this, propertyName, descriptor);
}

JSValue jsSVGLengthUnitType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLength* castedThis = static_cast<JSSVGLength*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLength imp(*castedThis->impl());
    JSValue result =  jsNumber(exec, imp.unitType());
    return result;
}

JSValue jsSVGLengthValue(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLength* castedThis = static_cast<JSSVGLength*>(asObject(slotBase));
    return castedThis->value(exec);
}

JSValue jsSVGLengthValueInSpecifiedUnits(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLength* castedThis = static_cast<JSSVGLength*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLength imp(*castedThis->impl());
    JSValue result =  jsNumber(exec, imp.valueInSpecifiedUnits());
    return result;
}

JSValue jsSVGLengthValueAsString(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLength* castedThis = static_cast<JSSVGLength*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGLength imp(*castedThis->impl());
    JSValue result =  jsString(exec, imp.valueAsString());
    return result;
}

JSValue jsSVGLengthConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGLength* domObject = static_cast<JSSVGLength*>(asObject(slotBase));
    return JSSVGLength::getConstructor(exec, domObject->globalObject());
}
void JSSVGLength::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGLength, Base>(exec, propertyName, value, &JSSVGLengthTable, this, slot);
}

void setJSSVGLengthValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGLength* castedThis = static_cast<JSSVGLength*>(thisObject);
    JSSVGPODTypeWrapper<SVGLength> * imp = static_cast<JSSVGPODTypeWrapper<SVGLength> *>(castedThis->impl());
    SVGLength podImp(*imp);
    podImp.setValue(value.toFloat(exec));
    imp->commitChange(podImp, castedThis);
}

void setJSSVGLengthValueInSpecifiedUnits(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGLength* castedThis = static_cast<JSSVGLength*>(thisObject);
    JSSVGPODTypeWrapper<SVGLength> * imp = static_cast<JSSVGPODTypeWrapper<SVGLength> *>(castedThis->impl());
    SVGLength podImp(*imp);
    podImp.setValueInSpecifiedUnits(value.toFloat(exec));
    imp->commitChange(podImp, castedThis);
}

void setJSSVGLengthValueAsString(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGLength* castedThis = static_cast<JSSVGLength*>(thisObject);
    JSSVGPODTypeWrapper<SVGLength> * imp = static_cast<JSSVGPODTypeWrapper<SVGLength> *>(castedThis->impl());
    SVGLength podImp(*imp);
    podImp.setValueAsString(valueToStringWithNullCheck(exec, value));
    imp->commitChange(podImp, castedThis);
}

JSValue JSSVGLength::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGLengthConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGLengthPrototypeFunctionNewValueSpecifiedUnits(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGLength::s_info))
        return throwVMTypeError(exec);
    JSSVGLength* castedThis = static_cast<JSSVGLength*>(asObject(thisValue));
    JSSVGPODTypeWrapper<SVGLength> * imp = static_cast<JSSVGPODTypeWrapper<SVGLength> *>(castedThis->impl());
    SVGLength podImp(*imp);
    unsigned short unitType = exec->argument(0).toInt32(exec);
    float valueInSpecifiedUnits = exec->argument(1).toFloat(exec);

    podImp.newValueSpecifiedUnits(unitType, valueInSpecifiedUnits);
    imp->commitChange(podImp, castedThis);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGLengthPrototypeFunctionConvertToSpecifiedUnits(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGLength::s_info))
        return throwVMTypeError(exec);
    JSSVGLength* castedThis = static_cast<JSSVGLength*>(asObject(thisValue));
    return JSValue::encode(castedThis->convertToSpecifiedUnits(exec));
}

// Constant getters

JSValue jsSVGLengthSVG_LENGTHTYPE_UNKNOWN(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_NUMBER(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_PERCENTAGE(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(2));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_EMS(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(3));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_EXS(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(4));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_PX(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(5));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_CM(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(6));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_MM(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(7));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_IN(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(8));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_PT(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(9));
}

JSValue jsSVGLengthSVG_LENGTHTYPE_PC(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(10));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, JSSVGPODTypeWrapper<SVGLength>* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGLength, JSSVGPODTypeWrapper<SVGLength> >(exec, globalObject, object, context);
}
SVGLength toSVGLength(JSC::JSValue value)
{
    return value.inherits(&JSSVGLength::s_info) ? (SVGLength) *static_cast<JSSVGLength*>(asObject(value))->impl() : SVGLength();
}

}

#endif // ENABLE(SVG)