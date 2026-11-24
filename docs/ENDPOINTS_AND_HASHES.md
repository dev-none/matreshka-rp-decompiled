# Matreshka RP (v6.4.2 / build 2587) — Domains, Hash Requests & Download Endpoints

Extracted directly from `libapp.so` (`arm64-v8a`, Flutter `3.47.9` AOT snapshot), `AndroidManifest.xml`, `res/values/strings.xml`, `MainActivity.java`, and `assetPackManifest.json` of `matreshka-prod-2587.apk` (`com.matreshkarp.game`, `versionCode = 2587`, `versionName = 6.4.2-16.11-19.41`).

---

## 1. Домены (Domains)

### Core Game / Bootstrap / CDN / API (`matreshka.gg`, `matrp.ru`)
| Category | Domain / URL | Purpose (from snapshot logs & connectors) |
| :--- | :--- | :--- |
| Bootstrap (Cloudflare) | `bootstrap-cf.matreshka.gg` | Primary/fallback JSON config bootstrap |
| Bootstrap (Google Cloud) | `bootstrap-gc.matreshka.gg` | Mirror JSON config bootstrap |
| Bootstrap (Yandex Cloud) | `bootstrap-yc.matreshka.gg` | Mirror JSON config bootstrap |
| CDN (Cloudflare) | `cdn-cf.matreshka.gg` | Game builds, archives, `files_list.json`, media (`cdn_connector`) |
| CDN (EdgeCenter / EC) | `cdn-ec.matreshka.gg` | Game builds, archives, media mirror (`cdn_connector`) |
| CDN (Google Cloud) | `cdn-gc.matreshka.gg` | Game builds, archives, media mirror (`cdn_connector`) |
| Global API (gRPC/HTTP) | `api-1.matreshka.gg` | Auth / Shop / Global API endpoint (`global_api_connector`) |
| Global API (gRPC/HTTP) | `api-2.matreshka.gg` | Global API mirror (`global_api_connector`, UDP/HTTP health probe) |
| Global API (gRPC/HTTP) | `api-3.matreshka.gg` | Global API mirror (`global_api_connector`) |
| Identity / Apple OAuth | `https://id.matreshka.gg/auth/apple` | Sign in with Apple OAuth callback |
| Knowledge Base | `https://kb.matrp.ru/` / `http://kb.matrp.ru/` | In-game/launcher knowledge base (`BootstrapKnowledgeBaseUrlsModel`) |
| Deep Links / Promo | `matrp.ru` (`/promo`) | App links (`AndroidManifest.xml`), custom scheme `matrp://`, `matrp://payment` |
| Adjust Deep Links | `matrp.go.link` | Deep-link attribution & promo parameters (`MainActivity.java`) |
| Legacy Analytics | `testanalytics.matrp.ru` | Analytics test endpoint |
| Package IDs / Store IDs | `com.matreshkarp.game`, `com.matreshkarp.gamebeta`, `com.matreshkarp.gamedev*`, `https://com.blackcoregames.matreshka` | Package/contour identifiers in `libapp.so` |

### 3rd-Party Telemetry, Push, DNS-over-HTTPS, OAuth, Payments
| Service | Domain / Endpoint | Source |
| :--- | :--- | :--- |
| DNS-over-HTTPS / Fallback DNS | `https://cloudflare-dns.com/dns-query`, `https://dns.google/resolve`, `common.dot.dns.yandex.net` | `libapp.so` + DoH fallback resolvers (`1.1.1.1`, `8.8.8.8`, `77.88.8.1`, `77.88.8.8`, `9.9.9.9`, `94.140.14.14`) |
| Sentry Error Tracking | `https://87b0e2a3eb402078b83d8d47e36d872b@o4505489789026304.ingest.us.sentry.io/4507472355721216` | `res/values/strings.xml`, `MainSentryKt.java` |
| Pushwoosh / Wavesend | `https://0CDEB-0FA38.api.pushwoosh.com/json/1.3/`, `https://api.wavesend.ru/json/1.3/` | `libapp.so`, `AndroidManifest.xml` (`com.pushwoosh.apitoken`) |
| Firebase / Google | `perfect-matreshka-client.appspot.com`, `accounts.google.com`, `oauth2.googleapis.com` | `strings.xml`, `libapp.so` |
| VK ID / OK | `vk.ru` (`VKIDRedirectScheme=vk52458599`) | `AndroidManifest.xml` |
| Payments | `.cloudpayments.ru` | `libapp.so` (external webview/payment flow) |
| Adjust SDK Native Signer | `libsigner.so` (`Java_com_adjust_sdk_sig_NativeLibHelper_nSign`, `nOnResume`) | `apk/lib/*/libsigner.so` |

---

## 2. Эндпоинты подгрузки доп. файлов и конфигурации (Extra File & Config Download Endpoints)

### Bootstrap & Branch Discovery
Загружается с одного из хостов `bootstrap-{cf,gc,yc}.matreshka.gg`:
- `https://bootstrap-cf.matreshka.gg/branches-dev.json`
- `https://bootstrap-gc.matreshka.gg/branches-dev.json`
- `/bootstrap.json` (prod)
- `/bootstrap-dev.json` (dev)
- `/bootstrap-test.json` (test)
- Cache на диске: `bootstrap_cache.sembast`

### CDN & Build File Endpoints
Базовый хост выбирается через `cdn_connector` из `cdn-{cf,ec,gc}.matreshka.gg`:
- `https://cdn-cf.matreshka.gg/matrp_mobile/dev/branches-dev.json`
- `https://cdn-ec.matreshka.gg/matrp_mobile/dev/branches-dev.json`
- `https://cdn-gc.matreshka.gg/matrp_mobile/dev/branches-dev.json`
- `cdn:/matrp_mobile/dev/builds/build_2439a7469f929375/files_list.json` (pattern: `build_([0-9-]+_[0-9a-f]+)` / `build_[0-9A-Za-z_-]+`)
- `cdn:/matrp_mobile/dev/builds/build_2439a7469f929375/translations`
- `files_list.json` / `files_list_lite.json`
- `manifest.json`
- `archive_metadata.json` (`files/archive_cache`)
- `audio_archive_metadata.json` (`files/audio_archive_cache`)
- `cdn:/` (root asset tree)
- `cdn:/music/` (audio assets)
- `cdn:/video/` (video assets)
- `matreshka_client.apk` / `matreshka_client.apk.temp` (self-update APK download)

### Local Cache & SQLite Download Tracker
- Local asset stores: `files/texdb_store`, `files/texdb_switch`, `/texdb/`, `files/archive_cache`, `files/audio_archive_cache`, `.vgbundle`
- Resumable HTTP downloader SQLite tables:
  ```sql
  CREATE TABLE IF NOT EXISTS `saved_downloads` (
    `id` INTEGER PRIMARY KEY AUTOINCREMENT,
    `url` TEXT NOT NULL,
    `path` TEXT NOT NULL,
    `etag` TEXT NOT NULL,
    `downloaded_length` INTEGER NOT NULL
  );
  CREATE UNIQUE INDEX `index_saved_downloads_url_path` ON `saved_downloads` (`url`, `path`);
  ```
  HTTP download caching/resume headers used: `etag` / `eTag`, `if-none-match`, `accept-ranges`, `content-range`.

---

## 3. Хеш-запросы и механизмы проверки целостности файлов/клиента (Hash Requests & File Verification)

### A. HTTP API Authentication & Client Integrity Headers
Отправляются клиентом к `api-{1,2,3}.matreshka.gg` (`global_api_connector`, `regional_api_connector`, `support_api_connector`):
- `X-API-KEY`
- `client-hash`
- `client-key`
- `x-client-version`
- `user-device-hash` (включает Android ID из `Settings.Secure.ANDROID_ID`, см. `MainActivity$onCreate$4$5$1.java` -> `device_hash`)
- `client-platform`, `client-locale`, `client-region`, `client-network-country`, `client-sim-country`, `client-timezone`, `client-type`, `client-vpn`, `client-ad-id`, `x-session-id`, `user-branch`

Diagnostic log string observed in `libapp.so`:
```
Global API rejected client headers, build sends wrong key/client-*:
```

### B. Client File & Bundle Verification (Downloads / Archives / TexDB)
Проверка скачиваемых доп. файлов (`files_list.json`, `.vgbundle`, `.zip`, `texdb_store`):
- Manifest / metadata keys:
  - `checkFileHash`
  - `fileHash`
  - `bundlehash` / `bundleHash`
  - Validation trace markers: `bundle-hash-match`, `raw-zip-hash-match`, `extracted-cache-hash-match`
  - Error checks:
    - `Downloaded file failed validation (size/bundlehash): `
    - `texdb entry without bundlehash: `
- Cryptographic & checksum primitives compiled into `libapp.so` / `libasync_zip.so`:
  - **SHA-256**: `'SHA-256 check failed'`
  - **CRC32**: `'CRC32 check failed'`, `'zip: CRC32 of '`, `libasync_zip.so` (`mz_crc32`, `mz_adler32`)
  - **CRC64**: `'CRC64 check failed'`
  - **HTTP ETag**: `'etag'` / `'if-none-match'` validation in `saved_downloads` & `cacheObject`
- Local hash persistence SQLite table (`libapp.so`):
  ```sql
  CREATE TABLE hash_storage (
    key TEXT PRIMARY KEY,
    hash TEXT NOT NULL
  );
  ```

### C. Adjust Request Signature Library
- Native binary `libsigner.so` (`com.adjust.sdk.sig.NativeLibHelper`) exposes:
  - `Java_com_adjust_sdk_sig_NativeLibHelper_nSign`
  - `Java_com_adjust_sdk_sig_NativeLibHelper_nOnResume`
  Protected with OLLVM control-flow flattening (see `native_decompiled/libsigner/`).
