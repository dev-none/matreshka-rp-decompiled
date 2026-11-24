package io.appmetrica.analytics.impl;

import android.content.Context;
import android.util.SparseArray;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.d4, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2059d4 extends Qc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C1992af f6040a;

    public C2059d4(Context context) {
        this(new C1992af(C2139g7.a(context).b()));
    }

    @Override // io.appmetrica.analytics.impl.Qc
    public final void a(int i) {
        this.f6040a.c(i);
    }

    @Override // io.appmetrica.analytics.impl.Qc
    public final int b() {
        return (int) this.f6040a.a(-1L);
    }

    @Override // io.appmetrica.analytics.impl.Qc
    public final SparseArray<Pc> c() {
        return new SparseArray<>();
    }

    public C2059d4(C1992af c1992af) {
        this.f6040a = c1992af;
    }
}
