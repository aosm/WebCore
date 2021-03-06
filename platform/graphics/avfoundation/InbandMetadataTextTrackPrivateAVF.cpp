/*
 * Copyright (C) 2014 Apple Inc. All rights reserved.
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
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#include "config.h"

#if ENABLE(VIDEO) && ENABLE(DATACUE_VALUE) && (USE(AVFOUNDATION) || PLATFORM(IOS))
#include "InbandMetadataTextTrackPrivateAVF.h"

#include "InbandTextTrackPrivateClient.h"
#include "Logging.h"
#include <CoreMedia/CoreMedia.h>
#include <wtf/PassOwnPtr.h>
#include <wtf/text/CString.h>
#include <wtf/text/WTFString.h>
#include <wtf/unicode/CharacterNames.h>

namespace WebCore {

PassRefPtr<InbandMetadataTextTrackPrivateAVF> InbandMetadataTextTrackPrivateAVF::create(InbandTextTrackPrivate::Kind kind, InbandTextTrackPrivate::CueFormat cueFormat, const AtomicString& id)
{
    return adoptRef(new InbandMetadataTextTrackPrivateAVF(kind, cueFormat, id));
}

InbandMetadataTextTrackPrivateAVF::InbandMetadataTextTrackPrivateAVF(InbandTextTrackPrivate::Kind kind, InbandTextTrackPrivate::CueFormat cueFormat, const AtomicString& id)
    : InbandTextTrackPrivate(cueFormat)
    , m_kind(kind)
    , m_id(id)
    , m_currentCueStartTime(0)
{
}

InbandMetadataTextTrackPrivateAVF::~InbandMetadataTextTrackPrivateAVF()
{
}

#if ENABLE(DATACUE_VALUE)
void InbandMetadataTextTrackPrivateAVF::addDataCue(double start, double end, PassRefPtr<SerializedPlatformRepresentation> prpCueData, const String& type)
{
    ASSERT(cueFormat() == Data);
    if (!client())
        return;

    RefPtr<SerializedPlatformRepresentation> cueData = prpCueData;
    m_currentCueStartTime = start;
    if (end == std::numeric_limits<double>::infinity())
        m_incompleteCues.append(new IncompleteMetaDataCue(start, cueData));
    client()->addDataCue(this, start, end, cueData, type);
}

void InbandMetadataTextTrackPrivateAVF::updatePendingCueEndTimes(double time)
{
    if (time >= m_currentCueStartTime) {
        for (size_t i = 0; i < m_incompleteCues.size(); i++) {
            IncompleteMetaDataCue* partialCue = m_incompleteCues[i];

            LOG(Media, "InbandMetadataTextTrackPrivateAVF::addDataCue(%p) - updating cue: start=%.2f, end=%.2f", this, partialCue->startTime(), time);
            client()->updateDataCue(this, partialCue->startTime(), time, partialCue->cueData());
        }
    } else
        LOG(Media, "InbandMetadataTextTrackPrivateAVF::addDataCue negative length cue(s) ignored: start=%.2f, end=%.2f\n", m_currentCueStartTime, time);

    m_incompleteCues.resize(0);
    m_currentCueStartTime = 0;
}
#endif

void InbandMetadataTextTrackPrivateAVF::flushPartialCues()
{
    if (m_currentCueStartTime && m_incompleteCues.size())
        LOG(Media, "InbandMetadataTextTrackPrivateAVF::resetCueValues flushing incomplete data for cues: start=%.2f\n", m_currentCueStartTime);

    if (client()) {
        for (size_t i = 0; i < m_incompleteCues.size(); i++) {
            IncompleteMetaDataCue* partialCue = m_incompleteCues[i];
            client()->removeDataCue(this, partialCue->startTime(), std::numeric_limits<double>::infinity(), partialCue->cueData());
        }
    }

    m_incompleteCues.resize(0);
    m_currentCueStartTime = 0;
}

} // namespace WebCore

#endif // ENABLE(VIDEO) && (USE(AVFOUNDATION) || PLATFORM(IOS))
