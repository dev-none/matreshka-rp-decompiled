package ru.rustore.sdk.metrics.internal;

import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class l1 {
    public static final PackageInfo a(PackageManager packageManager, String str) throws PackageManager.NameNotFoundException {
        if (Build.VERSION.SDK_INT >= 33) {
            PackageInfo packageInfo = packageManager.getPackageInfo(str, PackageManager.PackageInfoFlags.of(0L));
            Intrinsics.checkNotNullExpressionValue(packageInfo, "{\n        getPackageInfo…ageInfoFlags.of(0))\n    }");
            return packageInfo;
        }
        PackageInfo getPackageInfo = packageManager.getPackageInfo(str, 0);
        Intrinsics.checkNotNullExpressionValue(getPackageInfo, "getPackageInfo");
        return getPackageInfo;
    }
}
