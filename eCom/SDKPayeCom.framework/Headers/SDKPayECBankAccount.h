//
//  SDKPayECBankAccount.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 11/5/15.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>
#import "SDKPayECBankAccountType.h"

/*
 <xs:complexType name="bank-account">
         <xs:all>
             <xs:element name="bank-name" type="xs:string" minOccurs="0"/>
             <xs:element name="branch-city" type="xs:string" minOccurs="0"/>
             <xs:element name="branch-state" type="xs:string" minOccurs="0"/>
             <xs:element name="branch-address" type="xs:string" minOccurs="0"/>
             <xs:element name="iban" type="xs:string" minOccurs="0"/>
             <xs:element name="bic" type="xs:string" minOccurs="0"/>
             <xs:element name="account-number" type="xs:string" minOccurs="0"/>
             <xs:element name="bank-code" type="xs:string" minOccurs="0"/>

             <!-- boleto refunding fields -->
             <xs:element name="type" type="bank-account-type" minOccurs="0"/>
             <xs:element name="agency-number" type="xs:string" minOccurs="0"/>
             <xs:element name="agency-check-number" type="xs:string" minOccurs="0"/>
             <xs:element name="account-check-number" type="xs:string" minOccurs="0"/>
         </xs:all>
     </xs:complexType>
 */

@interface SDKPayECBankAccount : NSObject

/** Bank name
 @brief
 @details It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *bankName;
/** Bank branch city
 @brief
 @details It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *branchCity;
/** Bank branch state
 @brief
 @details It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *branchState;
/** Bank branch address
 @brief
 @details It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *branchAddress;
/** Bank IBAN
 @brief
 @details It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *IBAN;
/** Bank BIC
 @brief
 @details It is optional.
 */
@property (strong, nonatomic, nullable) NSString *BIC;
/** Accoutn number
 @brief
 @details It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *accountNumber;
/** Bank code
 @brief
 @details It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *bankCode;

/** Account bank type
 @brief boleto refunding fields
 @details It is optional.
 */
@property (assign, nonatomic) SDKPayECBankAccountType type;
/** Agency number
 @brief boleto refunding fields
 @details It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *agencyNumber;
/** Agency check number
 @brief boleto refunding fields
 @details It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *agencyCheckNumber;
/** Account check number
 @brief boleto refunding fields
 @details It is optional.
 */
@property (strong, nonatomic, nullable ) NSString *accountCheckNumber;

@end
