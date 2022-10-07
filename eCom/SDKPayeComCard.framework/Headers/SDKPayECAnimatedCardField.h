//
//  SDKPayECAnimatedCardField.h
//  SDKPayeComCard
//
//  Created by Vrana, Jozef on 14/01/2019.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SDKPayeCom/SDKPayeCom.h>

@class SDKPayECAnimatedCardField;
@class SDKPayECCard;
@class SDKPayECCardPayment;

/** SDKPayECAnimatedCardField states emitted during user interacion */
typedef NS_ENUM(NSUInteger, SDKPayECAnimatedCardFieldState) {
    /** Initial state and state after [-[SDKPayECAnimatedCardField clear]](@ref SDKPayECAnimatedCardField.clear) */
    SDKPayECAnimatedCardFieldStateCardInitial = 0,
    
    /** User entered valid card data */
    SDKPayECAnimatedCardFieldStateCardValid,
    /** User is trying to type unsupported card type */
    SDKPayECAnimatedCardFieldStateCardUnsupported,
    /** User is trying to use supported cards CUP & UPI type at the same time */
    SDKPayECAnimatedCardFieldStateSupportedCardsInvalid,

    /** Card number UITextField is first responder */
    SDKPayECAnimatedCardFieldStateNumberEditting,
    /** Card number is incomplete */
    SDKPayECAnimatedCardFieldStateNumberIncomplete,
    /** Card number is invalid */
    SDKPayECAnimatedCardFieldStateNumberInvalid,
    /** User entered valid card number */
    SDKPayECAnimatedCardFieldStateNumberValid,
    
    /** Expiration date UITextField is first responder  */
    SDKPayECAnimatedCardFieldStateExpirationDateEditting,    
    /** Expiration date is incomplete */
    SDKPayECAnimatedCardFieldStateExpirationDateIncomplete,
    /** Expiration date is invalid */
    SDKPayECAnimatedCardFieldStateExpirationDateInvalid,
    /** User entered valid expiration date */
    SDKPayECAnimatedCardFieldStateExpirationDateValid,
    
    /** Security code UITextField became first responder */
    SDKPayECAnimatedCardFieldStateSecurityCodeEditting,
    /** Security code is incomplete */
    SDKPayECAnimatedCardFieldStateSecurityCodeIncomplete,
    /** Security code is invalid */
    SDKPayECAnimatedCardFieldStateSecurityCodeInvalid,
    /** Security code is valid */
    SDKPayECAnimatedCardFieldStateSecurityCodeValid,
    
    /** Cardholder is first responder */
    SDKPayECAnimatedCardFieldStateCardholderEditting,
    /** Cardholder is empty */
    SDKPayECAnimatedCardFieldStateCardholderInvalid

};

/**
 *  @brief This protocol allows a delegate to be notified when a payment text field's contents change
 *  @details It can be used to take further actions depending on the validity of its contents.
 */
@protocol SDKPayECAnimatedCardFieldDelegate <NSObject>

/**
 *  @brief Called when either the card number, expiration month/year or security code changes.
 *  @details At this point, one can call SDKPayECAnimatedCardField.valid on the text field to determine, for example, whether or not to enable a button to submit SDKPayECCardPayment.
 *
 *  @param animatedCardField the field that has changed
 *  @param state the animatedCard state
 */
- (void)animatedCardField:(nonnull SDKPayECAnimatedCardField *)animatedCardField didChangeState:(SDKPayECAnimatedCardFieldState)state;

@end

@interface SDKPayECAnimatedCardField : UIView

/**
 *  @brief The receiver’s delegate
 *  @details You can use the delegate to respond to the card data entered by the user
 */
@property (nonatomic, weak, nullable) IBOutlet id<SDKPayECAnimatedCardFieldDelegate> delegate;

/**
 *  @brief Non-sensitive card data.
 *  @details It is convenient to set the data if you collect security code only. According [SDKPayECCard brand] security code is validated.
 */
@property (nonatomic, copy, null_resettable) SDKPayECCard *card;

/**
 *  @brief Payment object where card data are appended.
 *  @details If [SDKPayECCardPayment token] is set SDKPayECAnimatedCardField collects only security code. It clears user input.
 */
@property (nonatomic, strong, nonnull) SDKPayECCardPayment *cardPayment;

/**
 *  @brief SDKPayECLocale enum used to localize
 *  @details Localization of SDKPayECCardField happens in following order:
 
 - overriden SDKPayECCardField value (e.g. [SDKPayECCardField numberPlaceholder], etc.)
 - localized default value by [SDKPayECCardField locale]
 - localized default value by [NSLocale preferredLanguages]
 - if locale is not set or localization files are missing default english value is used.
 
 */
@property (nonatomic) SDKPayECLocale locale;

@property (assign, nonatomic, getter=isManualCardBrandSelectionRequired) BOOL manualCardBrandSelectionRequired;

/**
 *
 *
 */
@property(nonatomic, copy, null_resettable) UIColor *cardImageColor;

/**
 *  @brief The text placeholder color used in each child field.
 *  @details Default is [UIColor lightGrayColor]. Set this property to nil to reset to the default.
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ UIColor *placeholderColor;

/**
 *  @brief The text color to be used when entering valid text.
 *  @details Default is [UIColor blackColor]. Set this property to nil to reset to the default.
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ UIColor *textColor;

/**
 *  @brief The text color to be used when the user has entered invalid information, such as an invalid card number.
 *  @details Default is [UIColor redColor]. Set this property to nil to reset to the default.
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ UIColor *textErrorColor;

/**
 *  @brief The placeholder for the card number field.
 *  @details Default is localized @"Credit Card Number".
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ NSString *numberPlaceholder;

/**
 *  @brief The placeholder for the expiration date field.
 *  @details Defaults to localized @"MM/YY".
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ NSString *expirationDatePlaceholder;

/**
 *  @brief The placeholder for the security code field.
 *  @details Defaults to @"CVC".
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ NSString *securityCodePlaceholder;

/**
 *  @brief The placeholder for the cardholder field.
 *  @details Defaults to @"Cardholder".
 */
@property(nonatomic, copy, null_resettable) /*IBInspectable*/ NSString *cardholderPlaceholder;

/**
*  @brief Minimal expiration year.
*  @details Defaults to 2000.
*/
@property (nonatomic, copy, null_resettable) NSString *min_last_year;

/**
*  @brief Maximal expiration year.
*  @details Defaults to 2099.
*/
@property (nonatomic, copy, null_resettable) NSString *max_last_year;

/**
 *  @brief The underline color used for textfield
 *  @detials Default is [UIColor colorWithRed:  48./255. green:  171./255. blue:  254./255. alpha:1.]. Set this property to nil to reset to the default.
 */
@property (nonatomic, copy, null_resettable) UIColor *underlineColor;

@property (nonatomic, copy, null_resettable) UIColor *animatedCardTextColor;
/**
 *  @brief Set of supported card brands.
 *  @details If supportedCardBrands is set and does not contain recognized card brand of user card number the state changes to ::SDKPayECCardFieldStateCardUnsupported.
 *  Set can contain NSNumbers with ::SDKPayECCardBrand values. Example:
 *
 *  cardField.supportedCardBrands =@[@(SDKPayECCardBrandAmex), @(SDKPayECCardBrandMasterCard), @(SDKPayECCardBrandVisa)];
 */
@property(nonatomic, copy, nullable) NSArray<NSNumber *> *supportedCardBrands;

/**
 *  @brief Whether or not should card number field focus after component is visible.
 */
@property(nonatomic) BOOL shouldFocus;

/**
 *  @brief Whether or not the field currently contains a valid card number, expiration date and security code.
 */
@property (nonatomic, readonly, getter=isValid) BOOL valid;

/**
 *  @brief Resets all of the contents of all of the fields.
 *  @details If the field is currently being edited, the number field will become selected.
 */
- (void)clear;

@end

