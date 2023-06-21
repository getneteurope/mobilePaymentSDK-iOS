//
//  SDKPayECOrderItem.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 10/8/15.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>

#import <SDKPayeCom/SDKPayECCurrency.h>
#import <SDKPayeCom/SDKPayECOrderItemType.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Order item data
 */
@interface SDKPayECOrderItem : NSObject

/**
 @brief Name of the item in basket
 @details It is mandatory
 */
@property (strong, nonatomic) NSString *name;
/**
 @brief Item description
 @details It is optional
 */
@property (strong, nonatomic) NSString *itemDescription;
/**
 @brief Item EAN or other article identifier
 @details It is optional
 */
@property (strong, nonatomic) NSString *articleNumber;

/**
 @brief Item price per unit
 @details Order item amount always includes tax. It is mandatory.
 */
@property (strong, nonatomic) NSDecimalNumber *amount;

/**
 @brief ammount  currency
 @details It is optional
 */
@property (assign, nonatomic) SDKPayECCurrency amountCurrency;

/**
 @brief Item tax per unit
 @details It is optional
 */
@property (strong, nonatomic) NSDecimalNumber *taxAmount;

/**
 @brief tax currency
 @details It is optional
 */
@property (assign, nonatomic) SDKPayECCurrency taxAmountCurrency;
/**
 @brief tax rate
 @details It is optional
 */
@property (strong, nonatomic) NSDecimalNumber *taxRate;

/**
 @brief Total count of the item in the order
 @details It is mandatory
 */
@property (strong, nonatomic) NSDecimalNumber *quantity;

/**
 @brief The discount value for one order item. 
 @details It is optional
 */
@property (strong, nonatomic) NSDecimalNumber *discount;

/**
 @brief Order item type.
 @details It is optional
*/
@property (assign, nonatomic) SDKPayECOrderItemType type;

@end

/** @} */
