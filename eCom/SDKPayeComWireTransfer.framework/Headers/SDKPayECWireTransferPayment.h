//
//  SDKPayECWireTransferPayment.h
//  SDKPayeComWireTransfer
//
//  Created by Peter Stavný on 12/11/2021.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <SDKPayeCom/SDKPayeCom.h>

NS_ASSUME_NONNULL_BEGIN

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  @brief Base class for POI/PIA Wire Transfer payment method.
 *  @details
 */
@interface SDKPayECWireTransferPayment : SDKPayECPayment

/**
 * @brief Visualisation Flag
 */
@property (assign, nonatomic) BOOL showResultInternaly;

@end

/** @} */

NS_ASSUME_NONNULL_END
