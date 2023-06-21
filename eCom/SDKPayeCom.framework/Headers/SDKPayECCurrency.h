//
//  SDKPayECCurrency.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 10/29/15.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of currencies supported by ElasticEngine
 */
typedef NS_ENUM(NSUInteger, SDKPayECCurrency) {
    /** Uninitialized or invalid value */
    SDKPayECCurrencyUndefined = 0,
    
    /** Andorran Peseta */
    SDKPayECCurrencyADP,
    /** Dirhams */
    SDKPayECCurrencyAED,
    /** Afghanis */
    SDKPayECCurrencyAFN,
    /** Leke */
    SDKPayECCurrencyALL,
    /** Drams */
    SDKPayECCurrencyAMD,
    /** Guilders (also called Florins) */
    SDKPayECCurrencyANG,
    /** Kwanza */
    SDKPayECCurrencyAOA,
    /** Pesos */
    SDKPayECCurrencyARS,
    /** Dollars */
    SDKPayECCurrencyAUD,
    /** Guilders (also called Florins) */
    SDKPayECCurrencyAWG,
    /** New Manats */
    SDKPayECCurrencyAZN,
    /** Convertible Marka */
    SDKPayECCurrencyBAM,
    /** Dollars */
    SDKPayECCurrencyBBD,
    /** Taka */
    SDKPayECCurrencyBDT,
    /** Leva */
    SDKPayECCurrencyBGN,
    /** Dinars */
    SDKPayECCurrencyBHD,
    /** Francs */
    SDKPayECCurrencyBIF,
    /** Dollars */
    SDKPayECCurrencyBMD,
    /** Dollars */
    SDKPayECCurrencyBND,
    /** Bolivianos */
    SDKPayECCurrencyBOB,
    /** Brazil Real */
    SDKPayECCurrencyBRL,
    /** Dollars */
    SDKPayECCurrencyBSD,
    /** Ngultrum */
    SDKPayECCurrencyBTN,
    /** Pulas */
    SDKPayECCurrencyBWP,
    /** Rubles */
    SDKPayECCurrencyBYR,
    /** Dollars */
    SDKPayECCurrencyBZD,
    /** Dollars */
    SDKPayECCurrencyCAD,
    /** Congolese Francs */
    SDKPayECCurrencyCDF,
    /** Francs */
    SDKPayECCurrencyCHF,
    /** Unidades de formento */
    SDKPayECCurrencyCLF,
    /** Pesos */
    SDKPayECCurrencyCLP,
    /** Yuan Renminbi */
    SDKPayECCurrencyCNY,
    /** Pesos */
    SDKPayECCurrencyCOP,
    /** Colones */
    SDKPayECCurrencyCRC,
    /** Pesos */
    SDKPayECCurrencyCUP,
    /** Escudos */
    SDKPayECCurrencyCVE,
    /** Pounds (expires 2008-Jan-31) */
    SDKPayECCurrencyCYP,
    /** Koruny */
    SDKPayECCurrencyCZK,
    /** Default */
    SDKPayECCurrencyDEF,
    /** Francs */
    SDKPayECCurrencyDJF,
    /** Kroner */
    SDKPayECCurrencyDKK,
    /** Pesos */
    SDKPayECCurrencyDOP,
    /** Algeria Dinars */
    SDKPayECCurrencyDZD,
    /** Krooni */
    SDKPayECCurrencyEEK,
    /** Pounds */
    SDKPayECCurrencyEGP,
    /** Nakfa */
    SDKPayECCurrencyERN,
    /** Birr */
    SDKPayECCurrencyETB,
    /** Euro */
    SDKPayECCurrencyEUR,
    /** Dollars */
    SDKPayECCurrencyFJD,
    /** Pounds */
    SDKPayECCurrencyFKP,
    /** Pounds */
    SDKPayECCurrencyGBP,
    /** Lari */
    SDKPayECCurrencyGEL,
    /** Pounds */
    SDKPayECCurrencyGGP,
    /** Cedis */
    SDKPayECCurrencyGHS,
    /** Pounds */
    SDKPayECCurrencyGIP,
    /** Dalasi */
    SDKPayECCurrencyGMD,
    /** Francs */
    SDKPayECCurrencyGNF,
    /** Quetzales */
    SDKPayECCurrencyGTQ,
    /** Dollars */
    SDKPayECCurrencyGYD,
    /** Dollars */
    SDKPayECCurrencyHKD,
    /** Lempiras */
    SDKPayECCurrencyHNL,
    /** Kuna */
    SDKPayECCurrencyHRK,
    /** Gourdes */
    SDKPayECCurrencyHTG,
    /** Forint */
    SDKPayECCurrencyHUF,
    /** Rupiahs */
    SDKPayECCurrencyIDR,
    /** New Shekels */
    SDKPayECCurrencyILS,
    /** Pounds */
    SDKPayECCurrencyIMP,
    /** Rupees */
    SDKPayECCurrencyINR,
    /** Dinars */
    SDKPayECCurrencyIQD,
    /** Rials */
    SDKPayECCurrencyIRR,
    /** Kronur */
    SDKPayECCurrencyISK,
    /** Pounds */
    SDKPayECCurrencyJEP,
    /** Dollars */
    SDKPayECCurrencyJMD,
    /** Dinars */
    SDKPayECCurrencyJOD,
    /** Yen */
    SDKPayECCurrencyJPY,
    /** Shillings */
    SDKPayECCurrencyKES,
    /** Soms */
    SDKPayECCurrencyKGS,
    /** Riels */
    SDKPayECCurrencyKHR,
    /** Francs */
    SDKPayECCurrencyKMF,
    /** Won */
    SDKPayECCurrencyKPW,
    /** Won */
    SDKPayECCurrencyKRW,
    /** Dinars */
    SDKPayECCurrencyKSDKPay,
    /** Dollars */
    SDKPayECCurrencyKYD,
    /** Tenge */
    SDKPayECCurrencyKZT,
    /** Kips */
    SDKPayECCurrencyLAK,
    /** Pounds */
    SDKPayECCurrencyLBP,
    /** Rupees */
    SDKPayECCurrencyLKR,
    /** Dollars */
    SDKPayECCurrencyLRD,
    /** Maloti */
    SDKPayECCurrencyLSL,
    /** Litai */
    SDKPayECCurrencyLTL,
    /** Lati */
    SDKPayECCurrencyLVL,
    /** Dinars */
    SDKPayECCurrencyLYD,
    /** Airline Miles */
    SDKPayECCurrencyM_M,
    /** Dirhams */
    SDKPayECCurrencyMAD,
    /** Lei */
    SDKPayECCurrencyMDL,
    /** Ariary */
    SDKPayECCurrencyMGA,
    /** Denars */
    SDKPayECCurrencyMKD,
    /** Kyats */
    SDKPayECCurrencyMMK,
    /** Tugriks */
    SDKPayECCurrencyMNT,
    /** Patacas */
    SDKPayECCurrencyMOP,
    /** Ouguiyas */
    SDKPayECCurrencyMRO,
    /** Liri (expires 2008-Jan-31) */
    SDKPayECCurrencyMTL,
    /** Rupees */
    SDKPayECCurrencyMUR,
    /** Rufiyaa */
    SDKPayECCurrencyMVR,
    /** Kwachas */
    SDKPayECCurrencyMWK,
    /** Pesos */
    SDKPayECCurrencyMXN,
    /** Ringgits */
    SDKPayECCurrencyMYR,
    /** Meticais */
    SDKPayECCurrencyMZN,
    /** Dollars */
    SDKPayECCurrencyNAD,
    /** Nairas */
    SDKPayECCurrencyNGN,
    /** Cordobas */
    SDKPayECCurrencyNIO,
    /** Krone */
    SDKPayECCurrencyNOK,
    /** Nepal Rupees */
    SDKPayECCurrencyNPR,
    /** Dollars */
    SDKPayECCurrencyNZD,
    /** Rials */
    SDKPayECCurrencyOMR,
    /** Balboa */
    SDKPayECCurrencyPAB,
    /** Nuevos Soles */
    SDKPayECCurrencyPEN,
    /** Kina */
    SDKPayECCurrencyPGK,
    /** Pesos */
    SDKPayECCurrencyPHP,
    /** Rupees */
    SDKPayECCurrencyPKR,
    /** Zlotych */
    SDKPayECCurrencyPLN,
    /** Guarani */
    SDKPayECCurrencyPYG,
    /** Rials */
    SDKPayECCurrencyQAR,
    /** New Lei */
    SDKPayECCurrencyRON,
    /** Dinars */
    SDKPayECCurrencyRSD,
    /** Rubles */
    SDKPayECCurrencyRUB,
    /** Rwanda Francs */
    SDKPayECCurrencyRWF,
    /** Riyals */
    SDKPayECCurrencySAR,
    /** Dollars */
    SDKPayECCurrencySBD,
    /** Rupees */
    SDKPayECCurrencySCR,
    /** Pounds */
    SDKPayECCurrencySDG,
    /** Kronor */
    SDKPayECCurrencySEK,
    /** Dollars */
    SDKPayECCurrencySGD,
    /** Pounds */
    SDKPayECCurrencySHP,
    /** Leones */
    SDKPayECCurrencySLL,
    /** Shillings */
    SDKPayECCurrencySOS,
    /** Luigini */
    SDKPayECCurrencySPL,
    /** Dollars */
    SDKPayECCurrencySRD,
    /** Dobras */
    SDKPayECCurrencySTD,
    /** Colones */
    SDKPayECCurrencySVC,
    /** Pounds */
    SDKPayECCurrencySYP,
    /** Emalangeni */
    SDKPayECCurrencySZL,
    /** Baht */
    SDKPayECCurrencyTHB,
    /** Somoni */
    SDKPayECCurrencyTJS,
    /** Manats */
    SDKPayECCurrencyTMM,
    /** Dinars */
    SDKPayECCurrencyTND,
    /** Pa’anga */
    SDKPayECCurrencyTOP,
    /** New Lira */
    SDKPayECCurrencyTRY,
    /** Dollars */
    SDKPayECCurrencyTTD,
    /** Tuvalu Dollars */
    SDKPayECCurrencyTVD,
    /** New Dollars */
    SDKPayECCurrencyTSDKPay,
    /** Shillings */
    SDKPayECCurrencyTZS,
    /** Hryvnia */
    SDKPayECCurrencyUAH,
    /** Shillings */
    SDKPayECCurrencyUGX,
    /** Unknown */
    SDKPayECCurrencyUNK,
    /** Dollars */
    SDKPayECCurrencyUSD,
    /** Pesos */
    SDKPayECCurrencyUYU,
    /** Sums */
    SDKPayECCurrencyUZS,
    /** Bolivares (expires 2008-Jun-30) */
    SDKPayECCurrencyVEB,
    /** Bolivares Fuertes */
    SDKPayECCurrencyVEF,
    /** Dong */
    SDKPayECCurrencyVND,
    /** Vatu */
    SDKPayECCurrencyVUV,
    /** Tala */
    SDKPayECCurrencyWST,
    /** Francs */
    SDKPayECCurrencyXAF,
    /** Ounces */
    SDKPayECCurrencyXAG,
    /** Ounces */
    SDKPayECCurrencyXAU,
    /** Dollars */
    SDKPayECCurrencyXCD,
    /** IMF */
    SDKPayECCurrencyXDR,
    /** Francs */
    SDKPayECCurrencyXOF,
    /** Ounces */
    SDKPayECCurrencyXPD,
    /** Francs */
    SDKPayECCurrencyXPF,
    /** Ounces */
    SDKPayECCurrencyXPT,
    /** Rials */
    SDKPayECCurrencyYER,
    /** Rand */
    SDKPayECCurrencyZAR,
    /** Kwacha */
    SDKPayECCurrencyZMK,
    /** Zimbabwe Dollars */
    SDKPayECCurrencyZSDKPay,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECCurrencyTotalNumber
};
NSString * SDKPayECCurrencyGetISOCode(SDKPayECCurrency currency);
SDKPayECCurrency SDKPayECCurrencyFromISOCode(NSString *code);

/** @} */
