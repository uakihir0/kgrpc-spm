// swift-tools-version:5.7
import PackageDescription

let package = Package(
    name: "kgrpc",
    platforms: [
        .iOS(.v15),
.macOS(.v12.0)
    ],
    products: [
        .library(
            name: "kgrpc",
            targets: ["kgrpc"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "kgrpc",
            path: "./kgrpc.xcframework"
        ),
    ]
)
