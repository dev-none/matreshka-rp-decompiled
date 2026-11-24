package com.google.android.play.core.assetpacks;

/* JADX INFO: compiled from: com.google.android.play:asset-delivery@@2.3.0 */
/* JADX INFO: loaded from: classes5.dex */
abstract class fj {
    fj() {
    }

    abstract int a();

    abstract long b();

    abstract String c();

    abstract boolean d();

    abstract boolean e();

    abstract byte[] f();

    final boolean g() {
        if (c() == null) {
            return false;
        }
        return c().endsWith("/");
    }

    final boolean h() {
        return a() == 0;
    }
}
