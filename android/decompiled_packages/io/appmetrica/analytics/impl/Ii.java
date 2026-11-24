package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Ii implements InterfaceC2212j3 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Object f5730a;
    public final InterfaceC2212j3 b;

    public Ii(Object obj, InterfaceC2212j3 interfaceC2212j3) {
        this.f5730a = obj;
        this.b = interfaceC2212j3;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2212j3
    public final int getBytesTruncated() {
        return this.b.getBytesTruncated();
    }

    public final String toString() {
        return "Result{result=" + this.f5730a + ", metaInfo=" + this.b + '}';
    }
}
