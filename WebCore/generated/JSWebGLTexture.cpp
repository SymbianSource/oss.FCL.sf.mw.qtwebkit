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

#if ENABLE(3D_CANVAS)

#include "JSWebGLTexture.h"

#include "WebGLTexture.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebGLTexture);

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLTexturePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLTexturePrototypeTable = { 1, 0, JSWebGLTexturePrototypeTableValues, 0 };
const ClassInfo JSWebGLTexturePrototype::s_info = { "WebGLTexturePrototype", 0, &JSWebGLTexturePrototypeTable, 0 };

JSObject* JSWebGLTexturePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLTexture>(exec, globalObject);
}

const ClassInfo JSWebGLTexture::s_info = { "WebGLTexture", 0, 0, 0 };

JSWebGLTexture::JSWebGLTexture(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLTexture> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSWebGLTexture::~JSWebGLTexture()
{
    forgetDOMObject(this, impl());
}

JSObject* JSWebGLTexture::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSWebGLTexturePrototype(globalObject, JSWebGLTexturePrototype::createStructure(globalObject->objectPrototype()));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebGLTexture* object)
{
    return getDOMObjectWrapper<JSWebGLTexture>(exec, globalObject, object);
}
WebGLTexture* toWebGLTexture(JSC::JSValue value)
{
    return value.inherits(&JSWebGLTexture::s_info) ? static_cast<JSWebGLTexture*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(3D_CANVAS)
