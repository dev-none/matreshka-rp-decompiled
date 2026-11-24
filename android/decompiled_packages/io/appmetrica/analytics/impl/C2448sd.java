package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.sd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2448sd extends SafeRunnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2498ud f6312a;
    public final /* synthetic */ String b;
    public final /* synthetic */ byte[] c;

    public C2448sd(C2498ud c2498ud, String str, byte[] bArr) {
        this.f6312a = c2498ud;
        this.b = str;
        this.c = bArr;
    }

    @Override // io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable
    public final void runSafety() {
        C2498ud.a(this.f6312a).setSessionExtra(this.b, this.c);
    }
}
