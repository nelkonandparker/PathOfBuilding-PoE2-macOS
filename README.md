# Path of Building 2 — MacOS (Apple Silicon)

Native macOS arm64 distribution for [Path of Building 2](https://github.com/PathOfBuildingCommunity/PathOfBuilding-PoE2)

## Install

```sh
brew tap nelkonandparker/pob2
brew install --cask path-of-building-2
```

### Why brew tap?

Homebrew casks auto-strip macOS's quarantine flag, which sidesteps Apple's signing/notarization requirement. The `tap` step is only there because this isn't in the official cask repo yet.

If this repo picks up enough traction, I'll raise a PR against homebrew, or go down the Apple route


## Any issues?

No auto-updates for now


## What's going on in this repo?

Nearly everything in here are the pre-compiled libs from [PathOfBuilding-SimpleGraphic](https://github.com/PathOfBuildingCommunity/PathOfBuilding-SimpleGraphic). The remainder is the typical scaffolding required to build a Mac Application.
