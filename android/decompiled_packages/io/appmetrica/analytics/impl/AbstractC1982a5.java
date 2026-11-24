package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.a5, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public abstract class AbstractC1982a5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2085e5 f5997a;
    public final String b = "[ComponentMigrationToV113]";

    public AbstractC1982a5(C2085e5 c2085e5) {
        this.f5997a = c2085e5;
    }

    public final C2085e5 a() {
        return this.f5997a;
    }

    public final String b() {
        return this.b;
    }

    public abstract boolean b(int i);

    public abstract void c();

    public final void a(int i) {
        if (b(i)) {
            c();
        }
    }
}
