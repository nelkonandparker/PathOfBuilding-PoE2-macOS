# Path of Building 2 — MacOS (Apple Silicon)

Native macOS arm64 distribution for [Path of Building 2](https://github.com/PathOfBuildingCommunity/PathOfBuilding-PoE2)

## Install

1. Download `PathOfBuilding-PoE2-macos-arm64.tar.gz` from the [latest release](https://github.com/nelkonandparker/PathOfBuilding-PoE2-macOS/releases/latest).
2. Extract it to `/Applications`.
3. (One-time only) Open Terminal and run:
   ```sh
   xattr -dr com.apple.quarantine '/Applications/Path of Building 2.app'
   ```
4. Open `Path of Building 2` from `/Applications`.

### What's with the xattr command?

This app isn't signed with an Apple Developer ID, so macOS Gatekeeper flags it as untrusted by default. The `xattr` command tells macOS to trust this download — one-time grant per install. You won't need to run it again until you replace the `.app` with a new release.

## Any issues?

No auto-updates yet.

## What's going on in this repo?

Nearly everything in here is the pre-compiled libs from my macOS fork of [PathOfBuilding-SimpleGraphic](https://github.com/nelkonandparker/PathOfBuilding-SimpleGraphic). The remainder is the typical scaffolding required to build a Mac Application.
