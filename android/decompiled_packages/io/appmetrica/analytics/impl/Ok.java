package io.appmetrica.analytics.impl;

import android.content.Context;
import java.util.Map;
import kotlin.collections.MapsKt;

/* JADX INFO: loaded from: classes7.dex */
public final class Ok {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Sk f5824a;
    public final Map b;

    public Ok(Context context, X4 x4) {
        x4.a();
        Sk sk = new Sk(context, x4);
        this.f5824a = sk;
        this.b = MapsKt.toMutableMap(sk.a());
    }
}
