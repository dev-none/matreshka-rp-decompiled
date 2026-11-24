#include "matreshka/network/rpc_client.hpp"

namespace matreshka::network {

RpcClient& RpcClient::Instance() {
    static RpcClient instance;
    return instance;
}

void RpcClient::SetTransport(RpcTransportFn transport) {
    std::lock_guard<std::mutex> lock(mutex_);
    transport_ = std::move(transport);
}

void RpcClient::RegisterHandler(uint16_t rpc_id,
                                std::function<void(const protocol::BitStream&)> handler) {
    std::lock_guard<std::mutex> lock(mutex_);
    handlers_[rpc_id] = std::move(handler);
}

bool RpcClient::SendRpc(uint16_t rpc_id, const protocol::BitStream& bs,
                        PacketPriority priority, PacketReliability reliability) {
    RpcTransportFn tx;
    {
        std::lock_guard<std::mutex> lock(mutex_);
        tx = transport_;
    }
    if (!tx) {
        return false;
    }

    RpcFrame frame;
    frame.rpc_id = rpc_id;
    frame.priority = priority;
    frame.reliability = reliability;
    const std::size_t n = bs.GetNumberOfBytesUsed();
    if (n > 0 && bs.GetData() != nullptr) {
        frame.payload.assign(bs.GetData(), bs.GetData() + n);
    }
    return tx(frame);
}

bool RpcClient::SendAuthToken(const std::string& token, const std::string& device_hash) {
    if (token.empty()) {
        return false;
    }
    {
        std::lock_guard<std::mutex> lock(mutex_);
        last_auth_token_ = token;
        last_device_hash_ = device_hash;
    }

    protocol::BitStream bs(token.size() + device_hash.size() + 8);
    bs.WriteString(token);
    bs.WriteString(device_hash);
    return SendRpc(/*auth handshake frame id=*/0x01, bs);
}

bool RpcClient::HandleIncomingRpc(uint16_t rpc_id, const uint8_t* data, std::size_t len) {
    std::function<void(const protocol::BitStream&)> cb;
    {
        std::lock_guard<std::mutex> lock(mutex_);
        auto it = handlers_.find(rpc_id);
        if (it == handlers_.end()) {
            return false;
        }
        cb = it->second;
    }
    protocol::BitStream bs(data, len);
    cb(bs);
    return true;
}

}  // namespace matreshka::network

extern "C" {

bool nativeSendRPC(int32_t rpc_id, const void* bitstream) {
    if (rpc_id < 0 || rpc_id > 0xFFFF || bitstream == nullptr) {
        return false;
    }
    return matreshka::network::RpcClient::Instance().SendRpc(
        static_cast<uint16_t>(rpc_id),
        *static_cast<const matreshka::protocol::BitStream*>(bitstream));
}

bool nativeSendAuthToken(const char* token, const char* device_hash) {
    if (token == nullptr) {
        return false;
    }
    return matreshka::network::RpcClient::Instance().SendAuthToken(
        token, device_hash ? std::string(device_hash) : std::string());
}

}
