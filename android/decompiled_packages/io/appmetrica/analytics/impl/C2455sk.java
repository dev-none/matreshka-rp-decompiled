package io.appmetrica.analytics.impl;

import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.text.TextUtils;
import io.appmetrica.analytics.coreutils.internal.encryption.AESEncrypter;
import io.appmetrica.analytics.coreutils.internal.io.CloseableUtilsKt;
import io.appmetrica.analytics.coreutils.internal.parsing.JsonUtils;
import io.appmetrica.analytics.protobuf.nano.MessageNano;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.sk, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2455sk implements Pc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final yo f6317a;
    public final String b = "startup_state";
    public final AESEncrypter c;

    public C2455sk(yo yoVar) {
        this.f6317a = yoVar;
        C1976a c1976a = new C1976a(C2495ua.k().g());
        this.c = new AESEncrypter(AESEncrypter.DEFAULT_ALGORITHM, c1976a.b(), c1976a.a());
    }

    @Override // io.appmetrica.analytics.impl.Pc
    public final void a(Context context) {
        SQLiteDatabase readableDatabase = C2139g7.a(context).h().getReadableDatabase();
        if (readableDatabase != null) {
            try {
                Hb hbA = a(readableDatabase);
                C2308mm c2308mm = new C2308mm(new C2439s4(new C2390q4()));
                if (hbA != null) {
                    a(this.f6317a, c2308mm, hbA);
                    c2308mm.p = hbA.c;
                    c2308mm.r = hbA.b;
                }
                C2333nm c2333nm = new C2333nm(c2308mm);
                Vm vm = (Vm) Tm.a(C2333nm.class);
                vm.a(context, vm.b(context)).save(c2333nm);
            } catch (Throwable unused) {
            }
        }
    }

    public static void a(yo yoVar, C2308mm c2308mm, Hb hb) {
        String strOptStringOrNull;
        synchronized (yoVar) {
            strOptStringOrNull = JsonUtils.optStringOrNull(yoVar.f6420a.a(), "device_id");
        }
        if (TextUtils.isEmpty(strOptStringOrNull)) {
            if (!TextUtils.isEmpty(hb.d)) {
                yoVar.a(hb.d);
            }
            if (!TextUtils.isEmpty(hb.e)) {
                yoVar.b(hb.e);
            }
            if (TextUtils.isEmpty(hb.f5705a)) {
                return;
            }
            c2308mm.f6214a = hb.f5705a;
        }
    }

    /* JADX WARN: Code duplicated, block: B:13:0x0047 A[Catch: all -> 0x004c, TRY_ENTER, TRY_LEAVE, TryCatch #1 {all -> 0x004c, blocks: (B:5:0x001b, B:7:0x0022, B:9:0x0028, B:13:0x0047), top: B:21:0x001b }] */
    public final Hb a(SQLiteDatabase sQLiteDatabase) {
        Cursor cursorQuery;
        try {
            cursorQuery = sQLiteDatabase.query("binary_data", new String[]{"value"}, "data_key = ?", new String[]{this.b}, null, null, null);
            if (cursorQuery != null) {
                try {
                    if (cursorQuery.getCount() == 1 && cursorQuery.moveToFirst()) {
                        Hb hb = (Hb) MessageNano.mergeFrom(new Hb(), this.c.decrypt(cursorQuery.getBlob(cursorQuery.getColumnIndexOrThrow("value"))));
                        CloseableUtilsKt.closeSafely(cursorQuery);
                        return hb;
                    }
                    if (cursorQuery != null) {
                        cursorQuery.getCount();
                    }
                } catch (Throwable unused) {
                }
            } else if (cursorQuery != null) {
                cursorQuery.getCount();
            }
        } catch (Throwable unused2) {
            cursorQuery = null;
        }
        CloseableUtilsKt.closeSafely(cursorQuery);
        return null;
    }
}
