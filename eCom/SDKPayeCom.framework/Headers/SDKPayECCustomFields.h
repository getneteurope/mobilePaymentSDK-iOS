//
//  SDKPayECCustomFields.h
//  SDKPayeCom
//
//  Created by Peter Stavný on 06/12/2021.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
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
