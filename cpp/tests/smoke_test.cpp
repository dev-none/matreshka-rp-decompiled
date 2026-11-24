#include "matreshka/bootstrap/cdn_client.hpp"
#include "matreshka/jni/native_bridge.hpp"
#include "matreshka/network/rpc_client.hpp"
#include "matreshka/protocol/bitstream.hpp"
#include "matreshka/security/integrity.hpp"

#include <cassert>
#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>

int main() {
    using namespace matreshka;

    // 1. BitStream FFI round-trip test
    void* bs = nativeBitStreamConst1();
    nativeBitStreamWriteBool(bs, true);
    nativeBitStreamWriteByte(bs, 0x42);
    nativeBitStreamWriteShort(bs, -1234);
    nativeBitStreamWriteInt(bs, 2587);
    nativeBitStreamWriteFloat(bs, 3.5f);
    nativeBitStreamWriteString(bs, "matreshkaProd");
    assert(nativeBitStreamGetWriteOffset(bs) > 0);

    assert(nativeBitStreamReadBool(bs) == true);
    assert(nativeBitStreamReadByte(bs) == 0x42);
    assert(nativeBitStreamReadShort(bs) == -1234);
    assert(nativeBitStreamReadInt(bs) == 2587);
    assert(std::fabs(nativeBitStreamReadFloat(bs) - 3.5f) < 1e-5f);
    char str_buf[64]{};
    assert(std::strcmp(nativeBitStreamReadString(bs, str_buf, sizeof(str_buf)), "matreshkaProd") == 0);
    assert(nativeBitStreamGetReadOffset(bs) == nativeBitStreamGetWriteOffset(bs));

    // 2. RPC client & auth dispatch test
    std::vector<network::RpcFrame> sent;
    network::RpcClient::Instance().SetTransport([&](const network::RpcFrame& frame) {
        sent.push_back(frame);
        return true;
    });
    assert(nativeSendRPC(0x2A, bs));
    assert(nativeSendAuthToken("jwt_demo_token", "device_hash_xyz"));
    assert(sent.size() == 2);
    assert(sent[0].rpc_id == 0x2A);
    assert(sent[1].rpc_id == 0x01);
    nativeBitStreamDest(bs);

    // 3. Crypto / checksum & header builder verification (FIPS / IEEE vectors)
    const char* abc = "abc";
    assert(security::ComputeSha256Hex(reinterpret_cast<const uint8_t*>(abc), 3) ==
           "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad");

    const char* vec9 = "123456789";
    assert(security::ComputeCrc32(reinterpret_cast<const uint8_t*>(vec9), 9) == 0xcbf43926u);

    // Decode exact XOR bytes extracted from Java_com_native_Main_load (`started`)
    const uint8_t started_enc[8] = {0x74, 0x13, 0x7e, 0xf3, 0x01, 0x1e, 0xd9, 0x35};
    const uint8_t started_key[8] = {0x07, 0x67, 0x1f, 0x81, 0x75, 0x7b, 0xbd, 0x35};
    assert(security::DecodeInlineXor(started_enc, 8, started_key, 8) == "started");

    security::ApiRequestIdentity id;
    id.api_key = "example_key";
    id.client_hash = "example_client_hash";
    id.client_version = "6.4.2-16.11-19.41";
    id.user_device_hash = "example_android_id";
    auto hdrs = security::BuildApiHeaders(id);
    assert(hdrs["X-API-KEY"] == "example_key");
    assert(hdrs["client-hash"] == "example_client_hash");
    assert(hdrs["x-client-version"] == "6.4.2-16.11-19.41");
    assert(hdrs["user-device-hash"] == "example_android_id");

    security::BundleFileEntry entry;
    entry.expected_size = 9;
    entry.crc32 = 0xcbf43926u;
    entry.sha256_hex = security::ComputeSha256Hex(reinterpret_cast<const uint8_t*>(vec9), 9);
    std::string err;
    assert(security::VerifyBundleFileBuffer(entry, reinterpret_cast<const uint8_t*>(vec9), 9, &err));

    // 4. Bootstrap & CDN URL builder
    bootstrap::CdnClient cdn;
    auto boot_urls = cdn.BuildBootstrapQueue(bootstrap::BootstrapEnvironment::Prod);
    assert(boot_urls.size() == 3 && boot_urls[0] == "https://bootstrap-cf.matreshka.gg/bootstrap.json");
    assert(cdn.BuildFilesListUrl("cdn-cf.matreshka.gg", "dev", "build_2439a7469f929375") ==
           "https://cdn-cf.matreshka.gg/matrp_mobile/dev/builds/build_2439a7469f929375/files_list.json");

    // 5. JNI bridge & symbolication range test
    auto& engine = jni::NativeEngineBridge::Instance();
    engine.ConfigureModuleRange(0x7121c000, 0x71bac000);
    engine.RegisterSymbol(0x71739bbc, 740, "Java_com_native_Main_load");
    assert(engine.ResolveSymbol(0x71739bc0) == "Java_com_native_Main_load");
    assert(engine.ResolveSymbol(0x7121c010) == "_7121C010");
    engine.Load("/data/user/0/com.matreshkarp.game/files", 2400, 1080);
    engine.SetLivePreviewSurface(1001, reinterpret_cast<void*>(0x1234));
    assert(engine.ActivePreviewCount() == 1);
    engine.OnActivityDestroyed();
    assert(engine.ActivePreviewCount() == 0);

    std::cout << "All Matreshka C++ core smoke checks passed.\n";
    return 0;
}
