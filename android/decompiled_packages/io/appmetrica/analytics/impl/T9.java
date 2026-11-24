package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreutils.internal.services.SafePackageManager;

/* JADX INFO: loaded from: classes7.dex */
public final class T9 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5902a;
    public final Zm b;
    public final C2083e3 c;
    public final SafePackageManager d;

    public T9(Context context, Zm zm, C2083e3 c2083e3, SafePackageManager safePackageManager) {
        this.f5902a = context;
        this.b = zm;
        this.c = c2083e3;
        this.d = safePackageManager;
    }

    public T9(Context context) {
        this(context, new Zm(context, "io.appmetrica.analytics.build_id"), new C2083e3(context, "io.appmetrica.analytics.is_offline"), new SafePackageManager());
    }
}
