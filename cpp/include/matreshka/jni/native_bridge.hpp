#pragma once

#include <cstdint>
#include <map>
#include <mutex>
#include <string>
#include <vector>

namespace matreshka::jni {

enum class AppEvent : int32_t {
    Undef0 = 0,
    Undef1 = 1,
    Undef2 = 2,
    Undef3 = 3,
    Undef4 = 4,
    Undef5 = 5,
    Undef6 = 6,
    Undef7 = 7,
    Pause = 8,
    Resume = 9,
};

struct SymbolRange {
    uint64_t start = 0;
    uint64_t size = 0;
    std::string name;
};

struct TouchSample {
    int32_t action = 0;
    int32_t pointer_id = 0;
    int32_t x = 0;
    int32_t y = 0;
};

/**
 * Clean native runtime controller reconstructed from `Java_com_native_Main_*`,
 * `Java_com_native_RenderQueue_*`, and `Java_com_native_libLoader_*` in libmatreshka.so.
 */
class NativeEngineBridge {
public:
    static NativeEngineBridge& Instance();

    // libLoader crash-frame resolution (`MainSentryKt.java`)
    void ConfigureModuleRange(uint64_t base_addr, uint64_t exec_end_addr);
    void RegisterSymbol(uint64_t start_addr, uint64_t size, std::string name);
    uint64_t LibBase() const noexcept { return lib_base_; }
    uint64_t LibExecEnd() const noexcept { return lib_exec_end_; }
    std::string ResolveSymbol(uint64_t addr) const;

    // RenderQueue mutex
    void LockRenderQueue();
    void UnlockRenderQueue();

    // Main lifecycle & input
    void PreInit(void* native_context);
    void Load(const std::string& storage_root, int32_t width, int32_t height);
    void SetHasFlutter(bool has_flutter) noexcept { has_flutter_ = has_flutter; }
    void SetSinglePlayer(bool single_player) noexcept { single_player_ = single_player; }
    void OnWindowSize(int32_t width, int32_t height) noexcept;
    void OnTouchEvent(int32_t action, int32_t pointer_id, int32_t x, int32_t y);
    void OnAppEvent(AppEvent evt);
    void OnActivityDestroyed();
    void SetLivePreviewSurface(int64_t surface_id, void* native_window);

    bool initialized() const noexcept { return loaded_; }
    bool has_flutter() const noexcept { return has_flutter_; }
    bool single_player() const noexcept { return single_player_; }
    int32_t window_width() const noexcept { return window_width_; }
    int32_t window_height() const noexcept { return window_height_; }
    std::size_t ActivePreviewCount() const;
    std::vector<AppEvent> DrainAppEvents();

private:
    NativeEngineBridge() = default;

    uint64_t lib_base_ = 0;
    uint64_t lib_exec_end_ = 0;
    bool loaded_ = false;
    bool has_flutter_ = true;
    bool single_player_ = false;
    bool destroyed_ = false;
    int32_t window_width_ = 0;
    int32_t window_height_ = 0;
    void* context_ = nullptr;
    std::string storage_root_;

    mutable std::mutex state_mutex_;
    std::mutex render_queue_mutex_;
    std::vector<SymbolRange> symbols_;
    std::map<int64_t, void*> preview_surfaces_;
    std::vector<AppEvent> pending_events_;
    std::vector<TouchSample> touch_history_;
};

}  // namespace matreshka::jni
