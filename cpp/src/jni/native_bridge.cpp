#include "matreshka/jni/native_bridge.hpp"

#include <cstdio>

namespace matreshka::jni {

NativeEngineBridge& NativeEngineBridge::Instance() {
    static NativeEngineBridge instance;
    return instance;
}

void NativeEngineBridge::ConfigureModuleRange(uint64_t base_addr, uint64_t exec_end_addr) {
    std::lock_guard<std::mutex> lock(state_mutex_);
    lib_base_ = base_addr;
    lib_exec_end_ = exec_end_addr;
}

void NativeEngineBridge::RegisterSymbol(uint64_t start_addr, uint64_t size, std::string name) {
    std::lock_guard<std::mutex> lock(state_mutex_);
    symbols_.push_back(SymbolRange{start_addr, size, std::move(name)});
}

std::string NativeEngineBridge::ResolveSymbol(uint64_t addr) const {
    std::lock_guard<std::mutex> lock(state_mutex_);
    for (const auto& sym : symbols_) {
        if (addr >= sym.start && addr < sym.start + sym.size) {
            return sym.name;
        }
    }
    char buf[32]{};
    std::snprintf(buf, sizeof(buf), "_%llX", static_cast<unsigned long long>(addr));
    return std::string(buf);
}

void NativeEngineBridge::LockRenderQueue() {
    render_queue_mutex_.lock();
}

void NativeEngineBridge::UnlockRenderQueue() {
    render_queue_mutex_.unlock();
}

void NativeEngineBridge::PreInit(void* native_context) {
    std::lock_guard<std::mutex> lock(state_mutex_);
    destroyed_ = false;
    context_ = native_context;
}

void NativeEngineBridge::Load(const std::string& storage_root, int32_t width, int32_t height) {
    std::lock_guard<std::mutex> lock(state_mutex_);
    storage_root_ = storage_root;
    window_width_ = width;
    window_height_ = height;
    loaded_ = true;
}

void NativeEngineBridge::OnWindowSize(int32_t width, int32_t height) noexcept {
    window_width_ = width;
    window_height_ = height;
}

void NativeEngineBridge::OnTouchEvent(int32_t action, int32_t pointer_id, int32_t x, int32_t y) {
    std::lock_guard<std::mutex> lock(state_mutex_);
    touch_history_.push_back(TouchSample{action, pointer_id, x, y});
    if (touch_history_.size() > 64) {
        touch_history_.erase(touch_history_.begin());
    }
}

void NativeEngineBridge::OnAppEvent(AppEvent evt) {
    std::lock_guard<std::mutex> lock(state_mutex_);
    pending_events_.push_back(evt);
}

void NativeEngineBridge::OnActivityDestroyed() {
    std::lock_guard<std::mutex> lock(state_mutex_);
    destroyed_ = true;
    preview_surfaces_.clear();
}

void NativeEngineBridge::SetLivePreviewSurface(int64_t surface_id, void* native_window) {
    std::lock_guard<std::mutex> lock(state_mutex_);
    if (native_window == nullptr) {
        preview_surfaces_.erase(surface_id);
        return;
    }
    preview_surfaces_[surface_id] = native_window;
}

std::size_t NativeEngineBridge::ActivePreviewCount() const {
    std::lock_guard<std::mutex> lock(state_mutex_);
    return preview_surfaces_.size();
}

std::vector<AppEvent> NativeEngineBridge::DrainAppEvents() {
    std::lock_guard<std::mutex> lock(state_mutex_);
    std::vector<AppEvent> out;
    out.swap(pending_events_);
    return out;
}

}  // namespace matreshka::jni

#if defined(__ANDROID__)
#include <android/native_window_jni.h>
#include <jni.h>

extern "C" {

JNIEXPORT jlong JNICALL Java_com_native_libLoader_base(JNIEnv*, jclass) {
    return static_cast<jlong>(matreshka::jni::NativeEngineBridge::Instance().LibBase());
}

JNIEXPORT jlong JNICALL Java_com_native_libLoader_execEnd(JNIEnv*, jclass) {
    return static_cast<jlong>(matreshka::jni::NativeEngineBridge::Instance().LibExecEnd());
}

JNIEXPORT jstring JNICALL Java_com_native_libLoader_getSym(JNIEnv* env, jclass, jlong addr) {
    const std::string sym =
        matreshka::jni::NativeEngineBridge::Instance().ResolveSymbol(static_cast<uint64_t>(addr));
    return env->NewStringUTF(sym.c_str());
}

JNIEXPORT void JNICALL Java_com_native_RenderQueue_Lock(JNIEnv*, jclass) {
    matreshka::jni::NativeEngineBridge::Instance().LockRenderQueue();
}

JNIEXPORT void JNICALL Java_com_native_RenderQueue_Unlock(JNIEnv*, jclass) {
    matreshka::jni::NativeEngineBridge::Instance().UnlockRenderQueue();
}

JNIEXPORT void JNICALL Java_com_native_Main_preInit(JNIEnv*, jclass, jobject ctx) {
    matreshka::jni::NativeEngineBridge::Instance().PreInit(ctx);
}

JNIEXPORT void JNICALL Java_com_native_Main_load(JNIEnv* env, jclass, jobject, jint w, jint h,
                                                jstring root_dir) {
    const char* raw = root_dir ? env->GetStringUTFChars(root_dir, nullptr) : "";
    std::string dir(raw ? raw : "");
    if (root_dir && raw) env->ReleaseStringUTFChars(root_dir, raw);
    matreshka::jni::NativeEngineBridge::Instance().Load(dir, w, h);
}

JNIEXPORT void JNICALL Java_com_native_Main_hasFlutter(JNIEnv*, jclass, jboolean has_flutter) {
    matreshka::jni::NativeEngineBridge::Instance().SetHasFlutter(has_flutter != JNI_FALSE);
}

JNIEXPORT void JNICALL Java_com_native_Main_setSinglePlayer(JNIEnv*, jclass) {
    matreshka::jni::NativeEngineBridge::Instance().SetSinglePlayer(true);
}

JNIEXPORT void JNICALL Java_com_native_Main_windowSize(JNIEnv*, jclass, jint w, jint h) {
    matreshka::jni::NativeEngineBridge::Instance().OnWindowSize(w, h);
}

JNIEXPORT void JNICALL Java_com_native_Main_touchEvent(JNIEnv*, jclass, jint act, jint pid, jint x,
                                                      jint y) {
    matreshka::jni::NativeEngineBridge::Instance().OnTouchEvent(act, pid, x, y);
}

JNIEXPORT void JNICALL Java_com_native_Main_appEvent(JNIEnv*, jclass, jint evt) {
    matreshka::jni::NativeEngineBridge::Instance().OnAppEvent(
        static_cast<matreshka::jni::AppEvent>(evt));
}

JNIEXPORT void JNICALL Java_com_native_Main_activityDestroyed(JNIEnv*, jclass) {
    matreshka::jni::NativeEngineBridge::Instance().OnActivityDestroyed();
}

JNIEXPORT void JNICALL Java_com_native_Main_livePreviewSurface(JNIEnv* env, jclass, jlong id,
                                                              jobject surface) {
    ANativeWindow* win = surface ? ANativeWindow_fromSurface(env, surface) : nullptr;
    matreshka::jni::NativeEngineBridge::Instance().SetLivePreviewSurface(id, win);
}

}  // extern "C"
#endif
