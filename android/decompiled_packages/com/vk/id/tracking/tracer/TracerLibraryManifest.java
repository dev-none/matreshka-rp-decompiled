package com.vk.id.tracking.tracer;

import ru.ok.tracer.manifest.TracerLiteManifest;

/* JADX INFO: loaded from: classes6.dex */
public final class TracerLibraryManifest implements TracerLiteManifest {
    @Override // ru.ok.tracer.manifest.BaseTracerManifest
    public String buildUuid() {
        return null;
    }

    @Override // ru.ok.tracer.manifest.BaseTracerManifest
    public boolean isDisabled() {
        return false;
    }

    @Override // ru.ok.tracer.manifest.BaseTracerManifest
    public String namespace() {
        return BuildConfig.LIBRARY_PACKAGE_NAME;
    }

    @Override // ru.ok.tracer.manifest.BaseTracerManifest
    public String versionName() {
        return "2.7.0";
    }

    @Override // ru.ok.tracer.manifest.BaseTracerManifest
    public String appToken() {
        return "hsFbaWxvAeBeSITAnrieT9uNtfuTSWgYQysSTP9hKiv1";
    }

    @Override // ru.ok.tracer.manifest.BaseTracerManifest
    public String environment() {
        return "release";
    }
}
