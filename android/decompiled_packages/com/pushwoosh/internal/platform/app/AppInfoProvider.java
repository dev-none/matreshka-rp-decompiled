package com.pushwoosh.internal.platform.app;

import android.content.pm.ApplicationInfo;
import java.io.File;

/* JADX INFO: loaded from: classes6.dex */
public interface AppInfoProvider {
    ApplicationInfo getApplicationInfo();

    CharSequence getApplicationLabel();

    File getExternalCacheDir();

    String getInstallerPackageName();

    String getPackageName();

    int getVersionCode();

    String getVersionName();
}
