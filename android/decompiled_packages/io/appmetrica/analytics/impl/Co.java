package io.appmetrica.analytics.impl;

import android.content.Context;
import java.util.LinkedHashMap;

/* JADX INFO: loaded from: classes7.dex */
public final class Co {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5631a;
    public final LinkedHashMap b = new LinkedHashMap();
    public final yo c;
    public final yo d;

    public Co(Context context) {
        this.f5631a = context;
        C2194ia c2194ia = new C2194ia(context, "appmetrica_vital.dat");
        this.c = new yo(C2495ua.k().z(), c2194ia);
        this.d = new yo(new C2095ef(C2139g7.a(context).d()), c2194ia);
    }

    public final yo a() {
        return this.c;
    }

    public final yo b() {
        return this.d;
    }
}
