Pod::Spec.new do |s|
    s.name             = 'Getnet'
    s.version          = '1.1.1'
    s.summary          = 'Getneteurope paymentSDK - online payments'

    s.description      = <<-DESC
The library allows online payments processing.
Supported payment methods:
- Card payments (Mastercard, Visa, American Express)
- PayPal payments
- SEPA processing
- POI/PIA Wire Transfer
- AliPay Cross-border WAP
- P24 payments
- Sofort banking
Fully integrated with licensed GetNetEurope Payment infrastructure.
DESC

    s.homepage         = 'https://github.com/getneteurope/mobilePaymentSDK-iOS'
    s.documentation_url= 'https://docs.getneteurope.com/MobilePaymentSDK.html'
    s.license          = { :type => 'MIT' }
    s.authors          = { 'GetNetEurope' => 'connect@getneteurope.com' }
    s.source           = { :git => 'https://github.com/getneteurope/mobilePaymentSDK-iOS.git', :tag => "v#{s.version}" }
    s.platform         = :ios
    s.ios.deployment_target = '12.0'
    s.swift_version = '4.2'
    s.requires_arc     = true
    
    s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

    s.subspec 'All' do |ss|
        ss.dependency            'Getnet/Card'
        ss.dependency            'Getnet/PayPal'
        ss.dependency            'Getnet/SEPA'
        ss.dependency            'Getnet/WireTransfer'
        ss.dependency            'Getnet/Alipay'
        ss.dependency            'Getnet/P24'
        ss.dependency            'Getnet/RatePay'
        ss.dependency            'Getnet/Sofort'
        ss.dependency            'Getnet/Blik'
        ss.dependency            'Getnet/Bizum'

    end

    s.subspec 'Core' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeCom.framework'
        ss.resource            = 'eCom/SDKPayeCom.framework/SDKPayeCom.bundle'

        ss.dependency            'AFNetworking', '~> 4.0.1'
        ss.dependency            'CocoaLumberjack', '~> 3.7.4'
        ss.ios.dependency        'Lockbox', '~> 3.0.6'
        ss.dependency            'Mantle', '~> 2.1.6'
        ss.ios.dependency        'MBProgressHUD', '~> 1.2.0'
        ss.dependency            'libextobjc/EXTScope', '~> 0.6.0'
        ss.ios.dependency        'TPKeyboardAvoiding', '~> 1.3.5'
        ss.dependency            'MaterialComponents/TextControls+FilledTextAreas'
        ss.dependency            'MaterialComponents/TextControls+FilledTextFields'
        ss.dependency            'MaterialComponents/TextControls+FilledTextAreasTheming'
        ss.dependency            'MaterialComponents/TextControls+FilledTextFieldsTheming'

        ss.ios.frameworks      = 'Foundation', 'UIKit', 'Security'
        ss.libraries           = 'xml2'
    end

    s.subspec 'Alipay' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComAlipay.framework'

        ss.dependency            'Getnet/Core'
    end

    s.subspec 'CoreCard' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComCoreCard.framework'

        ss.dependency            'Getnet/Core'
    end

    s.subspec 'Card' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComCard.framework'
        ss.resource            = 'eCom/SDKPayeComCard.framework/SDKPayeComCard.bundle'

        ss.dependency            'Getnet/CoreCard'
    end

    s.subspec 'PhotoGallery' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComPhotoGallery.framework'

        ss.dependency            'Getnet/Core'
    end

    s.subspec 'Scanner' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComScanner.framework'
        ss.resource            = 'eCom/SDKPayeComScanner.framework/SDKPayeComScanner.bundle'

        ss.dependency            'Getnet/Card'
        ss.dependency            'GoogleMLKit/TextRecognition'
    end

    s.subspec 'CardScanner' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComCardScanner.framework'
        ss.resource            = 'eCom/SDKPayeComCardScanner.framework/SDKPayeComCardScanner.bundle'

        ss.dependency            'Getnet/Scanner'
    end

    s.subspec 'CardScannerGallery' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComCardScannerGallery.framework'
        ss.resource            = 'eCom/SDKPayeComCardScannerGallery.framework/SDKPayeComCardScannerGallery.bundle'

        ss.dependency            'Getnet/CardScanner'
        ss.dependency            'Getnet/PhotoGallery'
    end

    s.subspec 'P24' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComP24.framework'

        ss.dependency            'Getnet/Core'
    end

    s.subspec 'PayPal' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComPayPal.framework'

        ss.dependency            'Getnet/Core'
    end

    s.subspec 'SEPA' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComSEPA.framework'
        ss.resource            = 'eCom/SDKPayeComSEPA.framework/SDKPayeComSEPA.bundle'

        ss.dependency            'Getnet/Core'
        ss.dependency            'IBAN', '~> 1.0.0'
    end

    s.subspec 'IBANScanner' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComIBANScanner.framework'
        ss.resource            = 'eCom/SDKPayeComIBANScanner.framework/SDKPayeComIBANScanner.bundle'

        ss.dependency            'Getnet/SEPA'
        ss.dependency            'Getnet/Scanner'
    end

    s.subspec 'IBANScannerGallery' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComIBANScannerGallery.framework'
        ss.resource            = 'eCom/SDKPayeComIBANScannerGallery.framework/SDKPayeComIBANScannerGallery.bundle'

        ss.dependency            'Getnet/IBANScanner'
        ss.dependency            'Getnet/PhotoGallery'
    end

    s.subspec 'WireTransfer' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComWireTransfer.framework'
        ss.resource            = 'eCom/SDKPayeComWireTransfer.framework/SDKPayeComWireTransfer.bundle'

        ss.dependency            'Getnet/Core'
    end

    s.subspec 'RatePay' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComRatePay.framework'
        ss.resource            = 'eCom/SDKPayeComRatePay.framework/SDKPayeComRatePay.bundle'

        ss.dependency            'Getnet/Core'
    end

    s.subspec 'Sofort' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComSofort.framework'

        ss.dependency            'Getnet/Core'
    end

    s.subspec 'Blik' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComBlik.framework'
        ss.resource            = 'eCom/SDKPayeComBlik.framework/SDKPayeComBlik.bundle'

        ss.dependency            'Getnet/Core'
    end

    s.subspec 'Bizum' do |ss|
        ss.vendored_frameworks = 'eCom/SDKPayeComBizum.framework'
        ss.resource            = 'eCom/SDKPayeComBizum.framework/SDKPayeComBizum.bundle'

        ss.dependency            'Getnet/Core'
    end

    s.default_subspecs = 'All', 'CardScannerGallery'

end
