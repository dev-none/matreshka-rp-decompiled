package io.appmetrica.analytics.impl;

import android.content.Context;

/* JADX INFO: loaded from: classes7.dex */
public abstract class Hi {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected final Context f5709a;
    public final String b;
    public final String c;

    public Hi(Context context, String str, String str2) {
        this.f5709a = context;
        this.b = str;
        this.c = str2;
    }

    public final Object a() {
        int identifier = this.f5709a.getResources().getIdentifier(this.b, this.c, this.f5709a.getPackageName());
        if (identifier == 0) {
            return null;
        }
        try {
            return a(identifier);
        } catch (Throwable unused) {
            return null;
        }
    }

    public abstract Object a(int i);
}
