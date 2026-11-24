package com.my.tracker.obfuscated;

import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteCursor;
import android.database.sqlite.SQLiteCursorDriver;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteQuery;
import android.database.sqlite.SQLiteStatement;
import java.io.Closeable;

/* JADX INFO: loaded from: classes6.dex */
public final class d1 {
    static long y = -1;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String[] f4931a = new String[1];
    private final h b = new h();
    private final SQLiteStatement c;
    private final SQLiteStatement d;
    private final SQLiteStatement e;
    private final SQLiteStatement f;
    private final SQLiteStatement g;
    private final SQLiteStatement h;
    private final SQLiteStatement i;
    private final SQLiteStatement j;
    private final SQLiteStatement k;
    private final SQLiteStatement l;
    private final SQLiteStatement m;
    private final SQLiteStatement n;
    private final SQLiteStatement o;
    private final SQLiteStatement p;
    private final SQLiteStatement q;
    private final SQLiteStatement r;
    private final SQLiteStatement s;
    private final SQLiteStatement t;
    private final SQLiteStatement u;
    private final SQLiteStatement v;
    private final l1 w;
    protected final SQLiteDatabase x;

    static abstract class a implements Closeable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final Cursor f4932a;

        a(Cursor cursor) {
            this.f4932a = cursor;
        }

        final boolean b() {
            return this.f4932a.moveToNext();
        }

        @Override // java.io.Closeable, java.lang.AutoCloseable
        public final void close() {
            try {
                this.f4932a.close();
            } catch (Throwable th) {
                x2.b("AbstractReader error: error while closing cursor", th);
            }
        }

        protected void finalize() throws Throwable {
            super.finalize();
            close();
        }
    }

    static final class b extends a {
        b(Cursor cursor) {
            super(cursor);
        }

        long a() {
            return this.f4932a.getLong(0);
        }

        long e() {
            return this.f4932a.getLong(5);
        }

        String m() {
            return this.f4932a.getString(1);
        }

        String n() {
            return this.f4932a.getString(2);
        }

        String o() {
            return this.f4932a.getString(3);
        }

        int p() {
            return this.f4932a.getInt(4);
        }
    }

    static final class c extends a {
        c(Cursor cursor) {
            super(cursor);
        }

        long a() {
            return this.f4932a.getLong(0);
        }

        long c() {
            return this.f4932a.getLong(4);
        }

        long g() {
            return this.f4932a.getLong(1);
        }

        byte[] l() {
            return this.f4932a.getBlob(3);
        }
    }

    static final class d extends a {
        d(Cursor cursor) {
            super(cursor);
        }

        long e() {
            return this.f4932a.getLong(1);
        }
    }

    static final class e extends a {
        e(Cursor cursor) {
            super(cursor);
        }

        long a() {
            return this.f4932a.getLong(0);
        }

        long e() {
            return this.f4932a.getLong(3);
        }

        String m() {
            return this.f4932a.getString(1);
        }

        String n() {
            return this.f4932a.getString(2);
        }
    }

    static final class f extends a {
        f(Cursor cursor) {
            super(cursor);
        }

        long a() {
            return this.f4932a.getLong(0);
        }

        long c() {
            return this.f4932a.getLong(3);
        }

        String k() {
            return this.f4932a.getString(1);
        }

        long m() {
            return this.f4932a.isNull(2) ? d1.y : this.f4932a.getLong(2);
        }
    }

    static final class g extends a {
        g(Cursor cursor) {
            super(cursor);
        }

        long m() {
            return this.f4932a.getLong(2);
        }

        long n() {
            return this.f4932a.getLong(1);
        }

        boolean o() {
            return this.f4932a.isNull(2);
        }
    }

    static final class h implements SQLiteDatabase.CursorFactory {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        long f4933a;
        byte[] b;

        h() {
        }

        @Override // android.database.sqlite.SQLiteDatabase.CursorFactory
        public Cursor newCursor(SQLiteDatabase sQLiteDatabase, SQLiteCursorDriver sQLiteCursorDriver, String str, SQLiteQuery sQLiteQuery) {
            sQLiteQuery.bindLong(1, this.f4933a);
            sQLiteQuery.bindBlob(2, this.b);
            return new SQLiteCursor(sQLiteDatabase, sQLiteCursorDriver, str, sQLiteQuery);
        }
    }

    private d1(SQLiteDatabase sQLiteDatabase) {
        this.x = sQLiteDatabase;
        this.c = sQLiteDatabase.compileStatement("INSERT OR IGNORE INTO table_events(type, major, body) VALUES (?, ?, ?)");
        this.d = sQLiteDatabase.compileStatement("INSERT OR IGNORE INTO table_events_timestamps(eid, ts) VALUES (?, ?)");
        this.e = sQLiteDatabase.compileStatement("INSERT OR IGNORE INTO table_sessions(name, ts_start) VALUES (?, ?)");
        this.f = sQLiteDatabase.compileStatement("INSERT OR IGNORE INTO table_sessions_timestamps(sid, ts_start, ts_end) VALUES (?, ?, ?)");
        this.g = sQLiteDatabase.compileStatement("INSERT OR IGNORE INTO table_params(key, value) VALUES (?, ?)");
        this.h = sQLiteDatabase.compileStatement("INSERT OR IGNORE INTO table_raw_purchases(data, signature, ts) VALUES (?, ?, ?)");
        this.i = sQLiteDatabase.compileStatement("INSERT OR IGNORE INTO table_huawei_appgallery_raw_purchases(data, signature, signature_algorithm, source, ts) VALUES (?, ?, ?, ?, ?)");
        this.j = sQLiteDatabase.compileStatement("UPDATE table_events SET ts_skipped=?  WHERE id=?");
        this.k = sQLiteDatabase.compileStatement("UPDATE table_sessions SET ts_start=?, ts_skipped=?  WHERE id=?");
        this.l = sQLiteDatabase.compileStatement("UPDATE table_params SET value=?  WHERE key=?");
        this.m = sQLiteDatabase.compileStatement("UPDATE table_sessions SET ts_skipped=0");
        this.n = sQLiteDatabase.compileStatement("DELETE FROM table_events");
        this.r = sQLiteDatabase.compileStatement("DELETE FROM table_events_timestamps WHERE rowid IN (SELECT rowid FROM table_events_timestamps WHERE eid=?  ORDER BY ts LIMIT ?)");
        this.o = sQLiteDatabase.compileStatement("DELETE FROM table_events_timestamps");
        this.p = sQLiteDatabase.compileStatement("DELETE FROM table_sessions WHERE ts_start IS NULL");
        this.s = sQLiteDatabase.compileStatement("DELETE FROM table_sessions_timestamps WHERE rowid IN (SELECT rowid FROM table_sessions_timestamps WHERE sid=?  ORDER BY ts_start LIMIT ?)");
        this.q = sQLiteDatabase.compileStatement("DELETE FROM table_sessions_timestamps");
        this.t = sQLiteDatabase.compileStatement("DELETE FROM table_params WHERE key=?");
        this.u = sQLiteDatabase.compileStatement("DELETE FROM table_raw_purchases WHERE id=?");
        this.v = sQLiteDatabase.compileStatement("DELETE FROM table_huawei_appgallery_raw_purchases WHERE id=?");
        this.w = new l1(sQLiteDatabase);
    }

    public static d1 a(String str, Context context) {
        try {
            String str2 = "mytracker_" + str + ".db";
            SQLiteDatabase sQLiteDatabaseOpenOrCreateDatabase = context.openOrCreateDatabase(str2, 0, null);
            if (sQLiteDatabaseOpenOrCreateDatabase == null) {
                x2.b("MyTrackerDatabase error: can't open database");
                return null;
            }
            if (sQLiteDatabaseOpenOrCreateDatabase.getVersion() != 10) {
                sQLiteDatabaseOpenOrCreateDatabase.close();
                context.deleteDatabase(str2);
                sQLiteDatabaseOpenOrCreateDatabase = context.openOrCreateDatabase(str2, 0, null);
                sQLiteDatabaseOpenOrCreateDatabase.setVersion(10);
                sQLiteDatabaseOpenOrCreateDatabase.execSQL("CREATE TABLE IF NOT EXISTS table_events(id INTEGER PRIMARY KEY AUTOINCREMENT, type INTEGER NOT NULL, major INTEGER NOT NULL, body BLOB NOT NULL, ts_skipped INTEGER NOT NULL DEFAULT 0, UNIQUE(type, body))");
                sQLiteDatabaseOpenOrCreateDatabase.execSQL("CREATE INDEX IF NOT EXISTS table_eventsmajor ON table_events(major)");
                sQLiteDatabaseOpenOrCreateDatabase.execSQL("CREATE TABLE IF NOT EXISTS table_events_timestamps(eid INTEGER NOT NULL, ts INTEGER NOT NULL)");
                sQLiteDatabaseOpenOrCreateDatabase.execSQL("CREATE INDEX IF NOT EXISTS table_events_timestampseid ON table_events_timestamps(eid)");
                sQLiteDatabaseOpenOrCreateDatabase.execSQL("CREATE TABLE IF NOT EXISTS table_params(key TEXT PRIMARY KEY, value INTEGER)");
                sQLiteDatabaseOpenOrCreateDatabase.execSQL("CREATE INDEX IF NOT EXISTS table_paramskey ON table_params(key)");
                sQLiteDatabaseOpenOrCreateDatabase.execSQL("CREATE TABLE IF NOT EXISTS table_sessions(id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT NOT NULL UNIQUE, ts_start INTEGER, ts_skipped INTEGER NOT NULL DEFAULT 0)");
                sQLiteDatabaseOpenOrCreateDatabase.execSQL("CREATE INDEX IF NOT EXISTS table_sessionsname ON table_sessions(name)");
                sQLiteDatabaseOpenOrCreateDatabase.execSQL("CREATE TABLE IF NOT EXISTS table_sessions_timestamps(sid INTEGER NOT NULL, ts_start INTEGER NOT NULL, ts_end INTEGER)");
                sQLiteDatabaseOpenOrCreateDatabase.execSQL("CREATE INDEX IF NOT EXISTS table_sessions_timestampssid ON table_sessions_timestamps(sid)");
                sQLiteDatabaseOpenOrCreateDatabase.execSQL("CREATE TABLE IF NOT EXISTS table_raw_purchases(id INTEGER PRIMARY KEY AUTOINCREMENT, data TEXT NOT NULL, signature TEXT NOT NULL, ts INTEGER NOT NULL )");
                sQLiteDatabaseOpenOrCreateDatabase.execSQL("CREATE TABLE IF NOT EXISTS table_huawei_appgallery_raw_purchases(id INTEGER PRIMARY KEY AUTOINCREMENT, data TEXT NOT NULL, signature TEXT NOT NULL, signature_algorithm TEXT NOT NULL, source INTEGER NOT NULL, ts INTEGER NOT NULL )");
                l1.a(sQLiteDatabaseOpenOrCreateDatabase);
            }
            return new d1(sQLiteDatabaseOpenOrCreateDatabase);
        } catch (Throwable th) {
            x2.b("MyTrackerDatabase error: exception occurred while initialization database", th);
            return null;
        }
    }

    Long b(String str) {
        String[] strArr = this.f4931a;
        strArr[0] = str;
        Cursor cursorRawQuery = this.x.rawQuery("SELECT value FROM table_params WHERE key=?", strArr);
        try {
            if (!cursorRawQuery.moveToNext()) {
                cursorRawQuery.close();
                return null;
            }
            Long lValueOf = Long.valueOf(cursorRawQuery.getLong(0));
            cursorRawQuery.close();
            return lValueOf;
        } catch (Throwable th) {
            if (cursorRawQuery != null) {
                try {
                    cursorRawQuery.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
            }
            throw th;
        }
    }

    void c(long j, long j2) {
        this.d.bindLong(1, j);
        this.d.bindLong(2, j2);
        this.d.execute();
    }

    long d(long j) {
        this.f4931a[0] = String.valueOf(j);
        Cursor cursorRawQuery = this.x.rawQuery("SELECT COUNT(*) FROM table_events_timestamps WHERE eid=?", this.f4931a);
        try {
            if (!cursorRawQuery.moveToNext()) {
                cursorRawQuery.close();
                return 0L;
            }
            long j2 = cursorRawQuery.getLong(0);
            cursorRawQuery.close();
            return j2;
        } catch (Throwable th) {
            if (cursorRawQuery != null) {
                try {
                    cursorRawQuery.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
            }
            throw th;
        }
    }

    d e(long j) {
        this.f4931a[0] = String.valueOf(j);
        return new d(this.x.rawQuery("SELECT eid, ts FROM table_events_timestamps WHERE eid=?", this.f4931a));
    }

    long f(long j) {
        this.f4931a[0] = String.valueOf(j);
        Cursor cursorRawQuery = this.x.rawQuery("SELECT COUNT(*)  FROM table_events WHERE type=?", this.f4931a);
        try {
            if (!cursorRawQuery.moveToNext()) {
                cursorRawQuery.close();
                return 0L;
            }
            long j2 = cursorRawQuery.getLong(0);
            cursorRawQuery.close();
            return j2;
        } catch (Throwable th) {
            if (cursorRawQuery != null) {
                try {
                    cursorRawQuery.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
            }
            throw th;
        }
    }

    long g(long j) {
        this.f4931a[0] = String.valueOf(j);
        Cursor cursorRawQuery = this.x.rawQuery("SELECT COUNT(*) FROM table_sessions_timestamps WHERE sid=?", this.f4931a);
        try {
            if (!cursorRawQuery.moveToNext()) {
                cursorRawQuery.close();
                return 0L;
            }
            long j2 = cursorRawQuery.getLong(0);
            cursorRawQuery.close();
            return j2;
        } catch (Throwable th) {
            if (cursorRawQuery != null) {
                try {
                    cursorRawQuery.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
            }
            throw th;
        }
    }

    g h(long j) {
        this.f4931a[0] = String.valueOf(j);
        return new g(this.x.rawQuery("SELECT sid, ts_start, ts_end FROM table_sessions_timestamps WHERE sid=?", this.f4931a));
    }

    c i() {
        return new c(this.x.rawQuery("SELECT id, type, major, body, ts_skipped FROM table_events", null));
    }

    long j() {
        Cursor cursorRawQuery = this.x.rawQuery("SELECT COUNT(*) FROM table_raw_purchases", null);
        try {
            if (!cursorRawQuery.moveToNext()) {
                cursorRawQuery.close();
                return 0L;
            }
            long j = cursorRawQuery.getLong(0);
            cursorRawQuery.close();
            return j;
        } catch (Throwable th) {
            if (cursorRawQuery != null) {
                try {
                    cursorRawQuery.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
            }
            throw th;
        }
    }

    e k() {
        return new e(this.x.rawQuery("SELECT id, data, signature, ts FROM table_raw_purchases", null));
    }

    long l() {
        Cursor cursorRawQuery = this.x.rawQuery("SELECT COUNT(*)  FROM table_events WHERE major=1", null);
        try {
            if (!cursorRawQuery.moveToNext()) {
                cursorRawQuery.close();
                return 0L;
            }
            long j = cursorRawQuery.getLong(0);
            cursorRawQuery.close();
            return j;
        } catch (Throwable th) {
            if (cursorRawQuery != null) {
                try {
                    cursorRawQuery.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
            }
            throw th;
        }
    }

    void i(long j) {
        this.w.b(j);
    }

    void e() {
        this.q.execute();
    }

    b h() {
        return new b(this.x.rawQuery("SELECT id, data, signature, signature_algorithm, source, ts FROM table_huawei_appgallery_raw_purchases", null));
    }

    void c() {
        this.o.execute();
    }

    void c(long j) {
        this.w.a(j);
    }

    c b(long j, byte[] bArr) {
        h hVar = this.b;
        hVar.f4933a = j;
        hVar.b = bArr;
        return new c(this.x.rawQueryWithFactory(hVar, "SELECT id, type, major, body, ts_skipped FROM table_events WHERE type=?  AND body=?  LIMIT 1", null, null));
    }

    void d(long j, long j2) {
        this.j.bindLong(1, j2);
        this.j.bindLong(2, j);
        this.j.execute();
    }

    com.my.tracker.obfuscated.b f() {
        return this.w.a();
    }

    long g() {
        Cursor cursorRawQuery = this.x.rawQuery("SELECT COUNT(*) FROM table_huawei_appgallery_raw_purchases", null);
        try {
            if (!cursorRawQuery.moveToNext()) {
                cursorRawQuery.close();
                return 0L;
            }
            long j = cursorRawQuery.getLong(0);
            cursorRawQuery.close();
            return j;
        } catch (Throwable th) {
            if (cursorRawQuery != null) {
                try {
                    cursorRawQuery.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
            }
            throw th;
        }
    }

    void b() {
        this.n.execute();
    }

    void d() {
        this.p.execute();
    }

    long b(long j, long j2) {
        this.s.bindLong(1, j);
        this.s.bindLong(2, j2);
        return this.s.executeUpdateDelete();
    }

    void b(long j) {
        this.u.bindLong(1, j);
        this.u.execute();
    }

    long a(long j, byte[] bArr) {
        h hVar = this.b;
        hVar.f4933a = j;
        hVar.b = bArr;
        Cursor cursorRawQueryWithFactory = this.x.rawQueryWithFactory(hVar, "SELECT COUNT(*)  FROM table_events WHERE type=?  AND body=?", null, null);
        try {
            if (!cursorRawQueryWithFactory.moveToNext()) {
                cursorRawQueryWithFactory.close();
                return 0L;
            }
            long j2 = cursorRawQueryWithFactory.getLong(0);
            cursorRawQueryWithFactory.close();
            return j2;
        } catch (Throwable th) {
            if (cursorRawQueryWithFactory != null) {
                try {
                    cursorRawQueryWithFactory.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
            }
            throw th;
        }
    }

    f a(String str) {
        String[] strArr = this.f4931a;
        strArr[0] = str;
        return new f(this.x.rawQuery("SELECT id, name, ts_start, ts_skipped FROM table_sessions WHERE name=?  LIMIT 1", strArr));
    }

    long a(int i, byte[] bArr, boolean z) {
        this.c.bindLong(1, i);
        this.c.bindLong(2, z ? 1L : 0L);
        this.c.bindBlob(3, bArr);
        return this.c.executeInsert();
    }

    long a(String str, long j) {
        this.e.bindString(1, str);
        this.e.bindLong(2, j);
        return this.e.executeInsert();
    }

    void a(long j, long j2, boolean z, long j3) {
        this.f.bindLong(1, j);
        this.f.bindLong(2, j2);
        if (z) {
            this.f.bindNull(3);
        } else {
            this.f.bindLong(3, j3);
        }
        this.f.execute();
    }

    long a(String str, String str2, long j) {
        this.h.bindString(1, str);
        this.h.bindString(2, str2);
        this.h.bindLong(3, j);
        return this.h.executeInsert();
    }

    long a(String str, String str2, String str3, int i, long j) {
        this.i.bindString(1, str);
        this.i.bindString(2, str2);
        this.i.bindString(3, str3);
        this.i.bindLong(4, i);
        this.i.bindLong(5, j);
        return this.i.executeInsert();
    }

    void a(long j, long j2, long j3) {
        if (j2 != y) {
            this.k.bindLong(1, j2);
        } else {
            this.k.bindNull(1);
        }
        this.k.bindLong(2, j3);
        this.k.bindLong(3, j);
        this.k.execute();
    }

    void a() {
        this.m.execute();
    }

    void a(String str, Long l) {
        if (l == null) {
            this.t.bindString(1, str);
            this.t.execute();
            return;
        }
        long jLongValue = l.longValue();
        this.g.bindString(1, str);
        this.g.bindLong(2, jLongValue);
        if (this.g.executeInsert() != y) {
            return;
        }
        this.l.bindLong(1, jLongValue);
        this.l.bindString(2, str);
        this.l.execute();
    }

    long a(long j, long j2) {
        this.r.bindLong(1, j);
        this.r.bindLong(2, j2);
        return this.r.executeUpdateDelete();
    }

    void a(long j) {
        this.v.bindLong(1, j);
        this.v.execute();
    }

    void a(byte[] bArr) {
        this.w.a(bArr);
    }
}
