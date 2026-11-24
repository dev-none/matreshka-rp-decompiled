package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.plugins.PluginErrorDetails;

/* JADX INFO: loaded from: classes7.dex */
public final class Se implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f5884a;
    public final /* synthetic */ String b;
    public final /* synthetic */ PluginErrorDetails c;
    public final /* synthetic */ Te d;

    public Se(Te te, String str, String str2, PluginErrorDetails pluginErrorDetails) {
        this.d = te;
        this.f5884a = str;
        this.b = str2;
        this.c = pluginErrorDetails;
    }

    @Override // java.lang.Runnable
    public final void run() {
        ((Ya) this.d.d.get()).getPluginExtension().reportError(this.f5884a, this.b, this.c);
    }
}
