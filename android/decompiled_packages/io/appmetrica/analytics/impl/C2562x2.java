package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.x2, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2562x2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2018bf f6397a;
    public final long b;
    public final long c;
    public final SystemTimeProvider d;
    public final Map e;

    public C2562x2(X4 x4, C2018bf c2018bf) {
        this.f6397a = c2018bf;
        x4.b();
        this.b = TimeUnit.MINUTES.toMillis(1L);
        this.c = TimeUnit.DAYS.toMillis(7L);
        this.d = new SystemTimeProvider();
        Map<String, Long> mapF = c2018bf.f();
        a(mapF);
        this.e = mapF;
    }

    public final void a(Map map) {
        long jCurrentTimeMillis = this.d.currentTimeMillis();
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        for (Map.Entry entry : map.entrySet()) {
            String str = (String) entry.getKey();
            if (((Number) entry.getValue()).longValue() < jCurrentTimeMillis - this.c) {
                linkedHashSet.add(str);
            }
        }
        Iterator it = linkedHashSet.iterator();
        while (it.hasNext()) {
            map.remove((String) it.next());
        }
    }
}
