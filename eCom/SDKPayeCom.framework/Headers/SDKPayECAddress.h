//
//  SDKPayECAddress.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 10/8/15.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SDKPayECCountry.h"

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Address data
 */
@interface SDKPayECAddress : NSObject

/**
 @brief Street line 1
 @details It is mandatory. Max. length is 128
 */
@property (strong, nonatomic, nonnull ) NSString *street1;
/**
 @brief Street line 2
 @details It is optional. Max. length is 128
 */
@property (strong, nonatomic, nullable) NSString *street2;
/**
 @brief Street line 3
 @details It is optional. Max. length is 128
 */
@property (strong, nonatomic, nullable) NSString *street3;
/**
 @brief City
 @details It is required. Max. length is 32
 */
@property (strong, nonatomic, nonnull ) NSString *city;
/**
 @brief State
 @details It is optional. Max. length is 32
 */
@property (strong, nonatomic, nullable) NSString *state;
/**
 @brief Country
 @details It is required.
 */
@property (assign, nonatomic) SDKPayECCountry country;
/**
 @brief Postal Code
 @details It is optional. Max. length is 16
 */
@property (strong, nonatomic, nullable) NSString *postalCode;
/**
 @brief House extension of the recipient’s address.
 @details It is optional. Max. length is 32
 */
@property (strong, nonatomic, nullable) NSString *houseExtension;

@end

/** @} */
