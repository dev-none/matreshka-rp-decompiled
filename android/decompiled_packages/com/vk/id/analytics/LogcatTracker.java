package com.vk.id.analytics;

import android.util.Log;
import com.vk.id.common.InternalVKIDApi;
import io.flutter.plugins.firebase.auth.Constants;
import io.sentry.protocol.Message;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: LogcatTracker.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0007\u0018\u00002\u00020\u0001B\u0011\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J3\u0010\u0006\u001a\u00020\u00072\b\u0010\b\u001a\u0004\u0018\u00010\u00032\u0006\u0010\t\u001a\u00020\u00032\u0012\u0010\n\u001a\n\u0012\u0006\b\u0001\u0012\u00020\f0\u000b\"\u00020\fH\u0017¢\u0006\u0002\u0010\rR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"Lcom/vk/id/analytics/LogcatTracker;", "Lcom/vk/id/analytics/VKIDAnalytics$Tracker;", "tag", "", "<init>", "(Ljava/lang/String;)V", "trackEvent", "", Constants.ACCESS_TOKEN, "name", Message.JsonKeys.PARAMS, "", "Lcom/vk/id/analytics/VKIDAnalytics$EventParam;", "(Ljava/lang/String;Ljava/lang/String;[Lcom/vk/id/analytics/VKIDAnalytics$EventParam;)V", "analytics_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class LogcatTracker implements VKIDAnalytics.Tracker {
    private final String tag;

    /* JADX WARN: Multi-variable type inference failed */
    public LogcatTracker() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    @Override // com.vk.id.analytics.VKIDAnalytics.Tracker
    @InternalVKIDApi
    public void trackEvent(String str, VKIDAnalytics.EventParam... eventParamArr) {
        VKIDAnalytics.Tracker.DefaultImpls.trackEvent(this, str, eventParamArr);
    }

    public LogcatTracker(String tag) {
        Intrinsics.checkNotNullParameter(tag, "tag");
        this.tag = tag;
    }

    public /* synthetic */ LogcatTracker(String str, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? "VKID Analytics" : str);
    }

    @Override // com.vk.id.analytics.VKIDAnalytics.Tracker
    @InternalVKIDApi
    public void trackEvent(String accessToken, String name, VKIDAnalytics.EventParam... params) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(params, "params");
        int length = params.length;
        String str = "{ ";
        boolean z = true;
        int i = 0;
        while (i < length) {
            VKIDAnalytics.EventParam eventParam = params[i];
            if (!z) {
                str = str + ", ";
            }
            str = str + eventParam.getName();
            if (eventParam.getStrValue() != null) {
                str = (str + ": ") + eventParam.getStrValue();
            }
            if (eventParam.getIntValue() != null) {
                str = (str + ": ") + eventParam.getIntValue();
            }
            i++;
            z = false;
        }
        String str2 = str + " }";
        String str3 = accessToken == null ? "Anonymous: " : "Personalized: ";
        Log.d(this.tag, str3 + " " + name + " " + str2);
    }
}
