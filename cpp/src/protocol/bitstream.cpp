#include "matreshka/protocol/bitstream.hpp"

#include <algorithm>
#include <cstdlib>

namespace matreshka::protocol {

BitStream::BitStream(std::size_t reserve_bytes) {
    buffer_.reserve(reserve_bytes);
}

BitStream::BitStream(const uint8_t* data, std::size_t byte_len) {
    if (data != nullptr && byte_len > 0) {
        buffer_.assign(data, data + byte_len);
        write_bit_offset_ = byte_len * 8;
    }
}

void BitStream::EnsureBitCapacity(std::size_t extra_bits) {
    const std::size_t needed_bytes = (write_bit_offset_ + extra_bits + 7) / 8;
    if (needed_bytes > buffer_.size()) {
        buffer_.resize(needed_bytes, 0);
    }
}

void BitStream::WriteBit(bool value) {
    EnsureBitCapacity(1);
    const std::size_t byte_idx = write_bit_offset_ >> 3;
    const uint8_t bit_mask = static_cast<uint8_t>(0x80u >> (write_bit_offset_ & 7u));
    if (value) {
        buffer_[byte_idx] |= bit_mask;
    } else {
        buffer_[byte_idx] &= static_cast<uint8_t>(~bit_mask);
    }
    ++write_bit_offset_;
}

void BitStream::WriteBits(const uint8_t* src, std::size_t bit_count) {
    if (src == nullptr || bit_count == 0) {
        return;
    }
    EnsureBitCapacity(bit_count);

    // Byte-aligned fast path avoids bit-by-bit copying for bulk scalar writes.
    if ((write_bit_offset_ & 7u) == 0 && (bit_count & 7u) == 0) {
        std::memcpy(buffer_.data() + (write_bit_offset_ >> 3), src, bit_count >> 3);
        write_bit_offset_ += bit_count;
        return;
    }

    for (std::size_t i = 0; i < bit_count; ++i) {
        const bool bit = (src[i >> 3] & (0x80u >> (i & 7u))) != 0;
        WriteBit(bit);
    }
}

void BitStream::WriteFloat(float value) {
    uint32_t bits = 0;
    std::memcpy(&bits, &value, sizeof(bits));
    WriteScalar(bits);
}

void BitStream::WriteString(const std::string& value, bool write_u16_len) {
    const std::size_t clamped = std::min<std::size_t>(value.size(), 65535u);
    if (write_u16_len) {
        WriteScalar(static_cast<uint16_t>(clamped));
    }
    if (clamped > 0) {
        WriteBits(reinterpret_cast<const uint8_t*>(value.data()), clamped * 8);
    }
}

bool BitStream::ReadBit(bool& out) const {
    if (read_bit_offset_ >= write_bit_offset_) {
        return false;
    }
    const std::size_t byte_idx = read_bit_offset_ >> 3;
    const uint8_t bit_mask = static_cast<uint8_t>(0x80u >> (read_bit_offset_ & 7u));
    out = (buffer_[byte_idx] & bit_mask) != 0;
    ++read_bit_offset_;
    return true;
}

bool BitStream::ReadBits(uint8_t* dst, std::size_t bit_count) const {
    if (bit_count == 0) {
        return true;
    }
    if (dst == nullptr || read_bit_offset_ + bit_count > write_bit_offset_) {
        return false;
    }

    if ((read_bit_offset_ & 7u) == 0 && (bit_count & 7u) == 0) {
        std::memcpy(dst, buffer_.data() + (read_bit_offset_ >> 3), bit_count >> 3);
        read_bit_offset_ += bit_count;
        return true;
    }

    std::memset(dst, 0, (bit_count + 7) / 8);
    for (std::size_t i = 0; i < bit_count; ++i) {
        bool bit = false;
        if (!ReadBit(bit)) {
            return false;
        }
        if (bit) {
            dst[i >> 3] |= static_cast<uint8_t>(0x80u >> (i & 7u));
        }
    }
    return true;
}

bool BitStream::ReadFloat(float& out) const {
    uint32_t bits = 0;
    if (!ReadScalar(bits)) {
        return false;
    }
    std::memcpy(&out, &bits, sizeof(out));
    return true;
}

bool BitStream::ReadString(std::string& out, bool has_u16_len) const {
    out.clear();
    if (!has_u16_len) {
        const std::size_t rem_bytes = (write_bit_offset_ - read_bit_offset_) / 8;
        out.resize(rem_bytes);
        return rem_bytes == 0 || ReadBits(reinterpret_cast<uint8_t*>(out.data()), rem_bytes * 8);
    }

    uint16_t len = 0;
    if (!ReadScalar(len)) {
        return false;
    }
    if (len == 0) {
        return true;
    }
    out.resize(len);
    if (!ReadBits(reinterpret_cast<uint8_t*>(out.data()), static_cast<std::size_t>(len) * 8)) {
        out.clear();
        return false;
    }
    return true;
}

}  // namespace matreshka::protocol

using matreshka::protocol::BitStream;

extern "C" {

void* nativeAllocatePointer(std::size_t size_bytes) {
    return std::calloc(1, size_bytes == 0 ? 1 : size_bytes);
}

void nativeFreePointer(void* ptr) {
    std::free(ptr);
}

void* nativeBitStreamConst1() {
    return new BitStream();
}

void nativeBitStreamDest(void* bs) {
    delete static_cast<BitStream*>(bs);
}

std::size_t nativeBitStreamGetReadOffset(const void* bs) {
    return bs ? static_cast<const BitStream*>(bs)->GetReadOffsetBits() : 0;
}

std::size_t nativeBitStreamGetWriteOffset(const void* bs) {
    return bs ? static_cast<const BitStream*>(bs)->GetWriteOffsetBits() : 0;
}

void nativeBitStreamWriteBool(void* bs, bool value) {
    if (bs) static_cast<BitStream*>(bs)->WriteBool(value);
}

void nativeBitStreamWriteByte(void* bs, uint8_t value) {
    if (bs) static_cast<BitStream*>(bs)->WriteByte(value);
}

void nativeBitStreamWriteShort(void* bs, int16_t value) {
    if (bs) static_cast<BitStream*>(bs)->WriteShort(value);
}

void nativeBitStreamWriteInt(void* bs, int32_t value) {
    if (bs) static_cast<BitStream*>(bs)->WriteInt(value);
}

void nativeBitStreamWriteLong(void* bs, int64_t value) {
    if (bs) static_cast<BitStream*>(bs)->WriteLong(value);
}

void nativeBitStreamWriteFloat(void* bs, float value) {
    if (bs) static_cast<BitStream*>(bs)->WriteFloat(value);
}

void nativeBitStreamWriteString(void* bs, const char* str) {
    if (bs) static_cast<BitStream*>(bs)->WriteString(str ? std::string(str) : std::string());
}

bool nativeBitStreamReadBool(const void* bs) {
    bool v = false;
    return bs && static_cast<const BitStream*>(bs)->ReadBool(v) ? v : false;
}

uint8_t nativeBitStreamReadByte(const void* bs) {
    uint8_t v = 0;
    return bs && static_cast<const BitStream*>(bs)->ReadByte(v) ? v : 0;
}

int16_t nativeBitStreamReadShort(const void* bs) {
    int16_t v = 0;
    return bs && static_cast<const BitStream*>(bs)->ReadShort(v) ? v : 0;
}

int32_t nativeBitStreamReadInt(const void* bs) {
    int32_t v = 0;
    return bs && static_cast<const BitStream*>(bs)->ReadInt(v) ? v : 0;
}

float nativeBitStreamReadFloat(const void* bs) {
    float v = 0.0f;
    return bs && static_cast<const BitStream*>(bs)->ReadFloat(v) ? v : 0.0f;
}

const char* nativeBitStreamReadString(const void* bs, char* dst, std::size_t dst_cap) {
    if (!bs || !dst || dst_cap == 0) {
        return nullptr;
    }
    std::string tmp;
    if (!static_cast<const BitStream*>(bs)->ReadString(tmp)) {
        dst[0] = '\0';
        return nullptr;
    }
    const std::size_t n = std::min(tmp.size(), dst_cap - 1);
    std::memcpy(dst, tmp.data(), n);
    dst[n] = '\0';
    return dst;
}

}
