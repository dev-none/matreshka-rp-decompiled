package io.appmetrica.analytics.impl;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.io.Closeable;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.gc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2144gc implements F6 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6093a;
    public final String b;
    public final C2284ln c;
    public final C2116fa d;
    public C2113f7 e;

    public C2144gc(Context context, String str, C2284ln c2284ln) {
        this(context, str, new C2116fa(str), c2284ln);
    }

    @Override // io.appmetrica.analytics.impl.F6
    public final synchronized SQLiteDatabase a() {
        C2113f7 c2113f7;
        try {
            this.d.a();
            c2113f7 = new C2113f7(this.f6093a, this.b, this.c, PublicLogger.getAnonymousInstance());
            this.e = c2113f7;
        } catch (Throwable unused) {
            return null;
        }
        return c2113f7.getWritableDatabase();
    }

    public C2144gc(Context context, String str, C2116fa c2116fa, C2284ln c2284ln) {
        this.f6093a = context;
        this.b = str;
        this.d = c2116fa;
        this.c = c2284ln;
    }

    @Override // io.appmetrica.analytics.impl.F6
    public final synchronized void a(SQLiteDatabase sQLiteDatabase) {
        if (sQLiteDatabase != null) {
            try {
                sQLiteDatabase.close();
            } catch (Throwable unused) {
            }
        }
        no.a((Closeable) this.e);
        this.d.b();
        this.e = null;
    }
}
