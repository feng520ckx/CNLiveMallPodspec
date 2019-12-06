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
  spec.resources = ['resource/SHDSSDK.bundle','resource/MBProgressHUD.bundle','resource/IQKeyboardManager.bundle','resource/PYPhotosView.bundle']
  spec.compiler_flags = '-ObjC','-all_load'
  spec.vendored_frameworks = 'framework/CNLiveMall.framework','framework/CNLiveAR.framework'
  spec.dependency 'AFNetworking', '~> 3.1.0'
  spec.dependency 'WebViewJavascriptBridge','~> 6.0'
  spec.dependency 'MJRefresh', '~> 3.1.12'
  spec.dependency 'MJExtension', '~> 3.0.13'
  spec.dependency 'MBProgressHUD', '~> 1.0.0'
  spec.dependency 'Masonry', '~> 1.0.2'
  spec.dependency 'FMDB', '~> 2.6.2'
  spec.dependency 'RTRootNavigationController', '~>0.6.6'
  spec.dependency 'DZNEmptyDataSet'
  spec.dependency 'WMPageController'
  spec.dependency 'HYBLoopScrollView', '~> 3.2.1'
  spec.dependency 'SDWebImage', '~> 5.0'
  spec.dependency 'UICKeyChainStore'
  spec.dependency 'SQAppRouter', '~> 0.0.2'
  spec.dependency 'GQRatingView'
  spec.dependency 'UMengUShare/UI'
  spec.dependency 'UMengUShare/Social/WeChat'
  spec.dependency 'UMengUShare/Social/QQ'
  spec.dependency 'UMengAnalytics'
  spec.dependency 'UdeskSDK'

end
