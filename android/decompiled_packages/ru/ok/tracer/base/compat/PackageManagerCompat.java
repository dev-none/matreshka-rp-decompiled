package ru.ok.tracer.base.compat;

import android.content.ComponentName;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ProviderInfo;
import android.os.Build;
import io.sentry.protocol.FeatureFlags;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: PackageManagerCompat.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000,\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u001a\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006\u001a\u0014\u0010\u0007\u001a\u0004\u0018\u00010\u0004*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u0004\u001a\u001a\u0010\b\u001a\u00020\t*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006\u001a\u001a\u0010\n\u001a\u00020\u000b*\u00020\u00022\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u0005\u001a\u00020\u0006¨\u0006\u000e"}, d2 = {"getApplicationInfoCompat", "Landroid/content/pm/ApplicationInfo;", "Landroid/content/pm/PackageManager;", "packageName", "", FeatureFlags.TYPE, "", "getInstallerPackageNameCompat", "getPackageInfoCompat", "Landroid/content/pm/PackageInfo;", "getProviderInfoCompat", "Landroid/content/pm/ProviderInfo;", "component", "Landroid/content/ComponentName;", "tracer-base_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class PackageManagerCompat {
    public static final ApplicationInfo getApplicationInfoCompat(PackageManager packageManager, String packageName, int i) throws PackageManager.NameNotFoundException {
        Intrinsics.checkNotNullParameter(packageManager, "<this>");
        Intrinsics.checkNotNullParameter(packageName, "packageName");
        if (Build.VERSION.SDK_INT >= 33) {
            ApplicationInfo applicationInfo = packageManager.getApplicationInfo(packageName, PackageManager.ApplicationInfoFlags.of(i));
            Intrinsics.checkNotNullExpressionValue(applicationInfo, "getApplicationInfo(packa…pplicationInfoFlags::of))");
            return applicationInfo;
        }
        ApplicationInfo applicationInfo2 = packageManager.getApplicationInfo(packageName, i);
        Intrinsics.checkNotNullExpressionValue(applicationInfo2, "getApplicationInfo(packageName, flags)");
        return applicationInfo2;
    }

    public static final PackageInfo getPackageInfoCompat(PackageManager packageManager, String packageName, int i) throws PackageManager.NameNotFoundException {
        Intrinsics.checkNotNullParameter(packageManager, "<this>");
        Intrinsics.checkNotNullParameter(packageName, "packageName");
        if (Build.VERSION.SDK_INT >= 33) {
            PackageInfo packageInfo = packageManager.getPackageInfo(packageName, PackageManager.PackageInfoFlags.of(i));
            Intrinsics.checkNotNullExpressionValue(packageInfo, "getPackageInfo(packageNa…er.PackageInfoFlags::of))");
            return packageInfo;
        }
        PackageInfo packageInfo2 = packageManager.getPackageInfo(packageName, i);
        Intrinsics.checkNotNullExpressionValue(packageInfo2, "getPackageInfo(packageName, flags)");
        return packageInfo2;
    }

    public static final ProviderInfo getProviderInfoCompat(PackageManager packageManager, ComponentName component, int i) throws PackageManager.NameNotFoundException {
        Intrinsics.checkNotNullParameter(packageManager, "<this>");
        Intrinsics.checkNotNullParameter(component, "component");
        if (Build.VERSION.SDK_INT >= 33) {
            ProviderInfo providerInfo = packageManager.getProviderInfo(component, PackageManager.ComponentInfoFlags.of(i));
            Intrinsics.checkNotNullExpressionValue(providerInfo, "getProviderInfo(componen….ComponentInfoFlags::of))");
            return providerInfo;
        }
        ProviderInfo providerInfo2 = packageManager.getProviderInfo(component, i);
        Intrinsics.checkNotNullExpressionValue(providerInfo2, "getProviderInfo(component, flags)");
        return providerInfo2;
    }

    public static final String getInstallerPackageNameCompat(PackageManager packageManager, String packageName) {
        Intrinsics.checkNotNullParameter(packageManager, "<this>");
        Intrinsics.checkNotNullParameter(packageName, "packageName");
        return Build.VERSION.SDK_INT >= 30 ? packageManager.getInstallSourceInfo(packageName).getInstallingPackageName() : packageManager.getInstallerPackageName(packageName);
    }
}
