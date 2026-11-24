package io.appmetrica.analytics.impl;

import android.content.Context;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.i5, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2189i5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final X4 f6125a;
    public final C2139g7 b;

    public C2189i5(Context context, X4 x4) {
        this(x4, C2139g7.a(context));
    }

    public final C2018bf a() {
        return new C2018bf(this.b.b(this.f6125a));
    }

    public C2189i5(X4 x4, C2139g7 c2139g7) {
        this.f6125a = x4;
        this.b = c2139g7;
    }
}
