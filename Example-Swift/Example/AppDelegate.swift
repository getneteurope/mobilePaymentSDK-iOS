//
//  AppDelegate.swift
//  Embedded
//
//  Created by Vrana, Jozef on 3/6/17.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

import UIKit
import SDKPayeCom

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?
    public var client : SDKPayECClient?
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        
        self.client = SDKPayECClient.init(environment: SDKPayECEnvironment.TEST)!

        return true
    }
    
    func application(_ app: UIApplication, open url: URL, options: [UIApplicationOpenURLOptionsKey : Any] = [:]) -> Bool {
        
        if let client = self.client {
            let openURL = client.open(url)
            return openURL
        }
        return true
    }
}
