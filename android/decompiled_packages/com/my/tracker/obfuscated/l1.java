package com.my.tracker.obfuscated;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteStatement;

/* JADX INFO: loaded from: classes6.dex */
final class l1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final SQLiteDatabase f4964a;
    private final SQLiteStatement b;
    private final SQLiteStatement c;
    private final SQLiteStatement d;

    private static class a implements b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Cursor f4965a;

        public a(Cursor cursor) {
            this.f4965a = cursor;
        }

        @Override // com.my.tracker.obfuscated.b
        public long a() {
            return this.f4965a.getLong(0);
        }

        @Override // com.my.tracker.obfuscated.b
        public boolean b() {
            return this.f4965a.moveToNext();
        }

        @Override // java.io.Closeable, java.lang.AutoCloseable
        public void close() {
            this.f4965a.close();
        }

        @Override // com.my.tracker.obfuscated.b
        public byte[] i() {
            return this.f4965a.getBlob(1);
        }
    }

    l1(SQLiteDatabase sQLiteDatabase) {
        this.f4964a = sQLiteDatabase;
        this.b = sQLiteDatabase.compileStatement("DELETE FROM table_partial_proto_packet WHERE id not in   (SELECT id    FROM table_partial_proto_packet    ORDER BY TS DESC    LIMIT ?  )");
        this.c = sQLiteDatabase.compileStatement("INSERT OR IGNORE INTO table_partial_proto_packet(data, ts) VALUES (?, ?)");
        this.d = sQLiteDatabase.compileStatement("DELETE FROM table_partial_proto_packet WHERE id = ?");
    }

    static void a(SQLiteDatabase sQLiteDatabase) {
        sQLiteDatabase.execSQL("CREATE TABLE IF NOT EXISTS table_partial_proto_packet(id INTEGER PRIMARY KEY AUTOINCREMENT, data BLOB NOT NULL, ts INTEGER(8))");
    }

    void b(long j) {
        this.b.bindLong(1, j);
        this.b.executeUpdateDelete();
    }

    void a(byte[] bArr) {
        try {
            long jCurrentTimeMillis = System.currentTimeMillis();
            this.c.bindBlob(1, bArr);
            this.c.bindLong(2, jCurrentTimeMillis);
            this.c.executeInsert();
        } finally {
            this.c.clearBindings();
        }
    }

    b a() {
        return new a(this.f4964a.rawQuery("SELECT id, data FROM table_partial_proto_packet ORDER BY ts", null));
    }

    void a(long j) {
        this.d.bindLong(1, j);
        this.d.executeUpdateDelete();
    }
}
