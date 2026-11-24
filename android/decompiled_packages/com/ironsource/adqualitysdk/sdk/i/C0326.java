package com.ironsource.adqualitysdk.sdk.i;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Υ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0326 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static final String[] f1200;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final SQLiteDatabase f1204;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static final String f1203 = StringFog.decrypt("BIqVDRjYsx0=\n", "b/zKfmy3wXg=\n");

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f1202 = StringFog.decrypt("+Wut\n", "kg7UTN+Q9nQ=\n");

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final String f1201 = StringFog.decrypt("olnq\n", "1DiGLaJXV9s=\n");

    static {
        StringFog.decrypt("zFwt9Hc64jvsexWwbxzIMuB5DdRHO+I15HwJ\n", "hQ9skCZPg1c=\n");
        f1200 = new String[]{StringFog.decrypt("OsH6\n", "UaSDVm7zp3g=\n"), StringFog.decrypt("xx6A\n", "sX/sOYXnk/M=\n")};
    }

    public C0326(Context context, String str) {
        this.f1204 = new C0348(context, str).getWritableDatabase();
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final synchronized int m8487(String str) {
        Cursor cursorQuery = null;
        try {
            cursorQuery = this.f1204.query(f1203, new String[]{StringFog.decrypt("D9fsNx6FO1ggsQ==\n", "TJi5eUqtTTk=\n")}, StringFog.decrypt("pc+sEvQo9l3ulQ==\n", "zqrVMrhhvRg=\n"), new String[]{str.replace('*', '%')}, null, null, null);
            if (cursorQuery == null || !cursorQuery.moveToFirst()) {
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                return 0;
            }
            int i = cursorQuery.getInt(0);
            cursorQuery.close();
            return i;
        } catch (Throwable th) {
            if (cursorQuery == null) {
                throw th;
            }
            cursorQuery.close();
            throw th;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized void m8490(String str, String str2) {
        ContentValues contentValues = new ContentValues();
        contentValues.put(f1201, str2);
        SQLiteDatabase sQLiteDatabase = this.f1204;
        String str3 = f1203;
        if (sQLiteDatabase.update(str3, contentValues, StringFog.decrypt("toSqRwTEww==\n", "3eHTZznk/Dg=\n"), new String[]{str}) == 0) {
            contentValues.put(f1202, str);
            this.f1204.replace(str3, null, contentValues);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized String m8488(String str) {
        Cursor cursor = null;
        try {
            try {
                Cursor cursorQuery = this.f1204.query(f1203, f1200, StringFog.decrypt("MJcpnGsU4w==\n", "W/JQvFY03M8=\n"), new String[]{str}, null, null, null);
                if (cursorQuery != null) {
                    try {
                        if (cursorQuery.moveToNext()) {
                            String string = cursorQuery.getString(cursorQuery.getColumnIndexOrThrow(f1201));
                            cursorQuery.close();
                            return string;
                        }
                    } catch (Throwable th) {
                        th = th;
                        cursor = cursorQuery;
                        if (cursor != null) {
                            cursor.close();
                        }
                        throw th;
                    }
                }
                if (cursorQuery != null) {
                    cursorQuery.close();
                }
                return null;
            } catch (Throwable th2) {
                throw th2;
            }
        } catch (Throwable th3) {
            th = th3;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized HashMap m8489(String str, int i) {
        HashMap map;
        Cursor cursorQuery = null;
        try {
            cursorQuery = this.f1204.query(f1203, f1200, StringFog.decrypt("LF4vICf3jm5nBA==\n", "RztWAGu+xSs=\n"), new String[]{str.replace('*', '%')}, null, null, null, i <= 0 ? null : Integer.toString(i));
            map = new HashMap();
            while (cursorQuery != null && cursorQuery.moveToNext()) {
                try {
                    map.put(cursorQuery.getString(cursorQuery.getColumnIndexOrThrow(f1202)), cursorQuery.getString(cursorQuery.getColumnIndexOrThrow(f1201)));
                } catch (IllegalArgumentException unused) {
                }
            }
            if (cursorQuery != null) {
                cursorQuery.close();
            }
        } catch (Throwable th) {
            if (cursorQuery != null) {
                cursorQuery.close();
                throw th;
            }
            throw th;
        }
        return map;
    }
}
