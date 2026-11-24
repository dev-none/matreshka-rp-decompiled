package com.pushwoosh.m0;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import com.pushwoosh.internal.utils.DbUtils;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public final class j extends SQLiteOpenHelper implements i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Object f5249a;

    public j(Context context) {
        super(context, "inboxNotificationDb.db", (SQLiteDatabase.CursorFactory) null, 2);
        this.f5249a = new Object();
    }

    public final void a(int i, String str, String str2) {
        synchronized (this.f5249a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    ContentValues contentValues = new ContentValues();
                    contentValues.put("inbox_message_id", str);
                    contentValues.put("notification_id", Integer.valueOf(i));
                    contentValues.put("notification_tag", str2);
                    if (writableDatabase.insertWithOnConflict("inboxNotifications", null, contentValues, 5) == -1) {
                        PWLog.warn("j", "Notification with inboxMessageId: " + str + " was not stored.");
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
                PWLog.error("j", "Error occurred while storing notification id and notification tag", e);
            }
        }
    }

    public final String b(String str) {
        String string;
        synchronized (this.f5249a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    Cursor cursorQuery = writableDatabase.query("inboxNotifications", null, "inbox_message_id = ?", DbUtils.getSelectionArgs(str), null, null, null);
                    try {
                        if (!cursorQuery.moveToFirst()) {
                            PWLog.error("j", "Can't find InboxMessage with id: " + str);
                            throw new Exception();
                        }
                        string = cursorQuery.getString(cursorQuery.getColumnIndex("notification_tag"));
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
                PWLog.error("j", "Can't get NotificationTag for InboxMessage with id: " + str, e);
                return null;
            }
        }
        return string;
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("create table inboxNotifications (".concat("inbox_message_id TEXT, notification_tag TEXT, notification_id INTEGER );"));
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS inboxNotifications");
        sQLiteDatabase.execSQL("create table inboxNotifications (".concat("inbox_message_id TEXT, notification_tag TEXT, notification_id INTEGER );"));
    }

    public final Integer a(String str) {
        Integer numValueOf;
        synchronized (this.f5249a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    Cursor cursorQuery = writableDatabase.query("inboxNotifications", null, "inbox_message_id = ?", DbUtils.getSelectionArgs(str), null, null, null);
                    try {
                        if (cursorQuery.moveToFirst()) {
                            numValueOf = Integer.valueOf(cursorQuery.getInt(cursorQuery.getColumnIndex("notification_id")));
                            cursorQuery.close();
                            writableDatabase.close();
                        } else {
                            PWLog.error("j", "Can't find InboxMessage with id: " + str);
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
                PWLog.error("j", "Can't get NotificationId for InboxMessage with id: " + str, e);
                return null;
            }
        }
        return numValueOf;
    }
}
