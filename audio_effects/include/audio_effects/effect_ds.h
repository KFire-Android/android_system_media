/*
 * Copyright (C) 2013 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_EFFECT_DS_H_
#define ANDROID_EFFECT_DS_H_

#include <hardware/audio_effect.h>

#if __cplusplus
extern "C" {
#endif

// The DS type UUID is not defined by OpenSL ES and has been generated from
// http://www.itu.int/ITU-T/asn1/uuid.html
static const effect_uuid_t EFFECT_SL_IID_DS_ =
    { 0x8ca7b1c0, 0xee54, 0x11e2, 0x8ccd, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } };
const effect_uuid_t * const EFFECT_SL_IID_DS = &EFFECT_SL_IID_DS_;

#if __cplusplus
}  // extern "C"
#endif


#endif /*ANDROID_EFFECT_BASSBOOST_H_*/
