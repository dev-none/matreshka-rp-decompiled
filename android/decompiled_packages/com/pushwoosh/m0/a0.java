package com.pushwoosh.m0;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.util.Pair;
import com.pushwoosh.internal.utils.PWLog;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public final class a0 extends SQLiteOpenHelper implements z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Object f5242a;

    public a0(Context context) {
        super(context, "SummaryNotificationIds.db", (SQLiteDatabase.CursorFactory) null, 1);
        this.f5242a = new Object();
    }

    public final void a(String str, int i) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("group_id", str);
        contentValues.put("pushwoosh_id", Integer.valueOf(i));
        synchronized (this.f5242a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    try {
                        writableDatabase.beginTransaction();
                        try {
                            if (writableDatabase.insertWithOnConflict("summaryNotificationIds", null, contentValues, 5) == -1) {
                                PWLog.warn("SummaryNotificationStorage", "Notification IDs pair was not stored.");
                                throw new Exception();
                            }
                            writableDatabase.setTransactionSuccessful();
                            writableDatabase.endTransaction();
                            writableDatabase.close();
                            writableDatabase.close();
                        } catch (Throwable th) {
                            writableDatabase.endTransaction();
                            throw th;
                        }
                    } catch (Throwable th2) {
                        if (writableDatabase != null) {
                            try {
                                writableDatabase.close();
                            } catch (Throwable th3) {
                                th2.addSuppressed(th3);
                            }
                        }
                        throw th2;
                    }
                } catch (Throwable th4) {
                    writableDatabase.close();
                    throw th4;
                }
            } catch (Exception e) {
                PWLog.error("Error occurred while storing notification IDs", e);
            }
        }
    }

    public final int b(String str) {
        SQLiteDatabase writableDatabase;
        int iA = a(str);
        synchronized (this.f5242a) {
            try {
                try {
                    writableDatabase = getWritableDatabase();
                    try {
                        writableDatabase.beginTransaction();
                        try {
                            if (writableDatabase.delete("summaryNotificationIds", "group_id = ?", new String[]{str}) <= 0) {
                                PWLog.noise("SummaryNotificationStorage", "failed to remove notification ids pair for id: " + str);
                            }
                            writableDatabase.setTransactionSuccessful();
                            writableDatabase.endTransaction();
                            writableDatabase.close();
                            writableDatabase.close();
                        } catch (Throwable th) {
                            writableDatabase.endTransaction();
                            throw th;
                        }
                    } catch (Throwable th2) {
                        writableDatabase.close();
                        throw th2;
                    }
                } catch (Throwable th3) {
                    if (writableDatabase != null) {
                        try {
                            writableDatabase.close();
                        } catch (Throwable th4) {
                            th3.addSuppressed(th4);
                        }
                    }
                    throw th3;
                }
            } catch (Exception e) {
                PWLog.error("SummaryNotificationStorage", "Failed to remove notification ids pair", e);
            }
        }
        return iA;
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("create table summaryNotificationIds (group_id TEXT , pushwoosh_id INTEGER UNIQUE );");
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS summaryNotificationIds");
        sQLiteDatabase.execSQL("create table summaryNotificationIds (group_id TEXT , pushwoosh_id INTEGER UNIQUE );");
    }

    public final void a(ArrayList arrayList) {
        SQLiteDatabase writableDatabase;
        synchronized (this.f5242a) {
            try {
                try {
                    writableDatabase = getWritableDatabase();
                    try {
                        writableDatabase.beginTransaction();
                        try {
                            writableDatabase.execSQL("delete from summaryNotificationIds");
                            writableDatabase.setTransactionSuccessful();
                            writableDatabase.endTransaction();
                            writableDatabase.close();
                            writableDatabase.close();
                            Iterator it = arrayList.iterator();
                            while (it.hasNext()) {
                                Pair pair = (Pair) it.next();
                                a((String) pair.first, ((Integer) pair.second).intValue());
                            }
                        } catch (Throwable th) {
                            writableDatabase.endTransaction();
                            throw th;
                        }
                    } catch (Throwable th2) {
                        writableDatabase.close();
                        throw th2;
                    }
                } catch (Throwable th3) {
                    if (writableDatabase != null) {
                        try {
                            writableDatabase.close();
                        } catch (Throwable th4) {
                            th3.addSuppressed(th4);
                        }
                    }
                    throw th3;
                }
            } catch (Exception e) {
                PWLog.error("SummaryNotificationStorage", "Failed to update notification storage", e);
            }
        }
    }

    public final int a(String str) {
        int i;
        synchronized (this.f5242a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    try {
                        writableDatabase.beginTransaction();
                        try {
                            Cursor cursorQuery = writableDatabase.query("summaryNotificationIds", null, "group_id = ?", new String[]{str}, null, null, null);
                            try {
                                if (cursorQuery.moveToFirst()) {
                                    writableDatabase.setTransactionSuccessful();
                                    i = cursorQuery.getInt(cursorQuery.getColumnIndexOrThrow("pushwoosh_id"));
                                    cursorQuery.close();
                                    writableDatabase.endTransaction();
                                    writableDatabase.close();
                                    writableDatabase.close();
                                } else {
                                    PWLog.noise("SummaryNotificationStorage", "Can't get StatusBarNotification with group id: " + str);
                                    throw new com.pushwoosh.c.a("Can't get StatusBarNotification with group id: " + str);
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
                            writableDatabase.endTransaction();
                            throw th3;
                        }
                    } catch (Throwable th4) {
                        writableDatabase.close();
                        throw th4;
                    }
                } catch (Throwable th5) {
                    if (writableDatabase == null) {
                        throw th5;
                    }
                    try {
                        writableDatabase.close();
                        throw th5;
                    } catch (Throwable th6) {
                        th5.addSuppressed(th6);
                        throw th5;
                    }
                }
            } catch (com.pushwoosh.c.a e) {
                throw e;
            } catch (Exception e2) {
                PWLog.error("SummaryNotificationStorage", "Can't get StatusBarNotification with group id: " + str, e2);
                throw new com.pushwoosh.c.a("Can't get StatusBarNotification with group id: " + str);
            }
        }
        return i;
    }

    public final String a(int i) {
        String string;
        synchronized (this.f5242a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    try {
                        writableDatabase.beginTransaction();
                        try {
                            Cursor cursorQuery = writableDatabase.query("summaryNotificationIds", null, "pushwoosh_id = ?", new String[]{Integer.toString(i)}, null, null, null);
                            try {
                                if (cursorQuery.moveToFirst()) {
                                    writableDatabase.setTransactionSuccessful();
                                    string = cursorQuery.getString(cursorQuery.getColumnIndexOrThrow("group_id"));
                                    cursorQuery.close();
                                    writableDatabase.endTransaction();
                                    writableDatabase.close();
                                    writableDatabase.close();
                                } else {
                                    PWLog.error("Can't get group with notification id: " + i);
                                    throw new com.pushwoosh.c.b("Can't get group with notification id: " + i);
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
                            writableDatabase.endTransaction();
                            throw th3;
                        }
                    } catch (Throwable th4) {
                        if (writableDatabase == null) {
                            throw th4;
                        }
                        try {
                            writableDatabase.close();
                            throw th4;
                        } catch (Throwable th5) {
                            th4.addSuppressed(th5);
                            throw th4;
                        }
                    }
                } catch (Throwable th6) {
                    writableDatabase.close();
                    throw th6;
                }
            } catch (com.pushwoosh.c.b e) {
                throw e;
            } catch (Exception e2) {
                PWLog.error("Can't get group with notification id: " + i, e2);
                throw new com.pushwoosh.c.b("Can't get group with notification id: " + i);
            }
        }
        return string;
    }
}
