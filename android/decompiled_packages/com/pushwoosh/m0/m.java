package com.pushwoosh.m0;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.net.Uri;
import android.text.TextUtils;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.PushBundleDataProvider;
import com.pushwoosh.notification.PushMessage;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class m extends SQLiteOpenHelper implements l {
    public static final String b = "d";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Object f5251a;

    public m(Context context) {
        super(context, "lockScreenRichMediaResources.db", (SQLiteDatabase.CursorFactory) null, 2);
        this.f5251a = new Object();
    }

    public final void a(PushMessage pushMessage) {
        synchronized (this.f5251a) {
            String richMedia = PushBundleDataProvider.getRichMedia(pushMessage.toBundle());
            String sound = pushMessage.getSound();
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    ContentValues contentValues = new ContentValues();
                    contentValues.put("richMedia", richMedia);
                    contentValues.put("sound", sound);
                    if (writableDatabase.insertWithOnConflict("lockScreenResources", null, contentValues, 5) == -1) {
                        PWLog.warn(b, "Rich media " + richMedia + " was not stored.");
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

    public final void b() {
        synchronized (this.f5251a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    writableDatabase.execSQL("delete from lockScreenResources");
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
                PWLog.error("Can't clear resources", e);
            }
        }
    }

    public final ArrayList c() {
        ArrayList arrayList = new ArrayList();
        synchronized (this.f5251a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    Cursor cursorQuery = writableDatabase.query("lockScreenRemoteUrls", null, null, null, null, null, null);
                    while (cursorQuery.moveToNext()) {
                        try {
                            arrayList.add(Uri.parse(cursorQuery.getString(cursorQuery.getColumnIndex("remoteUrl"))));
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
                    if (!cursorQuery.isClosed()) {
                        cursorQuery.close();
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
                PWLog.error("Can't get cached resources: ", e);
            }
        }
        return arrayList;
    }

    public final ArrayList d() {
        ArrayList arrayList = new ArrayList();
        synchronized (this.f5251a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    Cursor cursorQuery = writableDatabase.query("lockScreenResources", null, null, null, null, null, null);
                    while (cursorQuery.moveToNext()) {
                        try {
                            String string = cursorQuery.getString(cursorQuery.getColumnIndex("richMedia"));
                            String string2 = cursorQuery.getString(cursorQuery.getColumnIndex("sound"));
                            int i = 1;
                            Resource richMedia = null;
                            if (!TextUtils.isEmpty(string)) {
                                try {
                                    richMedia = Resource.parseRichMedia(string);
                                    if (richMedia != null && !richMedia.isInApp()) {
                                        i = 2;
                                    }
                                } catch (com.pushwoosh.g.a e) {
                                    PWLog.error("Can't parse richMedia: " + string, e);
                                }
                            }
                            arrayList.add(new com.pushwoosh.q.b(richMedia, string2, true, i, 0L));
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
                    if (!cursorQuery.isClosed()) {
                        cursorQuery.close();
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
            } catch (Exception e2) {
                PWLog.error("Can't get cached resources: ", e2);
            }
        }
        return arrayList;
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("create table lockScreenResources (richMedia TEXT , sound TEXT );");
        sQLiteDatabase.execSQL("create table lockScreenRemoteUrls (remoteUrl TEXT );");
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS lockScreenResources");
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS lockScreenRemoteUrls");
        sQLiteDatabase.execSQL("create table lockScreenResources (richMedia TEXT , sound TEXT );");
        sQLiteDatabase.execSQL("create table lockScreenRemoteUrls (remoteUrl TEXT );");
    }

    public final void a(Uri uri) {
        synchronized (this.f5251a) {
            String string = uri.toString();
            if (TextUtils.isEmpty(string)) {
                PWLog.warn(b, "Remote url is empty.");
                return;
            }
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    ContentValues contentValues = new ContentValues();
                    contentValues.put("remoteUrl", string);
                    if (writableDatabase.insertWithOnConflict("lockScreenRemoteUrls", null, contentValues, 5) == -1) {
                        PWLog.warn(b, "Remote url " + string + " was not stored.");
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
                PWLog.error("Can't cache remote url: " + string, e);
            }
        }
    }

    public final void a() {
        synchronized (this.f5251a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    writableDatabase.execSQL("delete from lockScreenRemoteUrls");
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
                PWLog.error("Can't clear remote urls", e);
            }
        }
    }
}
