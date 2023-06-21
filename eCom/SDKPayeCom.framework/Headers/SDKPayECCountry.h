//
//  SDKPayECCountry.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 10/12/15.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of countries supported by ElasticEngine */
typedef NS_ENUM(NSUInteger, SDKPayECCountry) {
    /** Uninitialized or invalid value */
    SDKPayECCountryUndefined = 0,
    
    /** ANDORRA */
    SDKPayECCountryAD,
    /** UNITED ARAB EMIRATES */
    SDKPayECCountryAE,
    /** AFGHANISTAN */
    SDKPayECCountryAF,
    /** ANTIGUA AND BARBUDA */
    SDKPayECCountryAG,
    /** ANGUILLA */
    SDKPayECCountryAI,
    /** ALBANIA */
    SDKPayECCountryAL,
    /** ARMENIA */
    SDKPayECCountryAM,
    /** NETHERLANDS ANTILLES */
    SDKPayECCountryAN,
    /** ANGOLA */
    SDKPayECCountryAO,
    /** ANTARCTICA */
    SDKPayECCountryAQ,
    /** ARGENTINA */
    SDKPayECCountryAR,
    /** AMERICAN SAMOA */
    SDKPayECCountryAS,
    /** AUSTRIA */
    SDKPayECCountryAT,
    /** AUSTRALIA */
    SDKPayECCountryAU,
    /** ARUBA */
    SDKPayECCountryAW,
    /** Åland Islands */
    SDKPayECCountryAX,
    /** AZERBAIJAN */
    SDKPayECCountryAZ,
    /** BOSNIA AND HERZEGOVINA */
    SDKPayECCountryBA,
    /** BARBADOS */
    SDKPayECCountryBB,
    /** BANGLADESH */
    SDKPayECCountryBD,
    /** BELGIUM */
    SDKPayECCountryBE,
    /** BURKINA FASO */
    SDKPayECCountryBF,
    /** BULGARIA */
    SDKPayECCountryBG,
    /** BAHRAIN */
    SDKPayECCountryBH,
    /** BURUNDI */
    SDKPayECCountryBI,
    /** BENIN */
    SDKPayECCountryBJ,
    /** Saint-Barthélemy */
    SDKPayECCountryBL,
    /** BERMUDA */
    SDKPayECCountryBM,
    /** BRUNEI DARUSSALAM */
    SDKPayECCountryBN,
    /** BOLIVIA, PLURINATIONAL STATE OF */
    SDKPayECCountryBO,
    /** BONAIRE SINT EUSTATIUS AND SABA */
    SDKPayECCountryBQ,
    /** BRAZIL */
    SDKPayECCountryBR,
    /** BAHAMAS */
    SDKPayECCountryBS,
    /** BHUTAN */
    SDKPayECCountryBT,
    /** BOUVET ISLAND */
    SDKPayECCountryBV,
    /** BOTSWANA */
    SDKPayECCountryBW,
    /** BELARUS */
    SDKPayECCountryBY,
    /** BELIZE */
    SDKPayECCountryBZ,
    /** CANADA */
    SDKPayECCountryCA,
    /** COCOS (KEELING) ISLANDS */
    SDKPayECCountryCC,
    /** CONGO, THE DEMOCRATIC REPUBLIC OF THE */
    SDKPayECCountryCD,
    /** CENTRAL AFRICAN REPUBLIC */
    SDKPayECCountryCF,
    /** CONGO */
    SDKPayECCountryCG,
    /** SWITZERLAND */
    SDKPayECCountryCH,
    /** Côte d’Ivoire */
    SDKPayECCountryCI,
    /** COOK ISLANDS */
    SDKPayECCountryCK,
    /** CHILE */
    SDKPayECCountryCL,
    /** CAMEROON */
    SDKPayECCountryCM,
    /** CHINA */
    SDKPayECCountryCN,
    /** COLOMBIA */
    SDKPayECCountryCO,
    /** COSTA RICA */
    SDKPayECCountryCR,
    /** CUBA */
    SDKPayECCountryCU,
    /** CAPE VERDE */
    SDKPayECCountryCV,
    /** CURACAO */
    SDKPayECCountryCW,
    /** CHRISTMAS ISLAND */
    SDKPayECCountryCX,
    /** CYPRUS */
    SDKPayECCountryCY,
    /** CZECH REPUBLIC */
    SDKPayECCountryCZ,
    /** GERMANY */
    SDKPayECCountryDE,
    /** DJIBOUTI */
    SDKPayECCountryDJ,
    /** DENMARK */
    SDKPayECCountryDK,
    /** DOMINICA */
    SDKPayECCountryDM,
    /** DOMINICAN REPUBLIC */
    SDKPayECCountryDO,
    /** ALGERIA */
    SDKPayECCountryDZ,
    /** ECUADOR */
    SDKPayECCountryEC,
    /** ESTONIA */
    SDKPayECCountryEE,
    /** EGYPT */
    SDKPayECCountryEG,
    /** WESTERN SAHARA */
    SDKPayECCountryEH,
    /** ERITREA */
    SDKPayECCountryER,
    /** SPAIN */
    SDKPayECCountryES,
    /** ETHIOPIA */
    SDKPayECCountryET,
    /** FINLAND */
    SDKPayECCountryFI,
    /** FIJI */
    SDKPayECCountryFJ,
    /** FALKLAND ISLANDS (MALVINAS) */
    SDKPayECCountryFK,
    /** MICRONESIA, FEDERATED STATES OF */
    SDKPayECCountryFM,
    /** FAROE ISLANDS */
    SDKPayECCountryFO,
    /** FRANCE */
    SDKPayECCountryFR,
    /** GABON */
    SDKPayECCountryGA,
    /** UNITED KINGDOM */
    SDKPayECCountryGB,
    /** GRENADA */
    SDKPayECCountryGD,
    /** GEORGIA */
    SDKPayECCountryGE,
    /** FRENCH GUIANA */
    SDKPayECCountryGF,
    /** GUERNSEY */
    SDKPayECCountryGG,
    /** GHANA */
    SDKPayECCountryGH,
    /** GIBRALTAR */
    SDKPayECCountryGI,
    /** GREENLAND */
    SDKPayECCountryGL,
    /** GAMBIA */
    SDKPayECCountryGM,
    /** GUINEA */
    SDKPayECCountryGN,
    /** GUADELOUPE */
    SDKPayECCountryGP,
    /** EQUATORIAL GUINEA */
    SDKPayECCountryGQ,
    /** GREECE */
    SDKPayECCountryGR,
    /** SOUTH GEORGIA AND THE SOUTH SANDWICH ISLANDS */
    SDKPayECCountryGS,
    /** GUATEMALA */
    SDKPayECCountryGT,
    /** GUAM */
    SDKPayECCountryGU,
    /** GUINEA-BISSAU */
    SDKPayECCountryGW,
    /** GUYANA */
    SDKPayECCountryGY,
    /** HONG KONG */
    SDKPayECCountryHK,
    /** HEARD ISLAND AND MCDONALD ISLANDS */
    SDKPayECCountryHM,
    /** HONDURAS */
    SDKPayECCountryHN,
    /** CROATIA */
    SDKPayECCountryHR,
    /** VATICAN CITY STATE */
    SDKPayECCountryHS,
    /** HAITI */
    SDKPayECCountryHT,
    /** HUNGARY */
    SDKPayECCountryHU,
    /** INDONESIA */
    SDKPayECCountryID,
    /** IRELAND */
    SDKPayECCountryIE,
    /** ISRAEL */
    SDKPayECCountryIL,
    /** ISLE OF MAN */
    SDKPayECCountryIM,
    /** INDIA */
    SDKPayECCountryIN,
    /** BRITISH INDIAN OCEAN TERRITORY */
    SDKPayECCountryIO,
    /** IRAQ */
    SDKPayECCountryIQ,
    /** IRAN, ISLAMIC REPUBLIC OF */
    SDKPayECCountryIR,
    /** ICELAND */
    SDKPayECCountryIS,
    /** ITALY */
    SDKPayECCountryIT,
    /** JERSEY */
    SDKPayECCountryJE,
    /** JAMAICA */
    SDKPayECCountryJM,
    /** JORDAN */
    SDKPayECCountryJO,
    /** JAPAN */
    SDKPayECCountryJP,
    /** KENYA */
    SDKPayECCountryKE,
    /** KYRGYZSTAN */
    SDKPayECCountryKG,
    /** CAMBODIA */
    SDKPayECCountryKH,
    /** KIRIBATI */
    SDKPayECCountryKI,
    /** COMOROS */
    SDKPayECCountryKM,
    /** SAINT KITTS AND NEVIS */
    SDKPayECCountryKN,
    /** KOREA, DEMOCRATIC PEOPLE'S REPUBLIC OF */
    SDKPayECCountryKP,
    /** KOREA, REPUBLIC OF */
    SDKPayECCountryKR,
    /** KUWAIT */
    SDKPayECCountryKW,
    /** CAYMAN ISLANDS */
    SDKPayECCountryKY,
    /** KAZAKHSTAN */
    SDKPayECCountryKZ,
    /** LAO PEOPLE'S DEMOCRATIC REPUBLIC */
    SDKPayECCountryLA,
    /** LEBANON */
    SDKPayECCountryLB,
    /** SAINT LUCIA */
    SDKPayECCountryLC,
    /** LIECHTENSTEIN */
    SDKPayECCountryLI,
    /** SRI LANKA */
    SDKPayECCountryLK,
    /** LIBERIA */
    SDKPayECCountryLR,
    /** LESOTHO */
    SDKPayECCountryLS,
    /** LITHUANIA */
    SDKPayECCountryLT,
    /** LUXEMBOURG */
    SDKPayECCountryLU,
    /** LATVIA */
    SDKPayECCountryLV,
    /** LIBYAN ARAB JAMAHIRIYA */
    SDKPayECCountryLY,
    /** MOROCCO */
    SDKPayECCountryMA,
    /** MONACO */
    SDKPayECCountryMC,
    /** MOLDOVA, REPUBLIC OF */
    SDKPayECCountryMD,
    /** MONTENEGRO */
    SDKPayECCountryME,
    /** SAINT MARTIN */
    SDKPayECCountryMF,
    /** MADAGASCAR */
    SDKPayECCountryMG,
    /** MARSHALL ISLANDS */
    SDKPayECCountryMH,
    /** MACEDONIA, THE FORMER YUGOSLAV REPUBLIC OF */
    SDKPayECCountryMK,
    /** MALI */
    SDKPayECCountryML,
    /** MYANMAR */
    SDKPayECCountryMM,
    /** MONGOLIA */
    SDKPayECCountryMN,
    /** MACAO */
    SDKPayECCountryMO,
    /** NORTHERN MARIANA ISLANDS */
    SDKPayECCountryMP,
    /** MARTINIQUE */
    SDKPayECCountryMQ,
    /** MAURITANIA */
    SDKPayECCountryMR,
    /** MONTSERRAT */
    SDKPayECCountryMS,
    /** MALTA */
    SDKPayECCountryMT,
    /** MAURITIUS */
    SDKPayECCountryMU,
    /** MALDIVES */
    SDKPayECCountryMV,
    /** MALAWI */
    SDKPayECCountryMW,
    /** MEXICO */
    SDKPayECCountryMX,
    /** MALAYSIA */
    SDKPayECCountryMY,
    /** MOZAMBIQUE */
    SDKPayECCountryMZ,
    /** NAMIBIA */
    SDKPayECCountryNA,
    /** NEW CALEDONIA */
    SDKPayECCountryNC,
    /** NIGER */
    SDKPayECCountryNE,
    /** NORFOLK ISLAND */
    SDKPayECCountryNF,
    /** NIGERIA */
    SDKPayECCountryNG,
    /** NICARAGUA */
    SDKPayECCountryNI,
    /** NETHERLANDS */
    SDKPayECCountryNL,
    /** NORWAY */
    SDKPayECCountryNO,
    /** NEPAL */
    SDKPayECCountryNP,
    /** NAURU */
    SDKPayECCountryNR,
    /** NIUE */
    SDKPayECCountryNU,
    /** NEW ZEALAND */
    SDKPayECCountryNZ,
    /** OMAN */
    SDKPayECCountryOM,
    /** PANAMA */
    SDKPayECCountryPA,
    /** PERU */
    SDKPayECCountryPE,
    /** FRENCH POLYNESIA */
    SDKPayECCountryPF,
    /** PAPUA NEW GUINEA */
    SDKPayECCountryPG,
    /** PHILIPPINES */
    SDKPayECCountryPH,
    /** PAKISTAN */
    SDKPayECCountryPK,
    /** POLAND */
    SDKPayECCountryPL,
    /** SAINT PIERRE AND MIQUELON */
    SDKPayECCountryPM,
    /** PITCAIRN */
    SDKPayECCountryPN,
    /** PUERTO RICO */
    SDKPayECCountryPR,
    /** PALESTINIAN TERRITORY, OCCUPIED */
    SDKPayECCountryPS,
    /** PORTUGAL */
    SDKPayECCountryPT,
    /** PALAU */
    SDKPayECCountryPW,
    /** PARAGUAY */
    SDKPayECCountryPY,
    /** QATAR */
    SDKPayECCountryQA,
    /** Réunion */
    SDKPayECCountryRE,
    /** ROMANIA */
    SDKPayECCountryRO,
    /** SERBIA */
    SDKPayECCountryRS,
    /** RUSSIAN FEDERATION */
    SDKPayECCountryRU,
    /** RWANDA */
    SDKPayECCountryRW,
    /** SAUDI ARABIA */
    SDKPayECCountrySA,
    /** SOLOMON ISLANDS */
    SDKPayECCountrySB,
    /** SEYCHELLES */
    SDKPayECCountrySC,
    /** SUDAN */
    SDKPayECCountrySD,
    /** SWEDEN */
    SDKPayECCountrySE,
    /** SINGAPORE */
    SDKPayECCountrySG,
    /** SAINT HELENA, ASCENSION AND TRISTAN DA CUNHA */
    SDKPayECCountrySH,
    /** SLOVENIA */
    SDKPayECCountrySI,
    /** SVALBARD AND JAN MAYEN */
    SDKPayECCountrySJ,
    /** SLOVAKIA */
    SDKPayECCountrySK,
    /** SIERRA LEONE */
    SDKPayECCountrySL,
    /** SAN MARINO */
    SDKPayECCountrySM,
    /** SENEGAL */
    SDKPayECCountrySN,
    /** SOMALIA */
    SDKPayECCountrySO,
    /** SURINAME */
    SDKPayECCountrySR,
    /** SOUTH SUDAN */
    SDKPayECCountrySS,
    /** SAO TOME AND PRINCIPE */
    SDKPayECCountryST,
    /** EL SALVADOR */
    SDKPayECCountrySV,
    /** SINT MAARTEN (DUTCH PART) */
    SDKPayECCountrySX,
    /** SYRIAN ARAB REPUBLIC */
    SDKPayECCountrySY,
    /** SWAZILAND */
    SDKPayECCountrySZ,
    /** TURKS AND CAICOS ISLANDS */
    SDKPayECCountryTC,
    /** CHAD */
    SDKPayECCountryTD,
    /** FRENCH SOUTHERN TERRITORIES */
    SDKPayECCountryTF,
    /** TOGO */
    SDKPayECCountryTG,
    /** THAILAND */
    SDKPayECCountryTH,
    /** TAJIKISTAN */
    SDKPayECCountryTJ,
    /** TOKELAU */
    SDKPayECCountryTK,
    /** TIMOR-LESTE */
    SDKPayECCountryTL,
    /** TURKMENISTAN */
    SDKPayECCountryTM,
    /** TUNISIA */
    SDKPayECCountryTN,
    /** TONGA */
    SDKPayECCountryTO,
    /** TURKEY */
    SDKPayECCountryTR,
    /** TRINIDAD AND TOBAGO */
    SDKPayECCountryTT,
    /** TUVALU */
    SDKPayECCountryTV,
    /** TAIWAN, PROVINCE OF CHINA */
    SDKPayECCountryTW,
    /** TANZANIA, UNITED REPUBLIC OF */
    SDKPayECCountryTZ,
    /** UKRAINE */
    SDKPayECCountryUA,
    /** UGANDA */
    SDKPayECCountryUG,
    /** UNITED STATES MINOR OUTLYING ISLANDS */
    SDKPayECCountryUM,
    /** UNITED STATES */
    SDKPayECCountryUS,
    /** URUGUAY */
    SDKPayECCountryUY,
    /** UZBEKISTAN */
    SDKPayECCountryUZ,
    /** HOLY SEE (VATICAN CITY STATE) */
    SDKPayECCountryVA,
    /** SAINT VINCENT AND THE GRENADINES */
    SDKPayECCountryVC,
    /** VENEZUELA, BOLIVARIAN REPUBLIC OF */
    SDKPayECCountryVE,
    /** VIRGIN ISLANDS, BRITISH */
    SDKPayECCountryVG,
    /** VIRGIN ISLANDS, U.S. */
    SDKPayECCountryVI,
    /** VIET NAM */
    SDKPayECCountryVN,
    /** VANUATU */
    SDKPayECCountryVU,
    /** WALLIS AND FUTUNA */
    SDKPayECCountryWF,
    /** SAMOA */
    SDKPayECCountryWS,
    /** NULL */
    SDKPayECCountryXX,
    /** YEMEN */
    SDKPayECCountryYE,
    /** MAYOTTE */
    SDKPayECCountryYT,
    /** SOUTH AFRICA */
    SDKPayECCountryZA,
    /** ZAMBIA */
    SDKPayECCountryZM,
    /** ZIMBABWE */
    SDKPayECCountryZW,
    
    /** Total number of values. It is used for validation and handled as invalid value */
    SDKPayECCountryTotalNumber
};
NSString *SDKPayECCountryGetISOCode(SDKPayECCountry country);
SDKPayECCountry SDKPayECCountryFromISOCode(NSString *code);

/** @} */
