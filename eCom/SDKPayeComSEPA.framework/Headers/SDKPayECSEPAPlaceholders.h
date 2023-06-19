//
//  SDKPayECSEPAPlaceholders.h
//  SDKPayeComSEPA
//
//  Created by Vrana, Jozef on 12/06/2018.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <SDKPayeCom/SDKPayECLabel.h>

@interface SDKPayECSEPAPlaceholders : SDKPayECLabel

@property (nonatomic) NSString *firstNamePlaceholder UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSString *lastNamePlaceholder UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSString *IBANPlaceholder UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSString *merchantName UI_APPEARANCE_SELECTOR;

@end
