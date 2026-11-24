package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ϟ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0348 extends SQLiteOpenHelper {
    public C0348(Context context, String str) {
        super(context, str, (SQLiteDatabase.CursorFactory) null, 1);
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onCreate(SQLiteDatabase sQLiteDatabase) {
        if (!sQLiteDatabase.isReadOnly()) {
            sQLiteDatabase.execSQL(StringFog.decrypt("QIItsaXUxc9/ogmfj/u6wnWpUbmm\n", "ENBs9uiV5ak=\n"));
        }
        sQLiteDatabase.execSQL(StringFog.decrypt("40uXZj6G+XDhW55iSoqfBO5Whgcvm5B39EryTBycqlDPa7cPAaagBPRcinNKk4tt7ViAfkqInH2M\nOaRGBuONYfhN+w==\n", "oBnSJ2rD2SQ=\n"));
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public final void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) {
    }
}
