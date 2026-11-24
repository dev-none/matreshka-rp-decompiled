package io.appmetrica.analytics.impl;

import android.content.Context;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.a, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C1976a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5991a;

    public C1976a(Context context) {
        this.f5991a = context;
    }

    public final byte[] a() {
        try {
            return AbstractC2280lj.a(new StringBuilder(this.f5991a.getPackageName()).reverse().toString());
        } catch (Throwable unused) {
            return new byte[16];
        }
    }

    public final byte[] b() {
        try {
            return AbstractC2280lj.a(this.f5991a.getPackageName());
        } catch (Throwable unused) {
            return new byte[16];
        }
    }
}
