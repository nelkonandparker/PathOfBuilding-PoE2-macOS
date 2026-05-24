# Path of Building 2 — macOS (Apple Silicon)

Native macOS arm64 distribution for [Path of Building 2](https://github.com/PathOfBuildingCommunity/PathOfBuilding-PoE2) — the community fork's PoE2 build planner.

## What's in here

Everything macOS-specific that ships with the `.app`:

- `launcher.c` — tiny C launcher that becomes the `pob2` binary in `Contents/MacOS/`. Loads `libSimpleGraphic.dylib` and calls into it.
- `Info.plist` — bundle metadata.
- `*.dylib` — prebuilt SimpleGraphic engine + dependencies (auto-updated from [PathOfBuilding-SimpleGraphic](https://github.com/PathOfBuildingCommunity/PathOfBuilding-SimpleGraphic) releases).
- `*.so` — sibling symlinks Lua needs to find C modules.
- `sign.sh` — adhoc-signs all binaries locally so Gatekeeper accepts them.

Lua source + game data come from [PathOfBuilding-PoE2](https://github.com/PathOfBuildingCommunity/PathOfBuilding-PoE2) at bundle time — they are deliberately *not* in this repo.

## Build the launcher locally

```
clang -O2 launcher.c -o pob2 -L. -lSimpleGraphic \
  -Wl,-rpath,@executable_path \
  -Wl,-rpath,@executable_path/../Resources
./sign.sh
```

## CI

- **`build-launcher.yml`** — compiles `launcher.c` on every PR to catch breakage.
- **`bundle-app.yml`** — on release, checks out this repo plus `pob`, assembles the full `.app`, uploads it as a release asset.
