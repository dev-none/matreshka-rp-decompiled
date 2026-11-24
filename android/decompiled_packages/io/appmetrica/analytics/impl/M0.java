package io.appmetrica.analytics.impl;

import android.content.Intent;

/* JADX INFO: loaded from: classes7.dex */
public final class M0 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Intent f5783a;
    public final /* synthetic */ C2436s1 b;

    public M0(C2436s1 c2436s1, Intent intent) {
        this.b = c2436s1;
        this.f5783a = intent;
    }

    @Override // java.lang.Runnable
    public final void run() {
        G7 g7 = this.b.d().b;
        Intent intent = this.f5783a;
        g7.getClass();
        if (intent != null) {
            g7.a(intent.getDataString(), false);
        }
    }
}
