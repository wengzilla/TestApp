# Uncomment the next line to define a global platform for your project
# platform :ios, '9.0'

target 'TestApp' do
  # Comment the next line if you don't want to use dynamic frameworks
  use_frameworks!

  pod 'IronSourceSDK', '7.1.6.0'
  pod 'AFNetworking', '~> 4.0'

  target 'TestAppTests' do
    # Pods for testing
  end

  post_install do |installer|
    installer.pods_project.build_configurations.each do |config|
      config.build_settings["EXCLUDED_ARCHS[sdk=iphonesimulator*]"] = "arm64"
    end
  end

end

