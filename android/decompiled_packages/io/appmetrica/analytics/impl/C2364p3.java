package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ecommerce.ECommerceCartItem;
import io.appmetrica.analytics.ecommerce.ECommerceEvent;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.p3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2364p3 extends ECommerceEvent {
    public static final int d = 4;
    public static final int e = 5;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f6250a;
    public final C2438s3 b;
    public final InterfaceC2166h8 c;

    public C2364p3(int i, ECommerceCartItem eCommerceCartItem) {
        this(i, new C2438s3(eCommerceCartItem), new C2389q3());
    }

    public final InterfaceC2166h8 a() {
        return this.c;
    }

    @Override // io.appmetrica.analytics.ecommerce.ECommerceEvent
    public final String getPublicDescription() {
        int i = this.f6250a;
        if (i != 4) {
            return i != 5 ? "unknown cart action info" : "remove cart item info";
        }
        return "add cart item info";
    }

    @Override // io.appmetrica.analytics.ecommerce.ECommerceEvent, io.appmetrica.analytics.impl.Pf
    public final List<Ii> toProto() {
        return (List) this.c.fromModel(this);
    }

    public final String toString() {
        return "CartActionInfoEvent{eventType=" + this.f6250a + ", cartItem=" + this.b + ", converter=" + this.c + '}';
    }

    public C2364p3(int i, C2438s3 c2438s3, InterfaceC2166h8 interfaceC2166h8) {
        this.f6250a = i;
        this.b = c2438s3;
        this.c = interfaceC2166h8;
    }
}
