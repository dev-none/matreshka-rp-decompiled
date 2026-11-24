package io.appmetrica.analytics.impl;

import android.app.Activity;
import java.util.WeakHashMap;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.q, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2385q {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final WeakHashMap f6261a = new WeakHashMap();

    public final boolean a(Activity activity, EnumC2360p enumC2360p) {
        if (activity != null && this.f6261a.get(activity) == enumC2360p) {
            return false;
        }
        if (activity == null) {
            return true;
        }
        this.f6261a.put(activity, enumC2360p);
        return true;
    }
}
