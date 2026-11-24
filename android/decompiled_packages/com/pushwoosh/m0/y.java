package com.pushwoosh.m0;

import android.content.ContentValues;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.PushBundleDataProvider;
import com.pushwoosh.notification.PushMessage;

/* JADX INFO: loaded from: classes6.dex */
public final class y extends SQLiteOpenHelper implements x {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Object f5260a;

    public y(Context context) {
        super(context, "silentRichMediaStorage.db", (SQLiteDatabase.CursorFactory) null, 2);
        this.f5260a = new Object();
    }

    public final void a(PushMessage pushMessage) {
        synchronized (this.f5260a) {
            String richMedia = PushBundleDataProvider.getRichMedia(pushMessage.toBundle());
            String sound = pushMessage.getSound();
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    ContentValues contentValues = new ContentValues();
                    contentValues.put("richMedia", richMedia);
                    contentValues.put("sound", sound);
                    if (writableDatabase.insertWithOnConflict("resources", null, contentValues, 5) == -1) {
                        PWLog.warn("y", "Rich media " + richMedia + " was not stored.");
                    }
                    writableDatabase.close();
                } catch (Throwable th) {
                    if (writableDatabase != null) {
                        try {
                            writableDatabase.close();
                        } catch (Throwable th2) {
                            th.addSuppressed(th2);
                        }
                    }
                    throw th;
                }
            } catch (Exception e) {
                PWLog.error("Can't cache richMedia resource: " + richMedia, e);
            }
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("create table resources (richMedia TEXT , sound TEXT );");
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS resources");
        sQLiteDatabase.execSQL("create table resources (richMedia TEXT , sound TEXT );");
    }

    /* JADX WARN: Bottom block not found for handler: all -> 0x008c */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final com.pushwoosh.q.b a() {
        /*
            r13 = this;
            java.lang.Object r1 = r13.f5260a
            monitor-enter(r1)
            r2 = 0
            android.database.sqlite.SQLiteDatabase r3 = r13.getWritableDatabase()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La1
            java.lang.String r4 = "resources"
            r9 = 0
            r10 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r4 = r3.query(r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L8e
            boolean r0 = r4.moveToLast()     // Catch: java.lang.Throwable -> L7e
            if (r0 == 0) goto L69
            java.lang.String r0 = "richMedia"
            int r0 = r4.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r5 = r4.getString(r0)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r0 = "sound"
            int r0 = r4.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r8 = r4.getString(r0)     // Catch: java.lang.Throwable -> L7e
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L7e
            r6 = 1
            if (r0 == 0) goto L3b
            r7 = r2
        L39:
            r10 = r6
            goto L60
        L3b:
            com.pushwoosh.inapp.network.model.Resource r7 = com.pushwoosh.inapp.network.model.Resource.parseRichMedia(r5)     // Catch: com.pushwoosh.g.a -> L4c java.lang.Throwable -> L7e
            if (r7 == 0) goto L39
            boolean r0 = r7.isInApp()     // Catch: com.pushwoosh.g.a -> L4a java.lang.Throwable -> L7e
            if (r0 == 0) goto L48
            goto L39
        L48:
            r6 = 2
            goto L39
        L4a:
            r0 = move-exception
            goto L4e
        L4c:
            r0 = move-exception
            r7 = r2
        L4e:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7e
            java.lang.String r10 = "Can't parse richMedia: "
            r9.<init>(r10)     // Catch: java.lang.Throwable -> L7e
            r9.append(r5)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r5 = r9.toString()     // Catch: java.lang.Throwable -> L7e
            com.pushwoosh.internal.utils.PWLog.error(r5, r0)     // Catch: java.lang.Throwable -> L7e
            goto L39
        L60:
            com.pushwoosh.q.b r6 = new com.pushwoosh.q.b     // Catch: java.lang.Throwable -> L7e
            r11 = 0
            r9 = 0
            r6.<init>(r7, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L7e
            r2 = r6
        L69:
            boolean r0 = r4.isClosed()     // Catch: java.lang.Throwable -> L7e
            if (r0 != 0) goto L72
            r4.close()     // Catch: java.lang.Throwable -> L7e
        L72:
            r4.close()     // Catch: java.lang.Throwable -> L8e
            java.lang.String r0 = "delete from resources"
            r3.execSQL(r0)     // Catch: java.lang.Throwable -> L8e
            r3.close()     // Catch: java.lang.Throwable -> L9f java.lang.Exception -> La1
            goto La7
        L7e:
            r0 = move-exception
            r5 = r2
            r2 = r0
            if (r4 == 0) goto L8b
            r4.close()     // Catch: java.lang.Throwable -> L87
            goto L8b
        L87:
            r0 = move-exception
            r2.addSuppressed(r0)     // Catch: java.lang.Throwable -> L8c
        L8b:
            throw r2     // Catch: java.lang.Throwable -> L8c
        L8c:
            r0 = move-exception
            goto L90
        L8e:
            r0 = move-exception
            r5 = r2
        L90:
            r2 = r0
            if (r3 == 0) goto L9b
            r3.close()     // Catch: java.lang.Throwable -> L97
            goto L9b
        L97:
            r0 = move-exception
            r2.addSuppressed(r0)     // Catch: java.lang.Exception -> L9c java.lang.Throwable -> L9f
        L9b:
            throw r2     // Catch: java.lang.Exception -> L9c java.lang.Throwable -> L9f
        L9c:
            r0 = move-exception
            r2 = r5
            goto La2
        L9f:
            r0 = move-exception
            goto La9
        La1:
            r0 = move-exception
        La2:
            java.lang.String r3 = "Can't get cached resources: "
            com.pushwoosh.internal.utils.PWLog.error(r3, r0)     // Catch: java.lang.Throwable -> L9f
        La7:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L9f
            return r2
        La9:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L9f
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.pushwoosh.m0.y.a():com.pushwoosh.q.b");
    }
}
