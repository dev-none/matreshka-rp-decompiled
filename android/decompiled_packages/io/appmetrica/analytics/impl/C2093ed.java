package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ed, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2093ed extends L2 {
    public final String b;

    public C2093ed(String str, InterfaceC2606yl interfaceC2606yl) {
        super(interfaceC2606yl);
        this.b = str;
    }

    @Override // io.appmetrica.analytics.impl.L2
    public final String a(String str) {
        return str + '-' + this.b;
    }
}
