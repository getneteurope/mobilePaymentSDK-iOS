//
//  NSString+Utils.swift
//  Simple
//
//  Created by Vrana, Jozef on 2/21/17.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

import Foundation

extension NSString {
    
    public func SHA256() -> NSString {
        
        let data : NSData = self.data(using: String.Encoding.utf8.rawValue)! as NSData
        var digest = [UInt8](repeating: 0, count:Int(CC_SHA256_DIGEST_LENGTH))
        CC_SHA256(data.bytes, CC_LONG(data.length), &digest)
        let hashData = NSData(bytes: digest, length: Int(CC_SHA256_DIGEST_LENGTH))
        
        var hash : NSString = hashData.description as NSString
        hash = hash.replacingOccurrences(of: " ", with: "") as NSString
        hash = hash.replacingOccurrences(of: "<", with: "") as NSString
        hash = hash.replacingOccurrences(of: ">", with: "") as NSString
        
        return hash
    }
    
    public func HMAC256WithKey(key: NSString) -> String {
        
        let rawData = self.data(using: String.Encoding.utf8.rawValue)! as NSData
        let rawKey  = key.data(using: String.Encoding.utf8.rawValue)! as NSData
        let rawHMAC = rawData.HMAC256withKey(key: rawKey)
        
        let HMAC  = rawHMAC.base64EncodedString(options: .lineLength64Characters)
        return HMAC;
    }
}

extension NSData {
    
    public func HMAC256withKey(key: NSData) -> NSData {
        let hash = NSMutableData(length: Int(CC_SHA256_DIGEST_LENGTH));
        CCHmac(CCHmacAlgorithm(kCCHmacAlgSHA256), key.bytes, key.length, self.bytes, self.length, hash?.mutableBytes)
        return NSData(data: hash! as Data)
    }
}
