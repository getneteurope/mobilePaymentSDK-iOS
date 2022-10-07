//
//  NSDateFormatter+Utils.swift
//  Simple
//
//  Created by Vrana, Jozef on 2/21/17.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

import Foundation

extension DateFormatter {

    public class func requestTimestampDateFormatter() -> DateFormatter {
    
        let formatter = DateFormatter()
        formatter.dateFormat = "yyyyMMddHHmmss"
        formatter.timeZone = TimeZone(abbreviation:"UTC")
        return formatter
    }
    
    public class func requestTimestampDateFormatterV2() -> DateFormatter {
        
        let formatter = DateFormatter()
        formatter.locale = Locale(identifier: "en_US_POSIX")
        formatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ssZZZZZ"
        formatter.timeZone = TimeZone(abbreviation:"UTC")
        return formatter
    }
}
