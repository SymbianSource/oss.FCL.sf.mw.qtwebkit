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

#include "JSSVGFEFuncRElement.h"

#include "SVGFEFuncRElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEFuncRElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEFuncRElementTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEFuncRElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEFuncRElementTable = { 2, 1, JSSVGFEFuncRElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEFuncRElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEFuncRElementConstructorTable = { 1, 0, JSSVGFEFuncRElementConstructorTableValues, 0 };
class JSSVGFEFuncRElementConstructor : public DOMConstructorObject {
public:
    JSSVGFEFuncRElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGFEFuncRElementConstructor::s_info = { "SVGFEFuncRElementConstructor", 0, &JSSVGFEFuncRElementConstructorTable, 0 };

JSSVGFEFuncRElementConstructor::JSSVGFEFuncRElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGFEFuncRElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSSVGFEFuncRElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGFEFuncRElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEFuncRElementConstructor, DOMObject>(exec, &JSSVGFEFuncRElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFEFuncRElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEFuncRElementConstructor, DOMObject>(exec, &JSSVGFEFuncRElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEFuncRElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEFuncRElementPrototypeTable = { 1, 0, JSSVGFEFuncRElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEFuncRElementPrototype::s_info = { "SVGFEFuncRElementPrototype", 0, &JSSVGFEFuncRElementPrototypeTable, 0 };

JSObject* JSSVGFEFuncRElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEFuncRElement>(exec, globalObject);
}

const ClassInfo JSSVGFEFuncRElement::s_info = { "SVGFEFuncRElement", &JSSVGComponentTransferFunctionElement::s_info, &JSSVGFEFuncRElementTable, 0 };

JSSVGFEFuncRElement::JSSVGFEFuncRElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEFuncRElement> impl)
    : JSSVGComponentTransferFunctionElement(structure, globalObject, impl)
{
}

JSObject* JSSVGFEFuncRElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFEFuncRElementPrototype(globalObject, JSSVGFEFuncRElementPrototype::createStructure(JSSVGComponentTransferFunctionElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEFuncRElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEFuncRElement, Base>(exec, &JSSVGFEFuncRElementTable, this, propertyName, slot);
}

bool JSSVGFEFuncRElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEFuncRElement, Base>(exec, &JSSVGFEFuncRElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFEFuncRElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEFuncRElement* domObject = static_cast<JSSVGFEFuncRElement*>(asObject(slotBase));
    return JSSVGFEFuncRElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGFEFuncRElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEFuncRElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)