package io.appmetrica.analytics.impl;

import android.content.Context;
import android.os.Bundle;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.v, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2509v implements InterfaceC2534w {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6359a;

    public C2509v(Context context) {
        this.f6359a = context;
    }

    public final String a() {
        C2213j4 c2213j4L = C2213j4.l();
        Context context = this.f6359a;
        T9 t9 = c2213j4L.t;
        if (t9 == null) {
            synchronized (c2213j4L) {
                t9 = c2213j4L.t;
                if (t9 == null) {
                    t9 = new T9(context);
                    c2213j4L.t = t9;
                }
            }
        }
        Bundle applicationMetaData = t9.d.getApplicationMetaData(t9.f5902a);
        if (applicationMetaData != null) {
            return applicationMetaData.getString("io.appmetrica.analytics.plugin_supported_ad_revenue_sources");
        }
        return null;
    }
}
