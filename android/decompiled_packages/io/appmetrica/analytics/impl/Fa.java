package io.appmetrica.analytics.impl;

import android.content.ContentResolver;
import android.database.Cursor;
import android.net.Uri;
import android.text.TextUtils;
import java.util.concurrent.Callable;

/* JADX INFO: loaded from: classes7.dex */
public final class Fa implements Callable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Ga f5674a;

    public Fa(Ga ga) {
        this.f5674a = ga;
    }

    @Override // java.util.concurrent.Callable
    public final Object call() {
        Uri uri = Uri.parse("content://com.huawei.appmarket.commondata/item/5");
        ContentResolver contentResolver = this.f5674a.f5689a.getContentResolver();
        Ga ga = this.f5674a;
        ga.b = contentResolver.query(uri, null, null, new String[]{ga.f5689a.getPackageName()}, null);
        Cursor cursor = this.f5674a.b;
        if (cursor == null || !cursor.moveToFirst()) {
            return null;
        }
        String string = this.f5674a.b.getString(0);
        if (TextUtils.isEmpty(string)) {
            return null;
        }
        return new C2451sg(string, this.f5674a.b.getLong(1), this.f5674a.b.getLong(2), EnumC2426rg.d);
    }
}
