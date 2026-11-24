package io.appmetrica.analytics.impl;

import java.util.Collection;
import java.util.List;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.collections.CollectionsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.jc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2221jc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Vg f6152a;
    public final InterfaceC2594y9 b;
    public final C2514v4 c;
    public final C2018bf d;
    public final U4 e;
    public final Cc f = new Cc();
    public final Lazy g = LazyKt.lazy(new C2196ic(this));

    public C2221jc(S6 s6, Vg vg, InterfaceC2594y9 interfaceC2594y9, C2514v4 c2514v4, C2018bf c2018bf) {
        this.f6152a = vg;
        this.b = interfaceC2594y9;
        this.c = c2514v4;
        this.d = c2018bf;
        this.e = new U4(s6, vg);
    }

    public final List<K8> a() {
        return this.e.a();
    }

    public final List<K8> b() {
        return CollectionsKt.plus((Collection) CollectionsKt.listOf(this.e.c), (Iterable) CollectionsKt.listOf((K8) this.g.getValue()));
    }
}
