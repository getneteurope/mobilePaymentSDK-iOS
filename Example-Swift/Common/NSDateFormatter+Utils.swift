//
//  NSDateFormatter+Utils.swift
//  Simple
//
//  Created by Vrana, Jozef on 2/21/17.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
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
