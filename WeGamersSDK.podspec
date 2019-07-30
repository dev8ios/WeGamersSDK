#
# Be sure to run `pod lib lint WeGamersSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'WeGamersSDK'
  s.version          = '0.1.0'
  s.summary          = '用于游戏接入的各类SDK'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
用于游戏接入的各类SDK。当前有4个：
                       DESC

  s.homepage         = 'https://github.com/dev8ios/WeGamersSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'wegamers' => 'iggdev8@gmail.com' }
  s.source           = { :git => 'https://github.com/dev8ios/WeGamersSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'WeGamersSDK/Classes/**/*'
  
  # s.resource_bundles = {
  #   'WeGamersSDK' => ['WeGamersSDK/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
  
  
  
  
  #子模块：游戏消息互通功能的认证&绑定
  s.subspec 'AuthKit' do |ss|
	  #ss.ios.deployment_target = '9.0'
	  ss.source_files = 'WeGamersSDK/Classes/AuthKit/**/*'
	  #ss.dependency 'TwitterKit'
  end

  #子模块：游戏内开播
  s.subspec 'GameReplayKit' do |ss|
	  #ss.ios.deployment_target = '9.0'
	  ss.source_files = 'WeGamersSDK/Classes/GameReplayKit/**/*'
  end
  
  #子模块：游戏直播观看
  s.subspec 'GameLiveKit' do |ss|
	  #ss.ios.deployment_target = '9.0'
	  ss.source_files = 'WeGamersSDK/Classes/GameLiveKit/**/*'
  end
  
  #子模块：游戏社区
  s.subspec '' do |ss|
	  #ss.ios.deployment_target = '9.0'
	  ss.source_files = 'WeGamersSDK/Classes/CommunityKit/**/*'
  end
  
end
