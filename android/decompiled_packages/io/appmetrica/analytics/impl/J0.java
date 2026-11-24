package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import io.appmetrica.analytics.plugins.PluginErrorDetails;
import java.util.Collection;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes7.dex */
public final class J0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final IHandlerExecutor f5737a = C2213j4.l().g().a();
    public final C2560x0 b;
    public final Ve c;
    public final Ye d;

    public J0() {
        C2560x0 c2560x0 = new C2560x0();
        this.b = c2560x0;
        this.c = new Ve(c2560x0);
        this.d = new Ye();
    }

    public final void a(final PluginErrorDetails pluginErrorDetails) {
        Ve ve = this.c;
        ve.f5933a.a(null);
        ve.b.a(pluginErrorDetails);
        Ye ye = this.d;
        Intrinsics.checkNotNull(pluginErrorDetails);
        ye.getClass();
        this.f5737a.execute(new Runnable() { // from class: io.appmetrica.analytics.impl.J0$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                J0.a(this.f$0, pluginErrorDetails);
            }
        });
    }

    public final void a(final PluginErrorDetails pluginErrorDetails, final String str) {
        Ve ve = this.c;
        ve.f5933a.a(null);
        ve.b.a(pluginErrorDetails);
        if (ve.d.a((Collection<Object>) (pluginErrorDetails != null ? pluginErrorDetails.getStacktrace() : null)).f6320a) {
            Ye ye = this.d;
            Intrinsics.checkNotNull(pluginErrorDetails);
            ye.getClass();
            this.f5737a.execute(new Runnable() { // from class: io.appmetrica.analytics.impl.J0$$ExternalSyntheticLambda1
                @Override // java.lang.Runnable
                public final void run() {
                    J0.a(this.f$0, pluginErrorDetails, str);
                }
            });
        }
    }

    public final void a(final String str, final String str2, final PluginErrorDetails pluginErrorDetails) {
        Ve ve = this.c;
        ve.f5933a.a(null);
        ve.c.a(str);
        Ye ye = this.d;
        Intrinsics.checkNotNull(str);
        ye.getClass();
        this.f5737a.execute(new Runnable() { // from class: io.appmetrica.analytics.impl.J0$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() {
                J0.a(this.f$0, str, str2, pluginErrorDetails);
            }
        });
    }

    public static final void a(J0 j0, PluginErrorDetails pluginErrorDetails, String str) {
        j0.b.getClass();
        C2535w0 c2535w0 = C2535w0.e;
        Intrinsics.checkNotNull(c2535w0);
        C2398qc c2398qcI = c2535w0.f().i();
        Intrinsics.checkNotNull(c2398qcI);
        c2398qcI.f6272a.getPluginExtension().reportError(pluginErrorDetails, str);
    }

    public static final void a(J0 j0, String str, String str2, PluginErrorDetails pluginErrorDetails) {
        j0.b.getClass();
        C2535w0 c2535w0 = C2535w0.e;
        Intrinsics.checkNotNull(c2535w0);
        C2398qc c2398qcI = c2535w0.f().i();
        Intrinsics.checkNotNull(c2398qcI);
        c2398qcI.f6272a.getPluginExtension().reportError(str, str2, pluginErrorDetails);
    }

    public static final void a(J0 j0, PluginErrorDetails pluginErrorDetails) {
        j0.b.getClass();
        C2535w0 c2535w0 = C2535w0.e;
        Intrinsics.checkNotNull(c2535w0);
        C2398qc c2398qcI = c2535w0.f().i();
        Intrinsics.checkNotNull(c2398qcI);
        c2398qcI.f6272a.getPluginExtension().reportUnhandledException(pluginErrorDetails);
    }
}
