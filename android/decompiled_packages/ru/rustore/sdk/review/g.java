package ru.rustore.sdk.review;

import io.flutter.plugins.firebase.analytics.Constants;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public final class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Map<String, String> f6700a;

    public g(Map eventData) {
        Intrinsics.checkNotNullParameter("sdkInfo", Constants.EVENT_NAME);
        Intrinsics.checkNotNullParameter(eventData, "eventData");
        this.f6700a = eventData;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof g) {
            return Intrinsics.areEqual("sdkInfo", "sdkInfo") && Intrinsics.areEqual(this.f6700a, ((g) obj).f6700a);
        }
        return false;
    }

    public final int hashCode() {
        return this.f6700a.hashCode() + 249895160;
    }

    public final String toString() {
        return "ReviewAnalyticsEvent(eventName=sdkInfo, eventData=" + this.f6700a + ')';
    }
}
