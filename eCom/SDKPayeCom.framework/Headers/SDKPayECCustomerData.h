//
//  SDKPayECCustomerData.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 10/8/15.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>

#import "SDKPayECAddress.h"
#import "SDKPayECGender.h"
#import "SDKPayECMobilePhone.h"
#import "SDKPayECHomePhone.h"
#import "SDKPayECAccountInfo.h"
#import "SDKPayECShippingMethod.h"
#import "SDKPayECWorkPhone.h"

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Customer data to describe account holder or shipping
 */
@interface SDKPayECCustomerData : NSObject

/** First name
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic, nullable) NSString *firstName;
/** Last name
 @details Max. length 32. It is mandatory.
 */
@property (strong, nonatomic, nonnull ) NSString *lastName;
/** Email address
 @details Max. length 64. It is optional.
 */
@property (strong, nonatomic, nullable) NSString *email;
/** Phone number
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic, nullable) NSString *phone;
/** Phone country code
 @details Max. length 16
 */
@property (strong, nonatomic, nullable) NSString *phoneCountryCode;
/** Consumer's gender
 @details It is optional.
 */
@property (assign, nonatomic          ) SDKPayECGender gender;
/** Consumer's date of birth
 @details It is optional.
 */
@property (strong, nonatomic, nullable) NSDate   *dateOfBirth;
/** Address
 @details It is optional.
 */
@property (strong, nonatomic, nullable) SDKPayECAddress *address;
/** Tax number
 @details It is optional.
 */
@property (strong, nonatomic, nullable) NSString *taxNumber;

/**
 * Indicates shipping method chosen for the transaction. Merchants must choose the Shipping Indicator code that most accurately describes the cardholder's specific transaction. If   one or more items are included in the sale, use the Shipping Indicator code   for the physical goods, or if all dugutak goods, use the code that   describes the most expensive item.
 */
@property(assign, nonatomic) SDKPayECShippingMethod shippingMethod;

/**
 * This field contains additional information about the Cardholder’s account provided by the 3DS Requestor.
 */
@property (strong, nonatomic, nullable) SDKPayECAccountInfo *accountInfo;

/**
 * The home phone provided by the   Cardholder.
 * Refer to ITU-E.164 for additional information on format and length.
 * This field is required if available, unless market or regional mandate   restricts sending this information.
 */
@property (strong, nonatomic, nullable) SDKPayECHomePhone *homePhone;

/**
 * The mobile phone provided by the   Cardholder.
 * Refer to ITU-E.164 for additional information on format and length.
 * This field is required if available, unless market or regional mandate   restricts sending this information.
 */
@property (strong, nonatomic, nullable) SDKPayECMobilePhone *mobilePhone;

/**
 * The work phone provided by the   Cardholder.
 * Refer to ITU-E.164 for additional information on format and length.
 * This field is required if available, unless market or regional mandate   restricts sending this information.
 */
@property (strong, nonatomic, nullable) SDKPayECWorkPhone *workPhone;

@end

/** @} */
