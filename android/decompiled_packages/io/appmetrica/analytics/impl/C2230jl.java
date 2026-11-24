package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ecommerce.ECommerceEvent;
import io.appmetrica.analytics.ecommerce.ECommerceScreen;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.jl, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2230jl extends ECommerceEvent {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2177hj f6158a;
    public final InterfaceC2166h8 b;

    public C2230jl(ECommerceScreen eCommerceScreen) {
        this(new C2177hj(eCommerceScreen), new C2256kl());
    }

    public final InterfaceC2166h8 a() {
        return this.b;
    }

    @Override // io.appmetrica.analytics.ecommerce.ECommerceEvent
    public final String getPublicDescription() {
        return "shown screen info";
    }

    @Override // io.appmetrica.analytics.ecommerce.ECommerceEvent, io.appmetrica.analytics.impl.Pf
    public final List<Ii> toProto() {
        return (List) this.b.fromModel(this);
    }

    public final String toString() {
        return "ShownScreenInfoEvent{screen=" + this.f6158a + ", converter=" + this.b + '}';
    }

    public C2230jl(C2177hj c2177hj, InterfaceC2166h8 interfaceC2166h8) {
        this.f6158a = c2177hj;
        this.b = interfaceC2166h8;
    }
}
