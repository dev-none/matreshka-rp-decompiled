package io.appmetrica.analytics.impl;

import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes7.dex */
public class Kc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Map f5760a;
    public final Object b;

    public Kc(Object obj) {
        this(new HashMap(), obj);
    }

    public final void a(Object obj, Object obj2) {
        this.f5760a.put(obj, obj2);
    }

    public Kc(HashMap map, Object obj) {
        this.f5760a = map;
        this.b = obj;
    }

    public final Object a(Object obj) {
        Object obj2 = this.f5760a.get(obj);
        return obj2 == null ? this.b : obj2;
    }
}
