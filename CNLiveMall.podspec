#
#  Be sure to run `pod spec lint CNLiveMall.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  spec.name         = "CNLiveMall"
  spec.version      = "0.0.1"
  spec.summary      = "CNLiveMallSDK"
  spec.description  = <<-DESC
                    this is CNLiveMallSDK
                   DESC
  spec.homepage     = "https://github.com/feng520ckx/CNLiveMallPodspec"
  spec.license      = { :type => 'MIT', :file => 'LICENSE' }
  spec.author             = { "caikaixuan" => "feng520ckx@gmail.com" }
  spec.platform     = :ios, "8.0"

  spec.source       = { :git => "https://github.com/feng520ckx/CNLiveMallPodspec.git", :tag => "#{spec.version}" }
  spec.resource_bundles = {'CNLiveMallSDK' => ['resource/*.*']}
  spec.compiler_flags = '-ObjC','-all_load'
  spec.vendored_frameworks = 'framework/CNLiveMall.framework','framework/CNLiveAR.framework'
  spec.dependency 'AFNetworking', '3.2.1'
  spec.dependency 'WebViewJavascriptBridge','6.0.3'
  spec.dependency 'MJRefresh', '3.2.0'
  spec.dependency 'MJExtension', '3.2.1'
  spec.dependency 'MBProgressHUD', '1.1.0'
  spec.dependency 'Masonry', '1.1.0'
  spec.dependency 'FMDB', '2.7.5'
  spec.dependency 'IQKeyboardManager', '~> 6.3.0'
  spec.dependency 'RTRootNavigationController', '~>0.6.6'
  spec.dependency 'DZNEmptyDataSet'
  spec.dependency 'WMPageController'
  spec.dependency 'HYBLoopScrollView', '~> 3.2.1'
  spec.dependency 'SDWebImage', '5.2.3'
  spec.dependency 'UICKeyChainStore'
  spec.dependency 'SQAppRouter', '~> 0.0.2'
  spec.dependency 'GQRatingView'
  spec.dependency 'UdeskSDK'

end
