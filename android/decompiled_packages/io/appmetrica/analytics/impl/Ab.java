package io.appmetrica.analytics.impl;

import java.util.Set;

/* JADX INFO: loaded from: classes7.dex */
public final class Ab implements Oa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Oa f5594a;

    public Ab(Oa oa) {
        this.f5594a = oa;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final Oa a(String str, String str2) {
        this.f5594a.a(str, str2);
        return this;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final void b() {
        this.f5594a.b();
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final boolean getBoolean(String str, boolean z) {
        return this.f5594a.getBoolean(str, z);
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final int getInt(String str, int i) {
        return this.f5594a.getInt(str, i);
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final long getLong(String str, long j) {
        return this.f5594a.getLong(str, j);
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final String getString(String str, String str2) {
        return this.f5594a.getString(str, str2);
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final Oa remove(String str) {
        this.f5594a.remove(str);
        return this;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final Oa a(String str, long j) {
        this.f5594a.a(str, j);
        return this;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final Oa a(int i, String str) {
        this.f5594a.a(i, str);
        return this;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final Oa a(String str, boolean z) {
        this.f5594a.a(str, z);
        return this;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final Oa a(String str, float f) {
        this.f5594a.a(str, f);
        return this;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final boolean a(String str) {
        return this.f5594a.a(str);
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final Set a() {
        return this.f5594a.a();
    }
}
