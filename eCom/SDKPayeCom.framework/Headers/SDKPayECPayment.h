//
//  SDKPayPayment.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 10/8/15.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/Foundation.h>

#import <SDKPayeCom/SDKPayECCurrency.h>
#import <SDKPayeCom/SDKPayECCustomerData.h>
#import <SDKPayeCom/SDKPayECLocale.h>
#import <SDKPayeCom/SDKPayECNotification.h>
#import <SDKPayeCom/SDKPayECNotificationFormat.h>
#import <SDKPayeCom/SDKPayECOrder.h>
#import <SDKPayeCom/SDKPayECTransactionType.h>
#import <SDKPayeCom/SDKPayECAirlineIndustry.h>
#import <SDKPayeCom/SDKPayECIsoTransactionType.h>
#import <SDKPayeCom/SDKPayECMerchantRiskIndicator.h>
#import <SDKPayeCom/SDKPayECLoyaltyCard.h>
#import <SDKPayeCom/SDKPayECCardData.h>
#import <SDKPayeCom/SDKPayECAdditionalProviderData.h>
#import <SDKPayeCom/SDKPayECBankAccount.h>
#import <SDKPayeCom/SDKPayECHotelIndustry.h>
#import <SDKPayeCom/SDKPayECCustomFields.h>
#import <SDKPayeCom/SDKPayECEntryMode.h>

@class SDKPayECPaymentMethod;

/** @addtogroup ios_sdk
 *  @{
 */

/**
 *  @brief Base class of all Payment Methods.
 *  @details Initialization SDKPayECPayment object is useful only for [SDKPayECClient checkPayment:] method.
 */
@interface SDKPayECPayment : NSObject

/**
 *  @brief 2nd generation signature. Authorize client to process the transaction. checkPayment works only with this signature.
 *  @details It is mandatory. It supersedes requestSignature and requestTimestamp.
 */
@property (copy, nonatomic, nonnull) NSString *signature;

/**
 *  @brief Unique identifier assigned for every Merchant Account.
 *  @details It is mandatory.
 */
@property (strong, nonatomic, nonnull) NSString *merchantAccountID;

/**
 *  @brief Category used by frontend merchant to resolve internal merchant for processing payment.
 *  @details It is optional.
 */
@property (strong, nonatomic, nullable) NSString *merchantAccountResolverCategory;

/**
 *  @brief Unique identifier associated with the transaction, which is created by the merchant.
 *  @details It is mandatory.
 */
@property (strong, nonatomic, nonnull) NSString *requestID;

/**
 @brief The only amount that accompanies the transaction when it is created and/or requested.
 @details For transactionType SDKPayECTransactionTypeAuthorizationOnly the only valid value is [NSDecimalNumber zero].
 It is mandatory.
 */
@property (strong, nonatomic, nullable) NSDecimalNumber *amount;

/**
 @brief Currency in which the transaction is processed.
 @details This property is deprecated, use NSString *currency instead.
 */
@property (assign, nonatomic) SDKPayECCurrency amountCurrency DEPRECATED_MSG_ATTRIBUTE("Use currency property instead");

/**
 @brief Currency in which the transaction is processed.
 @details It is mandatory. Exaples: "EUR", "GBP", "USD", ...
 */
@property (strong, nonatomic, nullable) NSString *currency;

/**
 @brief Determines transaction processing behaviour.
 @details It is mandatory.
 */
@property (assign, nonatomic) SDKPayECTransactionType transactionType;

/**
 @brief Customer's account information.
 @details It is optional.
 */
@property (strong, nonatomic, nullable) SDKPayECCustomerData *accountHolder;

/**
 @brief Customer's shipping information
 @details It is optional.
 */
@property (strong, nonatomic, nullable) SDKPayECCustomerData *shipping;

/**
 @brief Customer's order information.
 @details It is optional.
 */
@property (strong, nonatomic, nullable) SDKPayECOrder *order;

/**
 @brief Notifications configuration
 @details It is optional.
 */
@property (strong, nonatomic, nullable) NSArray<SDKPayECNotification *> *notifications;

@property (assign, nonatomic) SDKPayECNotificationFormat notificationsFormat;
/**
 @brief The IP Address of the Customer as recorded by the entity receiving the Transaction Attempt from the Customer
 @details It is optional.
 */
@property (strong, nonatomic, nullable) NSString *IPAddress;

/**
 @brief Defines the user's language and any special variant preferences that the user wants to see in their user interface.
 @details Typically used by SDKPayECPayPalPayment and 3D Secure SDKPayCardPayment HTML formulars.
 It is optional.
 */
@property (assign, nonatomic ) SDKPayECLocale locale;

/**
 * Airline industry
 */
@property (strong, nonatomic, nullable) SDKPayECAirlineIndustry *airlineIndustry;

/**
 * Merchant's assessment of the level of fraud risk for the specific authentication for both the cardholder and   the authentication being conducted.
 */
@property (strong, nonatomic, nullable) SDKPayECMerchantRiskIndicator *merchantRiskIndicator;

/**
 * Identifies the type of transaction being authenticated. The values are derived from ISO 8583.
 */
@property (assign, nonatomic) SDKPayECIsoTransactionType isoTransactionType;

/**
 @brief transaction identifier of previous transaction gathered by [SDKPayECPaymentResponse transactionIdentifier]
 @details It is used with referenced transactions:SDKPayECTransactionTypeReferencedAuthorization and SDKPayECTransactionTypeReferencedPurchase
 */
@property (strong, nonatomic, nullable) NSString *parentTransactionID;

/**
 * @brief App scheme which is configured in Info.plist and associated with your app. It is used to redirect consumers from the banking apps or websites to your app.
 */
@property (strong, nonatomic, nonnull) NSString *appScheme;

/**
 * @brief Loyalty card information
 * @details Typically used by card for SDKPayECTransactionTypeEnrollment transaction
 */
@property (strong, nonatomic, nullable) SDKPayECLoyaltyCard *loyaltyCard;

/**
 * @brief Extre card data informations
 * @details Typically used by card for SDKPayECTransactionTypeEnrollment transaction
 */
@property (strong, nonatomic, nullable) SDKPayECCardData *cardData;

/**
 * @brief Instrument Country
 */
@property (assign, nonatomic) SDKPayECCountry instrumentCountry;

/**
 * @brief Consumer ID
 * @details Typically used by card for SDKPayECTransactionTypeEnrollment transaction. It's required field for transaction without acount holder identification data (email, phone)
 */
@property (strong, nonatomic, nullable) NSString *consumerID;

/**
 * @brief Extre provider data informations
 * @details Typically used by payment method SDKPayECKlarnaPaymentMethod 
 */
@property (strong, nonatomic, nullable) SDKPayECAdditionalProviderData *additionalProviderData;

/**
 @brief Banks's account information.
 @details It is optional.
 */
@property (strong, nonatomic, nullable) SDKPayECBankAccount *bankAccount;

/**
 * Hotel industry
 */
@property (strong, nonatomic, nullable) SDKPayECHotelIndustry *hotelIndustry;

/**
 @brief Custom fields
 @details It is optional.
 */
@property (strong, nonatomic, nullable) SDKPayECCustomFields *customFields;

/**
 * Entry mode
 */
@property (assign, nonatomic) SDKPayECEntryMode entryMode;

/**
 @brief initialize payment with mandatory parameters

 @param merchantAccountID Unique identifier assigned for every Merchant Account
 @param requestID Unique identifier associated with the transaction, which is created by the merchant
 @param transactionType determines transaction processing behaviour
 @param amount The only amount that accompanies the transaction when it is created and/or requested
 @param currency in which the transaction is processed
 @param signature 2nd generation signature. Authorize client to process the transaction
 
 @details you can use SDKPayECTransactionTypeUndefined and nil amount/currency to checkPayment
 
 @return Returns payment object for SDKPayECClient.
 */
- (nullable instancetype)initWithMerchantAccountID:(nonnull NSString *)merchantAccountID
                                         requestID:(nonnull NSString *)requestID
                                   transactionType:(SDKPayECTransactionType)transactionType
                                            amount:(nullable NSDecimalNumber *)amount
                                          currency:(nullable NSString *)currency
                                         signature:(nonnull NSString *)signature;

/**
 @brief initialize payment with mandatory parameters for checkPayment
 
 @param merchantAccountID Unique identifier assigned for every Merchant Account
 @param requestID Unique identifier associated with the transaction, which is created by the merchant
 @param signature 2nd generation signature. Authorize client to process the transaction
 
 @details It is useful for [SDKPayECClient checkPayment:].
 
 @return Returns payment object for SDKPayECClient.
 */
- (nullable instancetype)initWithMerchantAccountID:(nonnull NSString *)merchantAccountID
                                         requestID:(nonnull NSString *)requestID
                                         signature:(nonnull NSString *)signature;

/**
 @brief Returns the notification for transaction state.
 @param state The transaction state defined by SDKPayECTransactionState enumaration
 @return Returns notification or nil if no associated notification.
 */
- (nullable SDKPayECNotification *)notificationForState:(SDKPayECTransactionState)state;

@end

/** @} */
