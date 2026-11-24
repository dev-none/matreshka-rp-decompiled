package io.appmetrica.analytics.impl;

import android.database.sqlite.SQLiteDatabase;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ul, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2506ul implements F6 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2113f7 f6356a;

    public C2506ul(C2113f7 c2113f7) {
        this.f6356a = c2113f7;
    }

    @Override // io.appmetrica.analytics.impl.F6
    public final void a(SQLiteDatabase sQLiteDatabase) {
    }

    @Override // io.appmetrica.analytics.impl.F6
    public final SQLiteDatabase a() {
        try {
            return this.f6356a.getWritableDatabase();
        } catch (Throwable unused) {
            return null;
        }
    }
}
