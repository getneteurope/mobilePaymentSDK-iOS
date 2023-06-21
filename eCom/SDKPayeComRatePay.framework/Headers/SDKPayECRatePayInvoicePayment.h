//
//  SDKPayECRatePayInvoicePayment.h
//  SDKPayeComRatePay
//
//  Created by Marian Polek on 03/10/2022.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <SDKPayeCom/SDKPayeCom.h>

@interface SDKPayECRatePayInvoicePayment : SDKPayECPayment

/**
 @brief fingerprint parameter inside device object
 */
@property (strong, nonatomic, nonnull) NSString *fingerprint;

@end
