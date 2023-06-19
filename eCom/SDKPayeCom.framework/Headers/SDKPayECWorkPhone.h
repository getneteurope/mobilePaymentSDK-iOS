//
//  SDKPayECWorkPhone.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 13/05/2019.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SDKPayECWorkPhone : NSObject

/**
 * Country Code of the phone, limited   to 1-3 characters
 */
@property (strong, nonatomic, nullable) NSString *countryPart;

/**
 * subscriber section of the number,   limited to maximum 15 characters.
 */
@property (strong, nonatomic, nullable) NSString *otherPart;

@end


