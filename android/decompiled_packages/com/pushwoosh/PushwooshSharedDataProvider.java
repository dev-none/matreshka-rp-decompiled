package com.pushwoosh;

import android.content.ContentProvider;
import android.content.ContentValues;
import android.content.UriMatcher;
import android.database.Cursor;
import android.database.MatrixCursor;
import android.net.Uri;
import com.pushwoosh.d0.g;
import com.pushwoosh.internal.platform.utils.GeneralUtils;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.internal.utils.security.CallingPackageChecker;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public class PushwooshSharedDataProvider extends ContentProvider {
    private MatrixCursor a(Uri uri, String str) {
        if (getContext() == null) {
            return null;
        }
        CallingPackageChecker.checkIfTrustedPackage(this, ((com.pushwoosh.a.a) PushwooshPlatform.getInstance().getConfig()).h);
        UriMatcher uriMatcher = new UriMatcher(-1);
        uriMatcher.addURI(getContext().getApplicationContext().getPackageName() + "." + getClass().getSimpleName(), "hwid", 1);
        if (uriMatcher.match(uri) != 1) {
            return null;
        }
        MatrixCursor matrixCursor = new MatrixCursor(new String[]{"hwid"});
        if (str != null) {
            if (str.compareTo(GeneralUtils.md5(getContext().getApplicationContext().getPackageName())) < 0) {
                matrixCursor.addRow(new String[]{g.b.a()});
                return matrixCursor;
            }
            com.pushwoosh.d0.a aVar = g.f5059a;
            matrixCursor.addRow(new String[]{RepositoryModule.getRegistrationPreferences().deviceId().get()});
        }
        return matrixCursor;
    }

    @Override // android.content.ContentProvider
    public final int delete(Uri uri, String str, String[] strArr) {
        return 0;
    }

    @Override // android.content.ContentProvider
    public final String getType(Uri uri) {
        return null;
    }

    @Override // android.content.ContentProvider
    public final Uri insert(Uri uri, ContentValues contentValues) {
        return null;
    }

    @Override // android.content.ContentProvider
    public final boolean onCreate() {
        return true;
    }

    @Override // android.content.ContentProvider
    public final Cursor query(Uri uri, String[] strArr, String str, String[] strArr2, String str2) {
        try {
            return a(uri, str2);
        } catch (SecurityException e) {
            throw e;
        } catch (Exception e2) {
            PWLog.error("Failed to query shared data", e2);
            return null;
        }
    }

    @Override // android.content.ContentProvider
    public final int update(Uri uri, ContentValues contentValues, String str, String[] strArr) {
        return 0;
    }
}
