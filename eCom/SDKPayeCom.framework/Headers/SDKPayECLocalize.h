//
//  SDKPayECLocalize.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 04/06/2018.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SDKPayECLocale.h"

@protocol SDKPayECLocalizable <NSObject>

- (void)localize:(SDKPayECLocale)locale;

@end

/**
 *
 */

@interface SDKPayECLocalize : UILabel
@property (nonatomic) SDKPayECLocale locale UI_APPEARANCE_SELECTOR;
@end


