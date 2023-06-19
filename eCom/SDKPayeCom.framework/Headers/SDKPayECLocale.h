//
//  SDKPayECLocale.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 11/12/15.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of Locales supported by ElasticEngine */
typedef NS_ENUM(NSUInteger, SDKPayECLocale) {
    /** Uninitialized or invalid value */
    SDKPayECLocaleUndefined = 0,

    /** Afrikaans                   Afrikaans */
    SDKPayECLocale_af,
    /** Arabic                      عربي */
    SDKPayECLocale_ar,
    /** Azerbaijani                 Azərbaycan */
    SDKPayECLocale_az,
    /** Belarusian                  Беларускія */
    SDKPayECLocale_be,
    /** Bulgarian                   Български */
    SDKPayECLocale_bg,
    /** Bengali                     বাঙ্গালী */
    SDKPayECLocale_bn,
    /** Catalan                     català */
    SDKPayECLocale_ca,
    /** Czech                       Česky */
    SDKPayECLocale_cs,
    /** Welsh                       Cymraeg */
    SDKPayECLocale_cy,
    /** Danish                      Dansk */
    SDKPayECLocale_da,
    /** German                      Deutsch */
    SDKPayECLocale_de,
    /** Greek                       Ελληνικά */
    SDKPayECLocale_el,
    /** English                     English */
    SDKPayECLocale_en,
    /** Esperanto                   Esperanto */
    SDKPayECLocale_eo,
    /** Spanish                     Español */
    SDKPayECLocale_es,
    /** Estonian                    Eesti */
    SDKPayECLocale_et,
    /** Basque                      Euskal */
    SDKPayECLocale_eu,
    /** Persian                     پارسی */
    SDKPayECLocale_fa,
    /** Finnish                     Suomi */
    SDKPayECLocale_fi,
    /** French                      Français */
    SDKPayECLocale_fr,
    /** Irish                       Gaeilge */
    SDKPayECLocale_ga,
    /** Galician                    Galicia */
    SDKPayECLocale_gl,
    /** Gujarati                    ગુજરાતી */
    SDKPayECLocale_gu,
    /** Hindi                       हिन्दी भाषा */
    SDKPayECLocale_hi,
    /** Croatian                    Hrvat */
    SDKPayECLocale_hr,
    /** Haitian Creole              kreyòl ayisyen */
    SDKPayECLocale_ht,
    /** Hungarian                   Magyar */
    SDKPayECLocale_hu,
    /** Armenian                    հայերեն */
    SDKPayECLocale_hy,
    /** Indonesian                  Bahasa Indonesia */
    SDKPayECLocale_id,
    /** Icelandic                   Icelandic */
    SDKPayECLocale_is,
    /** Italian                     Italiano */
    SDKPayECLocale_it,
    /** Hebrew                      עברית */
    SDKPayECLocale_iw,
    /** Japanese                    日本語 */
    SDKPayECLocale_ja,
    /** Georgian                    საქართველოს */
    SDKPayECLocale_ka,
    /** Kannadac                    Kannadac */
    SDKPayECLocale_kn,
    /** Korean                      한국어 */
    SDKPayECLocale_ko,
    /** Latin                       lingua latina */
    SDKPayECLocale_la,
    /** Lithuanian                  lietuvis */
    SDKPayECLocale_lt,
    /** Latvian                     latvietis */
    SDKPayECLocale_lv,
    /** Macedonian                  македонски */
    SDKPayECLocale_mk,
    /** Malay                       Melayu */
    SDKPayECLocale_ms,
    /** Maltese                     Malti */
    SDKPayECLocale_mt,
    /** Dutch                       Nederlands */
    SDKPayECLocale_nl,
    /** Norwegian                   Norsk */
    SDKPayECLocale_no,
    /** Polish                      Polski */
    SDKPayECLocale_pl,
    /** Portuguese                  Português */
    SDKPayECLocale_pt,
    /** Romanian                    Română */
    SDKPayECLocale_ro,
    /** Russian                     Русский */
    SDKPayECLocale_ru,
    /** Slovak                      slovenčina */
    SDKPayECLocale_sk,
    /** Slovenian                   Slovenski jezik */
    SDKPayECLocale_sl,
    /** Albanian                    shqiptar */
    SDKPayECLocale_sq,
    /** Serbian                     Србин */
    SDKPayECLocale_sr,
    /** Swedish                     Svenska */
    SDKPayECLocale_sv,
    /** Swahili                     Svahili */
    SDKPayECLocale_sw,
    /** Tamil                       தமிழ் */
    SDKPayECLocale_ta,
    /** Telugu                      తెలుగు */
    SDKPayECLocale_te,
    /** Thai                        ภาษาไทย */
    SDKPayECLocale_th,
    /** Filipino                    Pilipino */
    SDKPayECLocale_tl,
    /** Turkish                     Türkçe */
    SDKPayECLocale_tr,
    /** Ukrainian                   Українська */
    SDKPayECLocale_uk,
    /** Urdu                        اردو */
    SDKPayECLocale_ur,
    /** Vietnamese                  ngôn ngư Việt nam */
    SDKPayECLocale_vi,
    /** Yiddish                     ייִדיש */
    SDKPayECLocale_yi,
    /** Chinese (Simplified)        中文（简体) */
    SDKPayECLocale_zh_CN,
    /** Chinese (Traditional)       中文（繁体） */
    SDKPayECLocale_zh_TW,

    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECLocaleTotalNumber
};

/** @} */
