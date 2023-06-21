//
//  SDKPayECLocalize.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 04/06/2018.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/

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


