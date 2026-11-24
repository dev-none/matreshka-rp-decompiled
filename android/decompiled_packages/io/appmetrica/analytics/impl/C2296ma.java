package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ma, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2296ma implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final AbstractC2474te f6207a;

    public C2296ma() {
        this(new Wl());
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2532vm fromModel(C2439s4 c2439s4) {
        C2532vm c2532vm = new C2532vm();
        c2532vm.b = c2439s4.b;
        c2532vm.f6375a = c2439s4.f6305a;
        c2532vm.c = c2439s4.c;
        c2532vm.d = c2439s4.d;
        c2532vm.e = c2439s4.e;
        c2532vm.f = this.f6207a.a(c2439s4.f);
        return c2532vm;
    }

    public C2296ma(Wl wl) {
        this.f6207a = wl;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2439s4 toModel(C2532vm c2532vm) {
        C2390q4 c2390q4 = new C2390q4();
        c2390q4.d = c2532vm.d;
        c2390q4.c = c2532vm.c;
        c2390q4.b = c2532vm.b;
        c2390q4.f6265a = c2532vm.f6375a;
        c2390q4.e = c2532vm.e;
        c2390q4.f = this.f6207a.a(c2532vm.f);
        return new C2439s4(c2390q4);
    }
}
