package io.appmetrica.analytics.impl;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.text.TextUtils;
import com.unity3d.ads.core.domain.AndroidGetIsModulesInitEnabled;
import io.appmetrica.analytics.coreutils.internal.parsing.ParseUtils;
import java.io.Closeable;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Locale;
import java.util.Map;
import java.util.Set;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.zb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2621zb implements Oa, Closeable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final HashMap f6428a = new HashMap();
    public final HashMap b = new HashMap();
    public final String c = "preferences";
    public final C2596yb d;
    public volatile boolean e;
    public final F6 f;

    public C2621zb(F6 f6) {
        this.f = f6;
        C2596yb c2596yb = new C2596yb(this, String.format(Locale.US, "IAA-DW-%s", Integer.valueOf(Gd.a())));
        this.d = c2596yb;
        c2596yb.start();
    }

    /* JADX WARN: Code duplicated, block: B:20:0x0054  */
    public static void a(C2621zb c2621zb) {
        SQLiteDatabase sQLiteDatabaseA;
        Object obj;
        c2621zb.getClass();
        Cursor cursor = null;
        try {
            sQLiteDatabaseA = c2621zb.f.a();
            if (sQLiteDatabaseA != null) {
                try {
                    Cursor cursorQuery = sQLiteDatabaseA.query(c2621zb.c, new String[]{"key", "value", "type"}, null, null, null, null, null);
                    while (cursorQuery.moveToNext()) {
                        try {
                            String string = cursorQuery.getString(cursorQuery.getColumnIndexOrThrow("key"));
                            String string2 = cursorQuery.getString(cursorQuery.getColumnIndexOrThrow("value"));
                            int i = cursorQuery.getInt(cursorQuery.getColumnIndexOrThrow("type"));
                            if (!TextUtils.isEmpty(string)) {
                                if (i != 1) {
                                    if (i == 2) {
                                        obj = ParseUtils.parseInt(string2);
                                    } else if (i == 3) {
                                        obj = ParseUtils.parseLong(string2);
                                    } else if (i != 4) {
                                        if (i != 5) {
                                            obj = string2;
                                            obj = null;
                                        } else {
                                            obj = string2;
                                            obj = ParseUtils.parseFloat(string2);
                                        }
                                    }
                                } else if (AndroidGetIsModulesInitEnabled.ENABLE_MODULES_INIT_VALUE.equals(string2)) {
                                    obj = Boolean.TRUE;
                                } else if ("false".equals(string2)) {
                                    obj = Boolean.FALSE;
                                } else {
                                    obj = string2;
                                    obj = null;
                                }
                                if (obj != null) {
                                    c2621zb.f6428a.put(string, obj);
                                }
                            }
                        } catch (Throwable unused) {
                        }
                    }
                    cursor = cursorQuery;
                } catch (Throwable unused2) {
                }
            }
        } catch (Throwable unused3) {
            sQLiteDatabaseA = null;
        }
        no.a(cursor);
        c2621zb.f.a(sQLiteDatabaseA);
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final void b() {
        synchronized (this.d) {
            this.d.notifyAll();
        }
    }

    public final void c() {
        if (this.e) {
            return;
        }
        try {
            this.f6428a.wait();
        } catch (InterruptedException unused) {
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        if (this.d.isRunning()) {
            this.d.stopRunning();
        }
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final boolean getBoolean(String str, boolean z) {
        Object objB = b(str);
        return objB instanceof Boolean ? ((Boolean) objB).booleanValue() : z;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final int getInt(String str, int i) {
        Object objB = b(str);
        return objB instanceof Integer ? ((Integer) objB).intValue() : i;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final long getLong(String str, long j) {
        Object objB = b(str);
        return objB instanceof Long ? ((Long) objB).longValue() : j;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final String getString(String str, String str2) {
        Object objB = b(str);
        return objB instanceof String ? (String) objB : str2;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final Oa remove(String str) {
        synchronized (this.f6428a) {
            c();
            this.f6428a.remove(str);
        }
        synchronized (this.d) {
            this.b.put(str, this);
            this.d.notifyAll();
        }
        return this;
    }

    public final Object b(String str) {
        Object obj;
        synchronized (this.f6428a) {
            c();
            obj = this.f6428a.get(str);
        }
        return obj;
    }

    public static void a(C2621zb c2621zb, HashMap map) {
        SQLiteDatabase sQLiteDatabaseA;
        c2621zb.getClass();
        int size = map.size();
        ContentValues[] contentValuesArr = new ContentValues[size];
        int i = 0;
        for (Map.Entry entry : map.entrySet()) {
            ContentValues contentValues = new ContentValues();
            String str = (String) entry.getKey();
            Object value = entry.getValue();
            contentValues.put("key", str);
            if (value == c2621zb) {
                contentValues.putNull("value");
            } else if (value instanceof String) {
                contentValues.put("value", (String) value);
                contentValues.put("type", (Integer) 4);
            } else if (value instanceof Long) {
                contentValues.put("value", (Long) value);
                contentValues.put("type", (Integer) 3);
            } else if (value instanceof Integer) {
                contentValues.put("value", (Integer) value);
                contentValues.put("type", (Integer) 2);
            } else if (value instanceof Boolean) {
                contentValues.put("value", String.valueOf(((Boolean) value).booleanValue()));
                contentValues.put("type", (Integer) 1);
            } else if (value instanceof Float) {
                contentValues.put("value", (Float) value);
                contentValues.put("type", (Integer) 5);
            }
            contentValuesArr[i] = contentValues;
            i++;
        }
        SQLiteDatabase sQLiteDatabase = null;
        try {
            sQLiteDatabaseA = c2621zb.f.a();
            if (sQLiteDatabaseA != null) {
                try {
                    sQLiteDatabaseA.beginTransaction();
                    for (int i2 = 0; i2 < size; i2++) {
                        ContentValues contentValues2 = contentValuesArr[i2];
                        if (contentValues2.getAsString("value") == null) {
                            sQLiteDatabaseA.delete(c2621zb.c, "key = ?", new String[]{contentValues2.getAsString("key")});
                        } else {
                            sQLiteDatabaseA.insertWithOnConflict(c2621zb.c, null, contentValues2, 5);
                        }
                    }
                    sQLiteDatabaseA.setTransactionSuccessful();
                } catch (Throwable unused) {
                    sQLiteDatabase = sQLiteDatabaseA;
                    if (sQLiteDatabase != null) {
                        try {
                            sQLiteDatabase.endTransaction();
                        } catch (Throwable unused2) {
                        }
                    }
                    sQLiteDatabaseA = sQLiteDatabase;
                }
            }
            if (sQLiteDatabaseA != null) {
                try {
                    sQLiteDatabaseA.endTransaction();
                } catch (Throwable unused3) {
                }
            }
        } catch (Throwable unused4) {
        }
        c2621zb.f.a(sQLiteDatabaseA);
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final synchronized Oa a(String str, String str2) {
        a(str, (Object) str2);
        return this;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final Oa a(String str, long j) {
        a(str, Long.valueOf(j));
        return this;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final synchronized Oa a(int i, String str) {
        a(str, Integer.valueOf(i));
        return this;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final Oa a(String str, boolean z) {
        a(str, Boolean.valueOf(z));
        return this;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final Oa a(String str, float f) {
        a(str, Float.valueOf(f));
        return this;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final boolean a(String str) {
        boolean zContainsKey;
        synchronized (this.f6428a) {
            c();
            zContainsKey = this.f6428a.containsKey(str);
        }
        return zContainsKey;
    }

    @Override // io.appmetrica.analytics.impl.Oa
    public final Set a() {
        HashSet hashSet;
        synchronized (this.f6428a) {
            hashSet = new HashSet(this.f6428a.keySet());
        }
        return hashSet;
    }

    public final void a(String str, Object obj) {
        synchronized (this.f6428a) {
            c();
            this.f6428a.put(str, obj);
        }
        synchronized (this.d) {
            this.b.put(str, obj);
            this.d.notifyAll();
        }
    }
}
