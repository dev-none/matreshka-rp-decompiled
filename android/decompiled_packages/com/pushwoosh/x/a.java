package com.pushwoosh.x;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import com.pushwoosh.internal.platform.app.AppInfoProvider;
import com.pushwoosh.internal.utils.PWLog;
import java.io.File;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements AppInfoProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final WeakReference f5324a;

    public a(Context context) {
        this.f5324a = new WeakReference(context);
    }

    @Override // com.pushwoosh.internal.platform.app.AppInfoProvider
    public final ApplicationInfo getApplicationInfo() {
        try {
            if (((Context) this.f5324a.get()) == null) {
                return null;
            }
            return ((Context) this.f5324a.get()).getPackageManager().getApplicationInfo(((Context) this.f5324a.get()).getPackageName(), 128);
        } catch (Exception e) {
            PWLog.exception(e);
            return null;
        }
    }

    @Override // com.pushwoosh.internal.platform.app.AppInfoProvider
    public final CharSequence getApplicationLabel() {
        if (((Context) this.f5324a.get()) == null) {
            return null;
        }
        return ((Context) this.f5324a.get()).getPackageManager().getApplicationLabel(((Context) this.f5324a.get()).getApplicationInfo());
    }

    @Override // com.pushwoosh.internal.platform.app.AppInfoProvider
    public final File getExternalCacheDir() {
        if (((Context) this.f5324a.get()) == null) {
            return null;
        }
        return ((Context) this.f5324a.get()).getExternalCacheDir();
    }

    @Override // com.pushwoosh.internal.platform.app.AppInfoProvider
    public final String getInstallerPackageName() {
        if (((Context) this.f5324a.get()) == null) {
            return null;
        }
        return ((Context) this.f5324a.get()).getPackageManager().getInstallerPackageName(getPackageName());
    }

    @Override // com.pushwoosh.internal.platform.app.AppInfoProvider
    public final String getPackageName() {
        return ((Context) this.f5324a.get()) == null ? "" : ((Context) this.f5324a.get()).getPackageName();
    }

    @Override // com.pushwoosh.internal.platform.app.AppInfoProvider
    public final int getVersionCode() {
        try {
            if (((Context) this.f5324a.get()) == null) {
                return 0;
            }
            return ((Context) this.f5324a.get()).getPackageManager().getPackageInfo(getPackageName(), 0).versionCode;
        } catch (PackageManager.NameNotFoundException e) {
            PWLog.exception(e);
            return 0;
        }
    }

    @Override // com.pushwoosh.internal.platform.app.AppInfoProvider
    public final String getVersionName() {
        try {
            if (((Context) this.f5324a.get()) == null) {
                return null;
            }
            return ((Context) this.f5324a.get()).getPackageManager().getPackageInfo(getPackageName(), 0).versionName;
        } catch (PackageManager.NameNotFoundException e) {
            PWLog.exception(e);
            return null;
        }
    }
}
