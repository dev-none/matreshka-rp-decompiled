package com.vk.id.internal.context;

import android.content.Intent;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import io.sentry.protocol.FeatureFlags;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AndroidPackageManager.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0001\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u001e\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\fH\u0017J\u001e\u0010\r\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\fH\u0017J\u001a\u0010\u000e\u001a\u0004\u0018\u00010\b2\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\fH\u0016J\u0018\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u000b\u001a\u00020\fH\u0016J\u001a\u0010\u0013\u001a\u0004\u0018\u00010\b2\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\fH\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0014"}, d2 = {"Lcom/vk/id/internal/context/AndroidPackageManager;", "Lcom/vk/id/internal/context/InternalVKIDPackageManager;", "packageManager", "Landroid/content/pm/PackageManager;", "<init>", "(Landroid/content/pm/PackageManager;)V", "queryIntentServices", "", "Landroid/content/pm/ResolveInfo;", "intent", "Landroid/content/Intent;", FeatureFlags.TYPE, "", "queryIntentActivities", "resolveActivity", "getPackageInfo", "Landroid/content/pm/PackageInfo;", "packageName", "", "resolveService", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class AndroidPackageManager implements InternalVKIDPackageManager {
    public static final int $stable = 8;
    private final PackageManager packageManager;

    public AndroidPackageManager(PackageManager packageManager) {
        Intrinsics.checkNotNullParameter(packageManager, "packageManager");
        this.packageManager = packageManager;
    }

    @Override // com.vk.id.internal.context.InternalVKIDPackageManager
    public List<ResolveInfo> queryIntentServices(Intent intent, int flags) {
        Intrinsics.checkNotNullParameter(intent, "intent");
        List<ResolveInfo> listQueryIntentServices = this.packageManager.queryIntentServices(intent, flags);
        Intrinsics.checkNotNullExpressionValue(listQueryIntentServices, "queryIntentServices(...)");
        return listQueryIntentServices;
    }

    @Override // com.vk.id.internal.context.InternalVKIDPackageManager
    public List<ResolveInfo> queryIntentActivities(Intent intent, int flags) {
        Intrinsics.checkNotNullParameter(intent, "intent");
        List<ResolveInfo> listQueryIntentActivities = this.packageManager.queryIntentActivities(intent, flags);
        Intrinsics.checkNotNullExpressionValue(listQueryIntentActivities, "queryIntentActivities(...)");
        return listQueryIntentActivities;
    }

    @Override // com.vk.id.internal.context.InternalVKIDPackageManager
    public ResolveInfo resolveActivity(Intent intent, int flags) {
        Intrinsics.checkNotNullParameter(intent, "intent");
        return this.packageManager.resolveActivity(intent, flags);
    }

    @Override // com.vk.id.internal.context.InternalVKIDPackageManager
    public PackageInfo getPackageInfo(String packageName, int flags) throws PackageManager.NameNotFoundException {
        Intrinsics.checkNotNullParameter(packageName, "packageName");
        PackageInfo packageInfo = this.packageManager.getPackageInfo(packageName, flags);
        Intrinsics.checkNotNullExpressionValue(packageInfo, "getPackageInfo(...)");
        return packageInfo;
    }

    @Override // com.vk.id.internal.context.InternalVKIDPackageManager
    public ResolveInfo resolveService(Intent intent, int flags) {
        Intrinsics.checkNotNullParameter(intent, "intent");
        return this.packageManager.resolveService(intent, flags);
    }
}
