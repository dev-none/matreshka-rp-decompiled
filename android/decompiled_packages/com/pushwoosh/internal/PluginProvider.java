package com.pushwoosh.internal;

/* JADX INFO: loaded from: classes6.dex */
public interface PluginProvider {
    public static final int DEFAULT_RICH_MEDIA_START_DELAY = 100;

    String getPluginType();

    int richMediaStartDelay();
}
