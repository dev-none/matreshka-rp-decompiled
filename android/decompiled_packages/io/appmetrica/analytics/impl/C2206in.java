package io.appmetrica.analytics.impl;

import android.content.Context;
import java.util.Map;
import kotlin.Lazy;
import kotlin.LazyKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.in, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2206in implements InterfaceC2459t {
    public final C2509v b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2484u f6140a = new C2484u();
    public final Lazy c = LazyKt.lazy(new C2181hn(this));

    public C2206in(Context context) {
        this.b = new C2509v(context);
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2459t
    public final Map<String, String> a(Map<String, String> map) {
        map.putAll((Map) this.c.getValue());
        return map;
    }
}
