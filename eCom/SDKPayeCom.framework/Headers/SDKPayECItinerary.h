//
//  SDKPayECItinerary.h
//  SDKPayeCom
//
//  Created by Vrana, Jozef on 20/09/2018.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SDKPayECSegment.h"

@interface SDKPayECItinerary : NSObject

@property (strong, nonatomic) SDKPayECSegment *segment;

@end
