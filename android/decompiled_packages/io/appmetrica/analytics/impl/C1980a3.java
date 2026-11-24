package io.appmetrica.analytics.impl;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import io.appmetrica.analytics.coreapi.internal.data.IBinaryDataHelper;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.a3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C1980a3 implements IBinaryDataHelper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final F6 f5995a;
    public final String b;

    public C1980a3(F6 f6, String str) {
        this.f5995a = f6;
        this.b = str;
    }

    /* JADX WARN: Code duplicated, block: B:15:0x003d A[Catch: all -> 0x0045, TRY_ENTER, TRY_LEAVE, TryCatch #2 {all -> 0x0045, blocks: (B:7:0x001b, B:9:0x0022, B:11:0x0028, B:15:0x003d), top: B:27:0x001b }] */
    @Override // io.appmetrica.analytics.coreapi.internal.data.IBinaryDataHelper
    public final byte[] get(String str) {
        Cursor cursorQuery;
        SQLiteDatabase sQLiteDatabaseA;
        try {
            sQLiteDatabaseA = this.f5995a.a();
            if (sQLiteDatabaseA != null) {
                try {
                    cursorQuery = sQLiteDatabaseA.query(this.b, null, "data_key = ?", new String[]{str}, null, null, null);
                    if (cursorQuery != null) {
                        try {
                            if (cursorQuery.getCount() == 1 && cursorQuery.moveToFirst()) {
                                byte[] blob = cursorQuery.getBlob(cursorQuery.getColumnIndexOrThrow("value"));
                                no.a(cursorQuery);
                                this.f5995a.a(sQLiteDatabaseA);
                                return blob;
                            }
                            if (cursorQuery != null) {
                                cursorQuery.getCount();
                            }
                        } catch (Throwable unused) {
                        }
                    } else if (cursorQuery != null) {
                        cursorQuery.getCount();
                    }
                } catch (Throwable unused2) {
                    cursorQuery = null;
                }
            } else {
                cursorQuery = null;
            }
        } catch (Throwable unused3) {
            cursorQuery = null;
            sQLiteDatabaseA = null;
        }
        no.a(cursorQuery);
        this.f5995a.a(sQLiteDatabaseA);
        return null;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.IBinaryDataHelper
    public final void insert(String str, byte[] bArr) {
        SQLiteDatabase sQLiteDatabaseA;
        SQLiteDatabase sQLiteDatabase = null;
        try {
            sQLiteDatabaseA = this.f5995a.a();
            if (sQLiteDatabaseA != null) {
                try {
                    ContentValues contentValues = new ContentValues();
                    contentValues.put("data_key", str);
                    contentValues.put("value", bArr);
                    sQLiteDatabaseA.insertWithOnConflict(this.b, null, contentValues, 5);
                } catch (Throwable unused) {
                    sQLiteDatabase = sQLiteDatabaseA;
                    sQLiteDatabaseA = sQLiteDatabase;
                }
            }
        } catch (Throwable unused2) {
        }
        this.f5995a.a(sQLiteDatabaseA);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.IBinaryDataHelper
    public final void remove(String str) {
        SQLiteDatabase sQLiteDatabaseA;
        try {
            sQLiteDatabaseA = this.f5995a.a();
            if (sQLiteDatabaseA != null) {
                try {
                    new ContentValues().put("data_key", str);
                    sQLiteDatabaseA.delete(this.b, "data_key = ?", new String[]{str});
                } catch (Throwable unused) {
                }
            }
        } catch (Throwable unused2) {
            sQLiteDatabaseA = null;
        }
        this.f5995a.a(sQLiteDatabaseA);
    }
}
