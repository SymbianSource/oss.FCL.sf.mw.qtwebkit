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

#include "JSSVGPathSegLinetoAbs.h"

#include "SVGPathSegLineto.h"
#include <runtime/JSNumberCell.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPathSegLinetoAbs);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegLinetoAbsTableValues[4] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoAbsX), (intptr_t)setJSSVGPathSegLinetoAbsX THUNK_GENERATOR(0) },
    { "y", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoAbsY), (intptr_t)setJSSVGPathSegLinetoAbsY THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegLinetoAbsConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoAbsTable = { 9, 7, JSSVGPathSegLinetoAbsTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegLinetoAbsConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoAbsConstructorTable = { 1, 0, JSSVGPathSegLinetoAbsConstructorTableValues, 0 };
class JSSVGPathSegLinetoAbsConstructor : public DOMConstructorObject {
public:
    JSSVGPathSegLinetoAbsConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGPathSegLinetoAbsConstructor::s_info = { "SVGPathSegLinetoAbsConstructor", 0, &JSSVGPathSegLinetoAbsConstructorTable, 0 };

JSSVGPathSegLinetoAbsConstructor::JSSVGPathSegLinetoAbsConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGPathSegLinetoAbsConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSSVGPathSegLinetoAbsPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGPathSegLinetoAbsConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegLinetoAbsConstructor, DOMObject>(exec, &JSSVGPathSegLinetoAbsConstructorTable, this, propertyName, slot);
}

bool JSSVGPathSegLinetoAbsConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegLinetoAbsConstructor, DOMObject>(exec, &JSSVGPathSegLinetoAbsConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegLinetoAbsPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegLinetoAbsPrototypeTable = { 1, 0, JSSVGPathSegLinetoAbsPrototypeTableValues, 0 };
const ClassInfo JSSVGPathSegLinetoAbsPrototype::s_info = { "SVGPathSegLinetoAbsPrototype", 0, &JSSVGPathSegLinetoAbsPrototypeTable, 0 };

JSObject* JSSVGPathSegLinetoAbsPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegLinetoAbs>(exec, globalObject);
}

const ClassInfo JSSVGPathSegLinetoAbs::s_info = { "SVGPathSegLinetoAbs", &JSSVGPathSeg::s_info, &JSSVGPathSegLinetoAbsTable, 0 };

JSSVGPathSegLinetoAbs::JSSVGPathSegLinetoAbs(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegLinetoAbs> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
}

JSObject* JSSVGPathSegLinetoAbs::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGPathSegLinetoAbsPrototype(globalObject, JSSVGPathSegLinetoAbsPrototype::createStructure(JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegLinetoAbs::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegLinetoAbs, Base>(exec, &JSSVGPathSegLinetoAbsTable, this, propertyName, slot);
}

bool JSSVGPathSegLinetoAbs::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegLinetoAbs, Base>(exec, &JSSVGPathSegLinetoAbsTable, this, propertyName, descriptor);
}

JSValue jsSVGPathSegLinetoAbsX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegLinetoAbs* castedThis = static_cast<JSSVGPathSegLinetoAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegLinetoAbs* imp = static_cast<SVGPathSegLinetoAbs*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->x());
    return result;
}

JSValue jsSVGPathSegLinetoAbsY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegLinetoAbs* castedThis = static_cast<JSSVGPathSegLinetoAbs*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegLinetoAbs* imp = static_cast<SVGPathSegLinetoAbs*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->y());
    return result;
}

JSValue jsSVGPathSegLinetoAbsConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGPathSegLinetoAbs* domObject = static_cast<JSSVGPathSegLinetoAbs*>(asObject(slotBase));
    return JSSVGPathSegLinetoAbs::getConstructor(exec, domObject->globalObject());
}
void JSSVGPathSegLinetoAbs::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGPathSegLinetoAbs, Base>(exec, propertyName, value, &JSSVGPathSegLinetoAbsTable, this, slot);
}

void setJSSVGPathSegLinetoAbsX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegLinetoAbs* castedThis = static_cast<JSSVGPathSegLinetoAbs*>(thisObject);
    SVGPathSegLinetoAbs* imp = static_cast<SVGPathSegLinetoAbs*>(castedThis->impl());
    imp->setX(value.toFloat(exec));
    JSSVGContextCache::propagateSVGDOMChange(castedThis, imp->associatedAttributeName());
}

void setJSSVGPathSegLinetoAbsY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGPathSegLinetoAbs* castedThis = static_cast<JSSVGPathSegLinetoAbs*>(thisObject);
    SVGPathSegLinetoAbs* imp = static_cast<SVGPathSegLinetoAbs*>(castedThis->impl());
    imp->setY(value.toFloat(exec));
    JSSVGContextCache::propagateSVGDOMChange(castedThis, imp->associatedAttributeName());
}

JSValue JSSVGPathSegLinetoAbs::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegLinetoAbsConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
