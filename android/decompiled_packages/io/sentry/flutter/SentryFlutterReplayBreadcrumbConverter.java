package io.sentry.flutter;

import androidx.core.app.NotificationCompat;
import androidx.webkit.ProxyConfig;
import com.google.firebase.messaging.Constants;
import io.sentry.Breadcrumb;
import io.sentry.android.replay.DefaultReplayBreadcrumbConverter;
import io.sentry.protocol.Response;
import io.sentry.rrweb.RRWebBreadcrumbEvent;
import io.sentry.rrweb.RRWebEvent;
import io.sentry.rrweb.RRWebSpanEvent;
import java.util.Date;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SentryFlutterReplayBreadcrumbConverter.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0006\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\u0018\u0000 \u00152\u00020\u0001:\u0001\u0015B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0012\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0016J\u0010\u0010\b\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u0007H\u0002J\u0010\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\rH\u0002J\u0010\u0010\n\u001a\u00020\u000b2\u0006\u0010\u000e\u001a\u00020\u000fH\u0002J\u0012\u0010\u0010\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0002J\u0014\u0010\u0011\u001a\u0004\u0018\u00010\u00122\b\u0010\u0013\u001a\u0004\u0018\u00010\u0014H\u0002¨\u0006\u0016"}, d2 = {"Lio/sentry/flutter/SentryFlutterReplayBreadcrumbConverter;", "Lio/sentry/android/replay/DefaultReplayBreadcrumbConverter;", "<init>", "()V", "convert", "Lio/sentry/rrweb/RRWebEvent;", RRWebBreadcrumbEvent.EVENT_TAG, "Lio/sentry/Breadcrumb;", "newRRWebBreadcrumb", "Lio/sentry/rrweb/RRWebBreadcrumbEvent;", "doubleTimestamp", "", "date", "Ljava/util/Date;", "timestamp", "", "convertNetworkBreadcrumb", "getTouchPathMessage", "", "maybePath", "", "Companion", "sentry_flutter_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class SentryFlutterReplayBreadcrumbConverter extends DefaultReplayBreadcrumbConverter {
    private static final Map<String, String> supportedNetworkData = MapsKt.mapOf(TuplesKt.to(Response.JsonKeys.STATUS_CODE, "statusCode"), TuplesKt.to("method", "method"), TuplesKt.to("response_body_size", "responseBodySize"), TuplesKt.to("request_body_size", "requestBodySize"));

    private final double doubleTimestamp(long timestamp) {
        return timestamp / 1000.0d;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // io.sentry.android.replay.DefaultReplayBreadcrumbConverter, io.sentry.ReplayBreadcrumbConverter
    public RRWebEvent convert(Breadcrumb breadcrumb) {
        Intrinsics.checkNotNullParameter(breadcrumb, "breadcrumb");
        String category = breadcrumb.getCategory();
        RRWebBreadcrumbEvent rRWebBreadcrumbEventNewRRWebBreadcrumb = null;
        if (category == null) {
            return null;
        }
        switch (category.hashCode()) {
            case -2139323986:
                if (category.equals("ui.click")) {
                    RRWebBreadcrumbEvent rRWebBreadcrumbEventNewRRWebBreadcrumb2 = newRRWebBreadcrumb(breadcrumb);
                    rRWebBreadcrumbEventNewRRWebBreadcrumb2.setCategory("ui.tap");
                    rRWebBreadcrumbEventNewRRWebBreadcrumb2.setMessage(getTouchPathMessage(breadcrumb.getData().get("path")));
                    return rRWebBreadcrumbEventNewRRWebBreadcrumb2;
                }
                break;
            case -252308533:
                if (category.equals("sentry.event")) {
                    return null;
                }
                break;
            case -152761521:
                if (category.equals("sentry.transaction")) {
                    return null;
                }
                break;
            case 3213448:
                if (category.equals(ProxyConfig.MATCH_HTTP)) {
                    return convertNetworkBreadcrumb(breadcrumb);
                }
                break;
            case 1862666772:
                if (category.equals(NotificationCompat.CATEGORY_NAVIGATION)) {
                    if (breadcrumb.getData().containsKey("to") && (breadcrumb.getData().get("to") instanceof String)) {
                        rRWebBreadcrumbEventNewRRWebBreadcrumb = newRRWebBreadcrumb(breadcrumb);
                    }
                    return rRWebBreadcrumbEventNewRRWebBreadcrumb;
                }
                break;
        }
        RRWebEvent rRWebEventConvert = super.convert(breadcrumb);
        if ((rRWebEventConvert instanceof RRWebBreadcrumbEvent) && Intrinsics.areEqual(((RRWebBreadcrumbEvent) rRWebEventConvert).getCategory(), NotificationCompat.CATEGORY_NAVIGATION)) {
            return null;
        }
        return rRWebEventConvert;
    }

    private final RRWebBreadcrumbEvent newRRWebBreadcrumb(Breadcrumb breadcrumb) {
        RRWebBreadcrumbEvent rRWebBreadcrumbEvent = new RRWebBreadcrumbEvent();
        rRWebBreadcrumbEvent.setCategory(breadcrumb.getCategory());
        rRWebBreadcrumbEvent.setLevel(breadcrumb.getLevel());
        rRWebBreadcrumbEvent.setData(breadcrumb.getData());
        rRWebBreadcrumbEvent.setTimestamp(breadcrumb.getTimestamp().getTime());
        Date timestamp = breadcrumb.getTimestamp();
        Intrinsics.checkNotNullExpressionValue(timestamp, "getTimestamp(...)");
        rRWebBreadcrumbEvent.setBreadcrumbTimestamp(doubleTimestamp(timestamp));
        rRWebBreadcrumbEvent.setBreadcrumbType("default");
        return rRWebBreadcrumbEvent;
    }

    private final double doubleTimestamp(Date date) {
        return doubleTimestamp(date.getTime());
    }

    private final RRWebEvent convertNetworkBreadcrumb(Breadcrumb breadcrumb) {
        RRWebEvent rRWebEventConvert = super.convert(breadcrumb);
        if (rRWebEventConvert != null || !breadcrumb.getData().containsKey("start_timestamp") || !breadcrumb.getData().containsKey("end_timestamp")) {
            return rRWebEventConvert;
        }
        RRWebSpanEvent rRWebSpanEvent = new RRWebSpanEvent();
        rRWebSpanEvent.setOp("resource.http");
        rRWebSpanEvent.setTimestamp(breadcrumb.getTimestamp().getTime());
        Object obj = breadcrumb.getData().get("url");
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.String");
        rRWebSpanEvent.setDescription((String) obj);
        Object obj2 = breadcrumb.getData().get("start_timestamp");
        Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlin.Long");
        rRWebSpanEvent.setStartTimestamp(doubleTimestamp(((Long) obj2).longValue()));
        Object obj3 = breadcrumb.getData().get("end_timestamp");
        Intrinsics.checkNotNull(obj3, "null cannot be cast to non-null type kotlin.Long");
        rRWebSpanEvent.setEndTimestamp(doubleTimestamp(((Long) obj3).longValue()));
        Map<String, Object> data = breadcrumb.getData();
        Intrinsics.checkNotNullExpressionValue(data, "getData(...)");
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        for (Map.Entry<String, Object> entry : data.entrySet()) {
            if (supportedNetworkData.containsKey(entry.getKey())) {
                linkedHashMap.put(entry.getKey(), entry.getValue());
            }
        }
        LinkedHashMap linkedHashMap2 = linkedHashMap;
        LinkedHashMap linkedHashMap3 = new LinkedHashMap(MapsKt.mapCapacity(linkedHashMap2.size()));
        for (Map.Entry entry2 : linkedHashMap2.entrySet()) {
            linkedHashMap3.put(supportedNetworkData.get((String) entry2.getKey()), entry2.getValue());
        }
        rRWebSpanEvent.setData(linkedHashMap3);
        return rRWebSpanEvent;
    }

    private final String getTouchPathMessage(Object maybePath) {
        if (!(maybePath instanceof List)) {
            return null;
        }
        List list = (List) maybePath;
        if (list.isEmpty()) {
            return null;
        }
        StringBuilder sb = new StringBuilder();
        int iMin = Math.min(4, list.size());
        while (true) {
            iMin--;
            if (-1 < iMin) {
                Object obj = list.get(iMin);
                if (obj instanceof Map) {
                    Map map = (Map) obj;
                    Object obj2 = map.get("element");
                    if (obj2 == null) {
                        obj2 = "?";
                    }
                    sb.append(obj2);
                    Object obj3 = map.get(Constants.ScionAnalytics.PARAM_LABEL);
                    if (obj3 == null) {
                        obj3 = map.get("name");
                    }
                    if ((obj3 instanceof String) && ((CharSequence) obj3).length() > 0) {
                        String str = (String) obj3;
                        if (str.length() > 20) {
                            String strSubstring = str.substring(0, 17);
                            Intrinsics.checkNotNullExpressionValue(strSubstring, "substring(...)");
                            obj3 = strSubstring + "...";
                        }
                        sb.append("(");
                        sb.append((String) obj3);
                        sb.append(")");
                    }
                    if (iMin > 0) {
                        sb.append(" > ");
                    }
                }
            } else {
                return sb.toString();
            }
        }
    }
}
