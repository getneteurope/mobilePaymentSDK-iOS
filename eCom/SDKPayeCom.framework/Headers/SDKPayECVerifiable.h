//
//  SDKPayECVerifiable.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 1/11/16.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>

/**
 *  @brief Validates string input from user
 *
 *  @param validatedString string to be validated
 *
 *  @return return localized error string, which can be presented to user
 */
typedef NSString *_Nullable(^SDKPayVerificationBlock)(NSString *_Nullable validatedString, BOOL showIncompleteError);

@protocol SDKPayECVerifiable <NSObject>

@property (copy, nonatomic, nullable) NSArray<SDKPayVerificationBlock> *verificationBlocks;

- (BOOL)verify;
- (BOOL)verifyIncomplete;

@end
