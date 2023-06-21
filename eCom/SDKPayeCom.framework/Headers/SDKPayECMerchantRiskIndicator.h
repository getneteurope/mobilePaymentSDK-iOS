//
//  SDKPayECMerchantRiskIndicator.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 16/04/2019.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>
#import <SDKPayeCom/SDKPayECDeliveryTimeframe.h>
#import <SDKPayeCom/SDKPayECReorderType.h>
#import <SDKPayeCom/SDKPayECAvailabilityTime.h>
#import <SDKPayeCom/SDKPayECGift.h>

@interface SDKPayECMerchantRiskIndicator : NSObject

/**
 * Indicates the merchandise delivery timeframe.
 */
@property(assign, nonatomic) SDKPayECDeliveryTimeframe deliveryTimeframe;

/**
 * For electronic delivery, the email address to which the merchandise was delivered.
 */
@property(strong, nonatomic, nullable) NSString *deliveryMail;

/**
 * Indicates whether the cardholder is reoreding previously purchased merchandise.
 */
@property(assign, nonatomic) SDKPayECReorderType reorderItems;

/**
 * Indicates whether Cardholder is placing an order for merchandise with a future availability or release date
 */
@property(assign, nonatomic) SDKPayECAvailabilityTime availability;

/**
 * For a pre-ordered purchase, the expected date that the merchandise will be available. Date format must be YYYYMMDD.
 */
@property(strong, nonatomic, nullable) NSDate *preorderDate;

/**
 *
 */
@property(strong, nonatomic, nullable) SDKPayECGift *gift;

@end

