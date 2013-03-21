/*
 * Copyright (C) 2005, 2008 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#include "config.h"
#include "WrapContentsInDummySpanCommand.h"

#include "ApplyStyleCommand.h"
#include "HTMLElement.h"

namespace WebCore {

WrapContentsInDummySpanCommand::WrapContentsInDummySpanCommand(PassRefPtr<Element> element)
    : SimpleEditCommand(element->document())
    , m_element(element)
{
    ASSERT(m_element);
}

void WrapContentsInDummySpanCommand::doApply()
{
    Vector<RefPtr<Node> > children;
    for (Node* child = m_element->firstChild(); child; child = child->nextSibling())
        children.append(child);

    RefPtr<HTMLElement> span = createStyleSpanElement(document());
 
    ExceptionCode ec;

    size_t size = children.size();
    for (size_t i = 0; i < size; ++i)
        span->appendChild(children[i].release(), ec);

    m_element->appendChild(span.get(), ec);

    m_dummySpan = span.release();
}

void WrapContentsInDummySpanCommand::doUnapply()
{
    ASSERT(m_element);

    RefPtr<HTMLElement> span = m_dummySpan.release();
    if (!span)
        return;

    Vector<RefPtr<Node> > children;
    for (Node* child = span->firstChild(); child; child = child->nextSibling())
        children.append(child);

    ExceptionCode ec;

    size_t size = children.size();
    for (size_t i = 0; i < size; ++i)
        m_element->appendChild(children[i].release(), ec);

    span->remove(ec);
}

} // namespace WebCore
