package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.control.Toggle;
import io.appmetrica.analytics.coreutils.internal.toggle.ConjunctiveCompositeThreadSafeToggle;
import kotlin.collections.CollectionsKt;

/* JADX INFO: loaded from: classes7.dex */
public final class Mn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final M3 f5797a;
    public final Eo b;
    public final ConjunctiveCompositeThreadSafeToggle c;

    public Mn(Toggle toggle) {
        M3 m3 = new M3(C2495ua.k().z());
        this.f5797a = m3;
        Eo eo = new Eo();
        this.b = eo;
        Toggle[] toggleArr = new Toggle[3];
        toggleArr[0] = m3;
        toggleArr[1] = eo;
        toggleArr[2] = toggle == null ? new xo() : toggle;
        this.c = new ConjunctiveCompositeThreadSafeToggle(CollectionsKt.listOf((Object[]) toggleArr), "loc-def");
    }
}
