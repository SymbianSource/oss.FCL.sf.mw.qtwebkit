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

#include "JSSVGPoint.h"

#include "JSSVGMatrix.h"
#include "JSSVGPoint.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPoint);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPointTableValues[4] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPointX), (intptr_t)setJSSVGPointX THUNK_GENERATOR(0) },
    { "y", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPointY), (intptr_t)setJSSVGPointY THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPointConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPointTable = { 9, 7, JSSVGPointTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPointConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPointConstructorTable = { 1, 0, JSSVGPointConstructorTableValues, 0 };
class JSSVGPointConstructor : public DOMConstructorObject {
public:
    JSSVGPointConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGPointConstructor::s_info = { "SVGPointConstructor", 0, &JSSVGPointConstructorTable, 0 };

JSSVGPointConstructor::JSSVGPointConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGPointConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSSVGPointPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGPointConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPointConstructor, DOMObject>(exec, &JSSVGPointConstructorTable, this, propertyName, slot);
}

bool JSSVGPointConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPointConstructor, DOMObject>(exec, &JSSVGPointConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPointPrototypeTableValues[2] =
{
    { "matrixTransform", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGPointPrototypeFunctionMatrixTransform), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPointPrototypeTable = { 2, 1, JSSVGPointPrototypeTableValues, 0 };
const ClassInfo JSSVGPointPrototype::s_info = { "SVGPointPrototype", 0, &JSSVGPointPrototypeTable, 0 };

JSObject* JSSVGPointPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPoint>(exec, globalObject);
}

bool JSSVGPointPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGPointPrototypeTable, this, propertyName, slot);
}

bool JSSVGPointPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGPointPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGPoint::s_info = { "SVGPoint", 0, &JSSVGPointTable, 0 };

JSSVGPoint::JSSVGPoint(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<JSSVGPODTypeWrapper<FloatPoint> > impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSSVGPoint::~JSSVGPoint()
{
    forgetDOMObject(this, impl());
    JSSVGContextCache::forgetWrapper(this);
}

JSObject* JSSVGPoint::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPointPrototype(globalObject, JSSVGPointPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSSVGPoint::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPoint, Base>(exec, &JSSVGPointTable, this, propertyName, slot);
}

bool JSSVGPoint::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPoint, Base>(exec, &JSSVGPointTable, this, propertyName, descriptor);
}

JSValue jsSVGPointX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPoint* castedThis = static_cast<JSSVGPoint*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    FloatPoint imp(*castedThis->impl());
    JSValue result =  jsNumber(exec, imp.x());
    return result;
}

JSValue jsSVGPointY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPoint* castedThis = static_cast<JSSVGPoint*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    FloatPoint imp(*castedThis->impl());
    JSValue result =  jsNumber(exec, imp.y());
    return result;
}

JSValue jsSVGPointConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPoint* domObject = static_cast<JSSVGPoint*>(asObject(slotBase));
    return JSSVGPoint::getConstructor(exec, domObject->globalObject());
}
void JSSVGPoint::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPoint, Base>(exec, propertyName, value, &JSSVGPointTable, this, slot);
}

void setJSSVGPointX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPoint* castedThis = static_cast<JSSVGPoint*>(thisObject);
    JSSVGPODTypeWrapper<FloatPoint> * imp = static_cast<JSSVGPODTypeWrapper<FloatPoint> *>(castedThis->impl());
    FloatPoint podImp(*imp);
    podImp.setX(value.toFloat(exec));
    imp->commitChange(podImp, castedThis);
}

void setJSSVGPointY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPoint* castedThis = static_cast<JSSVGPoint*>(thisObject);
    JSSVGPODTypeWrapper<FloatPoint> * imp = static_cast<JSSVGPODTypeWrapper<FloatPoint> *>(castedThis->impl());
    FloatPoint podImp(*imp);
    podImp.setY(value.toFloat(exec));
    imp->commitChange(podImp, castedThis);
}

JSValue JSSVGPoint::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPointConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGPointPrototypeFunctionMatrixTransform(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGPoint::s_info))
        return throwVMTypeError(exec);
    JSSVGPoint* castedThis = static_cast<JSSVGPoint*>(asObject(thisValue));
    JSSVGPODTypeWrapper<FloatPoint> * imp = static_cast<JSSVGPODTypeWrapper<FloatPoint> *>(castedThis->impl());
    FloatPoint podImp(*imp);
    AffineTransform matrix = toSVGMatrix(exec->argument(0));


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), JSSVGStaticPODTypeWrapper<FloatPoint>::create(podImp.matrixTransform(matrix)).get(), 0 /* no context on purpose */);
    imp->commitChange(podImp, castedThis);
    return JSValue::encode(result);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, JSSVGPODTypeWrapper<FloatPoint>* object, SVGElement* context)
{
    return getDOMObjectWrapper<JSSVGPoint, JSSVGPODTypeWrapper<FloatPoint> >(exec, globalObject, object, context);
}
FloatPoint toSVGPoint(JSC::JSValue value)
{
    return value.inherits(&JSSVGPoint::s_info) ? (FloatPoint) *static_cast<JSSVGPoint*>(asObject(value))->impl() : FloatPoint();
}

}

#endif // ENABLE(SVG)
