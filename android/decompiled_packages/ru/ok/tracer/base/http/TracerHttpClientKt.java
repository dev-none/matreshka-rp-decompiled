package ru.ok.tracer.base.http;

import android.content.Context;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import ru.ok.tracer.base.useragent.UserAgentUtils;

/* JADX INFO: compiled from: TracerHttpClient.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u001c\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\u001a\u0018\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u0001\u001a \u0010\u0007\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\u0006\u001a\u00020\u0001\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0086T¢\u0006\u0002\n\u0000¨\u0006\n"}, d2 = {"NO_TRAFFIC_STATS_TAG", "", "createTracerHttpClient", "Lru/ok/tracer/base/http/HttpClient;", "context", "Landroid/content/Context;", "trafficStatsTag", "createTracerLiteHttpClient", "libraryPackageName", "", "tracer-base_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class TracerHttpClientKt {
    public static final int NO_TRAFFIC_STATS_TAG = -1;

    public static /* synthetic */ HttpClient createTracerHttpClient$default(Context context, int i, int i2, Object obj) {
        if ((i2 & 2) != 0) {
            i = -1;
        }
        return createTracerHttpClient(context, i);
    }

    public static final HttpClient createTracerHttpClient(Context context, int i) {
        Intrinsics.checkNotNullParameter(context, "context");
        String packageName = context.getPackageName();
        Intrinsics.checkNotNullExpressionValue(packageName, "context.packageName");
        return new HttpUrlConnectionHttpClient(context, UserAgentUtils.createTracerUserAgentString(packageName, "1.2.2"), i, 0, 0, 24, null);
    }

    public static /* synthetic */ HttpClient createTracerLiteHttpClient$default(Context context, String str, int i, int i2, Object obj) {
        if ((i2 & 4) != 0) {
            i = -1;
        }
        return createTracerLiteHttpClient(context, str, i);
    }

    public static final HttpClient createTracerLiteHttpClient(Context context, String libraryPackageName, int i) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(libraryPackageName, "libraryPackageName");
        String packageName = context.getPackageName();
        Intrinsics.checkNotNullExpressionValue(packageName, "context.packageName");
        return new HttpUrlConnectionHttpClient(context, UserAgentUtils.createTracerLiteUserAgentString(packageName, libraryPackageName, "1.2.2"), i, 0, 0, 24, null);
    }
}
