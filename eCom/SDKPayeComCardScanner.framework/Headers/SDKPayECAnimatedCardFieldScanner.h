//
//  SDKPayECAnimatedCardScanner.h
//  SDKPayeComCardScanner
//
//  Created by Vrana, Jozef on 18/01/2019.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

#import <SDKPayeComCard/SDKPayECAnimatedCardField.h>

@interface SDKPayECAnimatedCardFieldScanner : SDKPayECAnimatedCardField

@property (nonatomic, copy, null_resettable) NSString *min_last_year;

@property (nonatomic, copy, null_resettable) NSString *max_last_year;

/**
 *  @brief The scanToolbarButton title.
 *  @details Title customization option. The default is nil, the toolbar button shows the default "Scan" title. If set custom title the toolbar button replace the title.
 */
@property (nonatomic, strong, nullable) NSString *scanToolbarButtonTitle UI_APPEARANCE_SELECTOR;
/**
 *  @brief The scanToolbarButton visibility option.
 *  @details Default is YES when the scanner is available. If set to NO the scanToolbar button is hidden.
 */
@property (nonatomic, assign) BOOL enableScanToolbarButton UI_APPEARANCE_SELECTOR;

@end

