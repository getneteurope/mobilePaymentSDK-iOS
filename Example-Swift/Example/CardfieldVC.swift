//
//  ViewController.swift
//  Embedded
//
//  Created by Vrana, Jozef on 3/6/17.
//  Copyright © 2023 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U. You may not use this file except in compliance with the License which is available at https://mit-license.org/
//

import SDKPayeComCard
import SDKPayeComCardScannerGallery

let AMOUNT = NSDecimalNumber.init(mantissa: 199, exponent: -2, isNegative: false)
let AMOUNTBIGGERTHEN5 = NSDecimalNumber.init(mantissa: 800, exponent: -2, isNegative: false)
let AMOUNT10 = NSDecimalNumber.init(mantissa: 1000, exponent: -2, isNegative: false)

class CardfieldVC: PaymemtVC, UIActionSheetDelegate, SDKPayECCardFieldDelegate {
    
    @IBOutlet weak var cardField: SDKPayECCardFieldScannerGallery!
    @IBOutlet weak var cardFieldStateLabel: UILabel!
    @IBOutlet weak var payBtn: UIButton!
    @IBOutlet weak var clearBtn: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.cardField.becomeFirstResponder()
        let cardLayout = SDKPayECCardLayout.appearance()
        self.cardField.isManualCardBrandSelectionRequired = cardLayout.manualCardBrandSelectionRequired
        self.cardField.scanImage = UIImage(named: "scan_cf2")
        self.cardField.scanImageTintColor = UIColor.blue
        self.cardField.enableScanImageButton = true

        self.cardField.scanToolbarButtonTitle = "Scan Card"
        self.cardField.enableScanToolbarButton = true

        // Appearance posibility
        //SDKPayECCardFieldScannerGallery.appearance().scanImage = UIImage(named: "scan_cf2")
        //SDKPayECCardFieldScannerGallery.appearance().scanImageTintColor = UIColor.blue
        //SDKPayECCardFieldScannerGallery.appearance().enableScanImageButton = true

        //SDKPayECCardFieldScannerGallery.appearance().scanToolbarButtonTitle = "Scan Card"
        //SDKPayECCardFieldScannerGallery.appearance().enableScanToolbarButton = true
        
        payBtn.setTitle(NSLocalizedString("form_submit", comment: ""), for: .normal)
        clearBtn.setTitle(NSLocalizedString("general_clear", comment: ""), for: .normal)
    }
    
    @IBAction func onClearAction(_ sender: UIButton) {
        self.cardField.clear()
    }
    
    @IBAction func onPayAction(_ sender: UIButton) {
        // if you create payment object just before calling makePayment you are sure that timestamp is correct
        var payment = self.createCardPayment()
        self.cardField.cardPayment = payment // append card data
        
        payment = self.cardField.cardPayment
        (UIApplication.shared.delegate as! AppDelegate).client?.make(payment, withCompletion: { [weak self] (response: SDKPayECPaymentResponse?,error: Error?) in
            guard let self = self else { return }
            let alertTitle = error != nil ? NSLocalizedString("general_error", comment: "") : NSLocalizedString("general_success", comment: "")
            let alertMessage = error != nil ? error!.localizedDescription : NSLocalizedString("general_payment_success", comment: "")
            let ac = UIAlertController(title: alertTitle, message: alertMessage, preferredStyle: .actionSheet)
            
            ac.addAction(UIAlertAction(title: NSLocalizedString("general_ok", comment: ""), style:.default, handler:nil));
            self.present(ac, animated:true, completion:nil)
            
            // each request shall have unique ID, once it is used create new one
            self.cardField.cardPayment = self.createCardPayment()
        })
    }
    
    func cardField(_ cardField: SDKPayECCardField, didChange state: SDKPayECCardFieldState) {
        self.payBtn.isEnabled = cardField.isValid
        
        var text : String?
        
        switch state {
        case SDKPayECCardFieldState.cardInitial: text = "CardFieldStatecardInitial"
        case SDKPayECCardFieldState.jailbrokenDevice: text = "CardFieldStatejailbrokenDevice"
        case SDKPayECCardFieldState.cardValid: text = "CardFieldStatecardValid"
        case SDKPayECCardFieldState.cardUnsupported: text = "CardFieldStatecardUnsupported"
        case SDKPayECCardFieldState.numberEditting: text = "CardFieldStatenumberEditting"
        case SDKPayECCardFieldState.numberIncomplete: text = "CardFieldStatenumberIncomplete"
        case SDKPayECCardFieldState.numberInvalid: text = "CardFieldStatenumberInvalid"
        case SDKPayECCardFieldState.numberValid: text = "CardFieldStatenumberValid"
        case SDKPayECCardFieldState.monthEditting: text = "CardFieldStatemonthEditting"
        case SDKPayECCardFieldState.yearEditting: text = "CardFieldStateyearEditting"
        case SDKPayECCardFieldState.expirationDateIncomplete: text = "CardFieldStateexpirationDateIncomplete"
        case SDKPayECCardFieldState.expirationDateInvalid: text = "CardFieldStateexpirationDateInvalid"
        case SDKPayECCardFieldState.expirationDateValid: text = "CardFieldStateexpirationDateValid"
        case SDKPayECCardFieldState.securityCodeEditting: text = "CardFieldStatesecurityCodeEditting"
        case SDKPayECCardFieldState.securityCodeIncomplete: text = "CardFieldStatesecurityCodeIncomplete"
        case SDKPayECCardFieldState.securityCodeInvalid: text = "CardFieldStatesecurityCodeInvalid"
        case SDKPayECCardFieldState.securityCodeValid: text = "CardFieldStatesecurityCodeValid"
        case SDKPayECCardFieldState.supportedCardsInvalid: text = "CardFieldStatesupportedCardsInvalid"
        }
        
        self.cardFieldStateLabel.text = text
    }
    
    func createCardPayment() -> SDKPayECCardPayment {
        let payment = SDKPayECCardPayment()
        payment.amount = AMOUNT
        payment.currency = "USD"
        payment.transactionType = .purchase
        
        payment.versionThreeD = "2.1.0"
        payment.attemptThreeD = .yes
        
        let accountHolder = SDKPayECCustomerData()
        accountHolder.firstName = "John"
        accountHolder.lastName = "Doe"
        accountHolder.email = "john.doe@email.com"
        payment.accountHolder = accountHolder
        
        /**
         @Warning: We ask you to never share your Secret Key with anyone, or store it inside your application or phone. This is crucial to ensure the security of your transactions.
         You will be generating the signature on your own server’s backend, as it is the only place where you will store your Secret Key.
         */
        let SDKPay_MERCHANT_ACCOUNT_ID = "5c4a8a42-04a8-4970-a595-262f0ba0a108"
        let SDKPay_MERCHANT_SECRET_KEY = "5ac555d4-e7f7-409f-8147-d82c8c10ed53"
        
        self.merchantSignedPaymentByMerchantSecretKey(merchantAccountID: SDKPay_MERCHANT_ACCOUNT_ID, payment: payment, merchantSecretKey: SDKPay_MERCHANT_SECRET_KEY)
        
        return payment
    }
}

