package io.appmetrica.analytics.screenshot.impl;

import android.app.Activity;
import com.pushwoosh.n.j$$ExternalSyntheticApiModelOutline0;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityEvent;
import io.appmetrica.analytics.coreutils.internal.AndroidUtils;
import io.appmetrica.analytics.modulesapi.internal.client.ClientContext;
import kotlin.Lazy;
import kotlin.LazyKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.d, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2637d implements T {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ClientContext f6557a;
    public final U b;
    public volatile C2643j c;
    public final Lazy d = LazyKt.lazy(new C2634a(this));

    public C2637d(ClientContext clientContext, U u) {
        this.f6557a = clientContext;
        this.b = u;
    }

    public static final Activity.ScreenCaptureCallback d(C2637d c2637d) {
        return j$$ExternalSyntheticApiModelOutline0.m(c2637d.d.getValue());
    }

    @Override // io.appmetrica.analytics.screenshot.impl.T
    public final void a(C2646m c2646m) {
        this.c = c2646m != null ? c2646m.f6571a : null;
    }

    public final String b() {
        return "AndroidApiScreenshotCaptor";
    }

    @Override // io.appmetrica.analytics.screenshot.impl.T
    public final void a() {
        if (AndroidUtils.isApiAchieved(34)) {
            this.f6557a.getActivityLifecycleRegistry().registerListener(new C2636c(this), ActivityEvent.STARTED, ActivityEvent.STOPPED);
        }
    }
}
