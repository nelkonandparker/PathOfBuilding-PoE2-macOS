# Path of Building 2 — MacOS (Apple Silicon)

Native macOS arm64 distribution for [Path of Building 2](https://github.com/PathOfBuildingCommunity/PathOfBuilding-PoE2)

## Install

1. Download `PathOfBuilding-PoE2-macos-arm64.tar.gz` (will appear shortly once CI completes)
2. Extract → `Path of Building 2.app`
3. Drag to `/Applications`
4. First launch: `xattr -dr com.apple.quarantine '/Applications/Path of Building 2.app'` (one-time, adhoc-signed app)
5. Double-click

### What's with xattr?

The two most common methods of mac app distributions are to sign via Apple (paid - $99/yr), or homebrew. Homebrew also does the above, but they won't accept any old app.

For now the above method effectively tells your system that you trust the App. I'm working on a homebrew tap alternative, or if things work out will raise a PR to the main homebrew. (or even pay Apple)


## Any issues?

No auto-updates for now


## What's going on in this repo?

Nearly everything in here are the pre-compiled libs from my macOS fork of [PathOfBuilding-SimpleGraphic](https://github.com/nelkonandparker/PathOfBuilding-SimpleGraphic). The remainder is the typical scaffolding required to build a Mac Application.
