//
//  SDKPayECHotelIndustry.h
//  SDKPayeCom
//
//  Created by Peter Stavný on 27/11/2021.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>

/** @addtogroup ios_sdk
 *  @{
 */

/**
 * @brief Airline industry data
 */
@interface SDKPayECHotelIndustry : NSObject

/** Hotel code
 @brief The hotel code.
 @details Max. length 20. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *hotelCode;

/** Hotel name
 @brief Name of the hotel.
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *hotelName;

/** Hotel folio code
 @brief Contains the card acceptor’s internal invoice or billing ID reference number..
 @details Max. length 25. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *hotelFolioNumber;

/** Reservation confirmation number
 @brief This is the guest’s booking reference.
 @details Max. length 64. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *hotelReservationConfirmationNumber;

/** Guest first name
 @brief This is the first name of the guest.
 @details Max. length 20. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *guestFirstName;

/** Guest last name
 @brief This is the last name of the guest.
 @details Max. length 20. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *guestLastName;

/** Company name
 @brief This is the company name of the guest.
 @details Max. length 20. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *company;

/** Check in date
 @brief This is the date when the guest is scheduled to check-in.
 @details Max. length 10. It is optional.
 */
@property (strong, nonatomic, nullable ) NSDate *checkInDate;

/** Check out date
 @brief This is the date when the guest is scheduled to check-out.
 @details Max. length 10. It is optional.
 */
@property (strong, nonatomic, nullable ) NSDate *checkOutDate;

/** No show
 @brief Indicates whether or not the guest showed up after having made a reservation for a vehicle or lodging.
 0 = guest arrived
 1 = no-show (guest did not show up).
 If not provided, 0 will be set as default value.
 @details Max. length 1. It is optional.
 */
@property (assign, nonatomic ) BOOL noShow;

/** Agent code
 @brief This is the code of the agency that initiated the reservation.
 @details Max. length 8. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *agentCode;

/** Agent name
 @brief This is the name of the agency that initiated the reservation.
 @details Max. length 24. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *agentName;

/** Hotel phone number
 @brief Identifies the specific lodging property location by its local phone number.
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *hotelPhoneNumber;

/** Service phone number
 @brief This is the customer service phone number.
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *servicePhoneNumber;

/** Total room nights
 @brief Provides the total number of nights a room was contracted for a lodging stay.
 @details Max. length 4. It is optional.
 */
@property (strong, nonatomic, nullable ) NSNumber *totalRoomNights;

/** Daily room rate amount
 @brief Contains the daily room charges exclusive of taxes and fees.
 @details It is optional.
 */
@property (strong, nonatomic, nullable ) NSDecimalNumber *dailyRoomRateAmount;

/** Daily room rate currency
 @brief The currency of daily room charges.
 @details Max. length 13. It is optional.
  */
@property (strong, nonatomic, nullable) NSString *dailyRoomRateCurrency;

/** Total room tax amount
 @brief Contains tax amount information such as the daily room tax, occupancy tax, energy tax, and tourist tax.
 @details Max. length 14. It is optional.
  */
@property (strong, nonatomic, nullable ) NSDecimalNumber *totalRoomTaxAmount;

/** Total room tax currency
 @brief The currency of total room tax.
 @details It is mandatory if the non taxable net amount is specified.
 */
@property (strong, nonatomic, nullable) NSString *totalRoomTaxCurrency;

/** Non room charges amount
 @brief Contains the total amount of non-room charges, such as no-show or canceling.
 @details Max. length 14. It is optional.
  */
@property (strong, nonatomic, nullable ) NSDecimalNumber *nonRoomChargesAmount;

/** Non room charges  currency
 @brief The currency of non room charges.
 @details It is mandatory if the total amount of non-room charges amount is specified.
 */
@property (strong, nonatomic, nullable) NSString *nonRoomChargesCurrency;

/**Amount of telefon tax charges
 @brief Contains the total amount of charges for all phone calls..
 @details Max. length 13. It is optional.
  */
@property (strong, nonatomic, nullable ) NSDecimalNumber *telephonTaxChargesAmount;

/** Amount of telefon tax charges currency
 @brief The currency of total amount of charges for all phone calls.
 @details It is mandatory if the total amount of charges amount for all phone calls is specified.
 */
@property (strong, nonatomic, nullable) NSString *telephonTaxChargesCurrency;

/**Total amount of all gift
 @brief Contains the total amount of all gift shop and specialty shop charges.
 @details Max. length 13. It is optional.
  */
@property (strong, nonatomic, nullable ) NSDecimalNumber *giftShopPurchaseAmount;

/** Total amount of all gift currency
 @brief The currency of total amount of all gift.
 @details It is mandatory if the total amount of all gift shop is specified.
 */
@property (strong, nonatomic, nullable) NSString *giftShopPurchaseCurrency;

/**Total amount charged for in-room movies
 @brief Provides the total amount charged for in-room movies.
 @details Max. length 13. It is optional.
  */
@property (strong, nonatomic, nullable ) NSDecimalNumber *movieChargesAmount;

/** Total amount charged for in-room movies currency
 @brief The currency of total amount charged for in-room movies.
 @details It is mandatory if total amount charged for in-room movies is specified.
 */
@property (strong, nonatomic, nullable) NSString *movieChargesCurrency;

/**Total amount charged for health club
 @brief Provides the total amount charged for health club use and supplies.
 @details Max. length 13. It is optional.
  */
@property (strong, nonatomic, nullable ) NSDecimalNumber *healthClubChargesAmount;

/** Total amount charged for ihealth club use currency
 @brief The currency of total amount charged for health club.
 @details It is mandatory if total amount charged for health club is specified.
 */
@property (strong, nonatomic, nullable) NSString *healthClubChargesCurrency;

/**Total amount charged for business center use
 @brief Provides the total amount charged for business center use and supplies.
 @details Max. length 13. It is optional.
  */
@property (strong, nonatomic, nullable ) NSDecimalNumber *businessCenterChargesAmount;

/** Total amount charged for business center use currency
 @brief The currency of total amount charged for business center use.
 @details It is mandatory if total amount charged for business center use is specified.
 */
@property (strong, nonatomic, nullable) NSString *businessCenterChargesCurrency;

/**Total amount charged for in-room "mini-bar" service
 @brief Contains the total amount of in-room "mini-bar" service charges.
 @details Max. length 13. It is optional.
  */
@property (strong, nonatomic, nullable ) NSDecimalNumber *foodBeveragesMinibarChargesAmount;

/** Total amount charged forin-room "mini-bar" service currency
 @brief The currency of total amount charged for in-room "mini-bar" service.
 @details It is mandatory if total amount charged for in-room "mini-bar" service is specified.
 */
@property (strong, nonatomic, nullable) NSString *foodBeveragesMinibarChargesCurrency;

/**Total amount charged for icleaning charges
 @brief Contains the total amount of cleaning charges.
 @details Max. length 13. It is optional.
  */
@property (strong, nonatomic, nullable ) NSDecimalNumber *laundryChargesAmount;

/** Total amount charged for cleaning charges currency
 @brief The currency of total amount charged for cleaning charges.
 @details It is mandatory if total amount charged for cleaning charges is specified.
 */
@property (strong, nonatomic, nullable) NSString *laundryChargesCurrency;

/**Total amount charged for charges associated with the use of valet services
 @brief Contains the total amount of charges associated with the use of valet services.
 @details Max. length 13. It is optional.
  */
@property (strong, nonatomic, nullable ) NSDecimalNumber *parkingValetChargesAmount;

/** Total amount charged for charges associated with the use of valet services currency
 @brief The currency of total amount charged for charges associated with the use of valet services.
 @details It is mandatory if total amount charged for charges associated with the use of valet services is specified.
 */
@property (strong, nonatomic, nullable) NSString *parkingValetChargesCurrency;

/**Total amount charged for advance payments received before/during the lodging
 @brief This is the total amount of advance payments received before/during the lodging.
 @details Max. length 13. It is optional.
  */
@property (strong, nonatomic, nullable ) NSDecimalNumber *cashAdvancesAmount;

/** Total amount charged for advance payments received before/during the lodgingcurrency
 @brief The currency of total amount charged for advance payments received before/during the lodging.
 @details It is mandatory if total amount charged for advance payments received before/during the lodging is specified.
 */
@property (strong, nonatomic, nullable) NSString *cashAdvancesCurrency;


@end

/** @} */

