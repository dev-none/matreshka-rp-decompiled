package io.appmetrica.analytics.impl;

import android.content.Context;
import java.util.HashMap;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.k5, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2240k5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final HashMap f6167a = new HashMap();
    public final HashMap b = new HashMap();
    public final Context c;

    public C2240k5(Context context) {
        this.c = context.getApplicationContext();
    }

    public final Na a(X4 x4, C2539w4 c2539w4, U7 u7, HashMap map) {
        Na na = (Na) map.get(x4.toString());
        if (na != null) {
            na.a(c2539w4);
            return na;
        }
        Na naA = u7.a(this.c, x4, c2539w4);
        map.put(x4.toString(), naA);
        return naA;
    }
}
