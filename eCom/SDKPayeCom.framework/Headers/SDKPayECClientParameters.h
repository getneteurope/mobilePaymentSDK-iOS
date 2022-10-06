//
//  SDKPayClientParameters.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 19/09/2017.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SDKPayECEnvironment.h"

@interface SDKPayECClientParameters : NSObject

/**
 *  @brief Timeout interval for the payment request.
 *  @details Default value is 60 seconds.
 */
@property (assign, nonatomic) NSTimeInterval timeoutInterval;

@end
