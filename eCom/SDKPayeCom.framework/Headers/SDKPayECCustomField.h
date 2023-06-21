//
//  SDKPayECCustomField.h
//  SDKPayeCom
//
//  Created by Peter Stavný on 06/12/2021.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/

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

