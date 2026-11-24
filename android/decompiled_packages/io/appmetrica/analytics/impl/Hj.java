package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.plugins.PluginErrorDetails;

/* JADX INFO: loaded from: classes7.dex */
public final class Hj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ PluginErrorDetails f5710a;
    public final /* synthetic */ String b;

    public Hj(PluginErrorDetails pluginErrorDetails, String str) {
        this.f5710a = pluginErrorDetails;
        this.b = str;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        ya.getPluginExtension().reportError(this.f5710a, this.b);
    }
}
