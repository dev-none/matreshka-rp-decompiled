package com.vk.id.network.useragent;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.graphics.Point;
import android.os.Build;
import android.view.WindowManager;
import androidx.core.content.pm.PackageInfoCompat;
import com.google.firebase.remoteconfig.RemoteConfigConstants;
import java.util.Arrays;
import java.util.Locale;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;

/* JADX INFO: compiled from: UserAgentProvider.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\f\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\b\b\u0000\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\u001f\u001a\u00020\u00072\u0006\u0010 \u001a\u00020\u0007H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u001b\u0010\u0006\u001a\u00020\u00078@X\u0080\u0084\u0002¢\u0006\f\n\u0004\b\n\u0010\u000b\u001a\u0004\b\b\u0010\tR\u0014\u0010\f\u001a\u00020\u00078BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\r\u0010\tR\u0014\u0010\u000e\u001a\u00020\u00078BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u000f\u0010\tR\u001c\u0010\u0010\u001a\n \u0011*\u0004\u0018\u00010\u00070\u00078BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u0012\u0010\tR\u001d\u0010\u0013\u001a\u0004\u0018\u00010\u00148BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u0017\u0010\u000b\u001a\u0004\b\u0015\u0010\u0016R!\u0010\u0018\u001a\u00020\u00198BX\u0082\u0084\u0002¢\u0006\u0012\n\u0004\b\u001e\u0010\u000b\u0012\u0004\b\u001a\u0010\u001b\u001a\u0004\b\u001c\u0010\u001d¨\u0006!"}, d2 = {"Lcom/vk/id/network/useragent/UserAgentProvider;", "", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "userAgent", "", "getUserAgent$network_release", "()Ljava/lang/String;", "userAgent$delegate", "Lkotlin/Lazy;", RemoteConfigConstants.RequestFieldKey.APP_BUILD, "getAppBuild", RemoteConfigConstants.RequestFieldKey.APP_VERSION, "getAppVersion", "packageName", "kotlin.jvm.PlatformType", "getPackageName", "packageInfo", "Landroid/content/pm/PackageInfo;", "getPackageInfo", "()Landroid/content/pm/PackageInfo;", "packageInfo$delegate", "displaySize", "Landroid/graphics/Point;", "getDisplaySize$annotations", "()V", "getDisplaySize", "()Landroid/graphics/Point;", "displaySize$delegate", "toHumanReadableAscii", "string", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class UserAgentProvider {
    private final Context context;

    /* JADX INFO: renamed from: displaySize$delegate, reason: from kotlin metadata */
    private final Lazy displaySize;

    /* JADX INFO: renamed from: packageInfo$delegate, reason: from kotlin metadata */
    private final Lazy packageInfo;

    /* JADX INFO: renamed from: userAgent$delegate, reason: from kotlin metadata */
    private final Lazy userAgent;

    private static /* synthetic */ void getDisplaySize$annotations() {
    }

    public UserAgentProvider(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
        this.userAgent = LazyKt.lazy(new Function0() { // from class: com.vk.id.network.useragent.UserAgentProvider$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return UserAgentProvider.userAgent_delegate$lambda$0(this.f$0);
            }
        });
        this.packageInfo = LazyKt.lazy(new Function0() { // from class: com.vk.id.network.useragent.UserAgentProvider$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return UserAgentProvider.packageInfo_delegate$lambda$1(this.f$0);
            }
        });
        this.displaySize = LazyKt.lazy(new Function0() { // from class: com.vk.id.network.useragent.UserAgentProvider$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return UserAgentProvider.displaySize_delegate$lambda$3(this.f$0);
            }
        });
    }

    public final String getUserAgent$network_release() {
        return (String) this.userAgent.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final String userAgent_delegate$lambda$0(UserAgentProvider userAgentProvider) {
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        String str = String.format(Locale.US, "%s/%s-%s (Android %s; SDK %d; %s; %s %s; %s; %dx%d)", Arrays.copyOf(new Object[]{"VKID_2.7.0(" + userAgentProvider.getPackageName() + ")", userAgentProvider.getAppVersion(), userAgentProvider.getAppBuild(), Build.VERSION.RELEASE, Integer.valueOf(Build.VERSION.SDK_INT), Build.SUPPORTED_ABIS[0], Build.MANUFACTURER, Build.MODEL, System.getProperty("user.language"), Integer.valueOf(Math.max(userAgentProvider.getDisplaySize().x, userAgentProvider.getDisplaySize().y)), Integer.valueOf(Math.min(userAgentProvider.getDisplaySize().x, userAgentProvider.getDisplaySize().y))}, 11));
        Intrinsics.checkNotNullExpressionValue(str, "format(...)");
        return userAgentProvider.toHumanReadableAscii(str);
    }

    private final String getAppBuild() {
        PackageInfo packageInfo = getPackageInfo();
        String string = packageInfo != null ? Long.valueOf(PackageInfoCompat.getLongVersionCode(packageInfo)).toString() : null;
        return string == null ? "" : string;
    }

    private final String getAppVersion() {
        PackageInfo packageInfo = getPackageInfo();
        String str = packageInfo != null ? packageInfo.versionName : null;
        return str == null ? "" : str;
    }

    private final String getPackageName() {
        return this.context.getPackageName();
    }

    private final PackageInfo getPackageInfo() {
        return (PackageInfo) this.packageInfo.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final PackageInfo packageInfo_delegate$lambda$1(UserAgentProvider userAgentProvider) {
        try {
            return userAgentProvider.context.getPackageManager().getPackageInfo(userAgentProvider.context.getPackageName(), 0);
        } catch (Exception unused) {
            return null;
        }
    }

    private final Point getDisplaySize() {
        return (Point) this.displaySize.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Point displaySize_delegate$lambda$3(UserAgentProvider userAgentProvider) {
        Object systemService = userAgentProvider.context.getSystemService("window");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.view.WindowManager");
        Point point = new Point();
        ((WindowManager) systemService).getDefaultDisplay().getRealSize(point);
        return point;
    }

    private final String toHumanReadableAscii(String string) {
        StringBuilder sb = new StringBuilder();
        int iCharCount = 0;
        while (iCharCount < string.length()) {
            int iCodePointAt = string.codePointAt(iCharCount);
            if (32 <= iCodePointAt && iCodePointAt < 127) {
                sb.appendCodePoint(iCodePointAt);
            } else {
                sb.append('?');
            }
            iCharCount += Character.charCount(iCodePointAt);
        }
        String string2 = sb.toString();
        Intrinsics.checkNotNullExpressionValue(string2, "toString(...)");
        return string2;
    }
}
