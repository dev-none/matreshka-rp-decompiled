package com.vk.id.analytics;

import com.my.target.common.menu.MenuActionType;
import com.vk.id.common.InternalVKIDApi;
import io.flutter.plugins.firebase.auth.Constants;
import io.sentry.protocol.Message;
import io.sentry.protocol.Request;
import java.util.ArrayList;
import java.util.Arrays;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.JvmStatic;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDAnalytics.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0006\b\u0007\u0018\u0000 \u00062\u00020\u0001:\u0003\u0004\u0005\u0006B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0007"}, d2 = {"Lcom/vk/id/analytics/VKIDAnalytics;", "", "<init>", "()V", "Tracker", "EventParam", "Trackers", "analytics_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKIDAnalytics {

    /* JADX INFO: renamed from: Trackers, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static final ArrayList<Tracker> trackers = new ArrayList<>();
    private static volatile Tracker[] trackersArray = new Tracker[0];

    @JvmStatic
    @InternalVKIDApi
    public static final void addTracker(Tracker tracker) {
        INSTANCE.addTracker(tracker);
    }

    @JvmStatic
    @InternalVKIDApi
    public static final void removeTracker(Tracker tracker) {
        INSTANCE.removeTracker(tracker);
    }

    @JvmStatic
    @InternalVKIDApi
    public static void trackEvent(String str, String str2, EventParam... eventParamArr) {
        INSTANCE.trackEvent(str, str2, eventParamArr);
    }

    private VKIDAnalytics() {
    }

    /* JADX INFO: compiled from: VKIDAnalytics.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0003\bg\u0018\u00002\u00020\u0001J3\u0010\u0002\u001a\u00020\u00032\b\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0012\u0010\u0007\u001a\n\u0012\u0006\b\u0001\u0012\u00020\t0\b\"\u00020\tH'¢\u0006\u0002\u0010\nJ)\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0006\u001a\u00020\u00052\u0012\u0010\u0007\u001a\n\u0012\u0006\b\u0001\u0012\u00020\t0\b\"\u00020\tH\u0017¢\u0006\u0002\u0010\u000b¨\u0006\f"}, d2 = {"Lcom/vk/id/analytics/VKIDAnalytics$Tracker;", "", "trackEvent", "", Constants.ACCESS_TOKEN, "", "name", Message.JsonKeys.PARAMS, "", "Lcom/vk/id/analytics/VKIDAnalytics$EventParam;", "(Ljava/lang/String;Ljava/lang/String;[Lcom/vk/id/analytics/VKIDAnalytics$EventParam;)V", "(Ljava/lang/String;[Lcom/vk/id/analytics/VKIDAnalytics$EventParam;)V", "analytics_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public interface Tracker {
        @InternalVKIDApi
        void trackEvent(String accessToken, String name, EventParam... params);

        @InternalVKIDApi
        void trackEvent(String name, EventParam... params);

        /* JADX INFO: compiled from: VKIDAnalytics.kt */
        @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
        public static final class DefaultImpls {
            @InternalVKIDApi
            public static void trackEvent(Tracker tracker, String name, EventParam... params) {
                Intrinsics.checkNotNullParameter(name, "name");
                Intrinsics.checkNotNullParameter(params, "params");
                tracker.trackEvent(null, name, (EventParam[]) Arrays.copyOf(params, params.length));
            }
        }
    }

    /* JADX INFO: compiled from: VKIDAnalytics.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u000e\n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0087\b\u0018\u00002\u00020\u0001B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006¢\u0006\u0004\b\u0007\u0010\bJ\t\u0010\u000f\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u0010\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0010\u0010\u0011\u001a\u0004\u0018\u00010\u0006HÆ\u0003¢\u0006\u0002\u0010\rJ0\u0010\u0012\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006HÆ\u0001¢\u0006\u0002\u0010\u0013J\u0013\u0010\u0014\u001a\u00020\u00152\b\u0010\u0016\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0017\u001a\u00020\u0006HÖ\u0001J\t\u0010\u0018\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\nR\u0015\u0010\u0005\u001a\u0004\u0018\u00010\u0006¢\u0006\n\n\u0002\u0010\u000e\u001a\u0004\b\f\u0010\r¨\u0006\u0019"}, d2 = {"Lcom/vk/id/analytics/VKIDAnalytics$EventParam;", "", "name", "", "strValue", "intValue", "", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;)V", "getName", "()Ljava/lang/String;", "getStrValue", "getIntValue", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "component1", "component2", "component3", MenuActionType.COPY, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;)Lcom/vk/id/analytics/VKIDAnalytics$EventParam;", "equals", "", Request.JsonKeys.OTHER, "hashCode", "toString", "analytics_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final /* data */ class EventParam {
        private final Integer intValue;
        private final String name;
        private final String strValue;

        public static /* synthetic */ EventParam copy$default(EventParam eventParam, String str, String str2, Integer num, int i, Object obj) {
            if ((i & 1) != 0) {
                str = eventParam.name;
            }
            if ((i & 2) != 0) {
                str2 = eventParam.strValue;
            }
            if ((i & 4) != 0) {
                num = eventParam.intValue;
            }
            return eventParam.copy(str, str2, num);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final String getName() {
            return this.name;
        }

        /* JADX INFO: renamed from: component2, reason: from getter */
        public final String getStrValue() {
            return this.strValue;
        }

        /* JADX INFO: renamed from: component3, reason: from getter */
        public final Integer getIntValue() {
            return this.intValue;
        }

        public final EventParam copy(String name, String strValue, Integer intValue) {
            Intrinsics.checkNotNullParameter(name, "name");
            return new EventParam(name, strValue, intValue);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof EventParam)) {
                return false;
            }
            EventParam eventParam = (EventParam) other;
            return Intrinsics.areEqual(this.name, eventParam.name) && Intrinsics.areEqual(this.strValue, eventParam.strValue) && Intrinsics.areEqual(this.intValue, eventParam.intValue);
        }

        public int hashCode() {
            int iHashCode = this.name.hashCode() * 31;
            String str = this.strValue;
            int iHashCode2 = (iHashCode + (str == null ? 0 : str.hashCode())) * 31;
            Integer num = this.intValue;
            return iHashCode2 + (num != null ? num.hashCode() : 0);
        }

        public String toString() {
            return "EventParam(name=" + this.name + ", strValue=" + this.strValue + ", intValue=" + this.intValue + ")";
        }

        public EventParam(String name, String str, Integer num) {
            Intrinsics.checkNotNullParameter(name, "name");
            this.name = name;
            this.strValue = str;
            this.intValue = num;
        }

        public /* synthetic */ EventParam(String str, String str2, Integer num, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this(str, (i & 2) != 0 ? null : str2, (i & 4) != 0 ? null : num);
        }

        public final String getName() {
            return this.name;
        }

        public final String getStrValue() {
            return this.strValue;
        }

        public final Integer getIntValue() {
            return this.intValue;
        }
    }

    /* JADX INFO: renamed from: com.vk.id.analytics.VKIDAnalytics$Trackers, reason: from kotlin metadata */
    /* JADX INFO: compiled from: VKIDAnalytics.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0087\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J3\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u00072\u0006\u0010\b\u001a\u00020\u00072\u0012\u0010\t\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u000b0\n\"\u00020\u000bH\u0017¢\u0006\u0002\u0010\fJ\u0010\u0010\r\u001a\u00020\u00052\u0006\u0010\u000e\u001a\u00020\u0001H\u0007J\u0010\u0010\u000f\u001a\u00020\u00052\u0006\u0010\u000e\u001a\u00020\u0001H\u0007R\u001e\u0010\u0010\u001a\u0012\u0012\u0004\u0012\u00020\u00010\u0011j\b\u0012\u0004\u0012\u00020\u0001`\u0012X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00010\nX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u0014¨\u0006\u0015"}, d2 = {"Lcom/vk/id/analytics/VKIDAnalytics$Trackers;", "Lcom/vk/id/analytics/VKIDAnalytics$Tracker;", "<init>", "()V", "trackEvent", "", Constants.ACCESS_TOKEN, "", "name", Message.JsonKeys.PARAMS, "", "Lcom/vk/id/analytics/VKIDAnalytics$EventParam;", "(Ljava/lang/String;Ljava/lang/String;[Lcom/vk/id/analytics/VKIDAnalytics$EventParam;)V", "addTracker", "tracker", "removeTracker", com.adjust.sdk.Constants.ADJUST_PREINSTALL_CONTENT_URI_PATH, "Ljava/util/ArrayList;", "Lkotlin/collections/ArrayList;", "trackersArray", "[Lcom/vk/id/analytics/VKIDAnalytics$Tracker;", "analytics_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion implements Tracker {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        @Override // com.vk.id.analytics.VKIDAnalytics.Tracker
        @InternalVKIDApi
        public void trackEvent(String str, EventParam... eventParamArr) {
            Tracker.DefaultImpls.trackEvent(this, str, eventParamArr);
        }

        @Override // com.vk.id.analytics.VKIDAnalytics.Tracker
        @JvmStatic
        @InternalVKIDApi
        public void trackEvent(String accessToken, String name, EventParam... params) {
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(params, "params");
            for (Tracker tracker : VKIDAnalytics.trackersArray) {
                tracker.trackEvent(accessToken, name, (EventParam[]) Arrays.copyOf(params, params.length));
            }
        }

        @JvmStatic
        @InternalVKIDApi
        public final void addTracker(Tracker tracker) {
            Intrinsics.checkNotNullParameter(tracker, "tracker");
            if (VKIDAnalytics.trackers.contains(tracker)) {
                return;
            }
            if (tracker != this) {
                synchronized (VKIDAnalytics.trackers) {
                    VKIDAnalytics.trackers.add(tracker);
                    Companion companion = VKIDAnalytics.INSTANCE;
                    VKIDAnalytics.trackersArray = (Tracker[]) VKIDAnalytics.trackers.toArray(new Tracker[0]);
                    Unit unit = Unit.INSTANCE;
                }
                return;
            }
            throw new IllegalArgumentException("Cannot add VKIDAnalytics into itself.".toString());
        }

        @JvmStatic
        @InternalVKIDApi
        public final void removeTracker(Tracker tracker) {
            Intrinsics.checkNotNullParameter(tracker, "tracker");
            synchronized (VKIDAnalytics.trackers) {
                VKIDAnalytics.trackers.remove(tracker);
                Companion companion = VKIDAnalytics.INSTANCE;
                VKIDAnalytics.trackersArray = (Tracker[]) VKIDAnalytics.trackers.toArray(new Tracker[0]);
                Unit unit = Unit.INSTANCE;
            }
        }
    }
}
