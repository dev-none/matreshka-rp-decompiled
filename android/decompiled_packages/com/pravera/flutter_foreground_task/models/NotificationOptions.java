package com.pravera.flutter_foreground_task.models;

import android.content.Context;
import android.content.SharedPreferences;
import com.my.target.common.menu.MenuActionType;
import com.pravera.flutter_foreground_task.PreferencesKey;
import io.sentry.protocol.Request;
import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: NotificationOptions.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b)\b\u0086\b\u0018\u0000 32\u00020\u0001:\u00013Bi\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\u0006\u0010\t\u001a\u00020\u0003\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\u000b\u0012\u0006\u0010\r\u001a\u00020\u000b\u0012\u0006\u0010\u000e\u001a\u00020\u000b\u0012\u0006\u0010\u000f\u001a\u00020\u000b\u0012\u0006\u0010\u0010\u001a\u00020\u0003¢\u0006\u0004\b\u0011\u0010\u0012J\t\u0010\"\u001a\u00020\u0003HÆ\u0003J\t\u0010#\u001a\u00020\u0005HÆ\u0003J\t\u0010$\u001a\u00020\u0005HÆ\u0003J\u000b\u0010%\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\t\u0010&\u001a\u00020\u0003HÆ\u0003J\t\u0010'\u001a\u00020\u0003HÆ\u0003J\t\u0010(\u001a\u00020\u000bHÆ\u0003J\t\u0010)\u001a\u00020\u000bHÆ\u0003J\t\u0010*\u001a\u00020\u000bHÆ\u0003J\t\u0010+\u001a\u00020\u000bHÆ\u0003J\t\u0010,\u001a\u00020\u000bHÆ\u0003J\t\u0010-\u001a\u00020\u0003HÆ\u0003J\u0083\u0001\u0010.\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00052\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\u00052\b\b\u0002\u0010\b\u001a\u00020\u00032\b\b\u0002\u0010\t\u001a\u00020\u00032\b\b\u0002\u0010\n\u001a\u00020\u000b2\b\b\u0002\u0010\f\u001a\u00020\u000b2\b\b\u0002\u0010\r\u001a\u00020\u000b2\b\b\u0002\u0010\u000e\u001a\u00020\u000b2\b\b\u0002\u0010\u000f\u001a\u00020\u000b2\b\b\u0002\u0010\u0010\u001a\u00020\u0003HÆ\u0001J\u0013\u0010/\u001a\u00020\u000b2\b\u00100\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u00101\u001a\u00020\u0003HÖ\u0001J\t\u00102\u001a\u00020\u0005HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016R\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0016R\u0013\u0010\u0007\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0016R\u0011\u0010\b\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u0014R\u0011\u0010\t\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u0014R\u0011\u0010\n\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u001cR\u0011\u0010\f\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u001cR\u0011\u0010\r\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u001cR\u0011\u0010\u000e\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010\u001cR\u0011\u0010\u000f\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b \u0010\u001cR\u0011\u0010\u0010\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b!\u0010\u0014¨\u00064"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/NotificationOptions;", "", PreferencesKey.SERVICE_ID, "", "channelId", "", "channelName", "channelDescription", "channelImportance", "priority", PreferencesKey.ENABLE_VIBRATION, "", PreferencesKey.PLAY_SOUND, PreferencesKey.SHOW_WHEN, PreferencesKey.SHOW_BADGE, PreferencesKey.ONLY_ALERT_ONCE, "visibility", "<init>", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;IIZZZZZI)V", "getServiceId", "()I", "getChannelId", "()Ljava/lang/String;", "getChannelName", "getChannelDescription", "getChannelImportance", "getPriority", "getEnableVibration", "()Z", "getPlaySound", "getShowWhen", "getShowBadge", "getOnlyAlertOnce", "getVisibility", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", MenuActionType.COPY, "equals", Request.JsonKeys.OTHER, "hashCode", "toString", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class NotificationOptions {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final String channelDescription;
    private final String channelId;
    private final int channelImportance;
    private final String channelName;
    private final boolean enableVibration;
    private final boolean onlyAlertOnce;
    private final boolean playSound;
    private final int priority;
    private final int serviceId;
    private final boolean showBadge;
    private final boolean showWhen;
    private final int visibility;

    public static /* synthetic */ NotificationOptions copy$default(NotificationOptions notificationOptions, int i, String str, String str2, String str3, int i2, int i3, boolean z, boolean z2, boolean z3, boolean z4, boolean z5, int i4, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            i = notificationOptions.serviceId;
        }
        if ((i5 & 2) != 0) {
            str = notificationOptions.channelId;
        }
        if ((i5 & 4) != 0) {
            str2 = notificationOptions.channelName;
        }
        if ((i5 & 8) != 0) {
            str3 = notificationOptions.channelDescription;
        }
        if ((i5 & 16) != 0) {
            i2 = notificationOptions.channelImportance;
        }
        if ((i5 & 32) != 0) {
            i3 = notificationOptions.priority;
        }
        if ((i5 & 64) != 0) {
            z = notificationOptions.enableVibration;
        }
        if ((i5 & 128) != 0) {
            z2 = notificationOptions.playSound;
        }
        if ((i5 & 256) != 0) {
            z3 = notificationOptions.showWhen;
        }
        if ((i5 & 512) != 0) {
            z4 = notificationOptions.showBadge;
        }
        if ((i5 & 1024) != 0) {
            z5 = notificationOptions.onlyAlertOnce;
        }
        if ((i5 & 2048) != 0) {
            i4 = notificationOptions.visibility;
        }
        boolean z6 = z5;
        int i6 = i4;
        boolean z7 = z3;
        boolean z8 = z4;
        boolean z9 = z;
        boolean z10 = z2;
        int i7 = i2;
        int i8 = i3;
        return notificationOptions.copy(i, str, str2, str3, i7, i8, z9, z10, z7, z8, z6, i6);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final int getServiceId() {
        return this.serviceId;
    }

    /* JADX INFO: renamed from: component10, reason: from getter */
    public final boolean getShowBadge() {
        return this.showBadge;
    }

    /* JADX INFO: renamed from: component11, reason: from getter */
    public final boolean getOnlyAlertOnce() {
        return this.onlyAlertOnce;
    }

    /* JADX INFO: renamed from: component12, reason: from getter */
    public final int getVisibility() {
        return this.visibility;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getChannelId() {
        return this.channelId;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getChannelName() {
        return this.channelName;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final String getChannelDescription() {
        return this.channelDescription;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final int getChannelImportance() {
        return this.channelImportance;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final int getPriority() {
        return this.priority;
    }

    /* JADX INFO: renamed from: component7, reason: from getter */
    public final boolean getEnableVibration() {
        return this.enableVibration;
    }

    /* JADX INFO: renamed from: component8, reason: from getter */
    public final boolean getPlaySound() {
        return this.playSound;
    }

    /* JADX INFO: renamed from: component9, reason: from getter */
    public final boolean getShowWhen() {
        return this.showWhen;
    }

    public final NotificationOptions copy(int serviceId, String channelId, String channelName, String channelDescription, int channelImportance, int priority, boolean enableVibration, boolean playSound, boolean showWhen, boolean showBadge, boolean onlyAlertOnce, int visibility) {
        Intrinsics.checkNotNullParameter(channelId, "channelId");
        Intrinsics.checkNotNullParameter(channelName, "channelName");
        return new NotificationOptions(serviceId, channelId, channelName, channelDescription, channelImportance, priority, enableVibration, playSound, showWhen, showBadge, onlyAlertOnce, visibility);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof NotificationOptions)) {
            return false;
        }
        NotificationOptions notificationOptions = (NotificationOptions) other;
        return this.serviceId == notificationOptions.serviceId && Intrinsics.areEqual(this.channelId, notificationOptions.channelId) && Intrinsics.areEqual(this.channelName, notificationOptions.channelName) && Intrinsics.areEqual(this.channelDescription, notificationOptions.channelDescription) && this.channelImportance == notificationOptions.channelImportance && this.priority == notificationOptions.priority && this.enableVibration == notificationOptions.enableVibration && this.playSound == notificationOptions.playSound && this.showWhen == notificationOptions.showWhen && this.showBadge == notificationOptions.showBadge && this.onlyAlertOnce == notificationOptions.onlyAlertOnce && this.visibility == notificationOptions.visibility;
    }

    public int hashCode() {
        int iHashCode = ((((Integer.hashCode(this.serviceId) * 31) + this.channelId.hashCode()) * 31) + this.channelName.hashCode()) * 31;
        String str = this.channelDescription;
        return ((((((((((((((((iHashCode + (str == null ? 0 : str.hashCode())) * 31) + Integer.hashCode(this.channelImportance)) * 31) + Integer.hashCode(this.priority)) * 31) + Boolean.hashCode(this.enableVibration)) * 31) + Boolean.hashCode(this.playSound)) * 31) + Boolean.hashCode(this.showWhen)) * 31) + Boolean.hashCode(this.showBadge)) * 31) + Boolean.hashCode(this.onlyAlertOnce)) * 31) + Integer.hashCode(this.visibility);
    }

    public String toString() {
        return "NotificationOptions(serviceId=" + this.serviceId + ", channelId=" + this.channelId + ", channelName=" + this.channelName + ", channelDescription=" + this.channelDescription + ", channelImportance=" + this.channelImportance + ", priority=" + this.priority + ", enableVibration=" + this.enableVibration + ", playSound=" + this.playSound + ", showWhen=" + this.showWhen + ", showBadge=" + this.showBadge + ", onlyAlertOnce=" + this.onlyAlertOnce + ", visibility=" + this.visibility + ")";
    }

    public NotificationOptions(int i, String channelId, String channelName, String str, int i2, int i3, boolean z, boolean z2, boolean z3, boolean z4, boolean z5, int i4) {
        Intrinsics.checkNotNullParameter(channelId, "channelId");
        Intrinsics.checkNotNullParameter(channelName, "channelName");
        this.serviceId = i;
        this.channelId = channelId;
        this.channelName = channelName;
        this.channelDescription = str;
        this.channelImportance = i2;
        this.priority = i3;
        this.enableVibration = z;
        this.playSound = z2;
        this.showWhen = z3;
        this.showBadge = z4;
        this.onlyAlertOnce = z5;
        this.visibility = i4;
    }

    public final int getServiceId() {
        return this.serviceId;
    }

    public final String getChannelId() {
        return this.channelId;
    }

    public final String getChannelName() {
        return this.channelName;
    }

    public final String getChannelDescription() {
        return this.channelDescription;
    }

    public final int getChannelImportance() {
        return this.channelImportance;
    }

    public final int getPriority() {
        return this.priority;
    }

    public final boolean getEnableVibration() {
        return this.enableVibration;
    }

    public final boolean getPlaySound() {
        return this.playSound;
    }

    public final boolean getShowWhen() {
        return this.showWhen;
    }

    public final boolean getShowBadge() {
        return this.showBadge;
    }

    public final boolean getOnlyAlertOnce() {
        return this.onlyAlertOnce;
    }

    public final int getVisibility() {
        return this.visibility;
    }

    /* JADX INFO: compiled from: NotificationOptions.kt */
    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010$\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J \u0010\b\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u00072\u0010\u0010\n\u001a\f\u0012\u0002\b\u0003\u0012\u0002\b\u0003\u0018\u00010\u000bJ\u000e\u0010\f\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\r"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/NotificationOptions$Companion;", "", "<init>", "()V", "getData", "Lcom/pravera/flutter_foreground_task/models/NotificationOptions;", "context", "Landroid/content/Context;", "setData", "", "map", "", "clearData", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final NotificationOptions getData(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            SharedPreferences sharedPreferences = context.getSharedPreferences(PreferencesKey.NOTIFICATION_OPTIONS_PREFS, 0);
            int i = sharedPreferences.getInt(PreferencesKey.SERVICE_ID, sharedPreferences.getInt(PreferencesKey.NOTIFICATION_ID, 1000));
            String string = sharedPreferences.getString(PreferencesKey.NOTIFICATION_CHANNEL_ID, null);
            if (string == null) {
                string = "foreground_service";
            }
            String str = string;
            String string2 = sharedPreferences.getString(PreferencesKey.NOTIFICATION_CHANNEL_NAME, null);
            if (string2 == null) {
                string2 = "Foreground Service";
            }
            return new NotificationOptions(i, str, string2, sharedPreferences.getString(PreferencesKey.NOTIFICATION_CHANNEL_DESC, null), sharedPreferences.getInt(PreferencesKey.NOTIFICATION_CHANNEL_IMPORTANCE, 2), sharedPreferences.getInt(PreferencesKey.NOTIFICATION_PRIORITY, -1), sharedPreferences.getBoolean(PreferencesKey.ENABLE_VIBRATION, false), sharedPreferences.getBoolean(PreferencesKey.PLAY_SOUND, false), sharedPreferences.getBoolean(PreferencesKey.SHOW_WHEN, false), sharedPreferences.getBoolean(PreferencesKey.SHOW_BADGE, false), sharedPreferences.getBoolean(PreferencesKey.ONLY_ALERT_ONCE, false), sharedPreferences.getInt("visibility", 1));
        }

        /* JADX WARN: Code duplicated, block: B:11:0x0025 A[PHI: r5
  0x0025: PHI (r5v13 java.lang.Integer) = (r5v3 java.lang.Integer), (r5v7 java.lang.Integer) binds: [B:10:0x0023, B:19:0x003c] A[DONT_GENERATE, DONT_INLINE]] */
        public final void setData(Context context, Map<?, ?> map) {
            int iIntValue;
            Intrinsics.checkNotNullParameter(context, "context");
            SharedPreferences sharedPreferences = context.getSharedPreferences(PreferencesKey.NOTIFICATION_OPTIONS_PREFS, 0);
            Object obj = map != null ? map.get(PreferencesKey.SERVICE_ID) : null;
            Integer num = obj instanceof Integer ? (Integer) obj : null;
            if (num == null) {
                Object obj2 = map != null ? map.get(PreferencesKey.NOTIFICATION_ID) : null;
                num = obj2 instanceof Integer ? (Integer) obj2 : null;
                if (num != null) {
                    iIntValue = num.intValue();
                } else {
                    iIntValue = 1000;
                }
            } else {
                iIntValue = num.intValue();
            }
            Object obj3 = map != null ? map.get(PreferencesKey.NOTIFICATION_CHANNEL_ID) : null;
            String str = obj3 instanceof String ? (String) obj3 : null;
            Object obj4 = map != null ? map.get(PreferencesKey.NOTIFICATION_CHANNEL_NAME) : null;
            String str2 = obj4 instanceof String ? (String) obj4 : null;
            Object obj5 = map != null ? map.get(PreferencesKey.NOTIFICATION_CHANNEL_DESC) : null;
            String str3 = obj5 instanceof String ? (String) obj5 : null;
            Object obj6 = map != null ? map.get(PreferencesKey.NOTIFICATION_CHANNEL_IMPORTANCE) : null;
            Integer num2 = obj6 instanceof Integer ? (Integer) obj6 : null;
            int iIntValue2 = num2 != null ? num2.intValue() : 2;
            Object obj7 = map != null ? map.get(PreferencesKey.NOTIFICATION_PRIORITY) : null;
            Integer num3 = obj7 instanceof Integer ? (Integer) obj7 : null;
            int iIntValue3 = num3 != null ? num3.intValue() : -1;
            Object obj8 = map != null ? map.get(PreferencesKey.ENABLE_VIBRATION) : null;
            Boolean bool = obj8 instanceof Boolean ? (Boolean) obj8 : null;
            boolean zBooleanValue = bool != null ? bool.booleanValue() : false;
            Object obj9 = map != null ? map.get(PreferencesKey.PLAY_SOUND) : null;
            boolean z = zBooleanValue;
            Boolean bool2 = obj9 instanceof Boolean ? (Boolean) obj9 : null;
            boolean zBooleanValue2 = bool2 != null ? bool2.booleanValue() : false;
            Object obj10 = map != null ? map.get(PreferencesKey.SHOW_WHEN) : null;
            boolean z2 = zBooleanValue2;
            Boolean bool3 = obj10 instanceof Boolean ? (Boolean) obj10 : null;
            boolean zBooleanValue3 = bool3 != null ? bool3.booleanValue() : false;
            Object obj11 = map != null ? map.get(PreferencesKey.SHOW_BADGE) : null;
            boolean z3 = zBooleanValue3;
            Boolean bool4 = obj11 instanceof Boolean ? (Boolean) obj11 : null;
            boolean zBooleanValue4 = bool4 != null ? bool4.booleanValue() : false;
            Object obj12 = map != null ? map.get(PreferencesKey.ONLY_ALERT_ONCE) : null;
            boolean z4 = zBooleanValue4;
            Boolean bool5 = obj12 instanceof Boolean ? (Boolean) obj12 : null;
            boolean zBooleanValue5 = bool5 != null ? bool5.booleanValue() : false;
            Object obj13 = map != null ? map.get("visibility") : null;
            Integer num4 = obj13 instanceof Integer ? (Integer) obj13 : null;
            int iIntValue4 = num4 != null ? num4.intValue() : 1;
            SharedPreferences.Editor editorEdit = sharedPreferences.edit();
            editorEdit.putInt(PreferencesKey.SERVICE_ID, iIntValue);
            editorEdit.putString(PreferencesKey.NOTIFICATION_CHANNEL_ID, str);
            editorEdit.putString(PreferencesKey.NOTIFICATION_CHANNEL_NAME, str2);
            editorEdit.putString(PreferencesKey.NOTIFICATION_CHANNEL_DESC, str3);
            editorEdit.putInt(PreferencesKey.NOTIFICATION_CHANNEL_IMPORTANCE, iIntValue2);
            editorEdit.putInt(PreferencesKey.NOTIFICATION_PRIORITY, iIntValue3);
            editorEdit.putBoolean(PreferencesKey.ENABLE_VIBRATION, z);
            editorEdit.putBoolean(PreferencesKey.PLAY_SOUND, z2);
            editorEdit.putBoolean(PreferencesKey.SHOW_WHEN, z3);
            editorEdit.putBoolean(PreferencesKey.SHOW_BADGE, z4);
            editorEdit.putBoolean(PreferencesKey.ONLY_ALERT_ONCE, zBooleanValue5);
            editorEdit.putInt("visibility", iIntValue4);
            editorEdit.commit();
        }

        public final void clearData(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            SharedPreferences.Editor editorEdit = context.getSharedPreferences(PreferencesKey.NOTIFICATION_OPTIONS_PREFS, 0).edit();
            editorEdit.clear();
            editorEdit.commit();
        }
    }
}
