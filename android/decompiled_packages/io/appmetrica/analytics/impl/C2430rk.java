package io.appmetrica.analytics.impl;

import android.util.SparseArray;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.rk, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2430rk extends Qc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final yo f6299a;

    public C2430rk() {
        this(C2495ua.k().D().b());
    }

    @Override // io.appmetrica.analytics.impl.Qc
    public final void a(int i) {
        yo yoVar = this.f6299a;
        synchronized (yoVar) {
            Ao ao = yoVar.f6420a;
            ao.a(ao.a().put("last_migration_api_level", i));
        }
    }

    @Override // io.appmetrica.analytics.impl.Qc
    public final int b() {
        int iOptInt;
        yo yoVar = this.f6299a;
        synchronized (yoVar) {
            iOptInt = yoVar.f6420a.a().optInt("last_migration_api_level", -1);
        }
        return iOptInt;
    }

    @Override // io.appmetrica.analytics.impl.Qc
    public final SparseArray<Pc> c() {
        SparseArray<Pc> sparseArray = new SparseArray<>(1);
        sparseArray.put(112, new C2455sk(this.f6299a));
        sparseArray.put(115, new C2480tk());
        sparseArray.put(116, new C2580xk());
        return sparseArray;
    }

    public C2430rk(yo yoVar) {
        this.f6299a = yoVar;
    }
}
