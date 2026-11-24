package com.pravera.flutter_foreground_task.models;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: NotificationIcon.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\b\u0086\b\u0018\u0000 \u00132\u00020\u0001:\u0001\u0013B\u0019\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\t\u0010\n\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u000b\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u001f\u0010\f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003HÆ\u0001J\u0013\u0010\r\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0010\u001a\u00020\u0011HÖ\u0001J\t\u0010\u0012\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\b¨\u0006\u0014"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/NotificationIcon;", "", NotificationIcon.META_DATA_NAME_KEY, "", NotificationIcon.BACKGROUND_COLOR_RGB_KEY, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V", "getMetaDataName", "()Ljava/lang/String;", "getBackgroundColorRgb", "component1", "component2", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class NotificationIcon {
    private static final String BACKGROUND_COLOR_RGB_KEY = "backgroundColorRgb";

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static final String META_DATA_NAME_KEY = "metaDataName";
    private final String backgroundColorRgb;
    private final String metaDataName;

    public static /* synthetic */ NotificationIcon copy$default(NotificationIcon notificationIcon, String str, String str2, int i, Object obj) {
        if ((i & 1) != 0) {
            str = notificationIcon.metaDataName;
        }
        if ((i & 2) != 0) {
            str2 = notificationIcon.backgroundColorRgb;
        }
        return notificationIcon.copy(str, str2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getMetaDataName() {
        return this.metaDataName;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getBackgroundColorRgb() {
        return this.backgroundColorRgb;
    }

    public final NotificationIcon copy(String metaDataName, String backgroundColorRgb) {
        Intrinsics.checkNotNullParameter(metaDataName, "metaDataName");
        return new NotificationIcon(metaDataName, backgroundColorRgb);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof NotificationIcon)) {
            return false;
        }
        NotificationIcon notificationIcon = (NotificationIcon) other;
        return Intrinsics.areEqual(this.metaDataName, notificationIcon.metaDataName) && Intrinsics.areEqual(this.backgroundColorRgb, notificationIcon.backgroundColorRgb);
    }

    public int hashCode() {
        int iHashCode = this.metaDataName.hashCode() * 31;
        String str = this.backgroundColorRgb;
        return iHashCode + (str == null ? 0 : str.hashCode());
    }

    public String toString() {
        return "NotificationIcon(metaDataName=" + this.metaDataName + ", backgroundColorRgb=" + this.backgroundColorRgb + ")";
    }

    public NotificationIcon(String metaDataName, String str) {
        Intrinsics.checkNotNullParameter(metaDataName, "metaDataName");
        this.metaDataName = metaDataName;
        this.backgroundColorRgb = str;
    }

    public final String getMetaDataName() {
        return this.metaDataName;
    }

    public final String getBackgroundColorRgb() {
        return this.backgroundColorRgb;
    }

    /* JADX INFO: compiled from: NotificationIcon.kt */
    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\u0005R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\n"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/NotificationIcon$Companion;", "", "<init>", "()V", "META_DATA_NAME_KEY", "", "BACKGROUND_COLOR_RGB_KEY", "fromJsonString", "Lcom/pravera/flutter_foreground_task/models/NotificationIcon;", "jsonString", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final NotificationIcon fromJsonString(String jsonString) throws JSONException {
            String string;
            Intrinsics.checkNotNullParameter(jsonString, "jsonString");
            JSONObject jSONObject = new JSONObject(jsonString);
            if (jSONObject.isNull(NotificationIcon.META_DATA_NAME_KEY)) {
                string = "";
            } else {
                string = jSONObject.getString(NotificationIcon.META_DATA_NAME_KEY);
                Intrinsics.checkNotNull(string);
            }
            return new NotificationIcon(string, jSONObject.isNull(NotificationIcon.BACKGROUND_COLOR_RGB_KEY) ? null : jSONObject.getString(NotificationIcon.BACKGROUND_COLOR_RGB_KEY));
        }
    }
}
