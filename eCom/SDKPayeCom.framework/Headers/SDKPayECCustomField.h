//
//  SDKPayECCustomField.h
//  SDKPayeCom
//
//  Created by Peter Stavný on 06/12/2021.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Custom field data
 */
@interface SDKPayECCustomField : NSObject

/**
 @brief Name of the field
 @details It is mandatory
 */
@property (strong, nonatomic) NSString *name;

/**
 @brief Value of the field
 @details It is mandatory
 */
@property (strong, nonatomic) NSString *value;


@end

