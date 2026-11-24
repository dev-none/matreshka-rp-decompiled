package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ecommerce.ECommerceEvent;
import io.appmetrica.analytics.ecommerce.ECommerceOrder;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ue, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2499ue extends ECommerceEvent {
    public static final int d = 6;
    public static final int e = 7;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f6351a;
    public final C2549we b;
    public final InterfaceC2166h8 c;

    public C2499ue(int i, ECommerceOrder eCommerceOrder) {
        this(i, new C2549we(eCommerceOrder), new C2524ve());
    }

    public final InterfaceC2166h8 a() {
        return this.c;
    }

    @Override // io.appmetrica.analytics.ecommerce.ECommerceEvent
    public final String getPublicDescription() {
        return "order info";
    }

    @Override // io.appmetrica.analytics.ecommerce.ECommerceEvent, io.appmetrica.analytics.impl.Pf
    public final List<Ii> toProto() {
        return (List) this.c.fromModel(this);
    }

    public final String toString() {
        return "OrderInfoEvent{eventType=" + this.f6351a + ", order=" + this.b + ", converter=" + this.c + '}';
    }

    public C2499ue(int i, C2549we c2549we, InterfaceC2166h8 interfaceC2166h8) {
        this.f6351a = i;
        this.b = c2549we;
        this.c = interfaceC2166h8;
    }
}
