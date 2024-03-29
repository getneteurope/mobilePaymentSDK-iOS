//
//  SDKPayECAdditionalProviderData.h
//  SDKPayeCom
//
//  Created by Stavny, Peter on 30/03/2020.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>
#import <SDKPayeCom/SDKPayECProviderData.h>

/** @addtogroup ios_sdk
*  @{
*/

NS_ASSUME_NONNULL_BEGIN

/**
 * @brief Additional provider data 
 */
@interface SDKPayECAdditionalProviderData : NSObject

/**
 @brief Provider data Items
 @details At the moment supported by SDKPayECKlarnalPayment method. Provider data details may be sent along with transaction requests. Contains max. 1 additional data item for Klarna.
 */
@property (strong, nonatomic, nullable) NSArray<SDKPayECProviderData *> *items;

@end

NS_ASSUME_NONNULL_END

/** @} */
