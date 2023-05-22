//
//  SDKPayECTicketIssuer.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 19/09/2018.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>
#import "SDKPayECCountry.h"

@interface SDKPayECTicketIssuer : NSObject

/** Ticket issuer street1
 @brief The issuer address street for the airline transaction.
 @details Max. length 128. It is optional.
 */
@property (strong, nonatomic) NSString *ticketIssuerStreet1;

/** Ticket issuer street2
 @brief The issuer address street 2 for the airline transaction.
 @details Max. length 128. It is optional.
 */
@property (strong, nonatomic) NSString *ticketIssuerStreet2;

/** Ticket issuer city
 @brief The city of the address of the airline transaction issuer.
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic) NSString *ticketIssuerCity;

/** Ticket issuer state
 @brief The state of the address of the airline transaction issuer.
 @details Max. length 32. It is optional.
 */
@property (strong, nonatomic) NSString *ticketIssuerState;

/** Ticket issuer country
 @brief The Issuer address country Id for the airline transaction.
 @details Max. length 3. It is optional.
 */
@property (assign, nonatomic) SDKPayECCountry ticketIssuerCountry;

/** Ticket issuer postal code
 @brief An alphanumeric numeric code used to represent the airline transaction issuer postal code.
 @details Max. length 16. It is optional.
 */
@property (strong, nonatomic) NSString *ticketIssuerPostalCode;

@end
