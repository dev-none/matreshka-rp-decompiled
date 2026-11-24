package ru.ok.tracer.base.useragent;

import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: UserAgentUtils.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0006\u001a \u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u00012\u0006\u0010\u0004\u001a\u00020\u0001H\u0000\u001a\u0018\u0010\u0005\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00012\u0006\u0010\u0004\u001a\u00020\u0001H\u0000\u001a\n\u0010\u0006\u001a\u0004\u0018\u00010\u0001H\u0002¨\u0006\u0007"}, d2 = {"createTracerLiteUserAgentString", "", "applicationId", "libraryPackageName", "tracerSdkVersion", "createTracerUserAgentString", "getSystemUserAgentString", "tracer-base_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class UserAgentUtils {
    public static final String createTracerUserAgentString(String applicationId, String tracerSdkVersion) {
        Intrinsics.checkNotNullParameter(applicationId, "applicationId");
        Intrinsics.checkNotNullParameter(tracerSdkVersion, "tracerSdkVersion");
        String str = "TracerSDK/" + tracerSdkVersion + " App/" + applicationId + " " + getSystemUserAgentString();
        Intrinsics.checkNotNullExpressionValue(str, "StringBuilder().apply(builderAction).toString()");
        return str;
    }

    public static final String createTracerLiteUserAgentString(String applicationId, String libraryPackageName, String tracerSdkVersion) {
        Intrinsics.checkNotNullParameter(applicationId, "applicationId");
        Intrinsics.checkNotNullParameter(libraryPackageName, "libraryPackageName");
        Intrinsics.checkNotNullParameter(tracerSdkVersion, "tracerSdkVersion");
        String str = "TracerSDK/" + tracerSdkVersion + " Lib/" + libraryPackageName + " App/" + applicationId + " " + getSystemUserAgentString();
        Intrinsics.checkNotNullExpressionValue(str, "StringBuilder().apply(builderAction).toString()");
        return str;
    }

    private static final String getSystemUserAgentString() {
        String property = System.getProperty("http.agent");
        return property != null ? property : "Dalvik/Unknown (Linux; U; Android Unknown; Device Unknown Build/Unknown)";
    }
}
