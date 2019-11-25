/**
 * Tencent is pleased to support the open source community by making Tars available.
 *
 * Copyright (C) 2016THL A29 Limited, a Tencent company. All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use this file except 
 * in compliance with the License. You may obtain a copy of the License at
 *
 * https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software distributed 
 * under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR 
 * CONDITIONS OF ANY KIND, either express or implied. See the License for the 
 * specific language governing permissions and limitations under the License.
 */

// **********************************************************************
// This file was generated by a TARS parser!
// TARS version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/tars/upload/renjunyi/MTT.tars'
// **********************************************************************

#import "TarsObjectV2.h"

enum {
    MttELanguageType_ELANG_CHINESE = 0,
    MttELanguageType_ELANG_ENGLISH = 1,
    MttELanguageType_ELANG_TRUECHINESE = 2,
    MttELanguageType_ELANG_THAI = 3,
    MttELanguageType_ELANG_VIETNAMESE = 4,
    MttELanguageType_ELANG_JAPANESE = 5,
    MttELanguageType_ELANG_HINDI = 6,
    MttELanguageType_ELANG_TELUGU = 7,
    MttELanguageType_ELANG_TAMIL = 8,
    MttELanguageType_ELANG_KANNADA = 9,
    MttELanguageType_ELANG_BENGALI = 10,
    MttELanguageType_ELANG_INDONESIA = 11,
    MttELanguageType_ELANG_RUSSIAN = 12,
    MttELanguageType_ELANG_ARABIC = 13,
    MttELanguageType_ELANG_SPANISH = 14,
    MttELanguageType_ELANG_PORTUGUESE = 15,
    MttELanguageType_ELANG_KOREA = 16,
    MttELanguageType_ELANG_UNKNOW = 200
};
#define MttELanguageType NSInteger

#if TARSV2_ENUM_ETOS_AND_STOE_SUPPORTED

@interface MttELanguageTypeHelper: TarsEnumHelper

+ (NSString *)etos:(MttELanguageType)e;
+ (MttELanguageType)stoe:(NSString *)s;

@end

#endif
