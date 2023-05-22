//
//  SDKPayECCardData.h
//  SDKPayeCom
//
//  Created by Stavny, Peter on 12/08/2019.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**
 * brief Card Data
 */
@interface SDKPayECCardData : NSObject

/**
 * @brief Returned only if engine has enabled FEATURE_CARD_TYPE_SERVICE or X-SDKPay-Toggle-EnableFeature=FEATURE_CARD_TYPE_SERVICE header is sent with request. max. 50
 */
@property (strong, nonatomic) NSString *issuerName;
/**
 *
 */
@property (strong, nonatomic) NSString *ccCategory;
/**
 *
 */
@property (strong, nonatomic) NSString *ccCategoryExt;
/**
 *
 */
@property (strong, nonatomic) NSString *ccProductId;

@end

NS_ASSUME_NONNULL_END
