package io.appmetrica.analytics.impl;

import java.util.LinkedHashSet;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.n2, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2313n2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final LinkedHashSet f6218a = new LinkedHashSet();

    public final synchronized void a(C2323nc c2323nc, long j) {
        this.f6218a.add(new C2288m2(c2323nc, C2213j4.l().c.a(), j));
    }
}
