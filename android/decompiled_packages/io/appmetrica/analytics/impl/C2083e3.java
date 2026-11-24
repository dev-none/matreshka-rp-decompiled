package io.appmetrica.analytics.impl;

import android.content.Context;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.e3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2083e3 extends Hi {
    public C2083e3(Context context, String str) {
        super(context, str, "bool");
    }

    @Override // io.appmetrica.analytics.impl.Hi
    public final Object a(int i) {
        return Boolean.valueOf(this.f5709a.getResources().getBoolean(i));
    }

    public final Boolean b(int i) {
        return Boolean.valueOf(this.f5709a.getResources().getBoolean(i));
    }
}
