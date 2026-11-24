# Matreshka RP - Decompiled Client & C++17 Base (`build 2587` / `v6.4.2`)

Reconstructed and decompiled **Matreshka RP** Android client (`com.matreshkarp.game`, `versionCode = 2587`, `versionName = 6.4.2-16.11-19.41`) without binary artifacts (`.apk`, `.so`, `.dex`, `.jar`, `.bin`, `.exe`). Structured as a readable reverse-engineering reference and modular C++17 / Android foundation for custom projects. **Not affiliated with the game developers.**

> **Client Architecture Notes**
> - **Server-side gamemode logic** (world state, economy, player databases, server scripts) is not present in the client APK and executes server-side.
> - **Client-side gamemode modules, launcher, and UI** (`47` asset namespaces under `assets_mt/*`) are written in **Dart / Flutter 3.47.9** (`package:client_core/`) and AOT-compiled into `libapp.so`. Extracted `MethodChannel` contracts, `73` gRPC routes, and `38` Dart FFI `native*` identifiers are documented in [`docs/`](docs/).
> - **Native engine `libmatreshka.so`** (GTA:SA Android + WebRTC APM + SA-MP/RakNet + JNI bridge) is protected by a custom two-stage packer and indirect call trampolines (`mmap` regions + `0xe51ff004` / `0xe59fe000` stubs + inline XOR strings). It was unpacked via `.init_array[0]` emulation, patched back to direct ARM/Thumb branches with resolved heap/GOT imports, and decompiled using **Ghidra 12.1.2**.

---

## Repository Layout

```text
.
├── android/
│   ├── settings.gradle.kts / build.gradle.kts / gradle.properties
│   ├── app/
│   │   ├── build.gradle.kts                  # Gradle configuration + CMake link to cpp/
│   │   └── src/main/
│   │       ├── AndroidManifest.xml
│   │       ├── res/                          # XML configs, strings.xml, raw/ certs, styles
│   │       ├── assets/                       # assetPackManifest.json, Flutter JSON manifests
│   │       └── java/
│   │           ├── com/matreshkarp/          # MainActivity, Flutter channels, Sentry, Room keyboard DB (30 files)
│   │           └── com/p003native/           # Main and libLoader JNI wrappers (Dalvik: com.native.*)
│   └── decompiled_packages/                  # Full JADX decompilation of 3rd-party SDKs (27,091 files)
├── cpp/                                      # Clean portable C++17 codebase (CMake / g++)
│   ├── CMakeLists.txt
│   ├── include/matreshka/
│   │   ├── protocol/bitstream.hpp            # RakNet-compatible BitStream + nativeBitStream* FFI
│   │   ├── network/rpc_client.hpp            # nativeSendRPC / nativeSendAuthToken dispatcher
│   │   ├── security/integrity.hpp            # SHA-256, CRC32, CRC64, XOR decoder, API header builder
│   │   ├── bootstrap/cdn_client.hpp          # Bootstrap/CDN/API queue & download URL builder
│   │   └── jni/native_bridge.hpp             # com.native.Main / RenderQueue / libLoader runtime bridge
│   ├── src/                                  # C++17 implementations
│   └── tests/smoke_test.cpp                  # Standalone smoke test suite
├── native_decompiled/                        # Raw C / pseudo-C exports from Ghidra 12.1.2
│   ├── libmatreshka/                         # 10,668 / 10,683 functions (chunks/), jni_and_entry.c, string_xref_core.c, imports_546.json
│   ├── libsigner/                            # Adjust SDK Native Signer (424 functions)
│   └── libasync_zip/                         # miniz + kuba/zip FFI (297 functions)
└── docs/
    ├── ENDPOINTS_AND_HASHES.md               # Domains, asset download endpoints, and hash verification details
    └── GAMEMODE_MODULES_AND_RPC.md           # Client gamemode modules, 73 gRPC routes, Dart FFI & MethodChannels
```

---

## Domains, Download Endpoints & Integrity Checks (Summary)

Full extracted string tables, SQL schemas, and URL paths are documented in [`docs/ENDPOINTS_AND_HASHES.md`](docs/ENDPOINTS_AND_HASHES.md).

| Component | Hosts / Endpoints / Headers |
| :--- | :--- |
| **Bootstrap (Config & Branches)** | `bootstrap-cf.matreshka.gg`, `bootstrap-gc.matreshka.gg`, `bootstrap-yc.matreshka.gg` (`/bootstrap.json`, `/bootstrap-dev.json`, `/bootstrap-test.json`, `/branches-dev.json`) |
| **CDN (Builds & Assets)** | `cdn-cf.matreshka.gg`, `cdn-ec.matreshka.gg`, `cdn-gc.matreshka.gg` (`cdn:/matrp_mobile/dev/builds/<build_id>/files_list.json`, `files_list_lite.json`, `manifest.json`, `archive_metadata.json`, `audio_archive_metadata.json`, `translations`, `cdn:/music/`, `cdn:/video/`, `matreshka_client.apk`) |
| **Global / Regional API** | `api-1.matreshka.gg`, `api-2.matreshka.gg`, `api-3.matreshka.gg` (gRPC `/auth.v1.AuthService/*`, `/shop.ShopService/*`, `/analytics.AnalyticsService/SendBatch`) |
| **Auth / KB / Analytics** | `https://id.matreshka.gg/auth/apple`, `https://kb.matrp.ru/`, `testanalytics.matrp.ru`, `matrp.ru` (`/promo`), `matrp.go.link`, `0CDEB-0FA38.api.pushwoosh.com`, `api.wavesend.ru` |
| **API Auth / Hash Headers** | `X-API-KEY`, `client-hash`, `client-key`, `x-client-version`, `user-device-hash`, `client-platform`, `client-locale`, `client-region`, `user-branch`, `x-session-id` + native Adjust signing (`libsigner.so` `nSign`) |
| **File Validation** | `checkFileHash`, `fileHash`, `bundlehash` (`bundle-hash-match`, `raw-zip-hash-match`, `extracted-cache-hash-match`), `SHA-256`, `CRC32`, `CRC64`, `ETag` / `if-none-match`, SQLite tables `hash_storage` & `saved_downloads` |

---

## Quick Start & Build

### 1. Build C++17 Base & Run Smoke Tests

Using **CMake**:

```bash
cmake -S cpp -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
./build/matreshka_smoke_test
```

Or directly with **g++**:

```bash
g++ -std=c++17 -O2 -Wall -Wextra -Wpedantic -Werror -Icpp/include \
  cpp/src/protocol/bitstream.cpp \
  cpp/src/network/rpc_client.cpp \
  cpp/src/security/integrity.cpp \
  cpp/src/bootstrap/cdn_client.cpp \
  cpp/src/jni/native_bridge.cpp \
  cpp/tests/smoke_test.cpp \
  -o build/matreshka_smoke_test
```

Verified locally with MinGW `g++` (C++17, `-Werror`): compiles cleanly and passes all checks in `smoke_test.cpp` (`BitStream`, `RpcClient`, `SHA-256`, `CRC32`, XOR decoder, `BuildApiHeaders`, `VerifyBundleFileBuffer`, `CdnClient`, `NativeEngineBridge`).

### 2. Android Project (`android/`)

[`android/`](android/) contains the decompiled `MainActivity` (`gameChannel`, `device_info`, `flavorChannel`, `old_auth`, `old_keyboard`, `aspectRatioChannel`, `voice/audio`), Room keyboard command/bind DB, resources, `AndroidManifest.xml` (`minSdk = 26`, `targetSdk = 36`), and `build.gradle.kts` wired to `cpp/CMakeLists.txt`.

> **Note on `com.p003native`:** in Dalvik/Kotlin bytecode the original package is `com.native` (`Java_com_native_Main_*`, `Java_com_native_libLoader_*`). Because `native` is a reserved keyword in Java, JADX exported it under `com.p003native`. In Kotlin projects, use ``package com.`native` `` or adjust the JNI symbol prefix to match your package name.

---

## Documentation

- [`docs/ENDPOINTS_AND_HASHES.md`](docs/ENDPOINTS_AND_HASHES.md) - full list of domains, extra-file download endpoints, SQLite download/hash schemas, and client integrity checks.
- [`docs/GAMEMODE_MODULES_AND_RPC.md`](docs/GAMEMODE_MODULES_AND_RPC.md) - inventory of `47` UI/gamemode asset namespaces, `73` gRPC routes, Dart FFI symbols, and Flutter `MethodChannel` contracts.
