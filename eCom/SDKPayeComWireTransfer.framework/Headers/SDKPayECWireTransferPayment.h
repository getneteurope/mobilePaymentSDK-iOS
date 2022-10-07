//
//  SDKPayECWireTransferPayment.h
//  SDKPayeComWireTransfer
//
//  Created by Peter Stavný on 12/11/2021.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
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
