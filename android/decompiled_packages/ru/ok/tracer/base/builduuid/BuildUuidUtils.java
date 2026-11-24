package ru.ok.tracer.base.builduuid;

import android.content.Context;
import kotlin.Deprecated;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import ru.ok.tracer.base.apptoken.AppTokenUtils;
import ru.ok.tracer.base.manifest.TracerManifestUtils;
import ru.ok.tracer.manifest.TracerManifest;

/* JADX INFO: compiled from: BuildUuidUtils.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u0012\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\u001a\u0010\u0010\u0003\u001a\u0004\u0018\u00010\u00012\u0006\u0010\u0004\u001a\u00020\u0005\u001a\u0012\u0010\u0006\u001a\u0004\u0018\u00010\u00012\u0006\u0010\u0004\u001a\u00020\u0005H\u0007\u001a\u0010\u0010\u0007\u001a\u0004\u0018\u00010\u00012\u0006\u0010\u0004\u001a\u00020\u0005\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0002\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000¨\u0006\b"}, d2 = {"RESOURCE_NAME_ENVIRONMENT", "", "RESOURCE_NAME_MAPPING_UUID", "getBuildEnvironment", "context", "Landroid/content/Context;", "getBuildUuid", "getHostBuildUuid", "tracer-base_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class BuildUuidUtils {
    private static final String RESOURCE_NAME_ENVIRONMENT = "tracer_environment";
    private static final String RESOURCE_NAME_MAPPING_UUID = "tracer_mapping_uuid";

    public static final String getHostBuildUuid(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        String packageName = context.getPackageName();
        Intrinsics.checkNotNullExpressionValue(packageName, "context.packageName");
        TracerManifest tracerManifestFindTracerManifest = TracerManifestUtils.findTracerManifest(packageName);
        if (tracerManifestFindTracerManifest != null) {
            return tracerManifestFindTracerManifest.buildUuid();
        }
        String stringOrNull$default = AppTokenUtils.getStringOrNull$default(context, RESOURCE_NAME_MAPPING_UUID, null, 2, null);
        if (stringOrNull$default == null || Intrinsics.areEqual(stringOrNull$default, "00000000-0000-0000-0000-000000000000")) {
            return null;
        }
        return stringOrNull$default;
    }

    public static final String getBuildEnvironment(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        return AppTokenUtils.getStringOrNull$default(context, RESOURCE_NAME_ENVIRONMENT, null, 2, null);
    }

    @Deprecated(message = "Do not use")
    public static final String getBuildUuid(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        String stringOrNull$default = AppTokenUtils.getStringOrNull$default(context, RESOURCE_NAME_MAPPING_UUID, null, 2, null);
        if (stringOrNull$default == null) {
            throw new IllegalStateException("Could not find build UUID. Is Tracer plugin configured properly?");
        }
        if (Intrinsics.areEqual(stringOrNull$default, "00000000-0000-0000-0000-000000000000")) {
            return null;
        }
        return stringOrNull$default;
    }
}
