package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.backport.Provider;
import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import io.appmetrica.analytics.plugins.IPluginReporter;
import io.appmetrica.analytics.plugins.PluginErrorDetails;
import java.util.Collection;

/* JADX INFO: loaded from: classes7.dex */
public final class Te implements IPluginReporter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final We f5906a = new We();
    public final Xe b = new Xe();
    public final IHandlerExecutor c = C2213j4.l().g().a();
    public final Provider d;

    public Te(Provider<Ya> provider) {
        this.d = provider;
    }

    @Override // io.appmetrica.analytics.plugins.IPluginReporter
    public final void reportError(PluginErrorDetails pluginErrorDetails, String str) {
        We we = this.f5906a;
        we.f5943a.a(pluginErrorDetails);
        if (we.c.a((Collection<Object>) (pluginErrorDetails != null ? pluginErrorDetails.getStacktrace() : null)).f6320a) {
            this.b.getClass();
            this.c.execute(new Re(this, pluginErrorDetails, str));
        }
    }

    @Override // io.appmetrica.analytics.plugins.IPluginReporter
    public final void reportUnhandledException(PluginErrorDetails pluginErrorDetails) {
        this.f5906a.f5943a.a(pluginErrorDetails);
        this.b.getClass();
        this.c.execute(new Qe(this, pluginErrorDetails));
    }

    @Override // io.appmetrica.analytics.plugins.IPluginReporter
    public final void reportError(String str, String str2, PluginErrorDetails pluginErrorDetails) {
        this.f5906a.b.a(str);
        this.b.getClass();
        this.c.execute(new Se(this, str, str2, pluginErrorDetails));
    }
}
