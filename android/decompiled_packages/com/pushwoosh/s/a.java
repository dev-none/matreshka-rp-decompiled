package com.pushwoosh.s;

import com.pushwoosh.internal.PluginProvider;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements PluginProvider {
    @Override // com.pushwoosh.internal.PluginProvider
    public final String getPluginType() {
        return "Native";
    }

    @Override // com.pushwoosh.internal.PluginProvider
    public final int richMediaStartDelay() {
        return 100;
    }
}
