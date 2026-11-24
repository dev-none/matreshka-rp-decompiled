# Matreshka RP - Decompiled Client & C++17 Base (`build 2587` / `v6.4.2`)

Реконструированный и декомпилированный клиент **Matreshka RP** (`com.matreshkarp.game`, `versionCode = 2587`, `versionName = 6.4.2-16.11-19.41`) без бинарных артефактов (`.apk`, `.so`, `.dex`, `.jar`, `.bin`, `.exe`). Исследовательский проект: дампы, документация и модульная база `cpp/` + `android/` для переиспользования. **Not affiliated with the game developers.**

> **Важно об архитектуре клиента**
> - **Серверный игровой мод** (логика мира, экономика, БД игроков, серверные скрипты) внутри APK отсутствует и работает на стороне сервера.
> - **Клиентский игровой мод, лаунчер и весь UI** (`47` модулей ассетов под `assets_mt/*`) написаны на **Dart / Flutter 3.47.9** (`package:client_core/`) и скомпилированы в AOT-снапшот `libapp.so`. Контракты `MethodChannel`, gRPC API и Dart FFI-интерфейс извлечены в [`docs/`](docs/).
> - **Нативное ядро `libmatreshka.so`** (GTA:SA Android + WebRTC APM + SA-MP/RakNet + JNI-мост) накрыто кастомным двухэтапным упаковщиком и перенаправлением вызовов (`mmap` + `0xe51ff004` / `0xe59fe000` трамплины + XOR-шифрование строк). Код распакован эмуляцией `.init_array[0]` с восстановлением прямых переходов и импортов перед анализом в **Ghidra 12.1.2**.

---

## Структура репозитория

```text
.
├── android/
│   ├── settings.gradle.kts / build.gradle.kts / gradle.properties
│   ├── app/
│   │   ├── build.gradle.kts                  # Gradle-конфигурация + подключение CMake (cpp/)
│   │   └── src/main/
│   │       ├── AndroidManifest.xml
│   │       ├── res/                          # XML-конфиги, strings.xml, сертификаты raw/, стили
│   │       ├── assets/                       # assetPackManifest.json, Flutter JSON-манифесты
│   │       └── java/
│   │           ├── com/matreshkarp/          # MainActivity, Flutter-каналы, Sentry, Room keyboard DB (30 файлов)
│   │           └── com/p003native/           # JNI-обёртки Main и libLoader (в Dalvik: com.native.*)
│   └── decompiled_packages/                  # Полная JADX-декомпиляция сторонних SDK (27,091 файл)
├── cpp/                                      # Чистая переносимая база на C++17 (CMake / g++)
│   ├── CMakeLists.txt
│   ├── include/matreshka/
│   │   ├── protocol/bitstream.hpp            # RakNet-совместимый BitStream + FFI nativeBitStream*
│   │   ├── network/rpc_client.hpp            # Диспетчер nativeSendRPC / nativeSendAuthToken
│   │   ├── security/integrity.hpp            # SHA-256, CRC32, CRC64, XOR-декодер, API-заголовки
│   │   ├── bootstrap/cdn_client.hpp          # Очередь bootstrap/CDN/API и сборка URL загрузок
│   │   └── jni/native_bridge.hpp             # Мост com.native.Main / RenderQueue / libLoader
│   ├── src/                                  # Реализация всех модулей C++17
│   └── tests/smoke_test.cpp                  # Автономный smoke-тест
├── native_decompiled/                        # Прямой C / pseudo-C вывод из Ghidra 12.1.2
│   ├── libmatreshka/                         # 10,668 / 10,683 функций (chunks/), jni_and_entry.c, string_xref_core.c, imports_546.json
│   ├── libsigner/                            # Adjust SDK Native Signer (424 функции)
│   └── libasync_zip/                         # miniz + kuba/zip FFI (297 функций)
└── docs/
    ├── ENDPOINTS_AND_HASHES.md               # Все домены, эндпоинты подгрузки файлов и хеш-запросы
    └── GAMEMODE_MODULES_AND_RPC.md           # Модули игрового мода, 73 gRPC-метода, Dart FFI и MethodChannel
```

---

## Домены, эндпоинты и проверка хешей (кратко)

Подробная спецификация со всеми извлечёнными строками, SQL-схемами и путями — в [`docs/ENDPOINTS_AND_HASHES.md`](docs/ENDPOINTS_AND_HASHES.md).

| Назначение | Хосты / Эндпоинты / Заголовки |
| :--- | :--- |
| **Bootstrap (конфиг и ветки)** | `bootstrap-cf.matreshka.gg`, `bootstrap-gc.matreshka.gg`, `bootstrap-yc.matreshka.gg` (`/bootstrap.json`, `/bootstrap-dev.json`, `/bootstrap-test.json`, `/branches-dev.json`) |
| **CDN (файлы билда и кэш)** | `cdn-cf.matreshka.gg`, `cdn-ec.matreshka.gg`, `cdn-gc.matreshka.gg` (`cdn:/matrp_mobile/dev/builds/<build_id>/files_list.json`, `files_list_lite.json`, `manifest.json`, `archive_metadata.json`, `audio_archive_metadata.json`, `translations`, `cdn:/music/`, `cdn:/video/`, `matreshka_client.apk`) |
| **Global / Regional API** | `api-1.matreshka.gg`, `api-2.matreshka.gg`, `api-3.matreshka.gg` (gRPC `/auth.v1.AuthService/*`, `/shop.ShopService/*`, `/analytics.AnalyticsService/SendBatch`) |
| **Auth / KB / Аналитика** | `https://id.matreshka.gg/auth/apple`, `https://kb.matrp.ru/`, `testanalytics.matrp.ru`, `matrp.ru` (`/promo`), `matrp.go.link`, `0CDEB-0FA38.api.pushwoosh.com`, `api.wavesend.ru` |
| **Хеш-заголовки API** | `X-API-KEY`, `client-hash`, `client-key`, `x-client-version`, `user-device-hash`, `client-platform`, `client-locale`, `client-region`, `user-branch`, `x-session-id` + нативная подпись Adjust (`libsigner.so` `nSign`) |
| **Проверка файлов** | `checkFileHash`, `fileHash`, `bundlehash` (`bundle-hash-match`, `raw-zip-hash-match`, `extracted-cache-hash-match`), `SHA-256`, `CRC32`, `CRC64`, `ETag` / `if-none-match`, SQLite-таблицы `hash_storage` и `saved_downloads` |

---

## Быстрый старт и сборка

### 1. Сборка C++17 базы и запуск тестов

Через **CMake**:

```bash
cmake -S cpp -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
./build/matreshka_smoke_test
```

Или напрямую через **g++**:

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

Проверено локально компилятором MinGW `g++` (C++17, `-Werror`): сборка и все проверки `smoke_test.cpp` (`BitStream`, `RpcClient`, `SHA-256`, `CRC32`, XOR-декодер, `BuildApiHeaders`, `VerifyBundleFileBuffer`, `CdnClient`, `NativeEngineBridge`) проходят без предупреждений и ошибок.

### 2. Android-проект (`android/`)

Каталог [`android/`](android/) содержит декомпилированный `MainActivity` (Flutter-каналы `gameChannel`, `device_info`, `flavorChannel`, `old_auth`, `old_keyboard`, `aspectRatioChannel`, `voice/audio`), Room БД клавиатуры, ресурсы и манифест для `minSdk = 26`, `targetSdk = 36`, а также подключённый `CMakeLists.txt` для нативной части `libmatreshka`.

> **Примечание по пакету `com.p003native`:** в Dalvik/Kotlin исходный пакет называется `com.native` (`Java_com_native_Main_*`, `Java_com_native_libLoader_*`), однако в Java `native` — зарезервированное ключевое слово, поэтому JADX экспортировал его как `com.p003native`. При переходе на Kotlin используйте ``package com.`native` `` или согласуйте JNI-имена под своё имя пакета.

---

## Документация

- [`docs/ENDPOINTS_AND_HASHES.md`](docs/ENDPOINTS_AND_HASHES.md) - полный список доменов, эндпоинтов подгрузки, SQL-кэшей и проверок целостности.
- [`docs/GAMEMODE_MODULES_AND_RPC.md`](docs/GAMEMODE_MODULES_AND_RPC.md) - карта всех `47` модулей игрового UI/мода, `73` gRPC-маршрутов, Dart FFI-символов и `MethodChannel`-контрактов.
