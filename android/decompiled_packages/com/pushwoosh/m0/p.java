package com.pushwoosh.m0;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.os.Bundle;
import androidx.media3.extractor.text.ttml.TtmlNode;
import com.pushwoosh.internal.utils.JsonUtils;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.PushBundleDataProvider;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class p extends SQLiteOpenHelper implements o {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Object f5253a;

    public p(Context context) {
        super(context, "pushBundleDb.db", (SQLiteDatabase.CursorFactory) null, 6);
        this.f5253a = new Object();
    }

    public final ArrayList a() {
        ArrayList arrayList;
        synchronized (this.f5253a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    Cursor cursorQuery = writableDatabase.query("groupPushBundles", null, null, null, null, null, null);
                    try {
                        arrayList = new ArrayList();
                        while (cursorQuery.moveToNext()) {
                            arrayList.add(JsonUtils.jsonStringToBundle(cursorQuery.getString(cursorQuery.getColumnIndex("push_bundle_json"))));
                        }
                        cursorQuery.close();
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
                PWLog.error("Can't get group push bundles", e);
                throw e;
            }
        }
        return arrayList;
    }

    public final Bundle b(long j) {
        Bundle bundleJsonStringToBundle;
        synchronized (this.f5253a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    Cursor cursorQuery = writableDatabase.query("pushBundles", null, "rowid = ?", new String[]{Long.toString(j)}, null, null, null);
                    try {
                        if (!cursorQuery.moveToFirst()) {
                            PWLog.error("Can't get push bundle with id: " + j);
                            throw new Exception();
                        }
                        bundleJsonStringToBundle = JsonUtils.jsonStringToBundle(cursorQuery.getString(cursorQuery.getColumnIndex("push_bundle_json")));
                        cursorQuery.close();
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
                PWLog.error("Can't get push bundle with id: " + j, e);
                throw e;
            }
        }
        return bundleJsonStringToBundle;
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("create table pushBundles (push_bundle_json TEXT , group_id TEXT );");
        sQLiteDatabase.execSQL("create table groupPushBundles (push_bundle_json TEXT , group_id TEXT , notification_id INTEGER , msg_tag TEXT);");
        sQLiteDatabase.execSQL("create unique index idx_group_notif_tag on groupPushBundles(group_id, notification_id, msg_tag);");
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onDowngrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        sQLiteDatabase.setVersion(i);
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS pushBundles");
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS groupPushBundles");
        sQLiteDatabase.execSQL("create table pushBundles (push_bundle_json TEXT , group_id TEXT );");
        sQLiteDatabase.execSQL("create table groupPushBundles (push_bundle_json TEXT , group_id TEXT , notification_id INTEGER , msg_tag TEXT);");
        sQLiteDatabase.execSQL("create unique index idx_group_notif_tag on groupPushBundles(group_id, notification_id, msg_tag);");
    }

    public final long a(ContentValues contentValues, String str) {
        long jInsertWithOnConflict;
        synchronized (this.f5253a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    jInsertWithOnConflict = writableDatabase.insertWithOnConflict(str, null, contentValues, 5);
                    if (jInsertWithOnConflict != -1) {
                        writableDatabase.close();
                    } else {
                        PWLog.warn(TtmlNode.TAG_P, "Push bundle with message was not stored.");
                        throw new Exception();
                    }
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
                PWLog.error("Error occurred while storing push bundle", e);
                throw e;
            }
        }
        return jInsertWithOnConflict;
    }

    public final void b() {
        synchronized (this.f5253a) {
            SQLiteDatabase writableDatabase = getWritableDatabase();
            try {
                if (writableDatabase.delete("groupPushBundles", null, null) <= 0) {
                    PWLog.noise(TtmlNode.TAG_P, "failed to remove group push bundles");
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
        }
    }

    public final com.pushwoosh.n0.a a(String str) {
        com.pushwoosh.n0.a aVar;
        synchronized (this.f5253a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    Cursor cursorQuery = writableDatabase.query("groupPushBundles", new String[]{"notification_id", "push_bundle_json", "group_id", "rowid"}, "group_id = ?", new String[]{str}, null, null, null);
                    try {
                        if (cursorQuery.moveToLast()) {
                            int i = cursorQuery.getInt(cursorQuery.getColumnIndex("notification_id"));
                            long j = cursorQuery.getLong(cursorQuery.getColumnIndex("rowid"));
                            JsonUtils.jsonStringToBundle(cursorQuery.getString(cursorQuery.getColumnIndex("push_bundle_json")));
                            aVar = new com.pushwoosh.n0.a(j, i);
                            cursorQuery.close();
                            writableDatabase.close();
                        } else {
                            throw new Exception();
                        }
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
                PWLog.error("Failed to obtain the last status bar notification", e);
                throw e;
            }
        }
        return aVar;
    }

    /* JADX WARN: Code duplicated, block: B:45:0x0055 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:52:? A[Catch: all -> 0x005e, Exception -> 0x0061, SYNTHETIC, TRY_LEAVE, TryCatch #5 {Exception -> 0x0061, blocks: (B:5:0x0006, B:10:0x002d, B:15:0x003f, B:33:0x005d, B:32:0x005a), top: B:49:0x0006, outer: #4 }] */
    public final String a(long j) {
        synchronized (this.f5253a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    Cursor cursorQuery = writableDatabase.query("groupPushBundles", new String[]{"group_id"}, "rowid = ?", new String[]{Long.toString(j)}, null, null, null);
                    try {
                        if (!cursorQuery.moveToFirst()) {
                            cursorQuery.close();
                            writableDatabase.close();
                            return null;
                        }
                        String string = cursorQuery.getString(cursorQuery.getColumnIndexOrThrow("group_id"));
                        cursorQuery.close();
                        writableDatabase.close();
                        return string;
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
                PWLog.error(TtmlNode.TAG_P, "Failed to read the group of push bundle row " + j, e);
                return null;
            }
        }
    }

    public final void a(String str, long j) {
        synchronized (this.f5253a) {
            SQLiteDatabase writableDatabase = getWritableDatabase();
            try {
                if (writableDatabase.delete(str, "rowid=" + j, null) <= 0) {
                    PWLog.noise(TtmlNode.TAG_P, "failed to remove push bundle with id: " + j);
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
        }
    }

    public final long a(int i, Bundle bundle, String str) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("push_bundle_json", JsonUtils.bundleToJson(bundle).toString());
        contentValues.put("notification_id", Integer.valueOf(i));
        contentValues.put("group_id", str);
        contentValues.put("msg_tag", PushBundleDataProvider.getMessageTag(bundle));
        return a(contentValues, "groupPushBundles");
    }
}
