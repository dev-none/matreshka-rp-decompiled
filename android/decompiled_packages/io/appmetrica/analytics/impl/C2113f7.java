package io.appmetrica.analytics.impl;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import io.appmetrica.analytics.coreapi.internal.db.DatabaseScript;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.io.Closeable;
import java.util.Collection;
import java.util.Iterator;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.f7, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2113f7 extends SQLiteOpenHelper implements Closeable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6072a;
    public final PublicLogger b;
    public final C2284ln c;

    public C2113f7(Context context, String str, C2284ln c2284ln, PublicLogger publicLogger) {
        super(context, str, (SQLiteDatabase.CursorFactory) null, D5.b);
        this.c = c2284ln;
        this.f6072a = str;
        this.b = publicLogger;
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final SQLiteDatabase getReadableDatabase() {
        try {
            return super.getReadableDatabase();
        } catch (Throwable th) {
            this.b.error(th, "Could not get readable database %s due to an exception. AppMetrica SDK may behave unexpectedly.", this.f6072a);
            Vj vj = AbstractC2479tj.f6336a;
            vj.getClass();
            vj.a(new C2504uj("db_read_error", th));
            return null;
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final SQLiteDatabase getWritableDatabase() {
        try {
            return super.getWritableDatabase();
        } catch (Throwable th) {
            this.b.error(th, "Could not get writable database %s due to an exception. AppMetrica SDK may behave unexpectedly.", this.f6072a);
            Vj vj = AbstractC2479tj.f6336a;
            vj.getClass();
            vj.a(new C2504uj("db_write_error", th));
            return null;
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onCreate(SQLiteDatabase sQLiteDatabase) {
        try {
            this.c.f6196a.runScript(sQLiteDatabase);
        } catch (Throwable unused) {
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onDowngrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        C2284ln c2284ln = this.c;
        if (i <= i2) {
            c2284ln.getClass();
            return;
        }
        try {
            c2284ln.b.runScript(sQLiteDatabase);
        } catch (Throwable unused) {
        }
        try {
            c2284ln.f6196a.runScript(sQLiteDatabase);
        } catch (Throwable unused2) {
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onOpen(SQLiteDatabase sQLiteDatabase) {
        super.onOpen(sQLiteDatabase);
        C2284ln c2284ln = this.c;
        c2284ln.getClass();
        try {
            InterfaceC2309mn interfaceC2309mn = c2284ln.d;
            if (interfaceC2309mn == null || interfaceC2309mn.a(sQLiteDatabase)) {
                return;
            }
            try {
                c2284ln.b.runScript(sQLiteDatabase);
            } catch (Throwable unused) {
            }
            c2284ln.f6196a.runScript(sQLiteDatabase);
        } catch (Throwable unused2) {
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        boolean z;
        C2284ln c2284ln = this.c;
        c2284ln.getClass();
        if (i2 > i) {
            for (int i3 = i + 1; i3 <= i2; i3++) {
                try {
                    Collection collection = (Collection) c2284ln.c.f6383a.get(Integer.valueOf(i3));
                    if (collection != null) {
                        Iterator it = collection.iterator();
                        while (it.hasNext()) {
                            ((DatabaseScript) it.next()).runScript(sQLiteDatabase);
                        }
                    }
                } catch (Throwable unused) {
                }
            }
            z = false;
        } else {
            z = true;
        }
        if (z || (!c2284ln.d.a(sQLiteDatabase))) {
            try {
                c2284ln.b.runScript(sQLiteDatabase);
            } catch (Throwable unused2) {
            }
            try {
                c2284ln.f6196a.runScript(sQLiteDatabase);
            } catch (Throwable unused3) {
            }
        }
    }
}
