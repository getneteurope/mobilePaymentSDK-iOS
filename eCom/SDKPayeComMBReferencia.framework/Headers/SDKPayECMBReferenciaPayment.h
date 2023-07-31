//
//  SDKPayECMBReferenciaPayment.h
//  SDKPayeComMBReferencia
//
//  Created by Peter Stavny on 22/06/2023.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <SDKPayeCom/SDKPayeCom.h>

@interface SDKPayECMBReferenciaPayment : SDKPayECPayment

/**
 * Expiration date
 */
@property (strong, nonatomic, nullable) NSDate* expirationDate;

@end
