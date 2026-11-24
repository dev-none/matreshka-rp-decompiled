package io.appmetrica.analytics.impl;

import android.content.Context;

/* JADX INFO: loaded from: classes7.dex */
public abstract class Dd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static E9 f5640a;

    public static final synchronized E9 a(Context context) {
        E9 e9;
        e9 = f5640a;
        if (e9 == null) {
            e9 = new E9(context, "uuid.dat");
            f5640a = e9;
        }
        return e9;
    }
}
