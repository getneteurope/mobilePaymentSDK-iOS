//
//  SDKPayECButton.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 12/8/15.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <UIKit/UIKit.h>
#import "SDKPayECLocalize.h"

/**
 *
 */

@interface SDKPayECButton : UIButton<SDKPayECLocalizable>

@property (nonatomic, strong, nullable) /*IBInspectable*/ UIColor *normalBackgroundColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong, nullable) /*IBInspectable*/ UIColor *disabledBackgroundColor UI_APPEARANCE_SELECTOR;

@property (nonatomic, strong, nullable) /*IBInspectable*/ UIColor *normalTitleColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong, nullable) /*IBInspectable*/ UIColor *disabledTitleColor UI_APPEARANCE_SELECTOR;

@end


