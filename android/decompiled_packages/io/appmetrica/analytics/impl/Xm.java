package io.appmetrica.analytics.impl;

import android.content.Context;

/* JADX INFO: loaded from: classes7.dex */
public final class Xm extends Hi {
    public Xm(Context context, String str) {
        super(context, str, "array");
    }

    @Override // io.appmetrica.analytics.impl.Hi
    public final Object a(int i) {
        return this.f5709a.getResources().getStringArray(i);
    }

    public final String[] b(int i) {
        return this.f5709a.getResources().getStringArray(i);
    }
}
