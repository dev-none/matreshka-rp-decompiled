package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.plugins.PluginErrorDetails;

/* JADX INFO: loaded from: classes7.dex */
public final class Qe implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ PluginErrorDetails f5851a;
    public final /* synthetic */ Te b;

    public Qe(Te te, PluginErrorDetails pluginErrorDetails) {
        this.b = te;
        this.f5851a = pluginErrorDetails;
    }

    @Override // java.lang.Runnable
    public final void run() {
        ((Ya) this.b.d.get()).getPluginExtension().reportUnhandledException(this.f5851a);
    }
}
