#include "matreshka/security/integrity.hpp"

#include <algorithm>
#include <array>
#include <cctype>
#include <cstring>

namespace matreshka::security {
namespace {

constexpr char kHexDigits[] = "0123456789abcdef";

uint32_t Rotr32(uint32_t x, unsigned n) {
    return (x >> n) | (x << (32 - n));
}

std::string ToLowerAscii(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
    return s;
}

}  // namespace

uint32_t ComputeCrc32(const uint8_t* data, std::size_t len) {
    uint32_t crc = 0xFFFFFFFFu;
    for (std::size_t i = 0; i < len; ++i) {
        crc ^= data[i];
        for (int b = 0; b < 8; ++b) {
            crc = (crc & 1u) ? ((crc >> 1) ^ 0xEDB88320u) : (crc >> 1);
        }
    }
    return ~crc;
}

uint64_t ComputeCrc64Ecma(const uint8_t* data, std::size_t len) {
    constexpr uint64_t kPoly = 0xC96C5795D7870F42ull;
    uint64_t crc = 0xFFFFFFFFFFFFFFFFull;
    for (std::size_t i = 0; i < len; ++i) {
        crc ^= data[i];
        for (int b = 0; b < 8; ++b) {
            crc = (crc & 1ull) ? ((crc >> 1) ^ kPoly) : (crc >> 1);
        }
    }
    return ~crc;
}

std::string ComputeSha256Hex(const uint8_t* data, std::size_t len) {
    static constexpr uint32_t kRoundK[64] = {
        0x428a2f98u, 0x71374491u, 0xb5c0fbcfu, 0xe9b5dba5u, 0x3956c25bu, 0x59f111f1u, 0x923f82a4u, 0xab1c5ed5u,
        0xd807aa98u, 0x12835b01u, 0x243185beu, 0x550c7dc3u, 0x72be5d74u, 0x80deb1feu, 0x9bdc06a7u, 0xc19bf174u,
        0xe49b69c1u, 0xefbe4786u, 0x0fc19dc6u, 0x240ca1ccu, 0x2de92c6fu, 0x4a7484aau, 0x5cb0a9dcu, 0x76f988dau,
        0x983e5152u, 0xa831c66du, 0xb00327c8u, 0xbf597fc7u, 0xc6e00bf3u, 0xd5a79147u, 0x06ca6351u, 0x14292967u,
        0x27b70a85u, 0x2e1b2138u, 0x4d2c6dfcu, 0x53380d13u, 0x650a7354u, 0x766a0abbu, 0x81c2c92eu, 0x92722c85u,
        0xa2bfe8a1u, 0xa81a664bu, 0xc24b8b70u, 0xc76c51a3u, 0xd192e819u, 0xd6990624u, 0xf40e3585u, 0x106aa070u,
        0x19a4c116u, 0x1e376c08u, 0x2748774cu, 0x34b0bcb5u, 0x391c0cb3u, 0x4ed8aa4au, 0x5b9cca4fu, 0x682e6ff3u,
        0x748f82eeu, 0x78a5636fu, 0x84c87814u, 0x8cc70208u, 0x90befffau, 0xa4506cebu, 0xbef9a3f7u, 0xc67178f2u,
    };

    std::array<uint32_t, 8> h = {
        0x6a09e667u, 0xbb67ae85u, 0x3c6ef372u, 0xa54ff53au,
        0x510e527fu, 0x9b05688cu, 0x1f83d9abu, 0x5be0cd19u,
    };

    const uint64_t bit_len = static_cast<uint64_t>(len) * 8ull;
    const std::size_t rem = (len + 9) % 64;
    const std::size_t padded_len = len + 9 + (rem == 0 ? 0 : 64 - rem);

    auto read_padded_byte = [&](std::size_t idx) -> uint8_t {
        if (idx < len) return data[idx];
        if (idx == len) return 0x80u;
        if (idx >= padded_len - 8) {
            const std::size_t shift = (padded_len - 1 - idx) * 8;
            return static_cast<uint8_t>((bit_len >> shift) & 0xFFu);
        }
        return 0;
    };

    uint32_t w[64]{};
    for (std::size_t off = 0; off < padded_len; off += 64) {
        for (int i = 0; i < 16; ++i) {
            const std::size_t b = off + static_cast<std::size_t>(i) * 4;
            w[i] = (static_cast<uint32_t>(read_padded_byte(b)) << 24) |
                   (static_cast<uint32_t>(read_padded_byte(b + 1)) << 16) |
                   (static_cast<uint32_t>(read_padded_byte(b + 2)) << 8) |
                   static_cast<uint32_t>(read_padded_byte(b + 3));
        }
        for (int i = 16; i < 64; ++i) {
            const uint32_t s0 = Rotr32(w[i - 15], 7) ^ Rotr32(w[i - 15], 18) ^ (w[i - 15] >> 3);
            const uint32_t s1 = Rotr32(w[i - 2], 17) ^ Rotr32(w[i - 2], 19) ^ (w[i - 2] >> 10);
            w[i] = w[i - 16] + s0 + w[i - 7] + s1;
        }

        uint32_t a = h[0], b = h[1], c = h[2], d = h[3];
        uint32_t e = h[4], f = h[5], g = h[6], hh = h[7];
        for (int i = 0; i < 64; ++i) {
            const uint32_t s1 = Rotr32(e, 6) ^ Rotr32(e, 11) ^ Rotr32(e, 25);
            const uint32_t ch = (e & f) ^ ((~e) & g);
            const uint32_t t1 = hh + s1 + ch + kRoundK[i] + w[i];
            const uint32_t s0 = Rotr32(a, 2) ^ Rotr32(a, 13) ^ Rotr32(a, 22);
            const uint32_t maj = (a & b) ^ (a & c) ^ (b & c);
            const uint32_t t2 = s0 + maj;

            hh = g;
            g = f;
            f = e;
            e = d + t1;
            d = c;
            c = b;
            b = a;
            a = t1 + t2;
        }
        h[0] += a; h[1] += b; h[2] += c; h[3] += d;
        h[4] += e; h[5] += f; h[6] += g; h[7] += hh;
    }

    std::string out(64, '0');
    for (int i = 0; i < 8; ++i) {
        for (int n = 0; n < 8; ++n) {
            out[static_cast<std::size_t>(i) * 8 + n] = kHexDigits[(h[i] >> ((7 - n) * 4)) & 0xFu];
        }
    }
    return out;
}

std::string DecodeInlineXor(const uint8_t* enc, std::size_t len, const uint8_t* key, std::size_t key_len) {
    if (!enc || len == 0 || !key || key_len == 0) {
        return {};
    }
    std::string out;
    out.reserve(len);
    for (std::size_t i = 0; i < len; ++i) {
        const char ch = static_cast<char>(enc[i] ^ key[i % key_len]);
        if (ch == '\0') {
            break;
        }
        out.push_back(ch);
    }
    return out;
}

std::map<std::string, std::string> BuildApiHeaders(const ApiRequestIdentity& id) {
    std::map<std::string, std::string> hdrs;
    if (!id.api_key.empty()) hdrs["X-API-KEY"] = id.api_key;
    if (!id.client_hash.empty()) hdrs["client-hash"] = id.client_hash;
    if (!id.client_key.empty()) hdrs["client-key"] = id.client_key;
    if (!id.client_version.empty()) hdrs["x-client-version"] = id.client_version;
    if (!id.user_device_hash.empty()) hdrs["user-device-hash"] = id.user_device_hash;
    hdrs["client-platform"] = id.client_platform;
    hdrs["client-locale"] = id.client_locale;
    hdrs["client-region"] = id.client_region;
    hdrs["user-branch"] = id.user_branch;
    if (!id.session_id.empty()) hdrs["x-session-id"] = id.session_id;
    return hdrs;
}

bool VerifyBundleFileBuffer(const BundleFileEntry& entry, const uint8_t* data, std::size_t len,
                            std::string* out_error) {
    if (entry.expected_size != 0 && entry.expected_size != len) {
        if (out_error) *out_error = "Downloaded file failed validation (size/bundlehash): size mismatch";
        return false;
    }
    if (data == nullptr && len > 0) {
        if (out_error) *out_error = "Null data buffer";
        return false;
    }
    if (entry.crc32.has_value() && ComputeCrc32(data, len) != *entry.crc32) {
        if (out_error) *out_error = "CRC32 check failed";
        return false;
    }
    if (entry.crc64.has_value() && ComputeCrc64Ecma(data, len) != *entry.crc64) {
        if (out_error) *out_error = "CRC64 check failed";
        return false;
    }
    if (!entry.sha256_hex.empty()) {
        if (ComputeSha256Hex(data, len) != ToLowerAscii(entry.sha256_hex)) {
            if (out_error) *out_error = "SHA-256 check failed";
            return false;
        }
    }
    return true;
}

}  // namespace matreshka::security
