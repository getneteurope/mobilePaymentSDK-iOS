//
//  SDKPayCardholderAuthenticationStatus.h
//  SDKPayeCom
//
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
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
