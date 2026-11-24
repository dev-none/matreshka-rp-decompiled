package ru.ok.tracer.base.device;

import android.app.ActivityManager;
import android.content.Context;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkCapabilities;
import android.os.Build;
import android.provider.Settings;
import android.telephony.TelephonyManager;
import io.sentry.protocol.App;
import java.io.File;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: DeviceInfoUtils.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000 \n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0011\n\u0002\b\u0002\u001a\u0010\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0003\u001a\u0012\u0010\u0004\u001a\u0004\u0018\u00010\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0007\u001a\u0012\u0010\u0005\u001a\u0004\u0018\u00010\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0003\u001a\u0010\u0010\u0006\u001a\u00020\u00072\u0006\u0010\u0002\u001a\u00020\u0003H\u0007\u001a\u000e\u0010\b\u001a\u00020\u00072\u0006\u0010\u0002\u001a\u00020\u0003\u001a\u000e\u0010\t\u001a\u00020\u00072\u0006\u0010\u0002\u001a\u00020\u0003\u001a%\u0010\n\u001a\u00020\u0007*\u00020\u00032\u0012\u0010\u000b\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00010\f\"\u00020\u0001H\u0003¢\u0006\u0002\u0010\r¨\u0006\u000e"}, d2 = {"getCellularNetworkSubtype", "", "context", "Landroid/content/Context;", "getConnectionInfo", "getConnectionString", "isEmulator", "", "isInForeground", "isRooted", "hasAnyPermission", App.JsonKeys.APP_PERMISSIONS, "", "(Landroid/content/Context;[Ljava/lang/String;)Z", "tracer-base_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class DeviceInfoUtils {
    public static final String getConnectionInfo(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        try {
            return getConnectionString(context);
        } catch (Exception unused) {
            return "UNKNOWN";
        }
    }

    private static final String getConnectionString(Context context) {
        Object systemService = context.getSystemService("connectivity");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.net.ConnectivityManager");
        ConnectivityManager connectivityManager = (ConnectivityManager) systemService;
        Network activeNetwork = connectivityManager.getActiveNetwork();
        if (activeNetwork == null) {
            return "NONE";
        }
        NetworkCapabilities networkCapabilities = connectivityManager.getNetworkCapabilities(activeNetwork);
        if (networkCapabilities == null) {
            return "UNKNOWN";
        }
        if (networkCapabilities.hasTransport(1)) {
            return "WIFI";
        }
        if (networkCapabilities.hasTransport(3)) {
            return "ETHERNET";
        }
        if (networkCapabilities.hasTransport(2)) {
            return "BLUETOOTH";
        }
        if (networkCapabilities.hasTransport(4)) {
            return "VPN";
        }
        if (networkCapabilities.hasTransport(0)) {
            return Build.VERSION.SDK_INT < 30 ? "CELLULAR" : getCellularNetworkSubtype(context);
        }
        return "UNKNOWN";
    }

    private static final String getCellularNetworkSubtype(Context context) {
        if (!hasAnyPermission(context, "android.permission.READ_PHONE_STATE", "android.permission.READ_BASIC_PHONE_STATE")) {
            return "CELLULAR";
        }
        Object systemService = context.getSystemService("phone");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.telephony.TelephonyManager");
        switch (((TelephonyManager) systemService).getDataNetworkType()) {
            case 1:
            case 2:
            case 4:
            case 7:
            case 11:
            case 16:
                return "2G";
            case 3:
            case 5:
            case 6:
            case 8:
            case 9:
            case 10:
            case 12:
            case 14:
            case 15:
            case 17:
                return "3G";
            case 13:
                return "4G";
            case 18:
                return "WIFI";
            case 19:
            default:
                return "CELLULAR";
            case 20:
                return "5G";
        }
    }

    public static final boolean isInForeground(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        ActivityManager.RunningAppProcessInfo runningAppProcessInfo = new ActivityManager.RunningAppProcessInfo();
        ActivityManager.getMyMemoryState(runningAppProcessInfo);
        return runningAppProcessInfo.importance == 100 || runningAppProcessInfo.importance == 200;
    }

    public static final boolean isRooted(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        boolean zIsEmulator = isEmulator(context);
        String str = Build.TAGS;
        if ((zIsEmulator || str == null || !StringsKt.contains$default((CharSequence) str, (CharSequence) "test-keys", false, 2, (Object) null)) && !new File("/system/app/Superuser.apk").exists()) {
            return !zIsEmulator && new File("/system/xbin/su").exists();
        }
        return true;
    }

    public static final boolean isEmulator(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        return Intrinsics.areEqual("sdk", Build.PRODUCT) || Intrinsics.areEqual("google_sdk", Build.PRODUCT) || Settings.Secure.getString(context.getContentResolver(), "android_id") == null;
    }

    private static final boolean hasAnyPermission(Context context, String... strArr) {
        for (String str : strArr) {
            if (context.checkSelfPermission(str) == 0) {
                return true;
            }
        }
        return false;
    }
}
