//
//  SDKPaySubMerchantInfo.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 12/20/16.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SDKPayECCountry.h"

@interface SDKPayECSubMerchantInfo : NSObject

/**
 @brief SubmerchantInfo city.
 */
@property (strong, nonatomic) NSString *city;

/**
 @brief SubmerchantInfo country.
 */
@property (assign, nonatomic) SDKPayECCountry country;

/**
 @brief SubmerchantInfo identifier.
 */
@property (strong, nonatomic) NSString *identifier;

/**
 @brief SubmerchantInfo name.
 */
@property (strong, nonatomic) NSString *name;

/**
 @brief SubmerchantInfo postalCode.
 */
@property (strong, nonatomic) NSString *postalCode;

/**
 @brief SubmerchantInfo state.
 */
@property (strong, nonatomic) NSString *state;

/**
 @brief SubmerchantInfo street.
 */
@property (strong, nonatomic) NSString *street;

/**
 @brief App id .
 */
@property (strong, nonatomic, nullable) NSString *appId;

/**
 @brief Category.
 */
@property (strong, nonatomic, nullable) NSString *category;

/**
 @brief Store id .
 */
@property (strong, nonatomic, nullable) NSString *storeId;

/**
 @brief Store name.
 */
@property (strong, nonatomic, nullable) NSString *storeName;

/**
 @brief Payment facilitator id.
 */
@property (strong, nonatomic, nullable) NSString *paymentFacilitatorId;


@end
