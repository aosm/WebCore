/*
 * This file is part of the WebKit open source project.
 * This file has been generated by generate-bindings.pl. DO NOT MODIFY!
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include "config.h"
#include "WebDOMTestObj.h"

#include "Dictionary.h"
#include "Document.h"
#include "HTMLNames.h"
#include "IDBKey.h"
#include "KURL.h"
#include "SVGPoint.h"
#include "SerializedScriptValue.h"
#include "TestObj.h"
#include "WebDOMDictionary.h"
#include "WebDOMDocument.h"
#include "WebDOMIDBKey.h"
#include "WebDOMSVGPoint.h"
#include "WebDOMString.h"
#include "WebDOMa.h"
#include "WebDOMb.h"
#include "WebDOMbool.h"
#include "WebDOMc.h"
#include "WebDOMd.h"
#include "WebDOMe.h"
#include "WebExceptionHandler.h"
#include "WebNativeEventListener.h"
#include "a.h"
#include "b.h"
#include "bool.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "wtf/text/AtomicString.h"
#include <wtf/GetPtr.h>
#include <wtf/RefPtr.h>

struct WebDOMTestObj::WebDOMTestObjPrivate {
    WebDOMTestObjPrivate(WebCore::TestObj* object = 0)
        : impl(object)
    {
    }

    RefPtr<WebCore::TestObj> impl;
};

WebDOMTestObj::WebDOMTestObj()
    : WebDOMObject()
    , m_impl(0)
{
}

WebDOMTestObj::WebDOMTestObj(WebCore::TestObj* impl)
    : WebDOMObject()
    , m_impl(new WebDOMTestObjPrivate(impl))
{
}

WebDOMTestObj::WebDOMTestObj(const WebDOMTestObj& copy)
    : WebDOMObject()
{
    m_impl = copy.impl() ? new WebDOMTestObjPrivate(copy.impl()) : 0;
}

WebDOMTestObj& WebDOMTestObj::operator=(const WebDOMTestObj& copy)
{
    delete m_impl;
    m_impl = copy.impl() ? new WebDOMTestObjPrivate(copy.impl()) : 0;
    return *this;
}

WebCore::TestObj* WebDOMTestObj::impl() const
{
    return m_impl ? WTF::getPtr(m_impl->impl) : 0;
}

WebDOMTestObj::~WebDOMTestObj()
{
    delete m_impl;
    m_impl = 0;
}

int WebDOMTestObj::readOnlyIntAttr() const
{
    if (!impl())
        return 0;

    return impl()->readOnlyIntAttr();
}

WebDOMString WebDOMTestObj::readOnlyStringAttr() const
{
    if (!impl())
        return WebDOMString();

    return static_cast<const WTF::String&>(impl()->readOnlyStringAttr());
}

WebDOMTestObj WebDOMTestObj::readOnlyTestObjAttr() const
{
    if (!impl())
        return WebDOMTestObj();

    return toWebKit(WTF::getPtr(impl()->readOnlyTestObjAttr()));
}

short WebDOMTestObj::shortAttr() const
{
    if (!impl())
        return 0;

    return impl()->shortAttr();
}

void WebDOMTestObj::setShortAttr(short newShortAttr)
{
    if (!impl())
        return;

    impl()->setShortAttr(newShortAttr);
}

unsigned short WebDOMTestObj::unsignedShortAttr() const
{
    if (!impl())
        return 0;

    return impl()->unsignedShortAttr();
}

void WebDOMTestObj::setUnsignedShortAttr(unsigned short newUnsignedShortAttr)
{
    if (!impl())
        return;

    impl()->setUnsignedShortAttr(newUnsignedShortAttr);
}

int WebDOMTestObj::intAttr() const
{
    if (!impl())
        return 0;

    return impl()->intAttr();
}

void WebDOMTestObj::setIntAttr(int newIntAttr)
{
    if (!impl())
        return;

    impl()->setIntAttr(newIntAttr);
}

long long WebDOMTestObj::longLongAttr() const
{
    if (!impl())
        return 0;

    return impl()->longLongAttr();
}

void WebDOMTestObj::setLongLongAttr(long long newLongLongAttr)
{
    if (!impl())
        return;

    impl()->setLongLongAttr(newLongLongAttr);
}

unsigned long long WebDOMTestObj::unsignedLongLongAttr() const
{
    if (!impl())
        return 0;

    return impl()->unsignedLongLongAttr();
}

void WebDOMTestObj::setUnsignedLongLongAttr(unsigned long long newUnsignedLongLongAttr)
{
    if (!impl())
        return;

    impl()->setUnsignedLongLongAttr(newUnsignedLongLongAttr);
}

WebDOMString WebDOMTestObj::stringAttr() const
{
    if (!impl())
        return WebDOMString();

    return static_cast<const WTF::String&>(impl()->stringAttr());
}

void WebDOMTestObj::setStringAttr(const WebDOMString& newStringAttr)
{
    if (!impl())
        return;

    impl()->setStringAttr(newStringAttr);
}

WebDOMTestObj WebDOMTestObj::testObjAttr() const
{
    if (!impl())
        return WebDOMTestObj();

    return toWebKit(WTF::getPtr(impl()->testObjAttr()));
}

void WebDOMTestObj::setTestObjAttr(const WebDOMTestObj& newTestObjAttr)
{
    if (!impl())
        return;

    impl()->setTestObjAttr(toWebCore(newTestObjAttr));
}

WebDOMTestObj WebDOMTestObj::XMLObjAttr() const
{
    if (!impl())
        return WebDOMTestObj();

    return toWebKit(WTF::getPtr(impl()->xmlObjAttr()));
}

void WebDOMTestObj::setXMLObjAttr(const WebDOMTestObj& newXMLObjAttr)
{
    if (!impl())
        return;

    impl()->setXMLObjAttr(toWebCore(newXMLObjAttr));
}

bool WebDOMTestObj::create() const
{
    if (!impl())
        return false;

    return impl()->isCreate();
}

void WebDOMTestObj::setCreate(bool newCreate)
{
    if (!impl())
        return;

    impl()->setCreate(newCreate);
}

WebDOMString WebDOMTestObj::reflectedStringAttr() const
{
    if (!impl())
        return WebDOMString();

    return static_cast<const WTF::String&>(impl()->getAttribute(WebCore::HTMLNames::reflectedstringattrAttr));
}

void WebDOMTestObj::setReflectedStringAttr(const WebDOMString& newReflectedStringAttr)
{
    if (!impl())
        return;

    impl()->setAttribute(WebCore::HTMLNames::reflectedstringattrAttr, newReflectedStringAttr);
}

int WebDOMTestObj::reflectedIntegralAttr() const
{
    if (!impl())
        return 0;

    return impl()->getIntegralAttribute(WebCore::HTMLNames::reflectedintegralattrAttr);
}

void WebDOMTestObj::setReflectedIntegralAttr(int newReflectedIntegralAttr)
{
    if (!impl())
        return;

    impl()->setIntegralAttribute(WebCore::HTMLNames::reflectedintegralattrAttr, newReflectedIntegralAttr);
}

unsigned WebDOMTestObj::reflectedUnsignedIntegralAttr() const
{
    if (!impl())
        return unsigned();

    return impl()->getUnsignedIntegralAttribute(WebCore::HTMLNames::reflectedunsignedintegralattrAttr);
}

void WebDOMTestObj::setReflectedUnsignedIntegralAttr(unsigned newReflectedUnsignedIntegralAttr)
{
    if (!impl())
        return;

    impl()->setUnsignedIntegralAttribute(WebCore::HTMLNames::reflectedunsignedintegralattrAttr, newReflectedUnsignedIntegralAttr);
}

bool WebDOMTestObj::reflectedBooleanAttr() const
{
    if (!impl())
        return false;

    return impl()->hasAttribute(WebCore::HTMLNames::reflectedbooleanattrAttr);
}

void WebDOMTestObj::setReflectedBooleanAttr(bool newReflectedBooleanAttr)
{
    if (!impl())
        return;

    impl()->setBooleanAttribute(WebCore::HTMLNames::reflectedbooleanattrAttr, newReflectedBooleanAttr);
}

WebDOMString WebDOMTestObj::reflectedURLAttr() const
{
    if (!impl())
        return WebDOMString();

    return static_cast<const WTF::String&>(impl()->getURLAttribute(WebCore::HTMLNames::reflectedurlattrAttr));
}

void WebDOMTestObj::setReflectedURLAttr(const WebDOMString& newReflectedURLAttr)
{
    if (!impl())
        return;

    impl()->setAttribute(WebCore::HTMLNames::reflectedurlattrAttr, newReflectedURLAttr);
}

WebDOMString WebDOMTestObj::reflectedStringAttr() const
{
    if (!impl())
        return WebDOMString();

    return static_cast<const WTF::String&>(impl()->getAttribute(WebCore::HTMLNames::customContentStringAttrAttr));
}

void WebDOMTestObj::setReflectedStringAttr(const WebDOMString& newReflectedStringAttr)
{
    if (!impl())
        return;

    impl()->setAttribute(WebCore::HTMLNames::customContentStringAttrAttr, newReflectedStringAttr);
}

int WebDOMTestObj::reflectedCustomIntegralAttr() const
{
    if (!impl())
        return 0;

    return impl()->getIntegralAttribute(WebCore::HTMLNames::customContentIntegralAttrAttr);
}

void WebDOMTestObj::setReflectedCustomIntegralAttr(int newReflectedCustomIntegralAttr)
{
    if (!impl())
        return;

    impl()->setIntegralAttribute(WebCore::HTMLNames::customContentIntegralAttrAttr, newReflectedCustomIntegralAttr);
}

bool WebDOMTestObj::reflectedCustomBooleanAttr() const
{
    if (!impl())
        return false;

    return impl()->hasAttribute(WebCore::HTMLNames::customContentBooleanAttrAttr);
}

void WebDOMTestObj::setReflectedCustomBooleanAttr(bool newReflectedCustomBooleanAttr)
{
    if (!impl())
        return;

    impl()->setBooleanAttribute(WebCore::HTMLNames::customContentBooleanAttrAttr, newReflectedCustomBooleanAttr);
}

WebDOMString WebDOMTestObj::reflectedCustomURLAttr() const
{
    if (!impl())
        return WebDOMString();

    return static_cast<const WTF::String&>(impl()->getURLAttribute(WebCore::HTMLNames::customContentURLAttrAttr));
}

void WebDOMTestObj::setReflectedCustomURLAttr(const WebDOMString& newReflectedCustomURLAttr)
{
    if (!impl())
        return;

    impl()->setAttribute(WebCore::HTMLNames::customContentURLAttrAttr, newReflectedCustomURLAttr);
}

int WebDOMTestObj::attrWithGetterException() const
{
    if (!impl())
        return 0;

    WebCore::ExceptionCode ec = 0;
    int result = impl()->attrWithGetterException(ec);
    webDOMRaiseError(static_cast<WebDOMExceptionCode>(ec));
    return result;
}

void WebDOMTestObj::setAttrWithGetterException(int newAttrWithGetterException)
{
    if (!impl())
        return;

    WebCore::ExceptionCode ec = 0;
    impl()->setAttrWithGetterException(newAttrWithGetterException, ec);
    webDOMRaiseError(static_cast<WebDOMExceptionCode>(ec));
}

int WebDOMTestObj::attrWithSetterException() const
{
    if (!impl())
        return 0;

    return impl()->attrWithSetterException();
}

void WebDOMTestObj::setAttrWithSetterException(int newAttrWithSetterException)
{
    if (!impl())
        return;

    WebCore::ExceptionCode ec = 0;
    impl()->setAttrWithSetterException(newAttrWithSetterException, ec);
    webDOMRaiseError(static_cast<WebDOMExceptionCode>(ec));
}

WebDOMString WebDOMTestObj::stringAttrWithGetterException() const
{
    if (!impl())
        return WebDOMString();

    WebCore::ExceptionCode ec = 0;
    WebDOMString result = impl()->stringAttrWithGetterException(ec);
    webDOMRaiseError(static_cast<WebDOMExceptionCode>(ec));
    return static_cast<const WTF::String&>(result);
}

void WebDOMTestObj::setStringAttrWithGetterException(const WebDOMString& newStringAttrWithGetterException)
{
    if (!impl())
        return;

    WebCore::ExceptionCode ec = 0;
    impl()->setStringAttrWithGetterException(newStringAttrWithGetterException, ec);
    webDOMRaiseError(static_cast<WebDOMExceptionCode>(ec));
}

WebDOMString WebDOMTestObj::stringAttrWithSetterException() const
{
    if (!impl())
        return WebDOMString();

    return static_cast<const WTF::String&>(impl()->stringAttrWithSetterException());
}

void WebDOMTestObj::setStringAttrWithSetterException(const WebDOMString& newStringAttrWithSetterException)
{
    if (!impl())
        return;

    WebCore::ExceptionCode ec = 0;
    impl()->setStringAttrWithSetterException(newStringAttrWithSetterException, ec);
    webDOMRaiseError(static_cast<WebDOMExceptionCode>(ec));
}

#if ENABLE(Condition1)
int WebDOMTestObj::conditionalAttr1() const
{
    if (!impl())
        return 0;

    return impl()->conditionalAttr1();
}

void WebDOMTestObj::setConditionalAttr1(int newConditionalAttr1)
{
    if (!impl())
        return;

    impl()->setConditionalAttr1(newConditionalAttr1);
}

#endif
#if ENABLE(Condition1) && ENABLE(Condition2)
int WebDOMTestObj::conditionalAttr2() const
{
    if (!impl())
        return 0;

    return impl()->conditionalAttr2();
}

void WebDOMTestObj::setConditionalAttr2(int newConditionalAttr2)
{
    if (!impl())
        return;

    impl()->setConditionalAttr2(newConditionalAttr2);
}

#endif
#if ENABLE(Condition1) || ENABLE(Condition2)
int WebDOMTestObj::conditionalAttr3() const
{
    if (!impl())
        return 0;

    return impl()->conditionalAttr3();
}

void WebDOMTestObj::setConditionalAttr3(int newConditionalAttr3)
{
    if (!impl())
        return;

    impl()->setConditionalAttr3(newConditionalAttr3);
}

#endif
WebDOMDocument WebDOMTestObj::contentDocument() const
{
    if (!impl())
        return WebDOMDocument();

    return toWebKit(WTF::getPtr(impl()->contentDocument()));
}

WebDOMSVGPoint WebDOMTestObj::mutablePoint() const
{
    if (!impl())
        return WebDOMSVGPoint();

    return toWebKit(WTF::getPtr(impl()->mutablePoint()));
}

void WebDOMTestObj::setMutablePoint(const WebDOMSVGPoint& newMutablePoint)
{
    if (!impl())
        return;

    impl()->setMutablePoint(toWebCore(newMutablePoint));
}

WebDOMSVGPoint WebDOMTestObj::immutablePoint() const
{
    if (!impl())
        return WebDOMSVGPoint();

    return toWebKit(WTF::getPtr(impl()->immutablePoint()));
}

void WebDOMTestObj::setImmutablePoint(const WebDOMSVGPoint& newImmutablePoint)
{
    if (!impl())
        return;

    impl()->setImmutablePoint(toWebCore(newImmutablePoint));
}

int WebDOMTestObj::strawberry() const
{
    if (!impl())
        return 0;

    return impl()->blueberry();
}

void WebDOMTestObj::setStrawberry(int newStrawberry)
{
    if (!impl())
        return;

    impl()->setBlueberry(newStrawberry);
}

float WebDOMTestObj::strictFloat() const
{
    if (!impl())
        return 0;

    return impl()->strictFloat();
}

void WebDOMTestObj::setStrictFloat(float newStrictFloat)
{
    if (!impl())
        return;

    impl()->setStrictFloat(newStrictFloat);
}

int WebDOMTestObj::description() const
{
    if (!impl())
        return 0;

    return impl()->description();
}

int WebDOMTestObj::id() const
{
    if (!impl())
        return 0;

    return impl()->id();
}

void WebDOMTestObj::setId(int newId)
{
    if (!impl())
        return;

    impl()->setId(newId);
}

WebDOMString WebDOMTestObj::hash() const
{
    if (!impl())
        return WebDOMString();

    return static_cast<const WTF::String&>(impl()->hash());
}

void WebDOMTestObj::voidMethod()
{
    if (!impl())
        return;

    impl()->voidMethod();
}

void WebDOMTestObj::voidMethodWithArgs(int intArg, const WebDOMString& strArg, const WebDOMTestObj& objArg)
{
    if (!impl())
        return;

    impl()->voidMethodWithArgs(intArg, strArg, toWebCore(objArg));
}

int WebDOMTestObj::intMethod()
{
    if (!impl())
        return 0;

    return impl()->intMethod();
}

int WebDOMTestObj::intMethodWithArgs(int intArg, const WebDOMString& strArg, const WebDOMTestObj& objArg)
{
    if (!impl())
        return 0;

    return impl()->intMethodWithArgs(intArg, strArg, toWebCore(objArg));
}

WebDOMTestObj WebDOMTestObj::objMethod()
{
    if (!impl())
        return WebDOMTestObj();

    return toWebKit(WTF::getPtr(impl()->objMethod()));
}

WebDOMTestObj WebDOMTestObj::objMethodWithArgs(int intArg, const WebDOMString& strArg, const WebDOMTestObj& objArg)
{
    if (!impl())
        return WebDOMTestObj();

    return toWebKit(WTF::getPtr(impl()->objMethodWithArgs(intArg, strArg, toWebCore(objArg))));
}

WebDOMTestObj WebDOMTestObj::methodThatRequiresAllArgsAndThrows(const WebDOMString& strArg, const WebDOMTestObj& objArg)
{
    if (!impl())
        return WebDOMTestObj();

    WebCore::ExceptionCode ec = 0;
    WebDOMTestObj result = toWebKit(WTF::getPtr(impl()->methodThatRequiresAllArgsAndThrows(strArg, toWebCore(objArg), ec)));
    webDOMRaiseError(static_cast<WebDOMExceptionCode>(ec));
    return result;
}

void WebDOMTestObj::serializedValue(const WebDOMString& serializedArg)
{
    if (!impl())
        return;

    impl()->serializedValue(WebCore::SerializedScriptValue::create(WTF::String(serializedArg)));
}

void WebDOMTestObj::idbKey(const WebDOMIDBKey& key)
{
    if (!impl())
        return;

    impl()->idbKey(toWebCore(key));
}

void WebDOMTestObj::optionsObject(const WebDOMDictionary& oo, const WebDOMDictionary& ooo)
{
    if (!impl())
        return;

    impl()->optionsObject(toWebCore(oo), toWebCore(ooo));
}

void WebDOMTestObj::methodWithException()
{
    if (!impl())
        return;

    WebCore::ExceptionCode ec = 0;
    impl()->methodWithException(ec);
    webDOMRaiseError(static_cast<WebDOMExceptionCode>(ec));
}

void WebDOMTestObj::addEventListener(const WebDOMString& type, const WebDOMEventListener& listener, bool useCapture)
{
    if (!impl())
        return;

    impl()->addEventListener(type, toWebCore(listener), useCapture);
}

void WebDOMTestObj::removeEventListener(const WebDOMString& type, const WebDOMEventListener& listener, bool useCapture)
{
    if (!impl())
        return;

    impl()->removeEventListener(type, toWebCore(listener), useCapture);
}

void WebDOMTestObj::methodWithOptionalArg(int opt)
{
    if (!impl())
        return;

    impl()->methodWithOptionalArg(opt);
}

void WebDOMTestObj::methodWithNonOptionalArgAndOptionalArg(int nonOpt, int opt)
{
    if (!impl())
        return;

    impl()->methodWithNonOptionalArgAndOptionalArg(nonOpt, opt);
}

void WebDOMTestObj::methodWithNonOptionalArgAndTwoOptionalArgs(int nonOpt, int opt1, int opt2)
{
    if (!impl())
        return;

    impl()->methodWithNonOptionalArgAndTwoOptionalArgs(nonOpt, opt1, opt2);
}

void WebDOMTestObj::methodWithOptionalString(const WebDOMString& str)
{
    if (!impl())
        return;

    impl()->methodWithOptionalString(str);
}

void WebDOMTestObj::methodWithOptionalStringIsUndefined(const WebDOMString& str)
{
    if (!impl())
        return;

    impl()->methodWithOptionalStringIsUndefined(str);
}

void WebDOMTestObj::methodWithOptionalStringIsNullString(const WebDOMString& str)
{
    if (!impl())
        return;

    impl()->methodWithOptionalStringIsNullString(str);
}


#if ENABLE(Condition1)
WebDOMString WebDOMTestObj::conditionalMethod1()
{
    if (!impl())
        return WebDOMString();

    return impl()->conditionalMethod1();
}

#endif


#if ENABLE(Condition1) && ENABLE(Condition2)
void WebDOMTestObj::conditionalMethod2()
{
    if (!impl())
        return;

    impl()->conditionalMethod2();
}

#endif


#if ENABLE(Condition1) || ENABLE(Condition2)
void WebDOMTestObj::conditionalMethod3()
{
    if (!impl())
        return;

    impl()->conditionalMethod3();
}

#endif

void WebDOMTestObj::classMethod()
{
    if (!impl())
        return;

    impl()->classMethod();
}

int WebDOMTestObj::classMethodWithOptional(int arg)
{
    if (!impl())
        return 0;

    return impl()->classMethodWithOptional(arg);
}


#if ENABLE(Condition1)
void WebDOMTestObj::overloadedMethod1(int arg)
{
    if (!impl())
        return;

    impl()->overloadedMethod1(arg);
}

#endif


#if ENABLE(Condition1)
void WebDOMTestObj::overloadedMethod1(const WebDOMString& type)
{
    if (!impl())
        return;

    impl()->overloadedMethod1(type);
}

#endif

void WebDOMTestObj::convert1(const WebDOMa& )
{
    if (!impl())
        return;

    impl()->convert1(toWebCore());
}

void WebDOMTestObj::convert2(const WebDOMb& )
{
    if (!impl())
        return;

    impl()->convert2(toWebCore());
}

void WebDOMTestObj::convert3(const WebDOMc& )
{
    if (!impl())
        return;

    impl()->convert3(toWebCore());
}

void WebDOMTestObj::convert4(const WebDOMd& )
{
    if (!impl())
        return;

    impl()->convert4(toWebCore());
}

void WebDOMTestObj::convert5(const WebDOMe& )
{
    if (!impl())
        return;

    impl()->convert5(toWebCore());
}

WebDOMSVGPoint WebDOMTestObj::mutablePointFunction()
{
    if (!impl())
        return WebDOMSVGPoint();

    return toWebKit(WTF::getPtr(impl()->mutablePointFunction()));
}

WebDOMSVGPoint WebDOMTestObj::immutablePointFunction()
{
    if (!impl())
        return WebDOMSVGPoint();

    return toWebKit(WTF::getPtr(impl()->immutablePointFunction()));
}

void WebDOMTestObj::orange()
{
    if (!impl())
        return;

    impl()->orange();
}

WebDOMbool WebDOMTestObj::strictFunction(const WebDOMString& str, float a, int b)
{
    if (!impl())
        return WebDOMbool();

    WebCore::ExceptionCode ec = 0;
    WebDOMbool result = toWebKit(WTF::getPtr(impl()->strictFunction(str, a, b, ec)));
    webDOMRaiseError(static_cast<WebDOMExceptionCode>(ec));
    return result;
}

WebCore::TestObj* toWebCore(const WebDOMTestObj& wrapper)
{
    return wrapper.impl();
}

WebDOMTestObj toWebKit(WebCore::TestObj* value)
{
    return WebDOMTestObj(value);
}
