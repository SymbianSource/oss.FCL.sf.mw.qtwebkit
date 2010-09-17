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

#if ENABLE(SVG) && ENABLE(SVG_FONTS)

#include "JSSVGFontFaceNameElement.h"

#include "SVGFontFaceNameElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFontFaceNameElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFontFaceNameElementTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFontFaceNameElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFontFaceNameElementTable = { 2, 1, JSSVGFontFaceNameElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFontFaceNameElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFontFaceNameElementConstructorTable = { 1, 0, JSSVGFontFaceNameElementConstructorTableValues, 0 };
class JSSVGFontFaceNameElementConstructor : public DOMConstructorObject {
public:
    JSSVGFontFaceNameElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGFontFaceNameElementConstructor::s_info = { "SVGFontFaceNameElementConstructor", 0, &JSSVGFontFaceNameElementConstructorTable, 0 };

JSSVGFontFaceNameElementConstructor::JSSVGFontFaceNameElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGFontFaceNameElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSSVGFontFaceNameElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGFontFaceNameElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFontFaceNameElementConstructor, DOMObject>(exec, &JSSVGFontFaceNameElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFontFaceNameElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFontFaceNameElementConstructor, DOMObject>(exec, &JSSVGFontFaceNameElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFontFaceNameElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFontFaceNameElementPrototypeTable = { 1, 0, JSSVGFontFaceNameElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFontFaceNameElementPrototype::s_info = { "SVGFontFaceNameElementPrototype", 0, &JSSVGFontFaceNameElementPrototypeTable, 0 };

JSObject* JSSVGFontFaceNameElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFontFaceNameElement>(exec, globalObject);
}

const ClassInfo JSSVGFontFaceNameElement::s_info = { "SVGFontFaceNameElement", &JSSVGElement::s_info, &JSSVGFontFaceNameElementTable, 0 };

JSSVGFontFaceNameElement::JSSVGFontFaceNameElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFontFaceNameElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGFontFaceNameElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFontFaceNameElementPrototype(globalObject, JSSVGFontFaceNameElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFontFaceNameElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFontFaceNameElement, Base>(exec, &JSSVGFontFaceNameElementTable, this, propertyName, slot);
}

bool JSSVGFontFaceNameElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFontFaceNameElement, Base>(exec, &JSSVGFontFaceNameElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFontFaceNameElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFontFaceNameElement* domObject = static_cast<JSSVGFontFaceNameElement*>(asObject(slotBase));
    return JSSVGFontFaceNameElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGFontFaceNameElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFontFaceNameElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FONTS)
