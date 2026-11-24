#pragma once

#include <cstdint>
#include <cstring>
#include <string>
#include <vector>

namespace matreshka::protocol {

/**
 * Bit-accurate serializer/deserializer modeled after RakNet::BitStream
 * and the Dart FFI exports (`nativeBitStream*`) observed in libapp.so.
 */
class BitStream {
public:
    BitStream() = default;
    explicit BitStream(std::size_t reserve_bytes);
    BitStream(const uint8_t* data, std::size_t byte_len);

    void WriteBit(bool value);
    void WriteBits(const uint8_t* src, std::size_t bit_count);

    void WriteBool(bool value) { WriteBit(value); }
    void WriteByte(uint8_t value) { WriteScalar(value); }
    void WriteShort(int16_t value) { WriteScalar(value); }
    void WriteInt(int32_t value) { WriteScalar(value); }
    void WriteLong(int64_t value) { WriteScalar(value); }
    void WriteFloat(float value);
    void WriteString(const std::string& value, bool write_u16_len = true);

    bool ReadBit(bool& out) const;
    bool ReadBits(uint8_t* dst, std::size_t bit_count) const;

    bool ReadBool(bool& out) const { return ReadBit(out); }
    bool ReadByte(uint8_t& out) const { return ReadScalar(out); }
    bool ReadShort(int16_t& out) const { return ReadScalar(out); }
    bool ReadInt(int32_t& out) const { return ReadScalar(out); }
    bool ReadLong(int64_t& out) const { return ReadScalar(out); }
    bool ReadFloat(float& out) const;
    bool ReadString(std::string& out, bool has_u16_len = true) const;

    void ResetReadOffset() const noexcept { read_bit_offset_ = 0; }
    void Reset() noexcept {
        buffer_.clear();
        write_bit_offset_ = 0;
        read_bit_offset_ = 0;
    }

    std::size_t GetReadOffsetBits() const noexcept { return read_bit_offset_; }
    std::size_t GetWriteOffsetBits() const noexcept { return write_bit_offset_; }
    std::size_t GetNumberOfBytesUsed() const noexcept { return (write_bit_offset_ + 7) / 8; }
    const uint8_t* GetData() const noexcept { return buffer_.data(); }

private:
    template <typename T>
    void WriteScalar(T value) {
        uint8_t raw[sizeof(T)]{};
        std::memcpy(raw, &value, sizeof(T));
        WriteBits(raw, sizeof(T) * 8);
    }

    template <typename T>
    bool ReadScalar(T& out) const {
        uint8_t raw[sizeof(T)]{};
        if (!ReadBits(raw, sizeof(T) * 8)) {
            return false;
        }
        std::memcpy(&out, raw, sizeof(T));
        return true;
    }

    void EnsureBitCapacity(std::size_t extra_bits);

    std::vector<uint8_t> buffer_;
    std::size_t write_bit_offset_ = 0;
    mutable std::size_t read_bit_offset_ = 0;
};

}  // namespace matreshka::protocol

extern "C" {
void* nativeAllocatePointer(std::size_t size_bytes);
void nativeFreePointer(void* ptr);
void* nativeBitStreamConst1();
void nativeBitStreamDest(void* bs);
std::size_t nativeBitStreamGetReadOffset(const void* bs);
std::size_t nativeBitStreamGetWriteOffset(const void* bs);
void nativeBitStreamWriteBool(void* bs, bool value);
void nativeBitStreamWriteByte(void* bs, uint8_t value);
void nativeBitStreamWriteShort(void* bs, int16_t value);
void nativeBitStreamWriteInt(void* bs, int32_t value);
void nativeBitStreamWriteLong(void* bs, int64_t value);
void nativeBitStreamWriteFloat(void* bs, float value);
void nativeBitStreamWriteString(void* bs, const char* str);
bool nativeBitStreamReadBool(const void* bs);
uint8_t nativeBitStreamReadByte(const void* bs);
int16_t nativeBitStreamReadShort(const void* bs);
int32_t nativeBitStreamReadInt(const void* bs);
float nativeBitStreamReadFloat(const void* bs);
const char* nativeBitStreamReadString(const void* bs, char* dst, std::size_t dst_cap);
}
