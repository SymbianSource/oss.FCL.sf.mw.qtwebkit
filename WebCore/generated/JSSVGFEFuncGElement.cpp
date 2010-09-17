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

#include "JSSVGFEFuncGElement.h"

#include "SVGFEFuncGElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEFuncGElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEFuncGElementTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEFuncGElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEFuncGElementTable = { 2, 1, JSSVGFEFuncGElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEFuncGElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEFuncGElementConstructorTable = { 1, 0, JSSVGFEFuncGElementConstructorTableValues, 0 };
class JSSVGFEFuncGElementConstructor : public DOMConstructorObject {
public:
    JSSVGFEFuncGElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGFEFuncGElementConstructor::s_info = { "SVGFEFuncGElementConstructor", 0, &JSSVGFEFuncGElementConstructorTable, 0 };

JSSVGFEFuncGElementConstructor::JSSVGFEFuncGElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGFEFuncGElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSSVGFEFuncGElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGFEFuncGElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEFuncGElementConstructor, DOMObject>(exec, &JSSVGFEFuncGElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFEFuncGElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEFuncGElementConstructor, DOMObject>(exec, &JSSVGFEFuncGElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEFuncGElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEFuncGElementPrototypeTable = { 1, 0, JSSVGFEFuncGElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEFuncGElementPrototype::s_info = { "SVGFEFuncGElementPrototype", 0, &JSSVGFEFuncGElementPrototypeTable, 0 };

JSObject* JSSVGFEFuncGElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEFuncGElement>(exec, globalObject);
}

const ClassInfo JSSVGFEFuncGElement::s_info = { "SVGFEFuncGElement", &JSSVGComponentTransferFunctionElement::s_info, &JSSVGFEFuncGElementTable, 0 };

JSSVGFEFuncGElement::JSSVGFEFuncGElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEFuncGElement> impl)
    : JSSVGComponentTransferFunctionElement(structure, globalObject, impl)
{
}

JSObject* JSSVGFEFuncGElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFEFuncGElementPrototype(globalObject, JSSVGFEFuncGElementPrototype::createStructure(JSSVGComponentTransferFunctionElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEFuncGElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEFuncGElement, Base>(exec, &JSSVGFEFuncGElementTable, this, propertyName, slot);
}

bool JSSVGFEFuncGElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEFuncGElement, Base>(exec, &JSSVGFEFuncGElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFEFuncGElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEFuncGElement* domObject = static_cast<JSSVGFEFuncGElement*>(asObject(slotBase));
    return JSSVGFEFuncGElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGFEFuncGElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEFuncGElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)
