//
//  AnimatedCardfieldVC.swift
//  Embedded
//
//  Created by Vrana, Jozef on 28/02/2019.
//  Copyright © 2022 PagoNxt Merchant Solutions S.L. and Santander España Merchant Services, Entidad de Pago, S.L.U.  All rights reserved.
//

import SDKPayeComCard
import SDKPayeComCardScannerGallery

class AnimatedCardfieldVC: PaymemtVC, SDKPayECAnimatedCardFieldDelegate {
    
    @IBOutlet weak var animatedCardfield: SDKPayECAnimatedCardFieldScannerGallery!
    @IBOutlet weak var animatedCardfieldStateLabel: UILabel!
    @IBOutlet weak var payBtn: UIButton!
    @IBOutlet weak var clearBtn: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let cardLayout = SDKPayECCardLayout.appearance()
        self.animatedCardfield.isManualCardBrandSelectionRequired = cardLayout.manualCardBrandSelectionRequired
        self.animatedCardfield.scanToolbarButtonTitle = "Scan Card"
        self.animatedCardfield.enableScanToolbarButton = true
        
        // Appearance posibility
        //SDKPayECAnimatedCardFieldScannerGallery.appearance().scanToolbarButtonTitle = "Scan Card"
        //SDKPayECAnimatedCardFieldScannerGallery.appearance().enableScanToolbarButton = true
        
        payBtn.setTitle(NSLocalizedString("form_submit", comment: ""), for: .normal)
        clearBtn.setTitle(NSLocalizedString("general_clear", comment: ""), for: .normal)
    }
    
    @IBAction func onClearAction(_ sender: UIButton!) {
        self.animatedCardfield.clear()
    }
    
    @IBAction func onPayAction(_ sender: UIButton!) {
        // if you create payment object just before calling makePayment you are sure that timestamp is correct
        var payment = self.createCardPayment()
        self.animatedCardfield.cardPayment = payment // append card data
        
        payment = self.animatedCardfield.cardPayment
        (UIApplication.shared.delegate as! AppDelegate).client?.make(payment, withCompletion: { [weak self] (response: SDKPayECPaymentResponse?,error: Error?) in
            guard let self = self else { return }
            let alertTitle = error != nil ? NSLocalizedString("general_error", comment: "") : NSLocalizedString("general_success", comment: "")
            let alertMessage = error != nil ? error!.localizedDescription : NSLocalizedString("general_payment_success", comment: "")
            let ac = UIAlertController(title: alertTitle, message: alertMessage, preferredStyle: .actionSheet)
            
            ac.addAction(UIAlertAction(title: NSLocalizedString("general_ok", comment: ""), style:.default, handler:nil));
            self.present(ac, animated:true, completion:nil)
            
            // each request shall have unique ID, once it is used create new one
            self.animatedCardfield.cardPayment = self.createCardPayment()
        })
    }
    
    func animatedCardField(_ animatedCardField: SDKPayECAnimatedCardField, didChange state: SDKPayECAnimatedCardFieldState) {
        self.payBtn.isEnabled = animatedCardField.isValid
        
        var text : String?
        
        switch state {
        case SDKPayECAnimatedCardFieldState.cardInitial: text = "CardFieldStatecardInitial"
        case SDKPayECAnimatedCardFieldState.cardValid: text = "CardFieldStatecardValid"
        case SDKPayECAnimatedCardFieldState.cardUnsupported: text = "CardFieldStatecardUnsupported"
        case SDKPayECAnimatedCardFieldState.numberEditting: text = "CardFieldStatenumberEditting"
        case SDKPayECAnimatedCardFieldState.numberIncomplete: text = "CardFieldStatenumberIncomplete"
        case SDKPayECAnimatedCardFieldState.numberInvalid: text = "CardFieldStatenumberInvalid"
        case SDKPayECAnimatedCardFieldState.numberValid: text = "CardFieldStatenumberValid"
        case SDKPayECAnimatedCardFieldState.expirationDateEditting: text = "CardFieldStateexpirationDateEditting"
        case SDKPayECAnimatedCardFieldState.expirationDateIncomplete: text = "CardFieldStateexpirationDateIncomplete"
        case SDKPayECAnimatedCardFieldState.expirationDateInvalid: text = "CardFieldStateexpirationDateInvalid"
        case SDKPayECAnimatedCardFieldState.expirationDateValid: text = "CardFieldStateexpirationDateValid"
        case SDKPayECAnimatedCardFieldState.securityCodeEditting: text = "CardFieldStatesecurityCodeEditting"
        case SDKPayECAnimatedCardFieldState.securityCodeIncomplete: text = "CardFieldStatesecurityCodeIncomplete"
        case SDKPayECAnimatedCardFieldState.securityCodeInvalid: text = "CardFieldStatesecurityCodeInvalid"
        case SDKPayECAnimatedCardFieldState.securityCodeValid: text = "CardFieldStatesecurityCodeValid"
        case SDKPayECAnimatedCardFieldState.cardholderInvalid: text = "CardFieldStatecardholderInvalid"
        case SDKPayECAnimatedCardFieldState.cardholderEditting: text = "CardFieldStatecardholderEditting"
        case SDKPayECAnimatedCardFieldState.supportedCardsInvalid: text = "CardFieldStatesupportedCardsInvalid"
        }
        
        self.animatedCardfieldStateLabel.text = text
    }
    
    func createCardPayment() -> SDKPayECCardPayment {
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
        let accountHolder = SDKPayECCustomerData()
        accountHolder.firstName = "John"
        accountHolder.lastName = "Doe"
        payment.accountHolder = accountHolder
        
        return payment
    }
}
