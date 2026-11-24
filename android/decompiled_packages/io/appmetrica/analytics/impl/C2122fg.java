package io.appmetrica.analytics.impl;

import java.util.ArrayList;
import kotlin.collections.CollectionsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.fg, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2122fg implements InterfaceC2019bg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2225jg f6078a;

    public C2122fg(C2225jg c2225jg) {
        this.f6078a = c2225jg;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2019bg
    public final void a() {
        C2225jg c2225jg = this.f6078a;
        ArrayList arrayList = c2225jg.g;
        ArrayList arrayList2 = new ArrayList();
        for (Object obj : arrayList) {
            C2451sg c2451sg = (C2451sg) obj;
            c2225jg.c.getClass();
            String str = c2451sg != null ? c2451sg.f6314a : null;
            if (!(str == null || str.length() == 0)) {
                arrayList2.add(obj);
            }
        }
        c2225jg.a(c2225jg.c.a(CollectionsKt.filterNotNull(arrayList2)));
    }
}
