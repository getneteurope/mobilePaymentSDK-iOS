//
//  SDKPayECNotificationFormat.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 10/09/2019.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

/** @addtogroup ios_sdk
 *  @{
 */

/** List of notification format */

typedef NS_ENUM(NSUInteger, SDKPayECNotificationFormat) {
    SDKPayECNotificationFormatUndefined = 0,
    SDKPayECNotificationFormatNVP,
    SDKPayECNotificationFormatXML,
    SDKPayECNotificationFormatJSON,
    SDKPayECNotificationFormatJSONSigned,
    SDKPayECNotificationFormatJSONSignature,
    SDKPayECNotificationFormatHTML,
    SDKPayECNotificationFormatTotalNumber
};

SDKPayECNotificationFormat SDKPayECNotificationFormatFromCode(NSString *code);
NSString *SDKPayECNotificationFormatGetCode(SDKPayECNotificationFormat notificationFormat);
