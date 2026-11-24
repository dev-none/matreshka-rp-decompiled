package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.toggle.SimpleThreadSafeToggle;

/* JADX INFO: loaded from: classes7.dex */
public final class M3 extends SimpleThreadSafeToggle {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2095ef f5785a;

    public M3(C2095ef c2095ef) {
        super(c2095ef.e(), "[ClientApiTrackingStatusToggle]");
        this.f5785a = c2095ef;
    }

    public final void a(boolean z) {
        updateState(z);
        this.f5785a.f(z);
    }
}
