#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace matreshka::bootstrap {

enum class BootstrapEnvironment {
    Prod,
    Dev,
    Test,
};

struct EndpointHealth {
    std::string host;
    bool reachable = false;
    uint32_t rtt_ms = 0;
    float packet_loss_pct = 100.0f;
};

struct BootstrapEndpoints {
    std::vector<std::string> bootstrap_hosts;
    std::vector<std::string> cdn_hosts;
    std::vector<std::string> global_api_hosts;
    std::vector<std::string> regional_api_hosts;
    std::vector<std::string> analytics_api_hosts;
    std::vector<std::string> support_api_hosts;
    std::string apple_auth_url;
    std::string knowledge_base_url;
    std::string legacy_analytics_host;
};

/**
 * Resolves Matreshka RP bootstrap, CDN, and API endpoints discovered in libapp.so,
 * and constructs verified extra-file / texdb / archive download URLs.
 */
class CdnClient {
public:
    static BootstrapEndpoints DefaultProdEndpoints();
    static std::string BootstrapFileFor(BootstrapEnvironment env);

    explicit CdnClient(BootstrapEndpoints endpoints = DefaultProdEndpoints());

    std::vector<std::string> BuildBootstrapQueue(BootstrapEnvironment env) const;
    std::vector<std::string> BuildBranchDiscoveryUrls(const std::string& branch = "dev") const;
    std::string SelectBestHost(const std::vector<EndpointHealth>& probes) const;

    std::string BuildFilesListUrl(const std::string& cdn_host, const std::string& branch,
                                  const std::string& build_id, bool lite = false) const;
    std::string BuildArchiveMetadataUrl(const std::string& cdn_host, const std::string& branch,
                                        bool audio_only = false) const;
    std::string BuildAssetUrl(const std::string& cdn_host, const std::string& relative_path) const;

    const BootstrapEndpoints& endpoints() const noexcept { return endpoints_; }

private:
    BootstrapEndpoints endpoints_;
};

}  // namespace matreshka::bootstrap
