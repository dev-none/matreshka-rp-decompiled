package com.pushwoosh;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.database.Cursor;
import android.net.Uri;
import android.util.Log;
import com.pushwoosh.internal.checker.Checker;
import com.pushwoosh.internal.utils.security.CallingPackageChecker;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public class PushwooshInitProvider extends ContentProvider {
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
        try {
            Iterator it = com.pushwoosh.t.a.b.f5312a.iterator();
            while (true) {
                boolean z = true;
                while (true) {
                    if (!it.hasNext()) {
                        PushwooshInitializer.init(getContext());
                        return true;
                    }
                    Checker checker = (Checker) it.next();
                    if (!z || !checker.check()) {
                        z = false;
                    }
                }
            }
        } catch (Exception e) {
            Log.e("PushwooshInitProvider", "can't initialize pushwoosh sdk", e);
            return false;
        }
    }

    @Override // android.content.ContentProvider
    public Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        CallingPackageChecker.checkCallingPackage(this);
        return null;
    }

    @Override // android.content.ContentProvider
    public int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
        return 0;
    }
}
