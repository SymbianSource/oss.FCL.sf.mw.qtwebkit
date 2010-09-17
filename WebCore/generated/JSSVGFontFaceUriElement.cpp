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

#include "JSSVGFontFaceUriElement.h"

#include "SVGFontFaceUriElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFontFaceUriElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFontFaceUriElementTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFontFaceUriElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFontFaceUriElementTable = { 2, 1, JSSVGFontFaceUriElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFontFaceUriElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFontFaceUriElementConstructorTable = { 1, 0, JSSVGFontFaceUriElementConstructorTableValues, 0 };
class JSSVGFontFaceUriElementConstructor : public DOMConstructorObject {
public:
    JSSVGFontFaceUriElementConstructor(JSC::ExecState*, JSDOMGlobalObject*);

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

const ClassInfo JSSVGFontFaceUriElementConstructor::s_info = { "SVGFontFaceUriElementConstructor", 0, &JSSVGFontFaceUriElementConstructorTable, 0 };

JSSVGFontFaceUriElementConstructor::JSSVGFontFaceUriElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(JSSVGFontFaceUriElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
{
    putDirect(exec->propertyNames().prototype, JSSVGFontFaceUriElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGFontFaceUriElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFontFaceUriElementConstructor, DOMObject>(exec, &JSSVGFontFaceUriElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFontFaceUriElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFontFaceUriElementConstructor, DOMObject>(exec, &JSSVGFontFaceUriElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFontFaceUriElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFontFaceUriElementPrototypeTable = { 1, 0, JSSVGFontFaceUriElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFontFaceUriElementPrototype::s_info = { "SVGFontFaceUriElementPrototype", 0, &JSSVGFontFaceUriElementPrototypeTable, 0 };

JSObject* JSSVGFontFaceUriElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFontFaceUriElement>(exec, globalObject);
}

const ClassInfo JSSVGFontFaceUriElement::s_info = { "SVGFontFaceUriElement", &JSSVGElement::s_info, &JSSVGFontFaceUriElementTable, 0 };

JSSVGFontFaceUriElement::JSSVGFontFaceUriElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFontFaceUriElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGFontFaceUriElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFontFaceUriElementPrototype(globalObject, JSSVGFontFaceUriElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFontFaceUriElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFontFaceUriElement, Base>(exec, &JSSVGFontFaceUriElementTable, this, propertyName, slot);
}

bool JSSVGFontFaceUriElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFontFaceUriElement, Base>(exec, &JSSVGFontFaceUriElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFontFaceUriElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFontFaceUriElement* domObject = static_cast<JSSVGFontFaceUriElement*>(asObject(slotBase));
    return JSSVGFontFaceUriElement::getConstructor(exec, domObject->globalObject());
}
JSValue JSSVGFontFaceUriElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFontFaceUriElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FONTS)