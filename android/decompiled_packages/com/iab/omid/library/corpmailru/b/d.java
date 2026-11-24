package com.iab.omid.library.corpmailru.b;

import android.content.Context;

/* JADX INFO: loaded from: classes6.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static d f4461a = new d();
    private Context b;

    private d() {
    }

    public static d a() {
        return f4461a;
    }

    public void a(Context context) {
        this.b = context != null ? context.getApplicationContext() : null;
    }

    public Context b() {
        return this.b;
    }
}
