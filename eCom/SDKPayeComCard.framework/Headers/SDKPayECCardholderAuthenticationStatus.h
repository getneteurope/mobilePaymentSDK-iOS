//
//  SDKPayCardholderAuthenticationStatus.h
//  SDKPayeCom
//
//  Created by Sedlak, Stefan on 11/20/15.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/NSObjCRuntime.h>

typedef NS_ENUM(NSUInteger, SDKPayECCardholderAuthenticationStatus) {
    SDKPayECCardholderAuthenticationStatusUndefined = 0,
    
    SDKPayECCardholderAuthenticationStatusY,
    SDKPayECCardholderAuthenticationStatusA,
    SDKPayECCardholderAuthenticationStatusU,
    SDKPayECCardholderAuthenticationStatusN,
    SDKPayECCardholderAuthenticationStatusE,
    
    SDKPayECCardholderAuthenticationStatusTotalNumber
};
