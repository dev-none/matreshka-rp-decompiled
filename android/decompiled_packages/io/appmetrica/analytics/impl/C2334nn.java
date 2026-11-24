package io.appmetrica.analytics.impl;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.nn, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2334nn implements InterfaceC2309mn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final HashMap f6229a;

    public C2334nn(String str, HashMap<String, List<String>> map) {
        this.f6229a = map;
    }

    public final HashMap<String, List<String>> a() {
        return this.f6229a;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2309mn
    public final boolean a(SQLiteDatabase sQLiteDatabase) {
        try {
            boolean zEquals = true;
            for (Map.Entry entry : this.f6229a.entrySet()) {
                try {
                    SQLiteDatabase sQLiteDatabase2 = sQLiteDatabase;
                    Cursor cursorQuery = sQLiteDatabase2.query((String) entry.getKey(), null, null, null, null, null, null);
                    if (cursorQuery == null) {
                        no.a(cursorQuery);
                        return false;
                    }
                    List list = (List) entry.getValue();
                    List listAsList = Arrays.asList(cursorQuery.getColumnNames());
                    Collections.sort(listAsList);
                    zEquals &= list.equals(listAsList);
                    no.a(cursorQuery);
                    sQLiteDatabase = sQLiteDatabase2;
                } catch (Throwable th) {
                    no.a((Cursor) null);
                    throw th;
                }
            }
            return zEquals;
        } catch (Throwable unused) {
            return false;
        }
    }
}
