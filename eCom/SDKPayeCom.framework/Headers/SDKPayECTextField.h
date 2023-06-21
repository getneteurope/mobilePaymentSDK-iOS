//
//  SDKPayECTextField.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 10/14/15.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <UIKit/UITextField.h>
#import "SDKPayECLocalize.h"
#import "SDKPayECVerifiable.h"

@class SDKPayECTextField;
typedef NS_ENUM(NSUInteger, SDKPayECCardIconsStyle) {
    
    SDKPayECIconsStyleAll = 0,
    SDKPayECIconsStyleHidden,
};

@protocol SDKPayECTextFieldDelegate <UITextFieldDelegate>
- (void)textFieldDidBackspaceOnEmpty:(nonnull SDKPayECTextField *)textField;

@end

/**
 *
 */

@interface SDKPayECTextField : UITextField<SDKPayECLocalizable, SDKPayECVerifiable>

@property (nonatomic, copy, nullable) NSArray<NSNumber *> *format;
@property (nonatomic, strong, null_resettable) NSNumber   *formatKerning;
@property (nonatomic) UIColor *placeholderColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, weak, nullable) id<SDKPayECTextFieldDelegate> delegate;

@property (nonatomic, strong, nullable) /*IBInspectable*/ UIImage *leftImage;
@property(nonatomic) SDKPayECCardIconsStyle iconsStyle UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *underlineColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *underlineEditingColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *errorColor UI_APPEARANCE_SELECTOR;
@property (nonatomic) /*IBInspectable*/ BOOL animatesPlaceholder;
@property (nonatomic) /*IBInspectable*/ CGFloat underlineHeight;
@property (nonatomic) /*IBInspectable*/ CGFloat underlineEditingHeight;

- (void)hideText;
- (void)showText;

- (BOOL)verify:(nullable NSString *)verifyText;
- (BOOL)verifyIncomplete;
- (BOOL)isValid;

@end

