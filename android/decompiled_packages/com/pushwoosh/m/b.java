package com.pushwoosh.m;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.text.TextUtils;
import androidx.media3.extractor.text.ttml.TtmlNode;
import com.pushwoosh.inapp.network.model.Resource;
import com.pushwoosh.internal.utils.DbUtils;
import com.pushwoosh.internal.utils.PWLog;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class b extends SQLiteOpenHelper implements c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Object f5240a;

    public b(Context context) {
        super(context, "inAppDb.db", (SQLiteDatabase.CursorFactory) null, 4);
        this.f5240a = new Object();
    }

    public final List a(List list) {
        if (list == null || list.size() == 0) {
            return Collections.EMPTY_LIST;
        }
        ArrayList arrayList = new ArrayList();
        synchronized (this.f5240a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                writableDatabase.beginTransaction();
                try {
                    Iterator it = list.iterator();
                    while (it.hasNext()) {
                        Resource resourceA = a(writableDatabase, (Resource) it.next());
                        if (resourceA != null) {
                            arrayList.add(resourceA.getCode());
                        }
                    }
                    writableDatabase.setTransactionSuccessful();
                    writableDatabase.endTransaction();
                    writableDatabase.close();
                } catch (Throwable th) {
                    writableDatabase.endTransaction();
                    writableDatabase.close();
                    throw th;
                }
            } catch (Exception e) {
                PWLog.error("Can't update inApp database", e);
            }
        }
        return arrayList;
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onCreate(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("create table inApps (code text primary key, url text, folder text, layout text, updated integer, priority integer default 0, required integer default 0, businessCase text, gdpr text);");
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
        if (i != i2) {
            if (i < 2 && i2 >= 2) {
                sQLiteDatabase.execSQL(String.format("ALTER TABLE inApps ADD COLUMN ".concat("%s INTEGER DEFAULT 0;"), "priority"));
                sQLiteDatabase.execSQL(String.format("ALTER TABLE inApps ADD COLUMN ".concat("%s INTEGER default 0;"), "required"));
            }
            if (i < 3 && i2 >= 3) {
                sQLiteDatabase.execSQL(String.format("ALTER TABLE inApps ADD COLUMN ".concat("%s TEXT;"), "gdpr"));
            }
            if (i >= 4 || i2 < 4) {
                return;
            }
            sQLiteDatabase.execSQL(String.format("ALTER TABLE inApps ADD COLUMN ".concat("%s TEXT;"), "businessCase"));
        }
    }

    public static Resource a(SQLiteDatabase sQLiteDatabase, Resource resource) {
        Resource resource2;
        Cursor cursorQuery = sQLiteDatabase.query("inApps", null, "code = ?", DbUtils.getSelectionArgs(resource.getCode()), null, null, null);
        try {
            if (cursorQuery.moveToFirst()) {
                Resource resourceA = a(cursorQuery);
                cursorQuery.close();
                resource2 = resourceA;
            } else {
                cursorQuery.close();
                resource2 = null;
            }
            if (resource2 != null && resource2.equals(resource)) {
                return null;
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put("url", resource.getUrl());
            contentValues.put("updated", Long.valueOf(resource.getUpdated()));
            contentValues.put(TtmlNode.TAG_LAYOUT, resource.getLayout().f5236a);
            contentValues.put("priority", Integer.valueOf(resource.getPriority()));
            contentValues.put("required", Integer.valueOf(resource.isRequired() ? 1 : 0));
            if (sQLiteDatabase.updateWithOnConflict("inApps", contentValues, "code= ?", new String[]{resource.getCode()}, 4) == 0) {
                contentValues.put("code", resource.getCode());
                if (sQLiteDatabase.insert("inApps", null, contentValues) == 0) {
                    PWLog.warn("InAppRetrieverWorker", "Not stored " + resource.getCode());
                    return null;
                }
            }
            return resource2;
        } catch (Throwable th) {
            cursorQuery.close();
            throw th;
        }
    }

    public final Resource a(String str) {
        Resource resourceA;
        if (str == null || TextUtils.isEmpty(str)) {
            return null;
        }
        synchronized (this.f5240a) {
            try {
                SQLiteDatabase writableDatabase = getWritableDatabase();
                try {
                    Cursor cursorQuery = writableDatabase.query("inApps", null, "code = ?", DbUtils.getSelectionArgs(str), null, null, null);
                    try {
                        if (cursorQuery.moveToFirst()) {
                            resourceA = a(cursorQuery);
                            cursorQuery.close();
                        } else {
                            cursorQuery.close();
                            resourceA = null;
                        }
                        writableDatabase.close();
                    } catch (Throwable th) {
                        cursorQuery.close();
                        throw th;
                    }
                } catch (Throwable th2) {
                    writableDatabase.close();
                    throw th2;
                }
            } catch (Exception e) {
                PWLog.error("Can't download resource from db with code: ".concat(str), e);
                return null;
            }
        }
        return resourceA;
    }

    public static Resource a(Cursor cursor) {
        com.pushwoosh.l.a aVar;
        String string = cursor.getString(cursor.getColumnIndex("code"));
        String string2 = cursor.getString(cursor.getColumnIndex("url"));
        long j = cursor.getLong(cursor.getColumnIndex("updated"));
        String string3 = cursor.getString(cursor.getColumnIndex(TtmlNode.TAG_LAYOUT));
        com.pushwoosh.l.a[] aVarArrValues = com.pushwoosh.l.a.values();
        int length = aVarArrValues.length;
        int i = 0;
        while (true) {
            if (i < length) {
                aVar = aVarArrValues[i];
                if (aVar.f5236a.equals(string3)) {
                    break;
                }
                i++;
            } else {
                aVar = com.pushwoosh.l.a.c;
                break;
            }
        }
        return new Resource(string, string2, "", j, aVar, null, cursor.getInt(cursor.getColumnIndex("required")) == 1, cursor.getInt(cursor.getColumnIndex("priority")));
    }
}
