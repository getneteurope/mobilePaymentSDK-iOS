//
//  SDKPayECMobilePhone.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 13/05/2019.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>

@interface SDKPayECMobilePhone : NSObject

/**
 * Country Code of the phone, limited   to 1-3 characters
 */
@property (strong, nonatomic, nullable) NSString *countryPart;

/**
 * subscriber section of the number,   limited to maximum 15 characters.
 */
@property (strong, nonatomic, nullable) NSString *otherPart;

@end


