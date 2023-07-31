//
//  ViewController.swift
//  Embedded
//
//  Created by Vrana, Jozef on 28/02/2019.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
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
import SDKPayeComIdeal
import SDKPayeComSofort
import SDKPayeComRatePay
import SDKPayeComBlik
import SDKPayeComBizum
import SDKPayeComMBWay
import SDKPayeComMBReferencia
import SDKPayeComZinia


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
let PMSTitleIdeal   = NSLocalizedString("start_ideal_payment", comment: "")
let PMSTitleSofort   = NSLocalizedString("start_sofort_payment", comment: "")
let PMSTitleRatePayElv   = NSLocalizedString("start_ratepay_elv_payment", comment: "")
let PMSTitleRatePayInvoice   = NSLocalizedString("start_ratepay_invoice_payment", comment: "")
let PMSTitleBlikLevel0   = NSLocalizedString("start_blik_level0_payment", comment: "")
let PMSTitleBlikRedirect   = NSLocalizedString("start_blik_redirect_payment", comment: "")
let PMSTitleBizum   = NSLocalizedString("start_bizum_payment", comment: "")
let PMSTitleMBWay   = NSLocalizedString("start_mbway_payment", comment: "")
let PMSTitleMBReferencia   = NSLocalizedString("start_mbreferencia_payment", comment: "")
let PMSTitleZinia   = NSLocalizedString("start_zinia_payment", comment: "")


class ViewController: PaymemtVC, UIActionSheetDelegate {
    
    @IBOutlet weak var payButton: UIButton!
    @IBOutlet weak var versionL: UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()
                
        payButton.setTitle(NSLocalizedString("start_pay_button", comment: ""), for: .normal)
        
        self.versionL.text = self.versionString()
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
                        paymentTitle == PMSTitleP24 ||
                        paymentTitle == PMSTitleIdeal ||
                        paymentTitle == PMSTitleSofort ||
                        paymentTitle == PMSTitleRatePayElv ||
                        paymentTitle == PMSTitleRatePayInvoice ||
                        paymentTitle == PMSTitleBlikLevel0 ||
                        paymentTitle == PMSTitleBlikRedirect ||
                        paymentTitle == PMSTitleBizum ||
                        paymentTitle == PMSTitleMBWay ||
                        paymentTitle == PMSTitleMBReferencia ||
                        paymentTitle == PMSTitleZinia
            {
                
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
        actionSheetController.addAction(UIAlertAction(title: PMSTitleIdeal, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMSTitleSofort, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMSTitleRatePayElv, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMSTitleRatePayInvoice, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMSTitleBlikLevel0, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMSTitleBlikRedirect, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMSTitleBizum, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMSTitleMBWay, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMSTitleMBReferencia, style: .default, handler: handler))
        actionSheetController.addAction(UIAlertAction(title: PMSTitleZinia, style: .default, handler: handler))
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
        case PMSTitleIdeal : result = self.createPaymentIdeal()
        case PMSTitleSofort : result = self.createPaymentSofort()
        case PMSTitleRatePayElv : result = self.createPaymentRatePayElv()
        case PMSTitleRatePayInvoice : result = self.createPaymentRatePayInvoice()
        case PMSTitleBlikLevel0 : result = self.createPaymentBlikLevel0()
        case PMSTitleBlikRedirect : result = self.createPaymentBlikRedirect()
        case PMSTitleBizum : result = self.createPaymentBizum()
        case PMSTitleMBWay : result = self.createPaymentMBWay()
        case PMSTitleMBReferencia : result = self.createPaymentMBReferencia()
        case PMSTitleZinia : result = self.createPaymentZinia()
        default : result = SDKPayECPayment()
        }
        return result
    }
    
    func createPaymentCard() -> SDKPayECPayment {
        let payment = SDKPayECCardPayment()
        payment.amount = AMOUNT
        payment.currency = "EUR"
        payment.transactionType = .purchase
        
        payment.versionThreeD = "2.1"
        payment.attemptThreeD = .yes
        
        let accountHolder = SDKPayECCustomerData()
        accountHolder.firstName = "John"
        accountHolder.lastName = "Doe"
        accountHolder.email = "john.doe@email.com"
        payment.accountHolder = accountHolder
        
        let notification = SDKPayECNotification()
        notification.url = URL(string: "https://api-test.getneteurope.com/engine/mobile/v2/notify")!
        payment.notifications = [notification]
        payment.notificationsFormat = SDKPayECNotificationFormat.JSON
        
        /**
         @Warning: We ask you to never share your Secret Key with anyone, or store it inside your application or phone. This is crucial to ensure the security of your transactions.
         You will be generating the signature on your own server’s backend, as it is the only place where you will store your Secret Key.
         */
        //Card - 3D Automatic Card Brand Recognition - VISA, MC, AMEX, DINERS
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
                
        let notification = SDKPayECNotification()
        notification.url = URL(string: "https://api-test.getneteurope.com/engine/mobile/v2/notify")!
        notification.transactionState = .success
        payment.notifications = [notification]
        payment.notificationsFormat = .JSON

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
        
        let SDKPay_MERCHANT_ACCOUNT_ID = "561c79c6-e2c6-4bd8-889f-667a73286faa"
        let SDKPay_MERCHANT_SECRET_KEY = "e756acda-840f-4ee8-aa2f-c384aa051cbe"
        
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
    
    func createPaymentIdeal() -> SDKPayECPayment {

        let payment = SDKPayECIdealPayment()
        payment.amount = AMOUNT
        payment.currency = SDKPayECCurrencyGetISOCode(SDKPayECCurrency.EUR)
        
        payment.transactionType = SDKPayECTransactionType.debit

        let accountHolder = SDKPayECCustomerData.init()
        accountHolder.firstName = "John"
        accountHolder.lastName = "Doe"
        accountHolder.email = "john.doe@email.com"
        accountHolder.phone = "03018425165"
        accountHolder.gender = SDKPayECGender.female
        
        let address = SDKPayECAddress()
        address.country = SDKPayECCountry.DE
        address.city = "Testhausen"
        address.postalCode = "13353"
        address.state = "DE"
        address.street1 = "Nicht Versenden Str. 5"
        accountHolder.address = address
        
        payment.accountHolder = accountHolder;

        let order = SDKPayECOrder()
        order.descriptor = "NrAcPKnoSFI"
        order.number = "540760"
        payment.order = order
 
        let SDKPay_MERCHANT_ACCOUNT_ID = "76977f95-d929-4870-acee-4ef89fd200cd"
        let SDKPay_MERCHANT_SECRET_KEY = "01ab26af-d5c7-46f8-b5dd-8a1516c3e85c"

        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)
        
        return payment
    }
    
    func createPaymentSofort() -> SDKPayECPayment {

        let payment = SDKPayECSofortPayment()
        payment.amount = AMOUNT
        payment.currency = SDKPayECCurrencyGetISOCode(SDKPayECCurrency.EUR)
        
        payment.transactionType = SDKPayECTransactionType.debit

        let accountHolder = SDKPayECCustomerData.init()
        accountHolder.firstName = "John"
        accountHolder.lastName = "Doe"
        accountHolder.email = "john.doe@email.com"
        payment.accountHolder = accountHolder
        
        let order = SDKPayECOrder()
        order.descriptor = "DEMO DESCRIPTOR"
        order.number = NSUUID.init().uuidString
        order.detail = "DEMO ORDER DETAIL"
        payment.order = order
        
        let SDKPay_MERCHANT_ACCOUNT_ID = "cd553bc0-e8f1-4d4c-8a36-eb9b2040304f"
        let SDKPay_MERCHANT_SECRET_KEY = "d069455a-9852-4494-95d1-5caedbdcf6ce"

        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)
        
        return payment
    }
    
    func createPaymentRatePayElv() -> SDKPayECPayment {
        
        let payment = SDKPayECRatePayElvPayment();
        payment.amount = AMOUNTBIGGERTHEN5
        payment.currency = SDKPayECCurrencyGetISOCode(SDKPayECCurrency.EUR)
        
        payment.creditorID = "DE98ZZZ09999999999"
        payment.mandateID = "12345678"
        payment.fingerprint = "dkjhglsdkajghlakdsjgasdg"
        
        let bankAccount = SDKPayECBankAccount()
        bankAccount.bankName = "HSBC"
        bankAccount.iban = "DE83203205004989123456"
        bankAccount.bic = "DABADEHHXXX"
        payment.bankAccount = bankAccount

        payment.transactionType = SDKPayECTransactionType.authorization

        let accountHolder = SDKPayECCustomerData.init()
        accountHolder.firstName = "John"
        accountHolder.lastName = "Doe"
        accountHolder.email = "john.doe@email.com"
        accountHolder.phone = "03018425165"
        accountHolder.gender = SDKPayECGender.female
        
        let address = SDKPayECAddress()
        address.country = SDKPayECCountry.DE
        address.city = "Testhausen"
        address.postalCode = "13353"
        address.state = "DE"
        address.street1 = "Nicht Versenden Str. 5"
        accountHolder.address = address
        
        payment.accountHolder = accountHolder
        
        var cartOrder = [SDKPayECOrderItem]()
        
        let orderItem = SDKPayECOrderItem()
        orderItem.name = "item name"
        orderItem.articleNumber = "827523"
        orderItem.amount = 8
        orderItem.quantity = NSDecimalNumber(integerLiteral: 1)
        orderItem.amountCurrency = SDKPayECCurrency.EUR
        orderItem.taxRate = 0
        cartOrder.append(orderItem)
        
        let order = SDKPayECOrder()
        order.descriptor = "DEMO DESCRIPTOR"
        order.number = "438573"
        order.items = cartOrder
        payment.order = order
        
        let SDKPay_MERCHANT_ACCOUNT_ID = "5289ba2d-6094-4f7d-b6c2-346d1af638eb"
        let SDKPay_MERCHANT_SECRET_KEY = "bb3ec883-9c5b-4e70-beff-c3151b17ecf4"

        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)
        
        return payment
    }
    
    func createPaymentRatePayInvoice() -> SDKPayECPayment {
        
        let payment = SDKPayECRatePayInvoicePayment();
        payment.amount = AMOUNTBIGGERTHEN5
        payment.currency = SDKPayECCurrencyGetISOCode(SDKPayECCurrency.EUR)
        
        payment.fingerprint = "dkjhglsdkajghlakdsjgasdg"
        payment.transactionType = SDKPayECTransactionType.authorization

        let accountHolder = SDKPayECCustomerData.init()
        accountHolder.firstName = "John"
        accountHolder.lastName = "Doe"
        accountHolder.email = "john.doe@email.com"
        accountHolder.phone = "03018425165"
        accountHolder.gender = SDKPayECGender.female
        
        let address = SDKPayECAddress()
        address.country = SDKPayECCountry.DE
        address.city = "Testhausen"
        address.postalCode = "13353"
        address.state = "DE"
        address.street1 = "Nicht Versenden Str. 5"
        accountHolder.address = address
        
        payment.accountHolder = accountHolder
        
        var cartOrder = [SDKPayECOrderItem]()
        
        let orderItem = SDKPayECOrderItem()
        orderItem.name = "item name"
        orderItem.articleNumber = "873521"
        orderItem.amount = 8
        orderItem.quantity = NSDecimalNumber(integerLiteral: 1)
        orderItem.amountCurrency = SDKPayECCurrency.EUR
        orderItem.taxRate = 0
        cartOrder.append(orderItem)
        
        let order = SDKPayECOrder()
        order.descriptor = "DEMO DESCRIPTOR"
        order.number = NSUUID.init().uuidString
        order.detail = "DEMO ORDER DETAIL"
        order.items = cartOrder
        payment.order = order
        
        let SDKPay_MERCHANT_ACCOUNT_ID = "1da76824-e28a-4b64-8f41-c74a0a0e0c0c"
        let SDKPay_MERCHANT_SECRET_KEY = "bb3ec883-9c5b-4e70-beff-c3151b17ecf4"

        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)
        
        
        return payment
    }
    
    func createPaymentBlikLevel0() -> SDKPayECPayment {
        
        let payment = SDKPayECBlikLevelZeroPayment();
        payment.amount = AMOUNT
        payment.currency = SDKPayECCurrencyGetISOCode(SDKPayECCurrency.PLN)

        payment.transactionType = SDKPayECTransactionType.debit

        let accountHolder = SDKPayECCustomerData.init()
        accountHolder.firstName = "John"
        accountHolder.lastName = "Doe"
        accountHolder.email = "john.doe@email.com"
        accountHolder.phone = "03018425165"
        accountHolder.gender = SDKPayECGender.female
        
        let address = SDKPayECAddress()
        address.country = SDKPayECCountry.DE
        address.city = "Testhausen"
        address.postalCode = "13353"
        address.state = "DE"
        address.street1 = "Nicht Versenden Str. 5"
        accountHolder.address = address
        
        payment.accountHolder = accountHolder
                
        let order = SDKPayECOrder()
        order.descriptor = "NrAcPKnoSFI"
        order.number = "540760"
        payment.order = order
        
        let SDKPay_MERCHANT_ACCOUNT_ID = "54c06d30-73a7-45b0-b1f6-6f5ae91cd40c"
        let SDKPay_MERCHANT_SECRET_KEY = "285fe5af-09f0-4e99-b8a8-439f14d75e20"

        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)
        
        return payment
    }
    
    func createPaymentBlikRedirect() -> SDKPayECPayment {
        
        let payment = SDKPayECBlikRedirectPayment();
        payment.amount = AMOUNT10
        payment.currency = SDKPayECCurrencyGetISOCode(SDKPayECCurrency.PLN)

        payment.transactionType = SDKPayECTransactionType.debit

        let accountHolder = SDKPayECCustomerData.init()
        accountHolder.firstName = "John"
        accountHolder.lastName = "Doe"
        accountHolder.email = "john.doe@email.com"
        accountHolder.phone = "+731675329"
        accountHolder.gender = SDKPayECGender.female
        accountHolder.dateOfBirth = Date(timeIntervalSince1970: TimeInterval(arc4random() % 1000000000))
        
        let address = SDKPayECAddress()
        address.country = SDKPayECCountry.DE
        address.city = "Testhausen"
        address.postalCode = "13353"
        address.state = "DE"
        address.street1 = "Nicht Versenden Str. 5"
        accountHolder.address = address
        
        let notification = SDKPayECNotification()
        notification.url = URL(string: "https://api-test.getneteurope.com/engine/mobile/v2/notify")!
        notification.transactionState = .success
        payment.notifications = [notification]
        payment.notificationsFormat = .JSON

        payment.accountHolder = accountHolder
                
        let order = SDKPayECOrder()
        order.descriptor = "NrAcPKnoSFI"
        order.number = "540760"
        payment.order = order
        
        let SDKPay_MERCHANT_ACCOUNT_ID = "54c06d30-73a7-45b0-b1f6-6f5ae91cd40c"
        let SDKPay_MERCHANT_SECRET_KEY = "285fe5af-09f0-4e99-b8a8-439f14d75e20"

        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)
        
        return payment
    }
    
    func createPaymentBizum() -> SDKPayECPayment {
        
        let payment = SDKPayECBizumPayment();
        payment.amount = AMOUNT
        payment.currency = SDKPayECCurrencyGetISOCode(SDKPayECCurrency.EUR)
        
        let localize = SDKPayECLocalize.appearance()
        let locale_de = localize.locale == ._de;

        payment.transactionType = SDKPayECTransactionType.authorization

        let accountHolder = SDKPayECCustomerData.init()
        accountHolder.firstName = "John"
        accountHolder.lastName = "Doe"
        accountHolder.phone = "+34700000000"
        payment.accountHolder = accountHolder
        
        let order = SDKPayECOrder.init();
        order.number = "180528105918955"
        order.descriptor = "Test"
        
        payment.order = order;
        payment.locale = locale_de ? SDKPayECLocale._de : SDKPayECLocale._en
        
        let notification = SDKPayECNotification()
        notification.url = URL(string: "https://api-test.getneteurope.com/engine/mobile/v2/notify")!
        notification.transactionState = .success
        payment.notifications = [notification]
        payment.notificationsFormat = .JSON

        let SDKPay_MERCHANT_ACCOUNT_ID = "8be5c529-d148-435a-a713-ea0e7a8c4a13"
        let SDKPay_MERCHANT_SECRET_KEY = "dc2ab378-9954-4254-ab3b-f0a16af74992"

        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)
        
        return payment
    }
    
    func createPaymentMBWay() -> SDKPayECPayment {
        
        let payment = SDKPayECMBWayPayment();
        payment.amount = AMOUNT
        payment.currency = SDKPayECCurrencyGetISOCode(SDKPayECCurrency.EUR)
        
        let localize = SDKPayECLocalize.appearance()
        let locale_de = localize.locale == ._de;

        payment.transactionType = SDKPayECTransactionType.debit

        let accountHolder = SDKPayECCustomerData.init()
        //accountHolder.phone = "MBWay registred phone number, for example 913954031"
        //accountHolder.phoneCountryCode = "MBWay registred phone country code, for example +351"
        payment.accountHolder = accountHolder
        
        payment.locale = locale_de ? SDKPayECLocale._de : SDKPayECLocale._en
        
        let notification = SDKPayECNotification()
        notification.url = URL(string: "https://api-test.getneteurope.com/engine/mobile/v2/notify")!
        notification.transactionState = .success
        payment.notifications = [notification]
        payment.notificationsFormat = .JSON

        let SDKPay_MERCHANT_ACCOUNT_ID = "5531b677-f707-433d-a907-3cf4acbec1e4"
        let SDKPay_MERCHANT_SECRET_KEY = "af145126-5ced-4b82-aa6b-cec488446475"

        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)
        
        return payment
    }
    func createPaymentMBReferencia() -> SDKPayECPayment {
        
        let payment = SDKPayECMBReferenciaPayment();
        payment.amount = AMOUNT
        payment.currency = SDKPayECCurrencyGetISOCode(SDKPayECCurrency.EUR)
        
        let localize = SDKPayECLocalize.appearance()
        let locale_de = localize.locale == ._de;

        payment.transactionType = SDKPayECTransactionType.pendingDebit
                
        let order = SDKPayECOrder.init();
        order.number = "180528105918955"
        order.descriptor = "Test"
        
        payment.order = order;
        payment.locale = locale_de ? SDKPayECLocale._de : SDKPayECLocale._en
        let currentDate = Date();
        let nextDate = currentDate.addingTimeInterval(24*3600)
        payment.expirationDate = nextDate

        let SDKPay_MERCHANT_ACCOUNT_ID = "21d4984b-f192-4de0-a13b-6bd109a89a95"
        let SDKPay_MERCHANT_SECRET_KEY = "e957a37a-6191-4c66-a9e2-53d918b206a4"
        
        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)
        
        return payment
    }
    func createPaymentZinia() -> SDKPayECPayment {
        let payment = SDKPayECZiniaPayment();
        payment.amount = NSDecimalNumber(decimal: 100)
        payment.currency = SDKPayECCurrencyGetISOCode(SDKPayECCurrency.EUR)
        
        let localize = SDKPayECLocalize.appearance()
        let locale_de = localize.locale == ._de;

        payment.transactionType = SDKPayECTransactionType.authorization
        payment.locale = locale_de ? SDKPayECLocale._de : SDKPayECLocale._en

        let randAcc = "\(Int.random(in: 1..<1000))"
        let accountHolder = SDKPayECCustomerData.init()
        accountHolder.firstName = "John"
        accountHolder.lastName = "Doe"+randAcc
        accountHolder.email = "joe.doe"+randAcc+"@mail.com"
        
        let address = SDKPayECAddress()
        address.houseNumber = "\(Int.random(in: 1..<1000))"
        address.houseExtension = "1"
        address.blockNumber = "2A"
        address.level = "3"
        address.unit = "\(Int.random(in: 1..<100))"
        address.country = SDKPayECCountry.ES
        address.city = "Testcity"
        address.postalCode = "13353"
        address.state = "ES"
        address.street1 = "Test Str. 5"
 
        let shipping = SDKPayECCustomerData.init()
        shipping.firstName = "Jerry"
        shipping.lastName = "Doe"+randAcc
        shipping.email = "jerry.doe"+randAcc+"@mail.com"

        
        let shippingAddress = SDKPayECAddress()
        shippingAddress.houseNumber = "\(Int.random(in: 1..<1000))"
        shippingAddress.houseExtension = "1"
        shippingAddress.blockNumber = "2A"
        shippingAddress.level = "3"
        shippingAddress.unit = "\(Int.random(in: 1..<100))"
        shippingAddress.country = SDKPayECCountry.ES
        shippingAddress.city = "Testcity2"
        shippingAddress.postalCode = "13354"
        shippingAddress.state = "ES"

        accountHolder.address = address
        shipping.address = shippingAddress
        
        payment.accountHolder = accountHolder
        payment.shipping = shipping

        var cartOrder = [SDKPayECOrderItem]()
        
        let orderItem = SDKPayECOrderItem()
        orderItem.name = "Test Order Item"
        orderItem.articleNumber = "\(Int.random(in: 1..<9999999999))"
        orderItem.amount = NSDecimalNumber(decimal: 100)
        orderItem.quantity = NSDecimalNumber(integerLiteral: 1)
        orderItem.amountCurrency = SDKPayECCurrency.EUR
        orderItem.taxRate = 0
        cartOrder.append(orderItem)
        
        let order = SDKPayECOrder()
        order.number = "\(Int.random(in: 1..<99999999999))"
        order.items = cartOrder
        payment.order = order

        let notification = SDKPayECNotification()
        notification.url = URL(string: "https://api-test.getneteurope.com/engine/mobile/v2/notify")!
        notification.transactionState = .success
        payment.notifications = [notification]
        payment.notificationsFormat = .JSON

        let SDKPay_MERCHANT_ACCOUNT_ID = "da194107-986a-481a-8d4d-b2cbf0f54ee4"
        let SDKPay_MERCHANT_SECRET_KEY = "e2aa6601-dd1a-4550-a386-dba4521f9f3e"

        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)

        return payment
    }
    
    private func versionString() -> String {
        var appType: String = "Production"
        #if DEBUG
        appType = "Debug"
        #endif
        let appVersionString = Bundle.main.infoDictionary?["CFBundleShortVersionString"]
        return "App version: \(appVersionString!) \(appType)\nSDK version: \(SDKPayeComVersion) Production"
    }
    
    private func randomString(length: Int) -> String {
      let letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
      return String((0..<length).map{ _ in letters.randomElement()! })
    }
}
