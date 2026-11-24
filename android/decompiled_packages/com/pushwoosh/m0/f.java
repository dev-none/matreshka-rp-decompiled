package com.pushwoosh.m0;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.DatabaseUtils;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import com.pravera.flutter_foreground_task.PreferencesKey;
import com.pushwoosh.internal.utils.DbUtils;
import com.pushwoosh.internal.utils.JsonUtils;
import com.pushwoosh.internal.utils.PWLog;
import java.util.HashSet;

/* JADX INFO: loaded from: classes6.dex */
public final class f extends SQLiteOpenHelper {
    public static final String b = "d";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Object f5247a;

    public f(Context context) {
        super(context, "localNotification.db", (SQLiteDatabase.CursorFactory) null, 2);
        this.f5247a = new Object();
    }

    public final d a(String str) {
        d dVarA;
        synchronized (this.f5247a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    dVarA = a(str, writableDatabase);
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
                PWLog.error("Can't get notification from db with requestId: " + str, e);
                return new d();
            }
        }
        return dVarA;
    }

    public final int b() {
        int i;
        synchronized (this.f5247a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    Cursor cursorQuery = writableDatabase.query("nextRequestId", null, null, null, null, null, null);
                    try {
                        if (cursorQuery.moveToFirst()) {
                            i = cursorQuery.getInt(cursorQuery.getColumnIndex("value"));
                            cursorQuery.close();
                        } else {
                            cursorQuery.close();
                            PWLog.noise(b, "nextId is empty, return 0");
                            i = 0;
                        }
                        ContentValues contentValues = new ContentValues();
                        contentValues.put("value", Integer.valueOf(i + 1));
                        if (writableDatabase.updateWithOnConflict("nextRequestId", contentValues, null, null, 4) == 0 && writableDatabase.insert("nextRequestId", null, contentValues) == 0) {
                            PWLog.warn("saveNextId", "Not stored ");
                        }
                        writableDatabase.close();
                    } catch (Throwable th) {
                        if (cursorQuery == null) {
                            throw th;
                        }
                        try {
                            cursorQuery.close();
                            throw th;
                        } catch (Throwable th2) {
                            th.addSuppressed(th2);
                            throw th;
                        }
                    }
                } catch (Throwable th3) {
                    if (writableDatabase == null) {
                        throw th3;
                    }
                    try {
                        writableDatabase.close();
                        throw th3;
                    } catch (Throwable th4) {
                        th3.addSuppressed(th4);
                        throw th3;
                    }
                }
            } catch (Exception e) {
                PWLog.error("Can't set next RequestId", e);
                return 0;
            }
        }
        return i;
    }

    public final void c(d dVar) {
        int i = dVar.f5246a;
        ContentValues contentValuesB = b(dVar);
        synchronized (this.f5247a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    String string = Integer.toString(i);
                    if (writableDatabase.updateWithOnConflict("localNotification", contentValuesB, "requestId= ?", new String[]{string}, 4) == 0 && writableDatabase.insert("localNotification", null, contentValuesB) == 0) {
                        PWLog.warn("notification", "Not stored " + string);
                    }
                    writableDatabase.close();
                } catch (Throwable th) {
                    if (writableDatabase == null) {
                        throw th;
                    }
                    try {
                        writableDatabase.close();
                        throw th;
                    } catch (Throwable th2) {
                        th.addSuppressed(th2);
                        throw th;
                    }
                }
            } catch (Exception e) {
                PWLog.error("Can't update preference value:" + i, e);
            }
        }
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("create table nextRequestId (value INTEGER primary key );");
        sQLiteDatabase.execSQL("create table localNotification (".concat("requestId INTEGER primary key, notificationId INTEGER, triggerAtMilles INTEGER, notificationTag TEXT, bundle TEXT );"));
        sQLiteDatabase.execSQL("create table localNotificationShown (".concat("requestId INTEGER primary key, notificationId INTEGER, triggerAtMilles INTEGER, notificationTag TEXT, bundle TEXT );"));
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
    }

    public static d a(String str, SQLiteDatabase sQLiteDatabase) {
        Cursor cursorQuery = sQLiteDatabase.query("localNotificationShown", null, "requestId = ?", DbUtils.getSelectionArgs(str), null, null, null);
        try {
            if (cursorQuery.moveToFirst()) {
                d dVarA = a(cursorQuery);
                cursorQuery.close();
                return dVarA;
            }
            cursorQuery.close();
            PWLog.noise(b, "can't find local notification in table localNotificationShown by id " + str);
            return null;
        } catch (Throwable th) {
            if (cursorQuery == null) {
                throw th;
            }
            try {
                cursorQuery.close();
                throw th;
            } catch (Throwable th2) {
                th.addSuppressed(th2);
                throw th;
            }
        }
    }

    public static d a(Cursor cursor) {
        return new d(cursor.getInt(cursor.getColumnIndex("requestId")), cursor.getInt(cursor.getColumnIndex(PreferencesKey.NOTIFICATION_ID)), cursor.getString(cursor.getColumnIndex("notificationTag")), cursor.getLong(cursor.getColumnIndex("triggerAtMilles")), JsonUtils.jsonStringToBundle(cursor.getString(cursor.getColumnIndex("bundle"))));
    }

    public static ContentValues b(d dVar) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("requestId", Integer.valueOf(dVar.f5246a));
        contentValues.put(PreferencesKey.NOTIFICATION_ID, Integer.valueOf(dVar.b));
        contentValues.put("notificationTag", dVar.c);
        contentValues.put("triggerAtMilles", Long.valueOf(dVar.d));
        contentValues.put("bundle", JsonUtils.bundleToJson(dVar.e).toString());
        return contentValues;
    }

    public final HashSet a() {
        HashSet hashSetA;
        synchronized (this.f5247a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    hashSetA = a(writableDatabase);
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
                PWLog.error("Can't get all request ids", e);
                return new HashSet();
            }
        }
        return hashSetA;
    }

    public static HashSet a(SQLiteDatabase sQLiteDatabase) {
        HashSet hashSet = new HashSet();
        Cursor cursorQuery = sQLiteDatabase.query("localNotification", new String[]{"requestId"}, null, null, null, null, null);
        while (cursorQuery.moveToNext()) {
            try {
                hashSet.add(Integer.valueOf(cursorQuery.getInt(cursorQuery.getColumnIndex("requestId"))));
            } catch (Throwable th) {
                if (cursorQuery == null) {
                    throw th;
                }
                try {
                    cursorQuery.close();
                    throw th;
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                    throw th;
                }
            }
        }
        cursorQuery.close();
        return hashSet;
    }

    public final void b(String str, int i) {
        synchronized (this.f5247a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    int iDelete = writableDatabase.delete(str, "requestId=" + i, null);
                    PWLog.debug("delete notification " + iDelete + " by requestID:" + i);
                    if (iDelete > 0) {
                        PWLog.noise(b, "success remove local notification by " + i);
                    } else {
                        PWLog.noise(b, "fail remove local notification by " + i);
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
                PWLog.error("Can't remove local notification by requestId: " + i, e);
            }
        }
    }

    public final void a(d dVar) {
        ContentValues contentValuesB = b(dVar);
        synchronized (this.f5247a) {
            int i = dVar.f5246a;
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    String string = Integer.toString(i);
                    if (writableDatabase.updateWithOnConflict("localNotificationShown", contentValuesB, "requestId= ?", new String[]{string}, 4) == 0 && writableDatabase.insert("localNotificationShown", null, contentValuesB) == 0) {
                        PWLog.warn("notification", "Not stored " + string);
                    }
                    if (DatabaseUtils.queryNumEntries(writableDatabase, "localNotificationShown") > 10) {
                        try {
                            Cursor cursorQuery = writableDatabase.query("localNotificationShown", null, null, null, null, null, "requestId");
                            if (cursorQuery.moveToFirst()) {
                                writableDatabase.delete("localNotificationShown", "requestId=?", new String[]{cursorQuery.getString(cursorQuery.getColumnIndex("requestId"))});
                            }
                        } catch (Throwable th) {
                            th = th;
                            writableDatabase = writableDatabase;
                            Throwable th2 = th;
                            if (writableDatabase == null) {
                                throw th2;
                            }
                            try {
                                writableDatabase.close();
                                throw th2;
                            } catch (Throwable th3) {
                                th2.addSuppressed(th3);
                                throw th2;
                            }
                        }
                    }
                    writableDatabase.close();
                } catch (Throwable th4) {
                    th = th4;
                }
            } catch (Exception e) {
                PWLog.error("Can't update preference value:" + i, e);
            }
        }
    }

    public final void a(e eVar) {
        synchronized (this.f5247a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    Cursor cursorQuery = writableDatabase.query("localNotification", null, null, null, null, null, null);
                    while (cursorQuery.moveToNext()) {
                        try {
                            eVar.a(a(cursorQuery));
                        } catch (Throwable th) {
                            if (cursorQuery == null) {
                                throw th;
                            }
                            try {
                                cursorQuery.close();
                                throw th;
                            } catch (Throwable th2) {
                                th.addSuppressed(th2);
                                throw th;
                            }
                        }
                    }
                    cursorQuery.close();
                    writableDatabase.close();
                } catch (Throwable th3) {
                    if (writableDatabase == null) {
                        throw th3;
                    }
                    try {
                        writableDatabase.close();
                        throw th3;
                    } catch (Throwable th4) {
                        th3.addSuppressed(th4);
                        throw th3;
                    }
                }
            } catch (Exception e) {
                PWLog.error("Can't get NotificationList: ", e);
            }
        }
    }

    /* JADX WARN: Code duplicated, block: B:50:0x004a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:54:? A[Catch: all -> 0x0054, Exception -> 0x0057, SYNTHETIC, TRY_LEAVE, TryCatch #4 {Exception -> 0x0057, blocks: (B:4:0x0007, B:10:0x002c, B:14:0x0034, B:33:0x0053, B:32:0x0050), top: B:46:0x0007, outer: #1 }] */
    public final d a(String str, int i) {
        String string = Integer.toString(i);
        synchronized (this.f5247a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    Cursor cursorQuery = writableDatabase.query("localNotificationShown", null, "notificationId = ? AND notificationTag = ?", DbUtils.getSelectionArgs(string, str), null, null, null);
                    try {
                        if (cursorQuery.moveToNext()) {
                            d dVarA = a(cursorQuery);
                            cursorQuery.close();
                            writableDatabase.close();
                            return dVarA;
                        }
                        cursorQuery.close();
                        writableDatabase.close();
                        return null;
                    } catch (Throwable th) {
                        if (cursorQuery == null) {
                            throw th;
                        }
                        try {
                            cursorQuery.close();
                            throw th;
                        } catch (Throwable th2) {
                            th.addSuppressed(th2);
                            throw th;
                        }
                    }
                } catch (Throwable th3) {
                    if (writableDatabase != null) {
                        throw th3;
                    }
                    try {
                        writableDatabase.close();
                        throw th3;
                    } catch (Throwable th4) {
                        th3.addSuppressed(th4);
                        throw th3;
                    }
                }
                if (writableDatabase != null) {
                    throw th3;
                }
                writableDatabase.close();
                throw th3;
            } catch (Exception e) {
                PWLog.error("Can't get Notification: ", e);
            }
        }
    }
}
