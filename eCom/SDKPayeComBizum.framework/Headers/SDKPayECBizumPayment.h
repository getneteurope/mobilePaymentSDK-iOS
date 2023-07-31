//
//  SDKPayECBizumPayment.h
//  SDKPayeComBizum
//
//  Created by Marian Polek on 01/02/2023.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <SDKPayeCom/SDKPayeCom.h>

@interface SDKPayECBizumPayment : SDKPayECPayment

/**
 @brief It describes browser properties.
 */
@property (strong, nonatomic, nullable) SDKPayECBrowser *browser;

@end

