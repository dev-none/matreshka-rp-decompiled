package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.executors.ICommonExecutor;
import java.util.Objects;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.yc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2597yc extends C2214j5 {
    public C2597yc(Context context, X4 x4, C2514v4 c2514v4, AbstractC2034c5 abstractC2034c5, C2231jm c2231jm, InterfaceC2303mh interfaceC2303mh, ICommonExecutor iCommonExecutor, int i, C2356ok c2356ok, Mb mb, InterfaceC2619z9 interfaceC2619z9) {
        super(context, x4, c2514v4, abstractC2034c5, c2231jm, interfaceC2303mh, iCommonExecutor, i, mb, interfaceC2619z9);
    }

    public final C2501ug a(C2547wc c2547wc) {
        C2424re c2424re = new C2424re(c2547wc);
        Objects.requireNonNull(c2547wc);
        return new C2501ug(c2424re, new C2522vc(c2547wc), c2547wc);
    }

    @Override // io.appmetrica.analytics.impl.C2214j5
    public final InterfaceC2569x9 a(C9 c9, S6 s6, Vg vg, C2514v4 c2514v4, X4 x4, C2018bf c2018bf) {
        return this.l.a(c9, s6, vg, c2514v4, x4, c2018bf).a();
    }
}
