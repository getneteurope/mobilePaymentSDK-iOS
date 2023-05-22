//
//  SDKPayECCustomFields.h
//  SDKPayeCom
//
//  Created by Peter Stavný on 06/12/2021.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>
#import <SDKPayeCom/SDKPayECCustomFields.h>

/** @addtogroup ios_sdk
 *  @{
 */

@class SDKPayECCustomField;
/**
 * @brief Custom Fields data
 */
@interface SDKPayECCustomFields : NSObject

/**
 @brief Custom Fields
 @details At the moment supported by SDKPayECAlipayPayment method. Custom field details may be sent along with transaction requests.
 */
@property (strong, nonatomic, nullable) NSArray<SDKPayECCustomField *> *fields;

@end

/** @} */
