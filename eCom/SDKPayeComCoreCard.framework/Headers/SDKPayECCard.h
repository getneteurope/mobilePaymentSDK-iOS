//
//  SDKPayCard.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 11/19/15.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>

#import <SDKPayeComCoreCard/SDKPayECCardBrand.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Non-sensitive card data
 */
@interface SDKPayECCard : NSObject<NSCopying>

/**
 @brief Card expiration date.
 */
@property (copy, nonatomic, nullable) NSDate *expiryDate;

/**
 @brief Card brand
 */
@property (assign, nonatomic) SDKPayECCardBrand brand;

/**
 @brief Card brand
 */
@property (assign, nonatomic) SDKPayECCardBrandSelection brandSelection;

/**
@brief Token usage indicator
*/
@property (assign, nonatomic, getter=istokenIndicatorUsed) BOOL tokenUsageIndicator;

@end

/** @} */
