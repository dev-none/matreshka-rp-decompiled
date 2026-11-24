package com.my.tracker.obfuscated;

import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteStatement;
import java.io.Closeable;

/* JADX INFO: loaded from: classes6.dex */
final class j2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String[] f4958a = new String[1];
    private final SQLiteDatabase b;
    private final SQLiteStatement c;
    private final SQLiteStatement d;
    private final SQLiteStatement e;
    private final SQLiteStatement f;

    static abstract class a implements Closeable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final Cursor f4959a;

        a(Cursor cursor) {
            this.f4959a = cursor;
        }

        final boolean b() {
            return this.f4959a.moveToNext();
        }

        @Override // java.io.Closeable, java.lang.AutoCloseable
        public final void close() {
            try {
                this.f4959a.close();
            } catch (Throwable th) {
                x2.b("TimeSpentDataBaseSQL: AbstractReader error: error while closing cursor", th);
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

        byte[] m() {
            return this.f4959a.getBlob(2);
        }

        long n() {
            return this.f4959a.getLong(0);
        }
    }

    private j2(SQLiteDatabase sQLiteDatabase) {
        this.b = sQLiteDatabase;
        this.d = sQLiteDatabase.compileStatement("SELECT COUNT(*) FROM table_tick_packet");
        this.c = sQLiteDatabase.compileStatement("INSERT OR IGNORE INTO table_tick_packet(timestamp, content) VALUES (?, ?)");
        this.e = sQLiteDatabase.compileStatement("DELETE FROM table_tick_packet WHERE packet_id = ?");
        this.f = sQLiteDatabase.compileStatement("DELETE FROM table_tick_packet WHERE packet_id IN (SELECT packet_id FROM table_tick_packet ORDER BY timestamp ASC LIMIT ?)");
    }

    static j2 a(String str, Context context) throws Exception {
        String str2 = String.format("mytracker_timespent_%s.db", str);
        SQLiteDatabase sQLiteDatabaseOpenOrCreateDatabase = context.openOrCreateDatabase(str2, 0, null);
        if (sQLiteDatabaseOpenOrCreateDatabase == null) {
            throw new Exception("TimeSpentDataBaseSQL: context.openOrCreateDatabase failed");
        }
        if (sQLiteDatabaseOpenOrCreateDatabase.getVersion() != 1) {
            sQLiteDatabaseOpenOrCreateDatabase.close();
            context.deleteDatabase(str2);
            sQLiteDatabaseOpenOrCreateDatabase = context.openOrCreateDatabase(str2, 0, null);
            sQLiteDatabaseOpenOrCreateDatabase.setVersion(1);
            sQLiteDatabaseOpenOrCreateDatabase.execSQL("CREATE TABLE IF NOT EXISTS table_tick_packet(packet_id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, timestamp INTEGER NOT NULL, content BLOB NOT NULL)");
            sQLiteDatabaseOpenOrCreateDatabase.execSQL("CREATE INDEX IF NOT EXISTS table_tick_packettimestamp ON table_tick_packet(timestamp)");
        }
        return new j2(sQLiteDatabaseOpenOrCreateDatabase);
    }

    b b(int i) {
        this.f4958a[0] = String.valueOf(i);
        return new b(this.b.rawQuery("SELECT packet_id, timestamp, content FROM table_tick_packet ORDER BY timestamp DESC LIMIT ?", this.f4958a));
    }

    long a(long j, byte[] bArr) {
        this.b.beginTransaction();
        try {
            this.c.clearBindings();
            this.c.bindLong(1, j);
            this.c.bindBlob(2, bArr);
            long jExecuteInsert = this.c.executeInsert();
            if (jExecuteInsert >= 0) {
                this.b.setTransactionSuccessful();
                x2.a("TimeSpentDataBaseSQL: 1 tick packet (packetId = " + jExecuteInsert + ") inserted to database (reason: store tick packet)");
                this.b.endTransaction();
                return jExecuteInsert;
            }
            throw new Exception("TimeSpentDataBaseSQL: sql insert failed");
        } catch (Throwable th) {
            this.b.endTransaction();
            throw th;
        }
    }

    int a() {
        return (int) this.d.simpleQueryForLong();
    }

    void a(long[] jArr) {
        this.b.beginTransaction();
        try {
            int iA = 0;
            for (long j : jArr) {
                iA += a(j);
            }
            x2.a("TimeSpentDataBaseSQL: " + iA + " tick packet(s) removed from database (reason: delete " + jArr.length + " tick packets)");
            this.b.setTransactionSuccessful();
        } finally {
            this.b.endTransaction();
        }
    }

    int a(int i) {
        this.f.clearBindings();
        this.f.bindLong(1, i);
        int iExecuteUpdateDelete = this.f.executeUpdateDelete();
        x2.a("TimeSpentDataBaseSQL: " + iExecuteUpdateDelete + " oldest tick packet(s) removed from database (reason: delete " + i + " oldest tick packets)");
        return iExecuteUpdateDelete;
    }

    int a(long j) {
        this.e.clearBindings();
        this.e.bindLong(1, j);
        int iExecuteUpdateDelete = this.e.executeUpdateDelete();
        x2.a("TimeSpentDataBaseSQL: " + iExecuteUpdateDelete + " tick packet removed from database (reason: delete tick packet with packetId = " + j + ")");
        return iExecuteUpdateDelete;
    }
}
