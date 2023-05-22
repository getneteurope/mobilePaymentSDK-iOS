//
//  SDKPayECBrowser.h
//  SDKPayeComBizum
//
//  Created by Peter Stavný on 06/02/2023.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SDKPayECBrowser : NSObject

@property (strong, nonatomic) NSString *userAgent;
@property (strong, nonatomic) NSString *ipAddress;

@end

NS_ASSUME_NONNULL_END
