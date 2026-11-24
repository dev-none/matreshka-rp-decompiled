package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public abstract class Fd extends AbstractC2044cf implements InterfaceC2606yl {
    public Fd(Oa oa, String str) {
        super(oa, str);
    }

    public final String c(String str, String str2) {
        return this.f6030a.getString(f(str), str2);
    }

    public final InterfaceC2606yl d(String str, String str2) {
        return (InterfaceC2606yl) b(f(str), str2);
    }

    public final boolean e(String str) {
        return this.f6030a.a(f(str));
    }

    public abstract String f(String str);

    public InterfaceC2606yl g(String str) {
        return (InterfaceC2606yl) d(f(str));
    }

    public Fd(Oa oa) {
        this(oa, null);
    }

    public final InterfaceC2606yl d(String str, int i) {
        return (InterfaceC2606yl) b(f(str), i);
    }

    public final int c(String str, int i) {
        return this.f6030a.getInt(f(str), i);
    }

    public final InterfaceC2606yl d(String str, long j) {
        return (InterfaceC2606yl) b(f(str), j);
    }

    public final InterfaceC2606yl d(String str, boolean z) {
        return (InterfaceC2606yl) b(f(str), z);
    }

    public final long c(String str, long j) {
        return this.f6030a.getLong(f(str), j);
    }

    public final boolean c(String str, boolean z) {
        return this.f6030a.getBoolean(f(str), z);
    }
}
