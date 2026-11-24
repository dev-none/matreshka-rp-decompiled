package ru.ok.tracer.base.apptoken;

import android.content.Context;
import android.content.res.Resources;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import ru.ok.tracer.base.manifest.TracerManifestUtils;
import ru.ok.tracer.manifest.TracerManifest;

/* JADX INFO: compiled from: AppTokenUtils.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u001a\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0006\u001a\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u00012\u0006\u0010\u0005\u001a\u00020\u0006\u001a\u0010\u0010\u0007\u001a\u0004\u0018\u00010\u00012\u0006\u0010\u0005\u001a\u00020\u0006\u001a\u000e\u0010\b\u001a\u00020\t2\u0006\u0010\u0005\u001a\u00020\u0006\u001a%\u0010\n\u001a\u0004\u0018\u00010\t*\u00020\u00062\u0006\u0010\u000b\u001a\u00020\u00012\b\b\u0002\u0010\f\u001a\u00020\u0001H\u0001¢\u0006\u0002\u0010\r\u001a \u0010\u000e\u001a\u0004\u0018\u00010\u0001*\u00020\u00062\u0006\u0010\u000b\u001a\u00020\u00012\b\b\u0002\u0010\f\u001a\u00020\u0001H\u0001\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0002\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0003\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u000f"}, d2 = {"NO_APP_TOKEN", "", "RESOURCE_NAME_APP_TOKEN", "RESOURCE_NAME_IS_DISABLED", "getAppToken", "context", "Landroid/content/Context;", "getHostAppToken", "isTracerBuildDisabled", "", "getBooleanOrNull", "name", "defPackage", "(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Boolean;", "getStringOrNull", "tracer-base_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class AppTokenUtils {
    private static final String NO_APP_TOKEN = "0000000000000000000000000000000000000000000";
    private static final String RESOURCE_NAME_APP_TOKEN = "tracer_app_token";
    private static final String RESOURCE_NAME_IS_DISABLED = "tracer_is_disabled";

    public static final boolean isTracerBuildDisabled(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        Boolean booleanOrNull$default = getBooleanOrNull$default(context, RESOURCE_NAME_IS_DISABLED, null, 2, null);
        if (booleanOrNull$default != null) {
            return booleanOrNull$default.booleanValue();
        }
        return false;
    }

    public static final String getHostAppToken(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        try {
            Class<?> cls = Class.forName("ru.ok.tracer.Tracer");
            return (String) cls.getMethod("getAppToken", null).invoke(cls.getField("INSTANCE").get(null), null);
        } catch (Exception unused) {
            String packageName = context.getPackageName();
            Intrinsics.checkNotNullExpressionValue(packageName, "context.packageName");
            TracerManifest tracerManifestFindTracerManifest = TracerManifestUtils.findTracerManifest(packageName);
            if (tracerManifestFindTracerManifest != null) {
                return tracerManifestFindTracerManifest.appToken();
            }
            String stringOrNull$default = getStringOrNull$default(context, RESOURCE_NAME_APP_TOKEN, null, 2, null);
            if (stringOrNull$default == null || Intrinsics.areEqual(stringOrNull$default, NO_APP_TOKEN)) {
                return null;
            }
            return stringOrNull$default;
        }
    }

    public static final String getAppToken(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        String stringOrNull$default = getStringOrNull$default(context, RESOURCE_NAME_APP_TOKEN, null, 2, null);
        if (stringOrNull$default == null) {
            throw new IllegalStateException("Could not find Tracer's appToken. Is Tracer plugin configured properly?");
        }
        if (Intrinsics.areEqual(stringOrNull$default, NO_APP_TOKEN)) {
            return null;
        }
        return stringOrNull$default;
    }

    public static /* synthetic */ String getStringOrNull$default(Context context, String str, String packageName, int i, Object obj) throws Resources.NotFoundException {
        if ((i & 2) != 0) {
            packageName = context.getPackageName();
            Intrinsics.checkNotNullExpressionValue(packageName, "packageName");
        }
        return getStringOrNull(context, str, packageName);
    }

    public static final String getStringOrNull(Context context, String name, String defPackage) throws Resources.NotFoundException {
        Intrinsics.checkNotNullParameter(context, "<this>");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(defPackage, "defPackage");
        Resources resources = context.getResources();
        int identifier = resources.getIdentifier(name, "string", defPackage);
        if (identifier == 0) {
            return null;
        }
        return resources.getString(identifier);
    }

    public static /* synthetic */ Boolean getBooleanOrNull$default(Context context, String str, String packageName, int i, Object obj) throws Resources.NotFoundException {
        if ((i & 2) != 0) {
            packageName = context.getPackageName();
            Intrinsics.checkNotNullExpressionValue(packageName, "packageName");
        }
        return getBooleanOrNull(context, str, packageName);
    }

    public static final Boolean getBooleanOrNull(Context context, String name, String defPackage) throws Resources.NotFoundException {
        Intrinsics.checkNotNullParameter(context, "<this>");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(defPackage, "defPackage");
        Resources resources = context.getResources();
        int identifier = resources.getIdentifier(name, "bool", defPackage);
        if (identifier == 0) {
            return null;
        }
        return Boolean.valueOf(resources.getBoolean(identifier));
    }
}
