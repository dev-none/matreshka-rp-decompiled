package io.appmetrica.analytics.impl;

import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.x4, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2564x4 extends AbstractC2589y4 {
    public C2564x4(C2553wi c2553wi) {
        super(c2553wi);
    }

    public final void a(EnumC2195ib enumC2195ib, List<Wg> list) {
        if (!D9.h.contains(enumC2195ib)) {
            list.add(this.f6408a.s);
        }
        if (D9.b.contains(enumC2195ib)) {
            return;
        }
        list.add(this.f6408a.c);
    }
}
