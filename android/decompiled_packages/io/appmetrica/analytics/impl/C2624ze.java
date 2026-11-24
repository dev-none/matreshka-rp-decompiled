package io.appmetrica.analytics.impl;

import java.util.List;
import java.util.concurrent.atomic.AtomicLong;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ze, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2624ze implements X8, Ae {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final S6 f6430a;
    public final AtomicLong b;

    public C2624ze(S6 s6) {
        this.f6430a = s6;
        this.b = new AtomicLong(s6.b());
        s6.a(this);
    }

    @Override // io.appmetrica.analytics.impl.X8
    public final void a(List<Integer> list) {
        this.b.addAndGet(list.size());
    }

    @Override // io.appmetrica.analytics.impl.X8
    public final void b(List<Integer> list) {
        this.b.addAndGet(-list.size());
    }

    @Override // io.appmetrica.analytics.impl.X8
    public final void a() {
        this.b.set(this.f6430a.b());
    }

    public final long b() {
        return this.b.get();
    }
}
