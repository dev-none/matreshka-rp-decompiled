# Matreshka RP — Client Gamemode Modules, gRPC API & Native Bridge

## Architectural Reality of the Client (`matreshka-prod-2587.apk`)

1. **Server gamemode logic** (economy, world state, server scripts) does **not** reside inside the client APK — it runs server-side.
2. **Client gamemode UI & launcher systems** (`47` asset namespaces / `2,542` assets under `assets/flutter_assets/assets_mt/`) are implemented in **Dart / Flutter `3.47.9`** (`package:client_core/`, GitLab CI origin `matreshka_dev/client/client-core`) and AOT-compiled into `lib/arm64-v8a/libapp.so`.
3. **Android Java/Kotlin layer** (`com.matreshkarp.core`, `com.native`) handles Activity lifecycle, GLES2/EGL init, `MethodChannel` bridging, Adjust/Sentry/Pushwoosh/VK SDK init, and Room SQLite keyboard/bind storage.
4. **Native C++ engine (`libmatreshka.so`)** embeds GTA:SA Android (`libGTASA`), WebRTC APM audio pipeline, and SA-MP/RakNet + `BitStream` + Dart FFI RPC transport behind a custom 2-stage packer + PLT/GOT obfuscation.

---

## 1. Client Gamemode Feature Namespaces (`AssetManifest.bin`)

Extracted `assets_mt/*` feature modules compiled into `client_core`:
- Core & Launcher: `launcher`, `util`, `fonts`, `popup_x2`, `rate_us`, `hint`, `training`, `training_optimization`, `pausemenu`
- HUD & Controls: `hud`, `radial_hud`, `touchpad`, `keyboard`, `map_view`, `model_viewer`
- Character & Social: `character_menu`, `id_card`, `passport`, `vibebook`, `social`, `ui_pets`, `skins`, `acc`, `ui_accessories`
- Clanes / Clubs / Fractions: `clubs`, `family`, `fraction`, `capts_opg`, `business_wars`, `financial-report`
- Shops & Monetization: `donate_shop`, `donate_shop_v3`, `purchase_panel`, `clothes_buy`, `vehicle_buy`, `container_system`, `pullboxes`, `gachi`, `coupons`, `test_drive`
- Economy & Jobs: `inventory`, `trading`, `market`, `storage`, `bankomat`, `apartments`, `property_exchange`, `tuning`, `vehicle_passport`, `parkomate`, `rentvehicle`, `rentwater`, `truck`, `mechanic`, `electric_job`, `farm`, `garden`, `fish`, `lumberjack`, `shaverma`, `tasty`, `ui_bus`, `pcclub`
- Minigames, Casino & Seasonal Events: `ui_casino`, `races`, `events_schedule`, `events_system`, `activities_screen`, `battlepass`, `calendar`, `dailybonus`, `daily_task`, `rewards_stairs`, `promo`, `captcha`, `strike`, `dbd`, `birthday`, `birthday_2026`, `event_crazy_rally`, `halloween_2024`, `halloween_2026`, `new_year`, `valentines_day`, `strick_event`, `music`, `walkie_talkie`, `npcdialog`, `weapons`

---

## 2. Dart FFI Bridge (`libapp.so` -> `libmatreshka.so`)

Extracted FFI / native BitStream & RPC symbols referenced by `client_core`:
- Allocation: `nativeAllocatePointer`, `nativeFreePointer`
- BitStream lifecycle & offsets: `nativeBitStreamConst1`, `nativeBitStreamDest`, `nativeBitStreamGetReadOffset`, `nativeBitStreamGetWriteOffset`
- BitStream readers: `nativeBitStreamReadBool`, `nativeBitStreamReadByte`, `nativeBitStreamReadShort`, `nativeBitStreamReadInt`, `nativeBitStreamReadFloat`, `nativeBitStreamReadString`
- BitStream writers: `nativeBitStreamWriteBool`, `nativeBitStreamWriteByte`, `nativeBitStreamWriteShort`, `nativeBitStreamWriteInt`, `nativeBitStreamWriteLong`, `nativeBitStreamWriteFloat`, `nativeBitStreamWriteString`
- Network dispatch: `nativeSendRPC`, `nativeSendAuthToken`

---

## 3. Flutter `MethodChannel` Contracts (`MainActivity.java`)

- `device_info`: `getFreeSpace`, `getGpuName`, `installApk`, `getDnsInfo`, `setSkiaGpus`
- `gameChannel`: `startGame`, `eglState`
- `flavorChannel`: `getData` (returns `name`, `project`, `branch`, `local_dev_branch`, `versionCode`, `timezone`, `package`, `device_hash`, `gms_available`, `huawei_oaid`, `sentry_dsn`)
- `old_auth`: `getAuth`
- `old_keyboard`: `getBinds` (Room SQLite `matrp_keyboard<serverId>`)
- `aspectRatioChannel`: `setAspectRatio`, `getAspectRatio`
- `voice/audio`: `setPreferHeadset`
- Dedicated helper channels: `EmailCodeClipboardChannel`, `HuaweiCommentChannel`, `LivePreviewSurfaces`, `KeyboardHeightChannel`

---

## 4. Extracted gRPC Service Endpoints (`libapp.so`)

- **`/analytics.AnalyticsService`**: `SendBatch`
- **`/auth.v1.AuthService`**: `CancelAccountDeletion`, `ChangePasswordStart`, `CheckIdentityAvailable`, `ConfirmTwoFactor`, `CreateGuestAccount`, `EmailLoginConfirm`, `EmailLoginStart`, `EmailRegisterConfirm`, `EmailRegisterStart`, `ExchangeLegacyToken`, `GetAccount`, `GetIpLocation`, `GetPlayerRegions`, `GetRegionConfig`, `Login`, `LoginWithApple`, `LoginWithGoogle`, `LoginWithGuest`, `LoginWithVk`, `Logout`, `PasswordResetConfirm`, `PasswordResetStart`, `PasswordResetVerify`, `Refresh`, `RequestAccountDeletion`, `ResendEmailCode`, `VerifyCurrentPassword`
- **`/shop.ShopService`**: `Banners`, `Bonus`, `Buy`, `BuyNotifications`, `CancelPurchase`, `Cases`, `CasesInfo`, `CasesInfoByAlias`, `CasesOpen`, `CasesSprayReward`, `CasesTakeReward`, `CharacterProducts`, `CharacterSkills`, `Coins`, `CoinsConvertMc`, `CoinsSearchPlayer`, `CoinsTakeTopUpReward`, `Grid`, `JoinRoom`, `LinkEmail`, `MetaData`, `Music`, `Navigation`, `OtherAutoNumber`, `OtherNameChangeCheck`, `OtherProducts`, `OtherSimCard`, `OtherSimCardAvailable`, `Packages`, `PackagesPackage`, `Premium`, `ProductGet`, `ProductsSeen`, `RemovePaymentMethod`, `SelectPaymentMethod`, `SubmitStoreReceipt`, `Vehicles`, `VehiclesBoats`, `VehiclesCars`, `VehiclesGetByModel`, `VehiclesHelicopters`, `VehiclesMoto`, `VehiclesStickerBlocks`, `VehiclesStickers`, `Weapons`
