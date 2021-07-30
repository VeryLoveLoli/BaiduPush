# BaiduPush

百度推送 1.6.2 SDK XCFramework SwiftPackage

### SwiftPackage 引用

```swift
.target(
    name: "Name",
    dependencies: ["BaiduPush"],
    linkerSettings: [.linkedLibrary("z"), .linkedFramework("Foundation"), .linkedFramework("CoreTelephony"), .linkedFramework("AdSupport"), .linkedFramework("CoreLocation"), .linkedFramework("SystemConfiguration")]),
```
