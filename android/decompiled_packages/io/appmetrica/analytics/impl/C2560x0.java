package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.x0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2560x0 {
    public static boolean a() {
        boolean z;
        synchronized (C2535w0.class) {
            z = C2535w0.f;
        }
        return z;
    }

    public static void b() {
        synchronized (C2535w0.class) {
            C2535w0.f = true;
        }
    }
}
