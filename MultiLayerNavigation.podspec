Pod::Spec.new do |s|
  s.name     = 'MultiLayerNavigation'
  s.version  = '1.0'
  s.license  = 'MIT'
  s.summary  = 'MultiLayerNavigation helps you implemntation the interaction -- drag to go back in a easy way.'
  s.homepage = 'https://github.com/EuanChan/MultiLayerNavigation'
  s.authors  = { 'Feather' => 'vinqon@qq.com' }
  s.source   = { :git => 'https://github.com/EuanChan/MultiLayerNavigation.git'}
  s.source_files = 'Src/*.{h,m}'

  s.platform = :ios, '5.0'
end