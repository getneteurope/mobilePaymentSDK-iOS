//
//  SDKPayECCardPlaceholders.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 12/06/2018.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <SDKPayeCom/SDKPayECLabel.h>

@interface SDKPayECCardPlaceholders : SDKPayECLabel

@property (nonatomic) NSString *cardholderPlaceholder UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSString *cardNumberPlaceholder UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSString *expiryDatePlaceholder UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSString *securityCodePlaceholder UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSString *scanTitle UI_APPEARANCE_SELECTOR;

@end
