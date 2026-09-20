Pod::Spec.new do |s|
    s.name = 'LGAlertView'
    s.version = '2.4.4'
    s.platform = :ios, '12.0'
    s.license = 'MIT'
    s.homepage = 'https://github.com/LGLibs/LGAlertView'
    s.author = { 'Grigorii Lutkov' => 'grigorii@lutkov.dev' }
    s.source = { :git => 'https://github.com/LGLibs/LGAlertView.git', :tag => s.version }
    s.summary = 'Customizable implementation of UIAlertViewController, UIAlertView and UIActionSheet. All in one.'
    s.description = 'Customizable implementation of UIAlertViewController, UIAlertView and UIActionSheet. All in one. ' \
                    'You can customize every detail. Make AlertView of your dream! :)'
    s.requires_arc = true
    s.source_files = 'LGAlertView/*.{h,m}'
end
