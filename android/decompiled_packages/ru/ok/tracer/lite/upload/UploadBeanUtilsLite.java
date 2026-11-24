package ru.ok.tracer.lite.upload;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import android.text.TextUtils;
import io.sentry.protocol.Device;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import kotlin.Deprecated;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;
import ru.ok.tracer.base.builduuid.BuildUuidUtils;
import ru.ok.tracer.base.compat.PackageInfoCompat;
import ru.ok.tracer.base.compat.PackageManagerCompat;
import ru.ok.tracer.base.datetime.DateTimeUtils;
import ru.ok.tracer.base.device.DeviceInfoUtils;
import ru.ok.tracer.base.deviceid.DeviceIdUtils;
import ru.ok.tracer.base.sessionuuuid.SessionUuidUtils;
import ru.ok.tracer.lite.TracerLibraryInfo;

/* JADX INFO: compiled from: UploadBeanUtilsLite.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000.\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\u001aB\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t2\u0010\b\u0002\u0010\n\u001a\n\u0012\u0004\u0012\u00020\t\u0018\u00010\u000bH\u0007\u001aH\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\f\u001a\u00020\t2\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t2\u0010\b\u0002\u0010\n\u001a\n\u0012\u0004\u0012\u00020\t\u0018\u00010\u000b\u001a\u0014\u0010\r\u001a\u0004\u0018\u00010\u00012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005H\u0002\u001a\u001c\u0010\u000e\u001a\u00020\u00012\b\u0010\u0006\u001a\u0004\u0018\u00010\u00072\b\u0010\b\u001a\u0004\u0018\u00010\tH\u0002\u001a\u001a\u0010\u000f\u001a\u0004\u0018\u00010\u00102\u000e\u0010\n\u001a\n\u0012\u0004\u0012\u00020\t\u0018\u00010\u000bH\u0002¨\u0006\u0011"}, d2 = {"composeLibUploadBean", "Lorg/json/JSONObject;", "context", "Landroid/content/Context;", "libraryInfo", "Lru/ok/tracer/lite/TracerLibraryInfo;", "date", "Ljava/util/Date;", "issueKey", "", "tags", "", "sessionUuid", "composeLibraryInfoJsonObject", "composeProperties", "composeTags", "Lorg/json/JSONArray;", "tracer-lite-commons_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class UploadBeanUtilsLite {
    public static /* synthetic */ JSONObject composeLibUploadBean$default(Context context, TracerLibraryInfo tracerLibraryInfo, Date date, String str, List list, int i, Object obj) {
        if ((i & 4) != 0) {
            date = null;
        }
        if ((i & 8) != 0) {
            str = null;
        }
        if ((i & 16) != 0) {
            list = null;
        }
        return composeLibUploadBean(context, tracerLibraryInfo, date, str, list);
    }

    @Deprecated(message = "Do not use")
    public static final JSONObject composeLibUploadBean(Context context, TracerLibraryInfo libraryInfo, Date date, String str, List<String> list) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(libraryInfo, "libraryInfo");
        return composeLibUploadBean(context, libraryInfo, SessionUuidUtils.getCurrentSessionUuid(), date, str, list);
    }

    public static /* synthetic */ JSONObject composeLibUploadBean$default(Context context, TracerLibraryInfo tracerLibraryInfo, String str, Date date, String str2, List list, int i, Object obj) {
        if ((i & 8) != 0) {
            date = null;
        }
        if ((i & 16) != 0) {
            str2 = null;
        }
        if ((i & 32) != 0) {
            list = null;
        }
        return composeLibUploadBean(context, tracerLibraryInfo, str, date, str2, list);
    }

    public static final JSONObject composeLibUploadBean(Context context, TracerLibraryInfo libraryInfo, String sessionUuid, Date date, String str, List<String> list) throws JSONException, PackageManager.NameNotFoundException {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(libraryInfo, "libraryInfo");
        Intrinsics.checkNotNullParameter(sessionUuid, "sessionUuid");
        PackageManager packageManager = context.getPackageManager();
        Intrinsics.checkNotNullExpressionValue(packageManager, "context.packageManager");
        String packageName = context.getPackageName();
        Intrinsics.checkNotNullExpressionValue(packageName, "context.packageName");
        PackageInfo packageInfoCompat = PackageManagerCompat.getPackageInfoCompat(packageManager, packageName, 0);
        String hostBuildUuid = BuildUuidUtils.getHostBuildUuid(context);
        JSONObject jSONObject = new JSONObject();
        jSONObject.put("packageName", packageInfoCompat.packageName);
        jSONObject.put("versionName", packageInfoCompat.versionName);
        jSONObject.put("versionCode", PackageInfoCompat.getLongVersionCodeCompat(packageInfoCompat));
        jSONObject.put("buildUuid", hostBuildUuid);
        jSONObject.put("sessionUuid", sessionUuid);
        jSONObject.put(Device.TYPE, Build.MODEL);
        jSONObject.put("deviceId", DeviceIdUtils.getDeviceId(context));
        jSONObject.put("vendor", Build.MANUFACTURER);
        jSONObject.put("osVersion", String.valueOf(Build.VERSION.SDK_INT));
        jSONObject.put("inBackground", !DeviceInfoUtils.isInForeground(context));
        jSONObject.put("connection", DeviceInfoUtils.getConnectionInfo(context));
        jSONObject.put("isRooted", DeviceInfoUtils.isRooted(context));
        jSONObject.put("properties", composeProperties(date, str));
        jSONObject.put("tags", composeTags(list));
        jSONObject.put("libraryInfo", composeLibraryInfoJsonObject(libraryInfo));
        return jSONObject;
    }

    private static final JSONObject composeLibraryInfoJsonObject(TracerLibraryInfo tracerLibraryInfo) throws JSONException {
        if (tracerLibraryInfo == null) {
            return null;
        }
        JSONObject jSONObject = new JSONObject();
        jSONObject.put("packageName", tracerLibraryInfo.getPackageName());
        jSONObject.put("versionName", tracerLibraryInfo.getVersionName());
        jSONObject.put("buildUuid", tracerLibraryInfo.getBuildUuid());
        jSONObject.put("environment", tracerLibraryInfo.getEnvironment());
        return jSONObject;
    }

    private static final JSONObject composeProperties(Date date, String str) throws JSONException {
        JSONObject jSONObject = new JSONObject();
        if (date != null) {
            jSONObject.put("date", DateTimeUtils.formatISO8601(date));
        }
        jSONObject.put("board", Build.BOARD);
        jSONObject.put(Device.JsonKeys.BRAND, Build.BRAND);
        jSONObject.put("cpuABI", TextUtils.join(", ", Build.SUPPORTED_ABIS));
        jSONObject.put(Device.TYPE, Build.DEVICE);
        jSONObject.put("manufacturer", Build.MANUFACTURER);
        jSONObject.put("model", Build.MODEL);
        jSONObject.put("cpuCount", String.valueOf(Runtime.getRuntime().availableProcessors()));
        jSONObject.put("osVersionSdkInt", String.valueOf(Build.VERSION.SDK_INT));
        jSONObject.put("osVersionRelease", Build.VERSION.RELEASE);
        if (str != null) {
            jSONObject.put("issueKey", str);
        }
        return jSONObject;
    }

    private static final JSONArray composeTags(List<String> list) {
        if (list == null) {
            return null;
        }
        JSONArray jSONArray = new JSONArray();
        Iterator<String> it = list.iterator();
        while (it.hasNext()) {
            jSONArray.put(it.next());
        }
        return jSONArray;
    }
}
