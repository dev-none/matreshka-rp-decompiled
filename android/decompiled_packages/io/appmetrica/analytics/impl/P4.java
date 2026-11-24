package io.appmetrica.analytics.impl;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import com.unity3d.ads.core.domain.HandleInvocationsFromAdViewer;
import com.vk.id.analytics.stat.StatTracker;
import io.appmetrica.analytics.coreapi.internal.db.DatabaseScript;
import io.sentry.ProfilingTraceData;
import okhttp3.internal.connection.RealConnection;

/* JADX INFO: loaded from: classes7.dex */
public final class P4 extends DatabaseScript {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f5830a = 2000;
    public final String b = "number";
    public final String c = "global_number";
    public final String d = "number_of_type";
    public final String e = "name";
    public final String f = "value";
    public final String g = "type";
    public final String h = "time";
    public final String i = StatTracker.EXTERNAL_PARAM_SESSION_ID;
    public final String j = "error_environment";
    public final String k = "session_type";
    public final String l = "app_environment";
    public final String m = "app_environment_revision";
    public final String n = "truncated";
    public final String o = "custom_type";
    public final String p = "encrypting_mode";
    public final String q = ProfilingTraceData.JsonKeys.PROFILE_ID;
    public final String r = "first_occurrence_status";
    public final String s = "source";
    public final String t = "attribution_id_changed";
    public final String u = "open_id";
    public final String v = HandleInvocationsFromAdViewer.KEY_EXTRAS;
    public final String w = "reports";
    public final C2318n7 x = new C2318n7(null, 1, 0 == true ? 1 : 0);

    public static boolean a(C2293m7 c2293m7) {
        Long l;
        EnumC2195ib enumC2195ib;
        Long l2;
        Long l3;
        Long l4 = c2293m7.f6204a;
        if (l4 == null || l4.longValue() < RealConnection.IDLE_CONNECTION_HEALTHY_NS || c2293m7.b == null || (l = c2293m7.c) == null || l.longValue() < 0 || (enumC2195ib = c2293m7.d) == null || enumC2195ib == EnumC2195ib.EVENT_TYPE_UNDEFINED || (l2 = c2293m7.e) == null || l2.longValue() < 0 || (l3 = c2293m7.f) == null || l3.longValue() < 0) {
            return false;
        }
        Long l5 = c2293m7.g.d;
        if (l5 != null && l5.longValue() < 0) {
            return false;
        }
        Integer num = c2293m7.g.i;
        return num == null || num.intValue() >= 0;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.db.DatabaseScript
    public final void runScript(SQLiteDatabase sQLiteDatabase) {
        SQLiteDatabase sQLiteDatabase2;
        Cursor cursorQuery;
        sQLiteDatabase.execSQL("CREATE TABLE IF NOT EXISTS events (id INTEGER PRIMARY KEY,session_id INTEGER,session_type INTEGER,number_in_session INTEGER,type INTEGER,global_number INTEGER,time INTEGER,event_description BLOB )");
        Cursor cursor = null;
        try {
            sQLiteDatabase2 = sQLiteDatabase;
            try {
                cursorQuery = sQLiteDatabase2.query(this.w, null, null, null, null, null, null, String.valueOf(this.f5830a));
                while (cursorQuery.moveToNext()) {
                    try {
                        C2293m7 c2293m7A = a(cursorQuery);
                        if (c2293m7A != null && a(c2293m7A)) {
                            try {
                                sQLiteDatabase2.insertOrThrow("events", null, this.x.fromModel(c2293m7A));
                            } catch (Throwable unused) {
                            }
                        }
                    } catch (Throwable unused2) {
                        cursor = cursorQuery;
                        if (cursor != null) {
                            cursorQuery = cursor;
                        }
                        sQLiteDatabase2.execSQL("DROP TABLE IF EXISTS " + this.w);
                    }
                }
            } catch (Throwable unused3) {
            }
        } catch (Throwable unused4) {
            sQLiteDatabase2 = sQLiteDatabase;
        }
        cursorQuery.close();
        sQLiteDatabase2.execSQL("DROP TABLE IF EXISTS " + this.w);
    }

    /* JADX WARN: Code duplicated, block: B:18:0x00e3  */
    /* JADX WARN: Code duplicated, block: B:19:0x00e4 A[Catch: all -> 0x01ab, TryCatch #4 {all -> 0x01ab, blocks: (B:3:0x0004, B:9:0x002c, B:16:0x0038, B:22:0x00ec, B:28:0x00f7, B:35:0x0104, B:72:0x0173, B:76:0x0183, B:80:0x0198, B:79:0x0192, B:66:0x0161, B:50:0x0135, B:31:0x00fc, B:25:0x00f1, B:19:0x00e4, B:12:0x0031, B:6:0x0026, B:53:0x013a, B:59:0x0153, B:62:0x0158, B:56:0x014d, B:36:0x010e, B:42:0x0127, B:48:0x0132, B:45:0x012c, B:39:0x0121), top: B:93:0x0004, inners: #0, #3 }] */
    /* JADX WARN: Code duplicated, block: B:21:0x00e9 A[PHI: r12
  0x00e9: PHI (r12v1 io.appmetrica.analytics.impl.N8) = 
  (r12v0 io.appmetrica.analytics.impl.N8)
  (r12v7 io.appmetrica.analytics.impl.N8)
  (r12v8 io.appmetrica.analytics.impl.N8)
 binds: [B:20:0x00e7, B:27:0x00f6, B:33:0x0101] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:24:0x00f0  */
    /* JADX WARN: Code duplicated, block: B:25:0x00f1 A[Catch: all -> 0x01ab, TryCatch #4 {all -> 0x01ab, blocks: (B:3:0x0004, B:9:0x002c, B:16:0x0038, B:22:0x00ec, B:28:0x00f7, B:35:0x0104, B:72:0x0173, B:76:0x0183, B:80:0x0198, B:79:0x0192, B:66:0x0161, B:50:0x0135, B:31:0x00fc, B:25:0x00f1, B:19:0x00e4, B:12:0x0031, B:6:0x0026, B:53:0x013a, B:59:0x0153, B:62:0x0158, B:56:0x014d, B:36:0x010e, B:42:0x0127, B:48:0x0132, B:45:0x012c, B:39:0x0121), top: B:93:0x0004, inners: #0, #3 }] */
    /* JADX WARN: Code duplicated, block: B:27:0x00f6  */
    /* JADX WARN: Code duplicated, block: B:30:0x00fb  */
    /* JADX WARN: Code duplicated, block: B:31:0x00fc A[Catch: all -> 0x01ab, TryCatch #4 {all -> 0x01ab, blocks: (B:3:0x0004, B:9:0x002c, B:16:0x0038, B:22:0x00ec, B:28:0x00f7, B:35:0x0104, B:72:0x0173, B:76:0x0183, B:80:0x0198, B:79:0x0192, B:66:0x0161, B:50:0x0135, B:31:0x00fc, B:25:0x00f1, B:19:0x00e4, B:12:0x0031, B:6:0x0026, B:53:0x013a, B:59:0x0153, B:62:0x0158, B:56:0x014d, B:36:0x010e, B:42:0x0127, B:48:0x0132, B:45:0x012c, B:39:0x0121), top: B:93:0x0004, inners: #0, #3 }] */
    /* JADX WARN: Code duplicated, block: B:33:0x0101  */
    /* JADX WARN: Code duplicated, block: B:38:0x0120  */
    /* JADX WARN: Code duplicated, block: B:39:0x0121 A[Catch: all -> 0x0135, TryCatch #3 {all -> 0x0135, blocks: (B:36:0x010e, B:42:0x0127, B:48:0x0132, B:45:0x012c, B:39:0x0121), top: B:91:0x010e, outer: #4 }] */
    /* JADX WARN: Code duplicated, block: B:41:0x0126  */
    /* JADX WARN: Code duplicated, block: B:44:0x012b  */
    /* JADX WARN: Code duplicated, block: B:45:0x012c A[Catch: all -> 0x0135, TryCatch #3 {all -> 0x0135, blocks: (B:36:0x010e, B:42:0x0127, B:48:0x0132, B:45:0x012c, B:39:0x0121), top: B:91:0x010e, outer: #4 }] */
    /* JADX WARN: Code duplicated, block: B:47:0x0131  */
    /* JADX WARN: Code duplicated, block: B:55:0x014c  */
    /* JADX WARN: Code duplicated, block: B:56:0x014d A[Catch: all -> 0x0161, TryCatch #0 {all -> 0x0161, blocks: (B:53:0x013a, B:59:0x0153, B:62:0x0158, B:56:0x014d), top: B:85:0x013a, outer: #4 }] */
    /* JADX WARN: Code duplicated, block: B:58:0x0152  */
    /* JADX WARN: Code duplicated, block: B:61:0x0157  */
    /* JADX WARN: Code duplicated, block: B:62:0x0158 A[Catch: all -> 0x0161, TRY_LEAVE, TryCatch #0 {all -> 0x0161, blocks: (B:53:0x013a, B:59:0x0153, B:62:0x0158, B:56:0x014d), top: B:85:0x013a, outer: #4 }] */
    /* JADX WARN: Code duplicated, block: B:67:0x0163 A[PHI: r4
  0x0163: PHI (r4v3 io.appmetrica.analytics.impl.t9) = (r4v2 io.appmetrica.analytics.impl.t9), (r4v4 io.appmetrica.analytics.impl.t9), (r4v5 io.appmetrica.analytics.impl.t9) binds: [B:66:0x0161, B:58:0x0152, B:63:0x015b] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:71:0x0172  */
    /* JADX WARN: Code duplicated, block: B:78:0x018f  */
    /* JADX WARN: Code duplicated, block: B:79:0x0192 A[Catch: all -> 0x01ab, TryCatch #4 {all -> 0x01ab, blocks: (B:3:0x0004, B:9:0x002c, B:16:0x0038, B:22:0x00ec, B:28:0x00f7, B:35:0x0104, B:72:0x0173, B:76:0x0183, B:80:0x0198, B:79:0x0192, B:66:0x0161, B:50:0x0135, B:31:0x00fc, B:25:0x00f1, B:19:0x00e4, B:12:0x0031, B:6:0x0026, B:53:0x013a, B:59:0x0153, B:62:0x0158, B:56:0x014d, B:36:0x010e, B:42:0x0127, B:48:0x0132, B:45:0x012c, B:39:0x0121), top: B:93:0x0004, inners: #0, #3 }] */
    public final C2293m7 a(Cursor cursor) {
        int i;
        Integer numValueOf;
        N8 n8;
        EnumC2245ka enumC2245ka;
        EnumC2469t9 enumC2469t9;
        int i2;
        int columnIndex;
        byte[] blob;
        int i3;
        Integer numValueOf2;
        int i4;
        Integer numValueOf3;
        try {
            Long lValueOf = Long.valueOf(cursor.getLong(cursor.getColumnIndexOrThrow(this.i)));
            int i5 = cursor.getInt(cursor.getColumnIndexOrThrow(this.k));
            Integer numValueOf4 = Integer.valueOf(i5);
            EnumC1998al enumC1998al = EnumC1998al.FOREGROUND;
            try {
                try {
                    try {
                        try {
                            if (numValueOf4 != null) {
                                numValueOf4.getClass();
                                if (i5 == 0) {
                                }
                                Long lValueOf2 = Long.valueOf(cursor.getLong(cursor.getColumnIndexOrThrow(this.b)));
                                EnumC2195ib enumC2195ibA = EnumC2195ib.a(cursor.getInt(cursor.getColumnIndexOrThrow(this.g)));
                                Long lValueOf3 = Long.valueOf(cursor.getLong(cursor.getColumnIndexOrThrow(this.c)));
                                Long lValueOf4 = Long.valueOf(cursor.getLong(cursor.getColumnIndexOrThrow(this.h)));
                                Integer numValueOf5 = Integer.valueOf(cursor.getInt(cursor.getColumnIndexOrThrow(this.o)));
                                String string = cursor.getString(cursor.getColumnIndexOrThrow(this.e));
                                String string2 = cursor.getString(cursor.getColumnIndexOrThrow(this.f));
                                Long lValueOf5 = Long.valueOf(cursor.getLong(cursor.getColumnIndexOrThrow(this.d)));
                                String string3 = cursor.getString(cursor.getColumnIndexOrThrow(this.j));
                                String string4 = cursor.getString(cursor.getColumnIndexOrThrow(this.l));
                                Long lValueOf6 = Long.valueOf(cursor.getLong(cursor.getColumnIndexOrThrow(this.m)));
                                Integer numValueOf6 = Integer.valueOf(cursor.getInt(cursor.getColumnIndexOrThrow(this.n)));
                                i = cursor.getInt(cursor.getColumnIndexOrThrow(this.p));
                                numValueOf = Integer.valueOf(i);
                                n8 = N8.NONE;
                                if (numValueOf != null) {
                                    numValueOf.getClass();
                                    N8 n9 = i == 0 ? n8 : null;
                                    String string5 = cursor.getString(cursor.getColumnIndexOrThrow(this.q));
                                    i4 = cursor.getInt(cursor.getColumnIndexOrThrow(this.r));
                                    numValueOf3 = Integer.valueOf(i4);
                                    EnumC2245ka enumC2245ka2 = EnumC2245ka.FIRST_OCCURRENCE;
                                    if (numValueOf3 == null) {
                                        numValueOf3.getClass();
                                        if (i4 == 1) {
                                        }
                                        EnumC2245ka enumC2245ka3 = enumC2245ka2;
                                        i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                        numValueOf2 = Integer.valueOf(i3);
                                        enumC2469t9 = EnumC2469t9.NATIVE;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 0) {
                                            }
                                            boolean z = cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1;
                                            Boolean boolValueOf = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf7 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string5, enumC2245ka3, enumC2469t9, boolValueOf, numValueOf7, blob));
                                        }
                                        enumC2469t9 = EnumC2469t9.JS;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            EnumC2469t9 enumC2469t10 = i3 == 1 ? enumC2469t9 : null;
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf2 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf8 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string5, enumC2245ka3, enumC2469t10, boolValueOf2, numValueOf8, blob));
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf3 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf9 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string5, enumC2245ka3, enumC2469t10, boolValueOf3, numValueOf9, blob));
                                    }
                                    enumC2245ka2 = EnumC2245ka.NON_FIRST_OCCURENCE;
                                    if (numValueOf3 == null) {
                                        numValueOf3.getClass();
                                        if (i4 == 2) {
                                            EnumC2245ka enumC2245ka4 = enumC2245ka2;
                                            i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                            numValueOf2 = Integer.valueOf(i3);
                                            enumC2469t9 = EnumC2469t9.NATIVE;
                                            if (numValueOf2 == null) {
                                                numValueOf2.getClass();
                                                if (i3 == 0) {
                                                }
                                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                                }
                                                Boolean boolValueOf4 = Boolean.valueOf(z);
                                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                                Integer numValueOf10 = Integer.valueOf(i2);
                                                columnIndex = cursor.getColumnIndex(this.v);
                                                if (columnIndex < 0) {
                                                    blob = null;
                                                } else {
                                                    blob = cursor.getBlob(columnIndex);
                                                }
                                                return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string5, enumC2245ka4, enumC2469t10, boolValueOf4, numValueOf10, blob));
                                            }
                                            enumC2469t9 = EnumC2469t9.JS;
                                            if (numValueOf2 == null) {
                                                numValueOf2.getClass();
                                                if (i3 == 1) {
                                                }
                                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                                }
                                                Boolean boolValueOf5 = Boolean.valueOf(z);
                                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                                Integer numValueOf11 = Integer.valueOf(i2);
                                                columnIndex = cursor.getColumnIndex(this.v);
                                                if (columnIndex < 0) {
                                                    blob = null;
                                                } else {
                                                    blob = cursor.getBlob(columnIndex);
                                                }
                                                return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string5, enumC2245ka4, enumC2469t10, boolValueOf5, numValueOf11, blob));
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf6 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf12 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string5, enumC2245ka4, enumC2469t10, boolValueOf6, numValueOf12, blob));
                                        }
                                    }
                                    enumC2245ka = EnumC2245ka.UNKNOWN;
                                    enumC2245ka2 = enumC2245ka;
                                    EnumC2245ka enumC2245ka5 = enumC2245ka2;
                                    i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                    numValueOf2 = Integer.valueOf(i3);
                                    enumC2469t9 = EnumC2469t9.NATIVE;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 0) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf7 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf13 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string5, enumC2245ka5, enumC2469t10, boolValueOf7, numValueOf13, blob));
                                    }
                                    enumC2469t9 = EnumC2469t9.JS;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 1) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf8 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf14 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string5, enumC2245ka5, enumC2469t10, boolValueOf8, numValueOf14, blob));
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf9 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf15 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string5, enumC2245ka5, enumC2469t10, boolValueOf9, numValueOf15, blob));
                                }
                                n8 = N8.AES_VALUE_ENCRYPTION;
                                if (numValueOf != null) {
                                    numValueOf.getClass();
                                    if (i == 2) {
                                    }
                                    String string6 = cursor.getString(cursor.getColumnIndexOrThrow(this.q));
                                    i4 = cursor.getInt(cursor.getColumnIndexOrThrow(this.r));
                                    numValueOf3 = Integer.valueOf(i4);
                                    EnumC2245ka enumC2245ka6 = EnumC2245ka.FIRST_OCCURRENCE;
                                    if (numValueOf3 == null) {
                                        numValueOf3.getClass();
                                        if (i4 == 1) {
                                        }
                                        EnumC2245ka enumC2245ka7 = enumC2245ka6;
                                        i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                        numValueOf2 = Integer.valueOf(i3);
                                        enumC2469t9 = EnumC2469t9.NATIVE;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 0) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf10 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf16 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string6, enumC2245ka7, enumC2469t10, boolValueOf10, numValueOf16, blob));
                                        }
                                        enumC2469t9 = EnumC2469t9.JS;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 1) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf11 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf17 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string6, enumC2245ka7, enumC2469t10, boolValueOf11, numValueOf17, blob));
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf12 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf18 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string6, enumC2245ka7, enumC2469t10, boolValueOf12, numValueOf18, blob));
                                    }
                                    enumC2245ka6 = EnumC2245ka.NON_FIRST_OCCURENCE;
                                    if (numValueOf3 == null) {
                                        numValueOf3.getClass();
                                        if (i4 == 2) {
                                            EnumC2245ka enumC2245ka8 = enumC2245ka6;
                                            i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                            numValueOf2 = Integer.valueOf(i3);
                                            enumC2469t9 = EnumC2469t9.NATIVE;
                                            if (numValueOf2 == null) {
                                                numValueOf2.getClass();
                                                if (i3 == 0) {
                                                }
                                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                                }
                                                Boolean boolValueOf13 = Boolean.valueOf(z);
                                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                                Integer numValueOf19 = Integer.valueOf(i2);
                                                columnIndex = cursor.getColumnIndex(this.v);
                                                if (columnIndex < 0) {
                                                    blob = null;
                                                } else {
                                                    blob = cursor.getBlob(columnIndex);
                                                }
                                                return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string6, enumC2245ka8, enumC2469t10, boolValueOf13, numValueOf19, blob));
                                            }
                                            enumC2469t9 = EnumC2469t9.JS;
                                            if (numValueOf2 == null) {
                                                numValueOf2.getClass();
                                                if (i3 == 1) {
                                                }
                                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                                }
                                                Boolean boolValueOf14 = Boolean.valueOf(z);
                                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                                Integer numValueOf110 = Integer.valueOf(i2);
                                                columnIndex = cursor.getColumnIndex(this.v);
                                                if (columnIndex < 0) {
                                                    blob = null;
                                                } else {
                                                    blob = cursor.getBlob(columnIndex);
                                                }
                                                return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string6, enumC2245ka8, enumC2469t10, boolValueOf14, numValueOf110, blob));
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf15 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf111 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string6, enumC2245ka8, enumC2469t10, boolValueOf15, numValueOf111, blob));
                                        }
                                    }
                                    enumC2245ka = EnumC2245ka.UNKNOWN;
                                    enumC2245ka6 = enumC2245ka;
                                    EnumC2245ka enumC2245ka9 = enumC2245ka6;
                                    i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                    numValueOf2 = Integer.valueOf(i3);
                                    enumC2469t9 = EnumC2469t9.NATIVE;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 0) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf16 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf112 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string6, enumC2245ka9, enumC2469t10, boolValueOf16, numValueOf112, blob));
                                    }
                                    enumC2469t9 = EnumC2469t9.JS;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 1) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf17 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf113 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string6, enumC2245ka9, enumC2469t10, boolValueOf17, numValueOf113, blob));
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf18 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf114 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string6, enumC2245ka9, enumC2469t10, boolValueOf18, numValueOf114, blob));
                                }
                                n8 = N8.EXTERNALLY_ENCRYPTED_EVENT_CRYPTER;
                                if (numValueOf != null) {
                                    numValueOf.getClass();
                                    if (i == 1) {
                                    }
                                    String string7 = cursor.getString(cursor.getColumnIndexOrThrow(this.q));
                                    i4 = cursor.getInt(cursor.getColumnIndexOrThrow(this.r));
                                    numValueOf3 = Integer.valueOf(i4);
                                    EnumC2245ka enumC2245ka10 = EnumC2245ka.FIRST_OCCURRENCE;
                                    if (numValueOf3 == null) {
                                        numValueOf3.getClass();
                                        if (i4 == 1) {
                                        }
                                        EnumC2245ka enumC2245ka11 = enumC2245ka10;
                                        i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                        numValueOf2 = Integer.valueOf(i3);
                                        enumC2469t9 = EnumC2469t9.NATIVE;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 0) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf19 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf115 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string7, enumC2245ka11, enumC2469t10, boolValueOf19, numValueOf115, blob));
                                        }
                                        enumC2469t9 = EnumC2469t9.JS;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 1) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf110 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf116 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string7, enumC2245ka11, enumC2469t10, boolValueOf110, numValueOf116, blob));
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf111 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf117 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string7, enumC2245ka11, enumC2469t10, boolValueOf111, numValueOf117, blob));
                                    }
                                    enumC2245ka10 = EnumC2245ka.NON_FIRST_OCCURENCE;
                                    if (numValueOf3 == null) {
                                        numValueOf3.getClass();
                                        if (i4 == 2) {
                                            EnumC2245ka enumC2245ka12 = enumC2245ka10;
                                            i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                            numValueOf2 = Integer.valueOf(i3);
                                            enumC2469t9 = EnumC2469t9.NATIVE;
                                            if (numValueOf2 == null) {
                                                numValueOf2.getClass();
                                                if (i3 == 0) {
                                                }
                                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                                }
                                                Boolean boolValueOf112 = Boolean.valueOf(z);
                                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                                Integer numValueOf118 = Integer.valueOf(i2);
                                                columnIndex = cursor.getColumnIndex(this.v);
                                                if (columnIndex < 0) {
                                                    blob = null;
                                                } else {
                                                    blob = cursor.getBlob(columnIndex);
                                                }
                                                return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string7, enumC2245ka12, enumC2469t10, boolValueOf112, numValueOf118, blob));
                                            }
                                            enumC2469t9 = EnumC2469t9.JS;
                                            if (numValueOf2 == null) {
                                                numValueOf2.getClass();
                                                if (i3 == 1) {
                                                }
                                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                                }
                                                Boolean boolValueOf113 = Boolean.valueOf(z);
                                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                                Integer numValueOf119 = Integer.valueOf(i2);
                                                columnIndex = cursor.getColumnIndex(this.v);
                                                if (columnIndex < 0) {
                                                    blob = null;
                                                } else {
                                                    blob = cursor.getBlob(columnIndex);
                                                }
                                                return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string7, enumC2245ka12, enumC2469t10, boolValueOf113, numValueOf119, blob));
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf114 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf1110 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string7, enumC2245ka12, enumC2469t10, boolValueOf114, numValueOf1110, blob));
                                        }
                                    }
                                    enumC2245ka = EnumC2245ka.UNKNOWN;
                                    enumC2245ka10 = enumC2245ka;
                                    EnumC2245ka enumC2245ka13 = enumC2245ka10;
                                    i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                    numValueOf2 = Integer.valueOf(i3);
                                    enumC2469t9 = EnumC2469t9.NATIVE;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 0) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf115 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf1111 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string7, enumC2245ka13, enumC2469t10, boolValueOf115, numValueOf1111, blob));
                                    }
                                    enumC2469t9 = EnumC2469t9.JS;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 1) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf116 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf1112 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string7, enumC2245ka13, enumC2469t10, boolValueOf116, numValueOf1112, blob));
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf117 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf1113 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string7, enumC2245ka13, enumC2469t10, boolValueOf117, numValueOf1113, blob));
                                }
                                String string8 = cursor.getString(cursor.getColumnIndexOrThrow(this.q));
                                i4 = cursor.getInt(cursor.getColumnIndexOrThrow(this.r));
                                numValueOf3 = Integer.valueOf(i4);
                                EnumC2245ka enumC2245ka14 = EnumC2245ka.FIRST_OCCURRENCE;
                                if (numValueOf3 == null) {
                                    numValueOf3.getClass();
                                    if (i4 == 1) {
                                    }
                                    EnumC2245ka enumC2245ka15 = enumC2245ka14;
                                    i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                    numValueOf2 = Integer.valueOf(i3);
                                    enumC2469t9 = EnumC2469t9.NATIVE;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 0) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf118 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf1114 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string8, enumC2245ka15, enumC2469t10, boolValueOf118, numValueOf1114, blob));
                                    }
                                    enumC2469t9 = EnumC2469t9.JS;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 1) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf119 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf1115 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string8, enumC2245ka15, enumC2469t10, boolValueOf119, numValueOf1115, blob));
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf1110 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf1116 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string8, enumC2245ka15, enumC2469t10, boolValueOf1110, numValueOf1116, blob));
                                }
                                enumC2245ka14 = EnumC2245ka.NON_FIRST_OCCURENCE;
                                if (numValueOf3 == null) {
                                    numValueOf3.getClass();
                                    if (i4 == 2) {
                                        EnumC2245ka enumC2245ka16 = enumC2245ka14;
                                        i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                        numValueOf2 = Integer.valueOf(i3);
                                        enumC2469t9 = EnumC2469t9.NATIVE;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 0) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf1111 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf1117 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string8, enumC2245ka16, enumC2469t10, boolValueOf1111, numValueOf1117, blob));
                                        }
                                        enumC2469t9 = EnumC2469t9.JS;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 1) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf1112 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf1118 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string8, enumC2245ka16, enumC2469t10, boolValueOf1112, numValueOf1118, blob));
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf1113 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf1119 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string8, enumC2245ka16, enumC2469t10, boolValueOf1113, numValueOf1119, blob));
                                    }
                                }
                                enumC2245ka = EnumC2245ka.UNKNOWN;
                                enumC2245ka14 = enumC2245ka;
                                EnumC2245ka enumC2245ka17 = enumC2245ka14;
                                i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                numValueOf2 = Integer.valueOf(i3);
                                enumC2469t9 = EnumC2469t9.NATIVE;
                                if (numValueOf2 == null) {
                                    numValueOf2.getClass();
                                    if (i3 == 0) {
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf1114 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf11110 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string8, enumC2245ka17, enumC2469t10, boolValueOf1114, numValueOf11110, blob));
                                }
                                enumC2469t9 = EnumC2469t9.JS;
                                if (numValueOf2 == null) {
                                    numValueOf2.getClass();
                                    if (i3 == 1) {
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf1115 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf11111 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string8, enumC2245ka17, enumC2469t10, boolValueOf1115, numValueOf11111, blob));
                                }
                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                }
                                Boolean boolValueOf1116 = Boolean.valueOf(z);
                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                Integer numValueOf11112 = Integer.valueOf(i2);
                                columnIndex = cursor.getColumnIndex(this.v);
                                if (columnIndex < 0) {
                                    blob = null;
                                } else {
                                    blob = cursor.getBlob(columnIndex);
                                }
                                return new C2293m7(lValueOf, enumC1998al, lValueOf2, enumC2195ibA, lValueOf3, lValueOf4, new C2268l7(numValueOf5, string, string2, lValueOf5, null, string3, string4, lValueOf6, numValueOf6, null, null, n9, string8, enumC2245ka17, enumC2469t10, boolValueOf1116, numValueOf11112, blob));
                            }
                            if (numValueOf4 != null) {
                                numValueOf4.getClass();
                                if (i5 == 1) {
                                }
                                Long lValueOf7 = Long.valueOf(cursor.getLong(cursor.getColumnIndexOrThrow(this.b)));
                                EnumC2195ib enumC2195ibA2 = EnumC2195ib.a(cursor.getInt(cursor.getColumnIndexOrThrow(this.g)));
                                Long lValueOf8 = Long.valueOf(cursor.getLong(cursor.getColumnIndexOrThrow(this.c)));
                                Long lValueOf9 = Long.valueOf(cursor.getLong(cursor.getColumnIndexOrThrow(this.h)));
                                Integer numValueOf20 = Integer.valueOf(cursor.getInt(cursor.getColumnIndexOrThrow(this.o)));
                                String string9 = cursor.getString(cursor.getColumnIndexOrThrow(this.e));
                                String string10 = cursor.getString(cursor.getColumnIndexOrThrow(this.f));
                                Long lValueOf10 = Long.valueOf(cursor.getLong(cursor.getColumnIndexOrThrow(this.d)));
                                String string11 = cursor.getString(cursor.getColumnIndexOrThrow(this.j));
                                String string12 = cursor.getString(cursor.getColumnIndexOrThrow(this.l));
                                Long lValueOf11 = Long.valueOf(cursor.getLong(cursor.getColumnIndexOrThrow(this.m)));
                                Integer numValueOf21 = Integer.valueOf(cursor.getInt(cursor.getColumnIndexOrThrow(this.n)));
                                i = cursor.getInt(cursor.getColumnIndexOrThrow(this.p));
                                numValueOf = Integer.valueOf(i);
                                n8 = N8.NONE;
                                if (numValueOf != null) {
                                    numValueOf.getClass();
                                    if (i == 0) {
                                    }
                                    String string13 = cursor.getString(cursor.getColumnIndexOrThrow(this.q));
                                    i4 = cursor.getInt(cursor.getColumnIndexOrThrow(this.r));
                                    numValueOf3 = Integer.valueOf(i4);
                                    EnumC2245ka enumC2245ka18 = EnumC2245ka.FIRST_OCCURRENCE;
                                    if (numValueOf3 == null) {
                                        numValueOf3.getClass();
                                        if (i4 == 1) {
                                        }
                                        EnumC2245ka enumC2245ka19 = enumC2245ka18;
                                        i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                        numValueOf2 = Integer.valueOf(i3);
                                        enumC2469t9 = EnumC2469t9.NATIVE;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 0) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf1117 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf11113 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string13, enumC2245ka19, enumC2469t10, boolValueOf1117, numValueOf11113, blob));
                                        }
                                        enumC2469t9 = EnumC2469t9.JS;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 1) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf1118 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf11114 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string13, enumC2245ka19, enumC2469t10, boolValueOf1118, numValueOf11114, blob));
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf1119 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf11115 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string13, enumC2245ka19, enumC2469t10, boolValueOf1119, numValueOf11115, blob));
                                    }
                                    enumC2245ka18 = EnumC2245ka.NON_FIRST_OCCURENCE;
                                    if (numValueOf3 == null) {
                                        numValueOf3.getClass();
                                        if (i4 == 2) {
                                            EnumC2245ka enumC2245ka110 = enumC2245ka18;
                                            i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                            numValueOf2 = Integer.valueOf(i3);
                                            enumC2469t9 = EnumC2469t9.NATIVE;
                                            if (numValueOf2 == null) {
                                                numValueOf2.getClass();
                                                if (i3 == 0) {
                                                }
                                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                                }
                                                Boolean boolValueOf11110 = Boolean.valueOf(z);
                                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                                Integer numValueOf11116 = Integer.valueOf(i2);
                                                columnIndex = cursor.getColumnIndex(this.v);
                                                if (columnIndex < 0) {
                                                    blob = null;
                                                } else {
                                                    blob = cursor.getBlob(columnIndex);
                                                }
                                                return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string13, enumC2245ka110, enumC2469t10, boolValueOf11110, numValueOf11116, blob));
                                            }
                                            enumC2469t9 = EnumC2469t9.JS;
                                            if (numValueOf2 == null) {
                                                numValueOf2.getClass();
                                                if (i3 == 1) {
                                                }
                                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                                }
                                                Boolean boolValueOf11111 = Boolean.valueOf(z);
                                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                                Integer numValueOf11117 = Integer.valueOf(i2);
                                                columnIndex = cursor.getColumnIndex(this.v);
                                                if (columnIndex < 0) {
                                                    blob = null;
                                                } else {
                                                    blob = cursor.getBlob(columnIndex);
                                                }
                                                return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string13, enumC2245ka110, enumC2469t10, boolValueOf11111, numValueOf11117, blob));
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf11112 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf11118 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string13, enumC2245ka110, enumC2469t10, boolValueOf11112, numValueOf11118, blob));
                                        }
                                    }
                                    enumC2245ka = EnumC2245ka.UNKNOWN;
                                    enumC2245ka18 = enumC2245ka;
                                    EnumC2245ka enumC2245ka111 = enumC2245ka18;
                                    i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                    numValueOf2 = Integer.valueOf(i3);
                                    enumC2469t9 = EnumC2469t9.NATIVE;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 0) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf11113 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf11119 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string13, enumC2245ka111, enumC2469t10, boolValueOf11113, numValueOf11119, blob));
                                    }
                                    enumC2469t9 = EnumC2469t9.JS;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 1) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf11114 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf111110 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string13, enumC2245ka111, enumC2469t10, boolValueOf11114, numValueOf111110, blob));
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf11115 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf111111 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string13, enumC2245ka111, enumC2469t10, boolValueOf11115, numValueOf111111, blob));
                                }
                                n8 = N8.AES_VALUE_ENCRYPTION;
                                if (numValueOf != null) {
                                    numValueOf.getClass();
                                    if (i == 2) {
                                    }
                                    String string14 = cursor.getString(cursor.getColumnIndexOrThrow(this.q));
                                    i4 = cursor.getInt(cursor.getColumnIndexOrThrow(this.r));
                                    numValueOf3 = Integer.valueOf(i4);
                                    EnumC2245ka enumC2245ka112 = EnumC2245ka.FIRST_OCCURRENCE;
                                    if (numValueOf3 == null) {
                                        numValueOf3.getClass();
                                        if (i4 == 1) {
                                        }
                                        EnumC2245ka enumC2245ka113 = enumC2245ka112;
                                        i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                        numValueOf2 = Integer.valueOf(i3);
                                        enumC2469t9 = EnumC2469t9.NATIVE;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 0) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf11116 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf111112 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string14, enumC2245ka113, enumC2469t10, boolValueOf11116, numValueOf111112, blob));
                                        }
                                        enumC2469t9 = EnumC2469t9.JS;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 1) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf11117 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf111113 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string14, enumC2245ka113, enumC2469t10, boolValueOf11117, numValueOf111113, blob));
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf11118 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf111114 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string14, enumC2245ka113, enumC2469t10, boolValueOf11118, numValueOf111114, blob));
                                    }
                                    enumC2245ka112 = EnumC2245ka.NON_FIRST_OCCURENCE;
                                    if (numValueOf3 == null) {
                                        numValueOf3.getClass();
                                        if (i4 == 2) {
                                            EnumC2245ka enumC2245ka114 = enumC2245ka112;
                                            i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                            numValueOf2 = Integer.valueOf(i3);
                                            enumC2469t9 = EnumC2469t9.NATIVE;
                                            if (numValueOf2 == null) {
                                                numValueOf2.getClass();
                                                if (i3 == 0) {
                                                }
                                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                                }
                                                Boolean boolValueOf11119 = Boolean.valueOf(z);
                                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                                Integer numValueOf111115 = Integer.valueOf(i2);
                                                columnIndex = cursor.getColumnIndex(this.v);
                                                if (columnIndex < 0) {
                                                    blob = null;
                                                } else {
                                                    blob = cursor.getBlob(columnIndex);
                                                }
                                                return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string14, enumC2245ka114, enumC2469t10, boolValueOf11119, numValueOf111115, blob));
                                            }
                                            enumC2469t9 = EnumC2469t9.JS;
                                            if (numValueOf2 == null) {
                                                numValueOf2.getClass();
                                                if (i3 == 1) {
                                                }
                                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                                }
                                                Boolean boolValueOf111110 = Boolean.valueOf(z);
                                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                                Integer numValueOf111116 = Integer.valueOf(i2);
                                                columnIndex = cursor.getColumnIndex(this.v);
                                                if (columnIndex < 0) {
                                                    blob = null;
                                                } else {
                                                    blob = cursor.getBlob(columnIndex);
                                                }
                                                return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string14, enumC2245ka114, enumC2469t10, boolValueOf111110, numValueOf111116, blob));
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf111111 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf111117 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string14, enumC2245ka114, enumC2469t10, boolValueOf111111, numValueOf111117, blob));
                                        }
                                    }
                                    enumC2245ka = EnumC2245ka.UNKNOWN;
                                    enumC2245ka112 = enumC2245ka;
                                    EnumC2245ka enumC2245ka115 = enumC2245ka112;
                                    i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                    numValueOf2 = Integer.valueOf(i3);
                                    enumC2469t9 = EnumC2469t9.NATIVE;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 0) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf111112 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf111118 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string14, enumC2245ka115, enumC2469t10, boolValueOf111112, numValueOf111118, blob));
                                    }
                                    enumC2469t9 = EnumC2469t9.JS;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 1) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf111113 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf111119 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string14, enumC2245ka115, enumC2469t10, boolValueOf111113, numValueOf111119, blob));
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf111114 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf1111110 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string14, enumC2245ka115, enumC2469t10, boolValueOf111114, numValueOf1111110, blob));
                                }
                                n8 = N8.EXTERNALLY_ENCRYPTED_EVENT_CRYPTER;
                                if (numValueOf != null) {
                                    numValueOf.getClass();
                                    if (i == 1) {
                                    }
                                    String string15 = cursor.getString(cursor.getColumnIndexOrThrow(this.q));
                                    i4 = cursor.getInt(cursor.getColumnIndexOrThrow(this.r));
                                    numValueOf3 = Integer.valueOf(i4);
                                    EnumC2245ka enumC2245ka116 = EnumC2245ka.FIRST_OCCURRENCE;
                                    if (numValueOf3 == null) {
                                        numValueOf3.getClass();
                                        if (i4 == 1) {
                                        }
                                        EnumC2245ka enumC2245ka117 = enumC2245ka116;
                                        i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                        numValueOf2 = Integer.valueOf(i3);
                                        enumC2469t9 = EnumC2469t9.NATIVE;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 0) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf111115 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf1111111 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string15, enumC2245ka117, enumC2469t10, boolValueOf111115, numValueOf1111111, blob));
                                        }
                                        enumC2469t9 = EnumC2469t9.JS;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 1) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf111116 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf1111112 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string15, enumC2245ka117, enumC2469t10, boolValueOf111116, numValueOf1111112, blob));
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf111117 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf1111113 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string15, enumC2245ka117, enumC2469t10, boolValueOf111117, numValueOf1111113, blob));
                                    }
                                    enumC2245ka116 = EnumC2245ka.NON_FIRST_OCCURENCE;
                                    if (numValueOf3 == null) {
                                        numValueOf3.getClass();
                                        if (i4 == 2) {
                                            EnumC2245ka enumC2245ka118 = enumC2245ka116;
                                            i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                            numValueOf2 = Integer.valueOf(i3);
                                            enumC2469t9 = EnumC2469t9.NATIVE;
                                            if (numValueOf2 == null) {
                                                numValueOf2.getClass();
                                                if (i3 == 0) {
                                                }
                                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                                }
                                                Boolean boolValueOf111118 = Boolean.valueOf(z);
                                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                                Integer numValueOf1111114 = Integer.valueOf(i2);
                                                columnIndex = cursor.getColumnIndex(this.v);
                                                if (columnIndex < 0) {
                                                    blob = null;
                                                } else {
                                                    blob = cursor.getBlob(columnIndex);
                                                }
                                                return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string15, enumC2245ka118, enumC2469t10, boolValueOf111118, numValueOf1111114, blob));
                                            }
                                            enumC2469t9 = EnumC2469t9.JS;
                                            if (numValueOf2 == null) {
                                                numValueOf2.getClass();
                                                if (i3 == 1) {
                                                }
                                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                                }
                                                Boolean boolValueOf111119 = Boolean.valueOf(z);
                                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                                Integer numValueOf1111115 = Integer.valueOf(i2);
                                                columnIndex = cursor.getColumnIndex(this.v);
                                                if (columnIndex < 0) {
                                                    blob = null;
                                                } else {
                                                    blob = cursor.getBlob(columnIndex);
                                                }
                                                return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string15, enumC2245ka118, enumC2469t10, boolValueOf111119, numValueOf1111115, blob));
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf1111110 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf1111116 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string15, enumC2245ka118, enumC2469t10, boolValueOf1111110, numValueOf1111116, blob));
                                        }
                                    }
                                    enumC2245ka = EnumC2245ka.UNKNOWN;
                                    enumC2245ka116 = enumC2245ka;
                                    EnumC2245ka enumC2245ka119 = enumC2245ka116;
                                    i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                    numValueOf2 = Integer.valueOf(i3);
                                    enumC2469t9 = EnumC2469t9.NATIVE;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 0) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf1111111 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf1111117 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string15, enumC2245ka119, enumC2469t10, boolValueOf1111111, numValueOf1111117, blob));
                                    }
                                    enumC2469t9 = EnumC2469t9.JS;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 1) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf1111112 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf1111118 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string15, enumC2245ka119, enumC2469t10, boolValueOf1111112, numValueOf1111118, blob));
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf1111113 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf1111119 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string15, enumC2245ka119, enumC2469t10, boolValueOf1111113, numValueOf1111119, blob));
                                }
                                String string16 = cursor.getString(cursor.getColumnIndexOrThrow(this.q));
                                i4 = cursor.getInt(cursor.getColumnIndexOrThrow(this.r));
                                numValueOf3 = Integer.valueOf(i4);
                                EnumC2245ka enumC2245ka1110 = EnumC2245ka.FIRST_OCCURRENCE;
                                if (numValueOf3 == null) {
                                    numValueOf3.getClass();
                                    if (i4 == 1) {
                                    }
                                    EnumC2245ka enumC2245ka1111 = enumC2245ka1110;
                                    i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                    numValueOf2 = Integer.valueOf(i3);
                                    enumC2469t9 = EnumC2469t9.NATIVE;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 0) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf1111114 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf11111110 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string16, enumC2245ka1111, enumC2469t10, boolValueOf1111114, numValueOf11111110, blob));
                                    }
                                    enumC2469t9 = EnumC2469t9.JS;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 1) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf1111115 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf11111111 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string16, enumC2245ka1111, enumC2469t10, boolValueOf1111115, numValueOf11111111, blob));
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf1111116 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf11111112 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string16, enumC2245ka1111, enumC2469t10, boolValueOf1111116, numValueOf11111112, blob));
                                }
                                enumC2245ka1110 = EnumC2245ka.NON_FIRST_OCCURENCE;
                                if (numValueOf3 == null) {
                                    numValueOf3.getClass();
                                    if (i4 == 2) {
                                        EnumC2245ka enumC2245ka1112 = enumC2245ka1110;
                                        i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                        numValueOf2 = Integer.valueOf(i3);
                                        enumC2469t9 = EnumC2469t9.NATIVE;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 0) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf1111117 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf11111113 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string16, enumC2245ka1112, enumC2469t10, boolValueOf1111117, numValueOf11111113, blob));
                                        }
                                        enumC2469t9 = EnumC2469t9.JS;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 1) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf1111118 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf11111114 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string16, enumC2245ka1112, enumC2469t10, boolValueOf1111118, numValueOf11111114, blob));
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf1111119 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf11111115 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string16, enumC2245ka1112, enumC2469t10, boolValueOf1111119, numValueOf11111115, blob));
                                    }
                                }
                                enumC2245ka = EnumC2245ka.UNKNOWN;
                                enumC2245ka1110 = enumC2245ka;
                                EnumC2245ka enumC2245ka1113 = enumC2245ka1110;
                                i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                numValueOf2 = Integer.valueOf(i3);
                                enumC2469t9 = EnumC2469t9.NATIVE;
                                if (numValueOf2 == null) {
                                    numValueOf2.getClass();
                                    if (i3 == 0) {
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf11111110 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf11111116 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string16, enumC2245ka1113, enumC2469t10, boolValueOf11111110, numValueOf11111116, blob));
                                }
                                enumC2469t9 = EnumC2469t9.JS;
                                if (numValueOf2 == null) {
                                    numValueOf2.getClass();
                                    if (i3 == 1) {
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf11111111 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf11111117 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string16, enumC2245ka1113, enumC2469t10, boolValueOf11111111, numValueOf11111117, blob));
                                }
                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                }
                                Boolean boolValueOf11111112 = Boolean.valueOf(z);
                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                Integer numValueOf11111118 = Integer.valueOf(i2);
                                columnIndex = cursor.getColumnIndex(this.v);
                                if (columnIndex < 0) {
                                    blob = null;
                                } else {
                                    blob = cursor.getBlob(columnIndex);
                                }
                                return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string16, enumC2245ka1113, enumC2469t10, boolValueOf11111112, numValueOf11111118, blob));
                            }
                            if (numValueOf != null) {
                                numValueOf.getClass();
                                if (i == 0) {
                                }
                                String string17 = cursor.getString(cursor.getColumnIndexOrThrow(this.q));
                                i4 = cursor.getInt(cursor.getColumnIndexOrThrow(this.r));
                                numValueOf3 = Integer.valueOf(i4);
                                EnumC2245ka enumC2245ka1114 = EnumC2245ka.FIRST_OCCURRENCE;
                                if (numValueOf3 == null) {
                                    numValueOf3.getClass();
                                    if (i4 == 1) {
                                    }
                                    EnumC2245ka enumC2245ka1115 = enumC2245ka1114;
                                    i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                    numValueOf2 = Integer.valueOf(i3);
                                    enumC2469t9 = EnumC2469t9.NATIVE;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 0) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf11111113 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf11111119 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string17, enumC2245ka1115, enumC2469t10, boolValueOf11111113, numValueOf11111119, blob));
                                    }
                                    enumC2469t9 = EnumC2469t9.JS;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 1) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf11111114 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf111111110 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string17, enumC2245ka1115, enumC2469t10, boolValueOf11111114, numValueOf111111110, blob));
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf11111115 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf111111111 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string17, enumC2245ka1115, enumC2469t10, boolValueOf11111115, numValueOf111111111, blob));
                                }
                                enumC2245ka1114 = EnumC2245ka.NON_FIRST_OCCURENCE;
                                if (numValueOf3 == null) {
                                    numValueOf3.getClass();
                                    if (i4 == 2) {
                                        EnumC2245ka enumC2245ka1116 = enumC2245ka1114;
                                        i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                        numValueOf2 = Integer.valueOf(i3);
                                        enumC2469t9 = EnumC2469t9.NATIVE;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 0) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf11111116 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf111111112 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string17, enumC2245ka1116, enumC2469t10, boolValueOf11111116, numValueOf111111112, blob));
                                        }
                                        enumC2469t9 = EnumC2469t9.JS;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 1) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf11111117 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf111111113 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string17, enumC2245ka1116, enumC2469t10, boolValueOf11111117, numValueOf111111113, blob));
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf11111118 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf111111114 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string17, enumC2245ka1116, enumC2469t10, boolValueOf11111118, numValueOf111111114, blob));
                                    }
                                }
                                enumC2245ka = EnumC2245ka.UNKNOWN;
                                enumC2245ka1114 = enumC2245ka;
                                EnumC2245ka enumC2245ka1117 = enumC2245ka1114;
                                i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                numValueOf2 = Integer.valueOf(i3);
                                enumC2469t9 = EnumC2469t9.NATIVE;
                                if (numValueOf2 == null) {
                                    numValueOf2.getClass();
                                    if (i3 == 0) {
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf11111119 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf111111115 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string17, enumC2245ka1117, enumC2469t10, boolValueOf11111119, numValueOf111111115, blob));
                                }
                                enumC2469t9 = EnumC2469t9.JS;
                                if (numValueOf2 == null) {
                                    numValueOf2.getClass();
                                    if (i3 == 1) {
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf111111110 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf111111116 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string17, enumC2245ka1117, enumC2469t10, boolValueOf111111110, numValueOf111111116, blob));
                                }
                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                }
                                Boolean boolValueOf111111111 = Boolean.valueOf(z);
                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                Integer numValueOf111111117 = Integer.valueOf(i2);
                                columnIndex = cursor.getColumnIndex(this.v);
                                if (columnIndex < 0) {
                                    blob = null;
                                } else {
                                    blob = cursor.getBlob(columnIndex);
                                }
                                return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string17, enumC2245ka1117, enumC2469t10, boolValueOf111111111, numValueOf111111117, blob));
                            }
                            if (numValueOf != null) {
                                numValueOf.getClass();
                                if (i == 2) {
                                }
                                String string18 = cursor.getString(cursor.getColumnIndexOrThrow(this.q));
                                i4 = cursor.getInt(cursor.getColumnIndexOrThrow(this.r));
                                numValueOf3 = Integer.valueOf(i4);
                                EnumC2245ka enumC2245ka1118 = EnumC2245ka.FIRST_OCCURRENCE;
                                if (numValueOf3 == null) {
                                    numValueOf3.getClass();
                                    if (i4 == 1) {
                                    }
                                    EnumC2245ka enumC2245ka1119 = enumC2245ka1118;
                                    i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                    numValueOf2 = Integer.valueOf(i3);
                                    enumC2469t9 = EnumC2469t9.NATIVE;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 0) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf111111112 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf111111118 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string18, enumC2245ka1119, enumC2469t10, boolValueOf111111112, numValueOf111111118, blob));
                                    }
                                    enumC2469t9 = EnumC2469t9.JS;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 1) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf111111113 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf111111119 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string18, enumC2245ka1119, enumC2469t10, boolValueOf111111113, numValueOf111111119, blob));
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf111111114 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf1111111110 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string18, enumC2245ka1119, enumC2469t10, boolValueOf111111114, numValueOf1111111110, blob));
                                }
                                enumC2245ka1118 = EnumC2245ka.NON_FIRST_OCCURENCE;
                                if (numValueOf3 == null) {
                                    numValueOf3.getClass();
                                    if (i4 == 2) {
                                        EnumC2245ka enumC2245ka11110 = enumC2245ka1118;
                                        i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                        numValueOf2 = Integer.valueOf(i3);
                                        enumC2469t9 = EnumC2469t9.NATIVE;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 0) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf111111115 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf1111111111 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string18, enumC2245ka11110, enumC2469t10, boolValueOf111111115, numValueOf1111111111, blob));
                                        }
                                        enumC2469t9 = EnumC2469t9.JS;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 1) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf111111116 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf1111111112 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string18, enumC2245ka11110, enumC2469t10, boolValueOf111111116, numValueOf1111111112, blob));
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf111111117 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf1111111113 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string18, enumC2245ka11110, enumC2469t10, boolValueOf111111117, numValueOf1111111113, blob));
                                    }
                                }
                                enumC2245ka = EnumC2245ka.UNKNOWN;
                                enumC2245ka1118 = enumC2245ka;
                                EnumC2245ka enumC2245ka11111 = enumC2245ka1118;
                                i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                numValueOf2 = Integer.valueOf(i3);
                                enumC2469t9 = EnumC2469t9.NATIVE;
                                if (numValueOf2 == null) {
                                    numValueOf2.getClass();
                                    if (i3 == 0) {
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf111111118 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf1111111114 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string18, enumC2245ka11111, enumC2469t10, boolValueOf111111118, numValueOf1111111114, blob));
                                }
                                enumC2469t9 = EnumC2469t9.JS;
                                if (numValueOf2 == null) {
                                    numValueOf2.getClass();
                                    if (i3 == 1) {
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf111111119 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf1111111115 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string18, enumC2245ka11111, enumC2469t10, boolValueOf111111119, numValueOf1111111115, blob));
                                }
                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                }
                                Boolean boolValueOf1111111110 = Boolean.valueOf(z);
                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                Integer numValueOf1111111116 = Integer.valueOf(i2);
                                columnIndex = cursor.getColumnIndex(this.v);
                                if (columnIndex < 0) {
                                    blob = null;
                                } else {
                                    blob = cursor.getBlob(columnIndex);
                                }
                                return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string18, enumC2245ka11111, enumC2469t10, boolValueOf1111111110, numValueOf1111111116, blob));
                            }
                            if (numValueOf != null) {
                                numValueOf.getClass();
                                if (i == 1) {
                                }
                                String string19 = cursor.getString(cursor.getColumnIndexOrThrow(this.q));
                                i4 = cursor.getInt(cursor.getColumnIndexOrThrow(this.r));
                                numValueOf3 = Integer.valueOf(i4);
                                EnumC2245ka enumC2245ka11112 = EnumC2245ka.FIRST_OCCURRENCE;
                                if (numValueOf3 == null) {
                                    numValueOf3.getClass();
                                    if (i4 == 1) {
                                    }
                                    EnumC2245ka enumC2245ka11113 = enumC2245ka11112;
                                    i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                    numValueOf2 = Integer.valueOf(i3);
                                    enumC2469t9 = EnumC2469t9.NATIVE;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 0) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf1111111111 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf1111111117 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11113, enumC2469t10, boolValueOf1111111111, numValueOf1111111117, blob));
                                    }
                                    enumC2469t9 = EnumC2469t9.JS;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 1) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf1111111112 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf1111111118 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11113, enumC2469t10, boolValueOf1111111112, numValueOf1111111118, blob));
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf1111111113 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf1111111119 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11113, enumC2469t10, boolValueOf1111111113, numValueOf1111111119, blob));
                                }
                                enumC2245ka11112 = EnumC2245ka.NON_FIRST_OCCURENCE;
                                if (numValueOf3 == null) {
                                    numValueOf3.getClass();
                                    if (i4 == 2) {
                                        EnumC2245ka enumC2245ka11114 = enumC2245ka11112;
                                        i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                        numValueOf2 = Integer.valueOf(i3);
                                        enumC2469t9 = EnumC2469t9.NATIVE;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 0) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf1111111114 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf11111111110 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11114, enumC2469t10, boolValueOf1111111114, numValueOf11111111110, blob));
                                        }
                                        enumC2469t9 = EnumC2469t9.JS;
                                        if (numValueOf2 == null) {
                                            numValueOf2.getClass();
                                            if (i3 == 1) {
                                            }
                                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                            }
                                            Boolean boolValueOf1111111115 = Boolean.valueOf(z);
                                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                            Integer numValueOf11111111111 = Integer.valueOf(i2);
                                            columnIndex = cursor.getColumnIndex(this.v);
                                            if (columnIndex < 0) {
                                                blob = null;
                                            } else {
                                                blob = cursor.getBlob(columnIndex);
                                            }
                                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11114, enumC2469t10, boolValueOf1111111115, numValueOf11111111111, blob));
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf1111111116 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf11111111112 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11114, enumC2469t10, boolValueOf1111111116, numValueOf11111111112, blob));
                                    }
                                }
                                enumC2245ka = EnumC2245ka.UNKNOWN;
                                enumC2245ka11112 = enumC2245ka;
                                EnumC2245ka enumC2245ka11115 = enumC2245ka11112;
                                i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                numValueOf2 = Integer.valueOf(i3);
                                enumC2469t9 = EnumC2469t9.NATIVE;
                                if (numValueOf2 == null) {
                                    numValueOf2.getClass();
                                    if (i3 == 0) {
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf1111111117 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf11111111113 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11115, enumC2469t10, boolValueOf1111111117, numValueOf11111111113, blob));
                                }
                                enumC2469t9 = EnumC2469t9.JS;
                                if (numValueOf2 == null) {
                                    numValueOf2.getClass();
                                    if (i3 == 1) {
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf1111111118 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf11111111114 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11115, enumC2469t10, boolValueOf1111111118, numValueOf11111111114, blob));
                                }
                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                }
                                Boolean boolValueOf1111111119 = Boolean.valueOf(z);
                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                Integer numValueOf11111111115 = Integer.valueOf(i2);
                                columnIndex = cursor.getColumnIndex(this.v);
                                if (columnIndex < 0) {
                                    blob = null;
                                } else {
                                    blob = cursor.getBlob(columnIndex);
                                }
                                return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11115, enumC2469t10, boolValueOf1111111119, numValueOf11111111115, blob));
                            }
                            i4 = cursor.getInt(cursor.getColumnIndexOrThrow(this.r));
                            numValueOf3 = Integer.valueOf(i4);
                            EnumC2245ka enumC2245ka11116 = EnumC2245ka.FIRST_OCCURRENCE;
                            if (numValueOf3 == null) {
                                numValueOf3.getClass();
                                if (i4 == 1) {
                                }
                                EnumC2245ka enumC2245ka11117 = enumC2245ka11116;
                                i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                numValueOf2 = Integer.valueOf(i3);
                                enumC2469t9 = EnumC2469t9.NATIVE;
                                if (numValueOf2 == null) {
                                    numValueOf2.getClass();
                                    if (i3 == 0) {
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf11111111110 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf11111111116 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11117, enumC2469t10, boolValueOf11111111110, numValueOf11111111116, blob));
                                }
                                enumC2469t9 = EnumC2469t9.JS;
                                if (numValueOf2 == null) {
                                    numValueOf2.getClass();
                                    if (i3 == 1) {
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf11111111111 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf11111111117 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11117, enumC2469t10, boolValueOf11111111111, numValueOf11111111117, blob));
                                }
                                if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                }
                                Boolean boolValueOf11111111112 = Boolean.valueOf(z);
                                i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                Integer numValueOf11111111118 = Integer.valueOf(i2);
                                columnIndex = cursor.getColumnIndex(this.v);
                                if (columnIndex < 0) {
                                    blob = null;
                                } else {
                                    blob = cursor.getBlob(columnIndex);
                                }
                                return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11117, enumC2469t10, boolValueOf11111111112, numValueOf11111111118, blob));
                            }
                            enumC2245ka11116 = EnumC2245ka.NON_FIRST_OCCURENCE;
                            if (numValueOf3 == null) {
                                numValueOf3.getClass();
                                if (i4 == 2) {
                                    EnumC2245ka enumC2245ka11118 = enumC2245ka11116;
                                    i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                                    numValueOf2 = Integer.valueOf(i3);
                                    enumC2469t9 = EnumC2469t9.NATIVE;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 0) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf11111111113 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf11111111119 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11118, enumC2469t10, boolValueOf11111111113, numValueOf11111111119, blob));
                                    }
                                    enumC2469t9 = EnumC2469t9.JS;
                                    if (numValueOf2 == null) {
                                        numValueOf2.getClass();
                                        if (i3 == 1) {
                                        }
                                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                        }
                                        Boolean boolValueOf11111111114 = Boolean.valueOf(z);
                                        i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                        Integer numValueOf111111111110 = Integer.valueOf(i2);
                                        columnIndex = cursor.getColumnIndex(this.v);
                                        if (columnIndex < 0) {
                                            blob = null;
                                        } else {
                                            blob = cursor.getBlob(columnIndex);
                                        }
                                        return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11118, enumC2469t10, boolValueOf11111111114, numValueOf111111111110, blob));
                                    }
                                    if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                                    }
                                    Boolean boolValueOf11111111115 = Boolean.valueOf(z);
                                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                                    Integer numValueOf111111111111 = Integer.valueOf(i2);
                                    columnIndex = cursor.getColumnIndex(this.v);
                                    if (columnIndex < 0) {
                                        blob = null;
                                    } else {
                                        blob = cursor.getBlob(columnIndex);
                                    }
                                    return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11118, enumC2469t10, boolValueOf11111111115, numValueOf111111111111, blob));
                                }
                            }
                            enumC2245ka = EnumC2245ka.UNKNOWN;
                        } catch (Throwable unused) {
                            enumC2245ka = EnumC2245ka.UNKNOWN;
                        }
                        if (numValueOf2 == null) {
                            numValueOf2.getClass();
                            if (i3 == 0) {
                            }
                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                            }
                            Boolean boolValueOf11111111116 = Boolean.valueOf(z);
                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                            Integer numValueOf111111111112 = Integer.valueOf(i2);
                            columnIndex = cursor.getColumnIndex(this.v);
                            if (columnIndex < 0) {
                                blob = null;
                            } else {
                                blob = cursor.getBlob(columnIndex);
                            }
                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11118, enumC2469t10, boolValueOf11111111116, numValueOf111111111112, blob));
                        }
                        if (numValueOf2 == null) {
                            numValueOf2.getClass();
                            if (i3 == 1) {
                            }
                            if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                            }
                            Boolean boolValueOf11111111117 = Boolean.valueOf(z);
                            i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                            Integer numValueOf111111111113 = Integer.valueOf(i2);
                            columnIndex = cursor.getColumnIndex(this.v);
                            if (columnIndex < 0) {
                                blob = null;
                            } else {
                                blob = cursor.getBlob(columnIndex);
                            }
                            return new C2293m7(lValueOf, enumC1998al, lValueOf7, enumC2195ibA2, lValueOf8, lValueOf9, new C2268l7(numValueOf20, string9, string10, lValueOf10, null, string11, string12, lValueOf11, numValueOf21, null, null, n9, string19, enumC2245ka11118, enumC2469t10, boolValueOf11111111117, numValueOf111111111113, blob));
                        }
                        if (cursor.getInt(cursor.getColumnIndexOrThrow(this.t)) == 1) {
                        }
                    } catch (Throwable unused2) {
                    }
                    i2 = cursor.getInt(cursor.getColumnIndexOrThrow(this.u));
                } catch (Throwable unused3) {
                    i2 = -1;
                }
                i3 = cursor.getInt(cursor.getColumnIndexOrThrow(this.s));
                numValueOf2 = Integer.valueOf(i3);
                enumC2469t9 = EnumC2469t9.NATIVE;
                enumC2469t9 = EnumC2469t9.JS;
            } catch (Throwable unused4) {
                enumC2469t9 = EnumC2469t9.NATIVE;
            }
            enumC1998al = EnumC1998al.BACKGROUND;
            enumC1998al = null;
            Long lValueOf12 = Long.valueOf(cursor.getLong(cursor.getColumnIndexOrThrow(this.b)));
            EnumC2195ib enumC2195ibA3 = EnumC2195ib.a(cursor.getInt(cursor.getColumnIndexOrThrow(this.g)));
            Long lValueOf13 = Long.valueOf(cursor.getLong(cursor.getColumnIndexOrThrow(this.c)));
            Long lValueOf14 = Long.valueOf(cursor.getLong(cursor.getColumnIndexOrThrow(this.h)));
            Integer numValueOf22 = Integer.valueOf(cursor.getInt(cursor.getColumnIndexOrThrow(this.o)));
            String string20 = cursor.getString(cursor.getColumnIndexOrThrow(this.e));
            String string110 = cursor.getString(cursor.getColumnIndexOrThrow(this.f));
            Long lValueOf15 = Long.valueOf(cursor.getLong(cursor.getColumnIndexOrThrow(this.d)));
            String string111 = cursor.getString(cursor.getColumnIndexOrThrow(this.j));
            String string112 = cursor.getString(cursor.getColumnIndexOrThrow(this.l));
            Long lValueOf16 = Long.valueOf(cursor.getLong(cursor.getColumnIndexOrThrow(this.m)));
            Integer numValueOf23 = Integer.valueOf(cursor.getInt(cursor.getColumnIndexOrThrow(this.n)));
            i = cursor.getInt(cursor.getColumnIndexOrThrow(this.p));
            numValueOf = Integer.valueOf(i);
            n8 = N8.NONE;
            n8 = N8.AES_VALUE_ENCRYPTION;
            n8 = N8.EXTERNALLY_ENCRYPTED_EVENT_CRYPTER;
            String string113 = cursor.getString(cursor.getColumnIndexOrThrow(this.q));
            enumC2245ka11116 = enumC2245ka;
            EnumC2245ka enumC2245ka11119 = enumC2245ka11116;
            Boolean boolValueOf11111111118 = Boolean.valueOf(z);
            Integer numValueOf111111111114 = Integer.valueOf(i2);
            columnIndex = cursor.getColumnIndex(this.v);
            if (columnIndex < 0) {
                blob = null;
            } else {
                blob = cursor.getBlob(columnIndex);
            }
            return new C2293m7(lValueOf, enumC1998al, lValueOf12, enumC2195ibA3, lValueOf13, lValueOf14, new C2268l7(numValueOf22, string20, string110, lValueOf15, null, string111, string112, lValueOf16, numValueOf23, null, null, n9, string113, enumC2245ka11119, enumC2469t10, boolValueOf11111111118, numValueOf111111111114, blob));
        } catch (Throwable unused5) {
            return null;
        }
    }
}
