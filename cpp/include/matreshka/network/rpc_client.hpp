#pragma once

#include "matreshka/protocol/bitstream.hpp"

#include <cstdint>
#include <functional>
#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>

namespace matreshka::network {

enum class PacketPriority : uint8_t {
    Immediate = 0,
    High = 1,
    Medium = 2,
    Low = 3,
};

enum class PacketReliability : uint8_t {
    Unreliable = 0,
    UnreliableSequenced = 1,
    Reliable = 2,
    ReliableOrdered = 3,
    ReliableSequenced = 4,
};

struct RpcFrame {
    uint16_t rpc_id = 0;
    std::vector<uint8_t> payload;
    PacketPriority priority = PacketPriority::High;
    PacketReliability reliability = PacketReliability::ReliableOrdered;
};

using RpcTransportFn = std::function<bool(const RpcFrame&)>;

/**
 * Dispatcher for SA-MP / RakNet custom RPC packets and Flutter-originated
 * auth token exchanges (`nativeSendRPC`, `nativeSendAuthToken`).
 */
class RpcClient {
public:
    static RpcClient& Instance();

    void SetTransport(RpcTransportFn transport);
    void RegisterHandler(uint16_t rpc_id, std::function<void(const protocol::BitStream&)> handler);

    bool SendRpc(uint16_t rpc_id, const protocol::BitStream& bs,
                 PacketPriority priority = PacketPriority::High,
                 PacketReliability reliability = PacketReliability::ReliableOrdered);

    bool SendAuthToken(const std::string& token, const std::string& device_hash);
    bool HandleIncomingRpc(uint16_t rpc_id, const uint8_t* data, std::size_t len);

    const std::string& last_auth_token() const noexcept { return last_auth_token_; }
    const std::string& last_device_hash() const noexcept { return last_device_hash_; }

private:
    RpcClient() = default;

    std::mutex mutex_;
    RpcTransportFn transport_;
    std::unordered_map<uint16_t, std::function<void(const protocol::BitStream&)>> handlers_;
    std::string last_auth_token_;
    std::string last_device_hash_;
};

}  // namespace matreshka::network

extern "C" {
bool nativeSendRPC(int32_t rpc_id, const void* bitstream);
bool nativeSendAuthToken(const char* token, const char* device_hash);
}
