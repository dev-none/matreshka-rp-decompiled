#include "matreshka/bootstrap/cdn_client.hpp"

#include <algorithm>
#include <limits>

namespace matreshka::bootstrap {

BootstrapEndpoints CdnClient::DefaultProdEndpoints() {
    BootstrapEndpoints ep;
    ep.bootstrap_hosts = {
        "bootstrap-cf.matreshka.gg",
        "bootstrap-gc.matreshka.gg",
        "bootstrap-yc.matreshka.gg",
    };
    ep.cdn_hosts = {
        "cdn-cf.matreshka.gg",
        "cdn-ec.matreshka.gg",
        "cdn-gc.matreshka.gg",
    };
    ep.global_api_hosts = {
        "api-1.matreshka.gg",
        "api-2.matreshka.gg",
        "api-3.matreshka.gg",
    };
    ep.regional_api_hosts = ep.global_api_hosts;
    ep.analytics_api_hosts = {"api-1.matreshka.gg"};
    ep.support_api_hosts = {"api-1.matreshka.gg"};
    ep.apple_auth_url = "https://id.matreshka.gg/auth/apple";
    ep.knowledge_base_url = "https://kb.matrp.ru/";
    ep.legacy_analytics_host = "testanalytics.matrp.ru";
    return ep;
}

std::string CdnClient::BootstrapFileFor(BootstrapEnvironment env) {
    switch (env) {
        case BootstrapEnvironment::Prod: return "bootstrap.json";
        case BootstrapEnvironment::Dev: return "bootstrap-dev.json";
        case BootstrapEnvironment::Test: return "bootstrap-test.json";
    }
    return "bootstrap.json";
}

CdnClient::CdnClient(BootstrapEndpoints endpoints) : endpoints_(std::move(endpoints)) {}

std::vector<std::string> CdnClient::BuildBootstrapQueue(BootstrapEnvironment env) const {
    const std::string file = BootstrapFileFor(env);
    std::vector<std::string> urls;
    urls.reserve(endpoints_.bootstrap_hosts.size());
    for (const auto& host : endpoints_.bootstrap_hosts) {
        urls.push_back("https://" + host + "/" + file);
    }
    return urls;
}

std::vector<std::string> CdnClient::BuildBranchDiscoveryUrls(const std::string& branch) const {
    std::vector<std::string> urls;
    for (const auto& host : endpoints_.bootstrap_hosts) {
        urls.push_back("https://" + host + "/branches-" + branch + ".json");
    }
    for (const auto& host : endpoints_.cdn_hosts) {
        urls.push_back("https://" + host + "/matrp_mobile/" + branch + "/branches-" + branch + ".json");
    }
    return urls;
}

std::string CdnClient::SelectBestHost(const std::vector<EndpointHealth>& probes) const {
    const EndpointHealth* best = nullptr;
    for (const auto& p : probes) {
        if (!p.reachable) continue;
        if (!best || p.packet_loss_pct < best->packet_loss_pct ||
            (p.packet_loss_pct == best->packet_loss_pct && p.rtt_ms < best->rtt_ms)) {
            best = &p;
        }
    }
    return best ? best->host : std::string();
}

std::string CdnClient::BuildFilesListUrl(const std::string& cdn_host, const std::string& branch,
                                         const std::string& build_id, bool lite) const {
    const std::string filename = lite ? "files_list_lite.json" : "files_list.json";
    return "https://" + cdn_host + "/matrp_mobile/" + branch + "/builds/" + build_id + "/" + filename;
}

std::string CdnClient::BuildArchiveMetadataUrl(const std::string& cdn_host, const std::string& branch,
                                               bool audio_only) const {
    const std::string filename = audio_only ? "audio_archive_metadata.json" : "archive_metadata.json";
    return "https://" + cdn_host + "/matrp_mobile/" + branch + "/" + filename;
}

std::string CdnClient::BuildAssetUrl(const std::string& cdn_host, const std::string& relative_path) const {
    if (!relative_path.empty() && relative_path.front() == '/') {
        return "https://" + cdn_host + relative_path;
    }
    return "https://" + cdn_host + "/" + relative_path;
}

}  // namespace matreshka::bootstrap
