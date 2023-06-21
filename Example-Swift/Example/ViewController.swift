//
//  ViewController.swift
//  Embedded
//
//  Created by Vrana, Jozef on 28/02/2019.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

import UIKit
import SDKPayeCom
import SDKPayeComCard
import SDKPayeComPayPal
import SDKPayeComSEPA
import SDKPayeComWireTransfer
import SDKPayeComAlipay
import SDKPayeComP24
import SDKPayeComCard
import SDKPayeComCardScannerGallery


let PMSTitleCard     = NSLocalizedString("start_simple_card_payment", comment: "")
let PMSTitleCardManualBrandSelection = NSLocalizedString("start_simple_card_payment_manual_brand", comment: "")
let PMSTitlePayPal   = NSLocalizedString("start_paypal_payment", comment: "")
let PMSTitleSEPA     = NSLocalizedString("start_sepa_payment", comment: "")
let PMSTitleKlarna   = NSLocalizedString("start_klarna_payment", comment: "")
let PMSTitleWireTransfer   = NSLocalizedString("start_wiretransfer_payment", comment: "")
let PMSTitleAlipay   = NSLocalizedString("start_alipay_payment", comment: "")
let PMSTitleP24   = NSLocalizedString("start_p24_payment", comment: "")
let PMETitleCard                     = NSLocalizedString("start_card_field_payment", comment: "")
let PMETitleAnimatedCardfield        = NSLocalizedString("start_animated_card_field_payment", comment: "")
let PMETitleCardManualBrandSelection = NSLocalizedString("start_card_field_payment_manual_brand", comment: "")
let PMETitleCardManualBrandSelectionAnimated = NSLocalizedString("start_animated_card_field_payment_manual_brand", comment: "")

class ViewController: PaymemtVC, UIActionSheetDelegate {
    
    @IBOutlet weak var payButton: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
                
        payButton.setTitle(NSLocalizedString("start_pay_button", comment: ""), for: .normal)
    }
    
    override var preferredStatusBarStyle: UIStatusBarStyle {
        if #available(iOS 13.0, *) {
            return .darkContent
        } else {
            return .default
        }
    }
    
    @IBAction func onPay(_ sender: UIButton) {
        let actionSheetController = UIAlertController(title: NSLocalizedString("app_name", comment: ""), message: nil, preferredStyle: .actionSheet)
        
        func handler(actionTarget: UIAlertAction) {
            
            
            if actionTarget.style == .cancel {
                self.dismiss(animated: true, completion: nil)
                return
            }
            
            let paymentTitle = actionTarget.title
            
                // EMBEDDED
            if paymentTitle == PMETitleCard || paymentTitle == PMETitleCardManualBrandSelection {
                let storyboard = UIStoryboard(name: "Main", bundle: nil)
                let vc = storyboard.instantiateViewController(withIdentifier: "CardfieldVC")
                self.navigationController?.pushViewController(vc, animated: true)
                let manualCardbrandSelection = paymentTitle == PMETitleCardManualBrandSelection ? true : false
                let cardLayout = SDKPayECCardLayout.appearance()
                cardLayout.manualCardBrandSelectionRequired = manualCardbrandSelection
                
            } else if paymentTitle == PMETitleAnimatedCardfield || paymentTitle == PMETitleCardManualBrandSelectionAnimated {
                let storyboard = UIStoryboard(name: "Main", bundle: nil)
                let vc = storyboard.instantiateViewController(withIdentifier: "AnimatedCardfieldVC")
                self.navigationController?.pushViewController(vc, animated: true)
                let manualCardbrandSelection = paymentTitle == PMETitleCardManualBrandSelectionAnimated ? true : false
                let cardLayout = SDKPayECCardLayout.appearance()
                cardLayout.manualCardBrandSelectionRequired = manualCardbrandSelection
                
                // SIMPLE
            } else if paymentTitle == PMSTitleCard ||
                paymentTitle == PMSTitleCardManualBrandSelection ||
                paymentTitle == PMSTitlePayPal ||
                paymentTitle == PMSTitleSEPA ||
                paymentTitle == PMSTitleKlarna ||
                paymentTitle == PMSTitleWireTransfer ||
                paymentTitle == PMSTitleAlipay ||
                paymentTitle == PMSTitleP24 {
                
                let payment = self.createPayment(title: paymentTitle!)
                
                if (UIApplication.shared.delegate as! AppDelegate).client == nil {
                    return
                }
                
                (UIApplication.shared.delegate as! AppDelegate).client!.make(payment, withCompletion: { [weak self] (response: SDKPayECPaymentResponse?,error: Error?) in
                    guard let self = self else { return }
                    let alertTitle = error != nil ? NSLocalizedString("general_error", comment: "") : NSLocalizedString("general_success", comment: "")
                    let alertMessage = error != nil ? error!.localizedDescription : NSLocalizedString("general_payment_success", comment: "")
                    let ac = UIAlertController(title: alertTitle, message: alertMessage, preferredStyle: .actionSheet)
                    ac.popoverPresentationController?.sourceView = self.view
                    ac.popoverPresentationController?.sourceRect = CGRect(x: self.view.bounds.width / 2.0,y: self.view.bounds.height,width: 1.0,height: 1.0)
                    
                    ac.addAction(UIAlertAction(title: NSLocalizedString("general_ok", comment: ""), style:.default, handler:nil));
                    self.present(ac, animated:true, completion:nil)
                })
            }
        }
        
        actionSheetController.addAction(UIAlertAction(title: PMSTitleCard, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMSTitleCardManualBrandSelection, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMSTitlePayPal, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMSTitleSEPA, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMSTitleWireTransfer, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMSTitleAlipay, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMSTitleP24, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMETitleCard, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMETitleAnimatedCardfield, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMETitleCardManualBrandSelection, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMETitleCardManualBrandSelectionAnimated, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: NSLocalizedString("general_cancel", comment: ""), style: .cancel, handler: handler))
        actionSheetController.popoverPresentationController?.sourceView = self.view
        actionSheetController.popoverPresentationController?.sourceRect = CGRect(x: self.view.bounds.width / 2.0,y: self.view.bounds.height,width: 1.0,height: 1.0)
        
        self.present(actionSheetController, animated: true, completion: nil)
    }
    
    func prepareForPopoverPresentation(_ popoverPresentationController: UIPopoverPresentationController) {
        
    }
    
    func createPayment(title:String) -> SDKPayECPayment {
        var result : SDKPayECPayment
        switch title {
        case PMSTitleCard : result = self.createPaymentCard()
            let cardLayout =  SDKPayECCardLayout.appearance()
            cardLayout.manualCardBrandSelectionRequired = false
        case PMSTitleCardManualBrandSelection :
            result = self.createPaymentCard()
            let cardLayout =  SDKPayECCardLayout.appearance()
            cardLayout.manualCardBrandSelectionRequired = true
        case PMSTitlePayPal : result = self.createPaymentPayPal()
        case PMSTitleSEPA : result = self.createPaymentSEPA()
        case PMSTitleWireTransfer : result = self.createPaymentWireTransfer()
        case PMSTitleAlipay : result = self.createPaymentAlipay()
        case PMSTitleP24 : result = self.createPaymentP24()
        default : result = SDKPayECPayment()
        }
        return result
    }
    
    func createPaymentCard() -> SDKPayECPayment {
        let payment = SDKPayECCardPayment()
        payment.amount = AMOUNT
        payment.currency = "USD"
        payment.transactionType = .purchase
        /**
         @Warning: We ask you to never share your Secret Key with anyone, or store it inside your application or phone. This is crucial to ensure the security of your transactions.
         You will be generating the signature on your own server’s backend, as it is the only place where you will store your Secret Key.
         */
        let SDKPay_MERCHANT_ACCOUNT_ID = "5918caa1-a576-49e3-ae0a-cb677631ee92"
        let SDKPay_MERCHANT_SECRET_KEY = "9a6c4f34-4156-47b7-9022-3f6d18147cd2"
        
        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)
        
        return payment
    }
    
    func createPaymentPayPal() -> SDKPayECPayment {
        let orderItem = SDKPayECOrderItem()
        orderItem.name = "The Watch"
        orderItem.amount = AMOUNT;
        orderItem.amountCurrency = .EUR;
        
        let payment = SDKPayECPayPalPayment()
        payment.appScheme = "example";
        payment.amount = AMOUNT
        payment.currency = "EUR"
        payment.transactionType = .authorization
//        payment.order = order;
        
        let accountHolder = SDKPayECCustomerData.init()
        accountHolder.lastName = "Doe"
        payment.accountHolder = accountHolder
        /**
         @Warning: We ask you to never share your Secret Key with anyone, or store it inside your application or phone. This is crucial to ensure the security of your transactions.
         You will be generating the signature on your own server’s backend, as it is the only place where you will store your Secret Key.
         */
        let SDKPay_MERCHANT_ACCOUNT_ID = "bb342082-9761-4481-802e-20b10d92545d"
        let SDKPay_MERCHANT_SECRET_KEY = "fd1d35aa-952e-4549-9f3d-ea33c89c86c4"
        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)
        
        return payment
    }
    
    func createPaymentSEPA() -> SDKPayECPayment {
        let payment = SDKPayECSEPAPayment()
        payment.creditorID = "DE98ZZZ09999999999"
        payment.mandateID = "12345678"
        payment.amount = AMOUNT
        payment.currency = "EUR"
        payment.transactionType = .pendingDebit
        /**
         @Warning: We ask you to never share your Secret Key with anyone, or store it inside your application or phone. This is crucial to ensure the security of your transactions.
         You will be generating the signature on your own server’s backend, as it is the only place where you will store your Secret Key.
         */
        let SDKPay_MERCHANT_ACCOUNT_ID = "5c4ef296-46c5-482c-9143-509d13fcca34"
        let SDKPay_MERCHANT_SECRET_KEY = "d60f0ba0-35cd-43f9-a0ef-1dab7880b1d7"
        
        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)
        
        return payment
    }
    
    func createPaymentWireTransfer() -> SDKPayECPayment {

        let payment = SDKPayECWireTransferPayment()
        payment.amount = AMOUNT
        payment.currency = SDKPayECCurrencyGetISOCode(SDKPayECCurrency.EUR)
        
        payment.transactionType = SDKPayECTransactionType.authorization

        let accountHolder = SDKPayECCustomerData.init()
        accountHolder.lastName = "Doe"
        payment.accountHolder = accountHolder
        
        let notif = SDKPayECNotification.init()
        notif.transactionState = SDKPayECTransactionState.success
        payment.notifications = [notif]
        
        let SDKPay_MERCHANT_ACCOUNT_ID = "9e035f8f-bf8d-4179-aafb-ca059128e089"
        let SDKPay_MERCHANT_SECRET_KEY = "c3b39f09-5632-42fc-b1a6-2a1b386613dd"
        
        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)
        
        return payment
    }
    
    func createPaymentAlipay() -> SDKPayECPayment {

        let payment = SDKPayECAlipayPayment()
        payment.amount = AMOUNT
        payment.currency = SDKPayECCurrencyGetISOCode(SDKPayECCurrency.USD)
        
        let localize = SDKPayECLocalize.appearance()
        let locale_de = localize.locale == ._de;

        payment.transactionType = SDKPayECTransactionType.debit
        payment.ipAddress = "127.0.0.1"

        let accountHolder = SDKPayECCustomerData.init()
        accountHolder.firstName = "John"
        accountHolder.lastName = "Doe"
        accountHolder.email = "john.doe@getneteurope.com"
        payment.accountHolder = accountHolder
        
        let order = SDKPayECOrder.init();
        order.number = "180528105918955"
        order.detail = "DemoShop product 002"
        payment.order = order;
        payment.locale = locale_de ? SDKPayECLocale._de : SDKPayECLocale._en
        
        let SDKPay_MERCHANT_ACCOUNT_ID = "<to_be_updated>"
        let SDKPay_MERCHANT_SECRET_KEY = "<to_be_updated>"
        
        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)
        
        return payment
    }
    
    func createPaymentP24() -> SDKPayECPayment {

        let payment = SDKPayECP24Payment()
        payment.amount = AMOUNT
        payment.currency = SDKPayECCurrencyGetISOCode(SDKPayECCurrency.PLN)
        
        payment.transactionType = SDKPayECTransactionType.debit

        let accountHolder = SDKPayECCustomerData.init()
        accountHolder.firstName = "John"
        accountHolder.lastName = "Doe"
        accountHolder.email = "john.doe@getneteurope.com"
        payment.accountHolder = accountHolder
        
        let SDKPay_MERCHANT_ACCOUNT_ID = "39525cf9-fe90-4f99-9ce2-42815754d7c1"
        let SDKPay_MERCHANT_SECRET_KEY = "6951db91-063a-4f28-b88e-02bde3ae555e"
        
        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)
        
        return payment
    }
}
