//
//  SDKPayECNotificationFormat.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 10/09/2019.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
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
