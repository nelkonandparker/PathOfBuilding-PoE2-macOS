# Path of Building 2 — MacOS (Apple Silicon)

Native macOS arm64 distribution for [Path of Building 2](https://github.com/PathOfBuildingCommunity/PathOfBuilding-PoE2)

## Install

1. Download `PathOfBuilding-PoE2-macos-arm64.tar.gz` (will appear shortly once CI completes)
2. Extract → `Path of Building 2.app`
3. Drag to `/Applications`
4. First launch: `xattr -dr com.apple.quarantine '/Applications/Path of Building 2.app'` (one-time, adhoc-signed app)
5. Double-click


## Any issues?

No auto-updates for now


## What's going on in this repo?

Nearly everything in here are the pre-compiled libs from my macOS fork of [PathOfBuilding-SimpleGraphic](https://github.com/nelkonandparker/PathOfBuilding-SimpleGraphic). The remainder is the typical scaffolding required to build a Mac Application.
