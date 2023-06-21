//
//  SDKPayNotification.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 10/8/15.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/

//

#import <Foundation/Foundation.h>

#import <SDKPayeCom/SDKPayECTransactionState.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 @brief Transaction notification
 @details ElasticEngine has a built-in notification capability. The Merchant simply sends the notifications instructions as part of each transaction request. Notifications need to be specified as a URL. There are two types of notifications:
 
 - HTTP(S) (Web Server POST)
 - SMTP (Email with URL scheme 'mailto')
 
 It is possible to setup conditional notifications based on the [state](SDKPayECTransactionState) of transaction. For example, a Merchant can instruct a notification to only occur on SDKPayECTransactionStateFailed or SDKPayECTransactionStateSuccess transactions.
 */
@interface SDKPayECNotification : NSObject

@property (assign, nonatomic) SDKPayECTransactionState transactionState;
@property (strong, nonatomic, nonnull) NSURL *URL; // max. length 256

@end

/** @} */
