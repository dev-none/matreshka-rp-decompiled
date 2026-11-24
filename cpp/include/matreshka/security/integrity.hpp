#pragma once

#include <cstdint>
#include <map>
#include <optional>
#include <string>

namespace matreshka::security {

/**
 * Client identity & integrity HTTP headers attached to API calls (`api-{1,2,3}.matreshka.gg`).
 * Mirrors exact header names observed in libapp.so (`Global API rejected client headers...`).
 */
struct ApiRequestIdentity {
    std::string api_key;            // X-API-KEY
    std::string client_hash;        // client-hash
    std::string client_key;         // client-key
    std::string client_version;     // x-client-version (e.g. "6.4.2-16.11-19.41")
    std::string user_device_hash;   // user-device-hash (Android ID hash)
    std::string client_platform = "android";
    std::string client_locale = "ru";
    std::string client_region = "RU";
    std::string user_branch = "matreshkaProd";
    std::string session_id;         // x-session-id
};

/**
 * Entry metadata extracted from `files_list.json` / `archive_metadata.json` / `texdb_store`.
 */
struct BundleFileEntry {
    std::string relative_path;
    uint64_t expected_size = 0;
    std::string bundle_hash;        // `bundlehash` / `fileHash`
    std::optional<uint32_t> crc32;  // `CRC32 check failed`
    std::optional<uint64_t> crc64;  // `CRC64 check failed`
    std::string sha256_hex;         // `SHA-256 check failed`
    std::string etag;               // `saved_downloads.etag`
};

uint32_t ComputeCrc32(const uint8_t* data, std::size_t len);
uint64_t ComputeCrc64Ecma(const uint8_t* data, std::size_t len);
std::string ComputeSha256Hex(const uint8_t* data, std::size_t len);

/**
 * Mirrors XOR table decoding pattern used by native libLoader::getSym / Main::load
 * inside libmatreshka.so for inline string obfuscation.
 */
std::string DecodeInlineXor(const uint8_t* enc, std::size_t len, const uint8_t* key, std::size_t key_len);

std::map<std::string, std::string> BuildApiHeaders(const ApiRequestIdentity& id);

bool VerifyBundleFileBuffer(const BundleFileEntry& entry, const uint8_t* data, std::size_t len,
                            std::string* out_error = nullptr);

}  // namespace matreshka::security
