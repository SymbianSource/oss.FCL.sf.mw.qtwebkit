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

#include "JSSVGTransform.h"

#include "JSSVGMatrix.h"
#include "SVGTransform.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGTransform);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGTransformTableValues[5] =
{
    { "type", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformType), (intptr_t)0 THUNK_GENERATOR(0) },
    { "matrix", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformMatrix), (intptr_t)0 THUNK_GENERATOR(0) },
    { "angle", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformAngle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGTransformTable = { 9, 7, JSSVGTransformTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGTransformConstructorTableValues[8] =
{
    { "SVG_TRANSFORM_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_TRANSFORM_MATRIX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_MATRIX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_TRANSFORM_TRANSLATE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_TRANSLATE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_TRANSFORM_SCALE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_SCALE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_TRANSFORM_ROTATE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_ROTATE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_TRANSFORM_SKEWX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_SKEWX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_TRANSFORM_SKEWY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_SKEWY), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGTransformConstructorTable = { 18, 15, JSSVGTransformConstructorTableValues, 0 };

COMPILE_ASSERT(0 == SVGTransform::SVG_TRANSFORM_UNKNOWN, SVGTransformEnumSVG_TRANSFORM_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGTransform::SVG_TRANSFORM_MATRIX, SVGTransformEnumSVG_TRANSFORM_MATRIXIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGTransform::SVG_TRANSFORM_TRANSLATE, SVGTransformEnumSVG_TRANSFORM_TRANSLATEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == SVGTransform::SVG_TRANSFORM_SCALE, SVGTransformEnumSVG_TRANSFORM_SCALEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(4 == SVGTransform::SVG_TRANSFORM_ROTATE, SVGTransformEnumSVG_TRANSFORM_ROTATEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(5 == SVGTransform::SVG_TRANSFORM_SKEWX, SVGTransformEnumSVG_TRANSFORM_SKEWXIsWrongUseDontCheckEnums);
COMPILE_ASSERT(6 == SVGTransform::SVG_TRANSFORM_SKEWY, SVGTransformEnumSVG_TRANSFORM_SKEWYIsWrongUseDontCheckEnums);

class JSSVGTransformConstructor : public DOMConstructorObject {
public:
    JSSVGTransformConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGTransformConstructor::s_info = { "SVGTransformConstructor", 0, &JSSVGTransformConstructorTable, 0 };

JSSVGTransformConstructor::JSSVGTransformConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGTransformConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSSVGTransformPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGTransformConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTransformConstructor, DOMObject>(exec, &JSSVGTransformConstructorTable, this, propertyName, slot);
}

bool JSSVGTransformConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGTransformConstructor, DOMObject>(exec, &JSSVGTransformConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGTransformPrototypeTableValues[14] =
{
    { "SVG_TRANSFORM_UNKNOWN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_UNKNOWN), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_TRANSFORM_MATRIX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_MATRIX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_TRANSFORM_TRANSLATE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_TRANSLATE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_TRANSFORM_SCALE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_SCALE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_TRANSFORM_ROTATE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_ROTATE), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_TRANSFORM_SKEWX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_SKEWX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "SVG_TRANSFORM_SKEWY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTransformSVG_TRANSFORM_SKEWY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "setMatrix", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformPrototypeFunctionSetMatrix), (intptr_t)1 THUNK_GENERATOR(0) },
    { "setTranslate", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformPrototypeFunctionSetTranslate), (intptr_t)2 THUNK_GENERATOR(0) },
    { "setScale", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformPrototypeFunctionSetScale), (intptr_t)2 THUNK_GENERATOR(0) },
    { "setRotate", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformPrototypeFunctionSetRotate), (intptr_t)3 THUNK_GENERATOR(0) },
    { "setSkewX", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformPrototypeFunctionSetSkewX), (intptr_t)1 THUNK_GENERATOR(0) },
    { "setSkewY", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGTransformPrototypeFunctionSetSkewY), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGTransformPrototypeTable = { 34, 31, JSSVGTransformPrototypeTableValues, 0 };
const ClassInfo JSSVGTransformPrototype::s_info = { "SVGTransformPrototype", 0, &JSSVGTransformPrototypeTable, 0 };

JSObject* JSSVGTransformPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGTransform>(exec, globalObject);
}

bool JSSVGTransformPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGTransformPrototype, JSObject>(exec, &JSSVGTransformPrototypeTable, this, propertyName, slot);
}

bool JSSVGTransformPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSSVGTransformPrototype, JSObject>(exec, &JSSVGTransformPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGTransform::s_info = { "SVGTransform", 0, &JSSVGTransformTable, 0 };

JSSVGTransform::JSSVGTransform(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<JSSVGPODTypeWrapper<SVGTransform> > impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSSVGTransform::~JSSVGTransform()
{
    forgetDOMObject(this, impl());
    JSSVGContextCache::forgetWrapper(this);
}

JSObject* JSSVGTransform::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGTransformPrototype(globalObject, JSSVGTransformPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGTransform::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTransform, Base>(exec, &JSSVGTransformTable, this, propertyName, slot);
}

bool JSSVGTransform::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGTransform, Base>(exec, &JSSVGTransformTable, this, propertyName, descriptor);
}

JSValue jsSVGTransformType(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTransform* castedThis = static_cast<JSSVGTransform*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTransform imp(*castedThis->impl());
    JSValue result =  jsNumber(exec, imp.type());
    return result;
}

JSValue jsSVGTransformMatrix(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTransform* castedThis = static_cast<JSSVGTransform*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTransform imp(*castedThis->impl());
    JSValue result =  toJS(exec, castedThis->globalObject(), JSSVGStaticPODTypeWrapperWithPODTypeParent<AffineTransform, SVGTransform>::create(imp.matrix(), castedThis->impl()).get(), JSSVGContextCache::svgContextForDOMObject(castedThis));
    return result;
}

JSValue jsSVGTransformAngle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTransform* castedThis = static_cast<JSSVGTransform*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTransform imp(*castedThis->impl());
    JSValue result =  jsNumber(exec, imp.angle());
    return result;
}

JSValue jsSVGTransformConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTransform* domObject = static_cast<JSSVGTransform*>(asObject(slotBase));
    return JSSVGTransform::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGTransform::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGTransformConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGTransformPrototypeFunctionSetMatrix(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTransform::s_info))
        return throwVMTypeError(exec);
    JSSVGTransform* castedThis = static_cast<JSSVGTransform*>(asObject(thisValue));
    JSSVGPODTypeWrapper<SVGTransform> * imp = static_cast<JSSVGPODTypeWrapper<SVGTransform> *>(castedThis->impl());
    SVGTransform podImp(*imp);
    AffineTransform matrix = toSVGMatrix(exec->argument(0));

    podImp.setMatrix(matrix);
    imp->commitChange(podImp, castedThis);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGTransformPrototypeFunctionSetTranslate(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTransform::s_info))
        return throwVMTypeError(exec);
    JSSVGTransform* castedThis = static_cast<JSSVGTransform*>(asObject(thisValue));
    JSSVGPODTypeWrapper<SVGTransform> * imp = static_cast<JSSVGPODTypeWrapper<SVGTransform> *>(castedThis->impl());
    SVGTransform podImp(*imp);
    float tx = exec->argument(0).toFloat(exec);
    float ty = exec->argument(1).toFloat(exec);

    podImp.setTranslate(tx, ty);
    imp->commitChange(podImp, castedThis);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGTransformPrototypeFunctionSetScale(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTransform::s_info))
        return throwVMTypeError(exec);
    JSSVGTransform* castedThis = static_cast<JSSVGTransform*>(asObject(thisValue));
    JSSVGPODTypeWrapper<SVGTransform> * imp = static_cast<JSSVGPODTypeWrapper<SVGTransform> *>(castedThis->impl());
    SVGTransform podImp(*imp);
    float sx = exec->argument(0).toFloat(exec);
    float sy = exec->argument(1).toFloat(exec);

    podImp.setScale(sx, sy);
    imp->commitChange(podImp, castedThis);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGTransformPrototypeFunctionSetRotate(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTransform::s_info))
        return throwVMTypeError(exec);
    JSSVGTransform* castedThis = static_cast<JSSVGTransform*>(asObject(thisValue));
    JSSVGPODTypeWrapper<SVGTransform> * imp = static_cast<JSSVGPODTypeWrapper<SVGTransform> *>(castedThis->impl());
    SVGTransform podImp(*imp);
    float angle = exec->argument(0).toFloat(exec);
    float cx = exec->argument(1).toFloat(exec);
    float cy = exec->argument(2).toFloat(exec);

    podImp.setRotate(angle, cx, cy);
    imp->commitChange(podImp, castedThis);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGTransformPrototypeFunctionSetSkewX(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTransform::s_info))
        return throwVMTypeError(exec);
    JSSVGTransform* castedThis = static_cast<JSSVGTransform*>(asObject(thisValue));
    JSSVGPODTypeWrapper<SVGTransform> * imp = static_cast<JSSVGPODTypeWrapper<SVGTransform> *>(castedThis->impl());
    SVGTransform podImp(*imp);
    float angle = exec->argument(0).toFloat(exec);

    podImp.setSkewX(angle);
    imp->commitChange(podImp, castedThis);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGTransformPrototypeFunctionSetSkewY(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGTransform::s_info))
        return throwVMTypeError(exec);
    JSSVGTransform* castedThis = static_cast<JSSVGTransform*>(asObject(thisValue));
    JSSVGPODTypeWrapper<SVGTransform> * imp = static_cast<JSSVGPODTypeWrapper<SVGTransform> *>(castedThis->impl());
    SVGTransform podImp(*imp);
    float angle = exec->argument(0).toFloat(exec);

    podImp.setSkewY(angle);
    imp->commitChange(podImp, castedThis);
    return JSValue::encode(jsUndefined());
}

// Constant getters

JSValue jsSVGTransformSVG_TRANSFORM_UNKNOWN(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(0));
}

JSValue jsSVGTransformSVG_TRANSFORM_MATRIX(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(1));
}

JSValue jsSVGTransformSVG_TRANSFORM_TRANSLATE(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(2));
}

JSValue jsSVGTransformSVG_TRANSFORM_SCALE(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(3));
}

JSValue jsSVGTransformSVG_TRANSFORM_ROTATE(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(4));
}

JSValue jsSVGTransformSVG_TRANSFORM_SKEWX(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(5));
}

JSValue jsSVGTransformSVG_TRANSFORM_SKEWY(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(6));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, JSSVGPODTypeWrapper<SVGTransform>* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGTransform, JSSVGPODTypeWrapper<SVGTransform> >(exec, globalObject, object, context);
}
SVGTransform toSVGTransform(JSC::JSValue value)
{
    return value.inherits(&JSSVGTransform::s_info) ? (SVGTransform) *static_cast<JSSVGTransform*>(asObject(value))->impl() : SVGTransform();
}

}

#endif // ENABLE(SVG)
