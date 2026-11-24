package com.my.target.common;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.content.Context;
import android.content.pm.ProviderInfo;
import android.database.Cursor;
import android.net.Uri;
import com.my.target.f0;
import com.my.target.gb;

/* JADX INFO: loaded from: classes6.dex */
public final class MyTargetContentProvider extends ContentProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public boolean f4583a = true;

    public final /* synthetic */ void a() {
        try {
            Context context = getContext();
            Integer num = (Integer) context.getPackageManager().getApplicationInfo(context.getPackageName(), 128).metaData.get("com.my.target.autoInitMode");
            if (num == null || num.intValue() != 0) {
                gb.c("Start autoinitialization");
                MyTargetManager.initSdk(context);
            }
        } catch (Throwable th) {
            gb.c("Autoinitialization failed - " + th.getMessage());
        }
    }

    @Override // android.content.ContentProvider
    public void attachInfo(Context context, ProviderInfo providerInfo) {
        if (providerInfo == null) {
            return;
        }
        if ("com.my.target.mytargetcontentprovider".equals(providerInfo.authority)) {
            gb.c("Incorrect provider authority in manifest. Most likely due to a missing applicationId variable in application's build.gradle.");
            this.f4583a = false;
        }
        super.attachInfo(context, providerInfo);
    }

    @Override // android.content.ContentProvider
    public int delete(Uri uri, String str, String[] strArr) {
        return 0;
    }

    @Override // android.content.ContentProvider
    public String getType(Uri uri) {
        return null;
    }

    @Override // android.content.ContentProvider
    public Uri insert(Uri uri, ContentValues contentValues) {
        return null;
    }

    @Override // android.content.ContentProvider
    public boolean onCreate() {
        if (!this.f4583a) {
            return false;
        }
        f0.b(new Runnable() { // from class: com.my.target.common.MyTargetContentProvider$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a();
            }
        });
        return false;
    }

    @Override // android.content.ContentProvider
    public Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        return null;
    }

    @Override // android.content.ContentProvider
    public int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
        return 0;
    }
}
