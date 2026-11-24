package ru.ok.tracer.manifest;

/* JADX INFO: loaded from: classes8.dex */
public interface BaseTracerManifest {
    String appToken();

    String buildUuid();

    default String environment() {
        return null;
    }

    default boolean isDisabled() {
        return false;
    }

    String namespace();

    String versionName();
}
