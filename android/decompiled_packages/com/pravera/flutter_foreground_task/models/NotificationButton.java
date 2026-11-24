package com.pravera.flutter_foreground_task.models;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import java.util.Objects;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: NotificationButton.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\t\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0007\b\u0086\b\u0018\u0000 \u00162\u00020\u0001:\u0001\u0016B!\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0006\u0010\u0007J\u0013\u0010\f\u001a\u00020\r2\b\u0010\u000e\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\u000f\u001a\u00020\u0010H\u0016J\t\u0010\u0011\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0012\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u0013\u001a\u0004\u0018\u00010\u0003HÆ\u0003J)\u0010\u0014\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003HÆ\u0001J\t\u0010\u0015\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\tR\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\t¨\u0006\u0017"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/NotificationButton;", "", "id", "", "text", NotificationButton.TEXT_COLOR_RGB_KEY, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "getId", "()Ljava/lang/String;", "getText", "getTextColorRgb", "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "component1", "component2", "component3", MenuActionType.COPY, "toString", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class NotificationButton {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static final String ID_KEY = "id";
    private static final String TEXT_COLOR_RGB_KEY = "textColorRgb";
    private static final String TEXT_KEY = "text";
    private final String id;
    private final String text;
    private final String textColorRgb;

    public static /* synthetic */ NotificationButton copy$default(NotificationButton notificationButton, String str, String str2, String str3, int i, Object obj) {
        if ((i & 1) != 0) {
            str = notificationButton.id;
        }
        if ((i & 2) != 0) {
            str2 = notificationButton.text;
        }
        if ((i & 4) != 0) {
            str3 = notificationButton.textColorRgb;
        }
        return notificationButton.copy(str, str2, str3);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getId() {
        return this.id;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getText() {
        return this.text;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getTextColorRgb() {
        return this.textColorRgb;
    }

    public final NotificationButton copy(String id, String text, String textColorRgb) {
        Intrinsics.checkNotNullParameter(id, "id");
        Intrinsics.checkNotNullParameter(text, "text");
        return new NotificationButton(id, text, textColorRgb);
    }

    public String toString() {
        return "NotificationButton(id=" + this.id + ", text=" + this.text + ", textColorRgb=" + this.textColorRgb + ")";
    }

    public NotificationButton(String id, String text, String str) {
        Intrinsics.checkNotNullParameter(id, "id");
        Intrinsics.checkNotNullParameter(text, "text");
        this.id = id;
        this.text = text;
        this.textColorRgb = str;
    }

    public final String getId() {
        return this.id;
    }

    public final String getText() {
        return this.text;
    }

    public final String getTextColorRgb() {
        return this.textColorRgb;
    }

    /* JADX INFO: compiled from: NotificationButton.kt */
    @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000bR\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\f"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/NotificationButton$Companion;", "", "<init>", "()V", "ID_KEY", "", "TEXT_KEY", "TEXT_COLOR_RGB_KEY", "fromJSONObject", "Lcom/pravera/flutter_foreground_task/models/NotificationButton;", "jsonObj", "Lorg/json/JSONObject;", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final NotificationButton fromJSONObject(JSONObject jsonObj) throws JSONException {
            String string;
            String string2;
            Intrinsics.checkNotNullParameter(jsonObj, "jsonObj");
            if (jsonObj.isNull("id")) {
                string = "unknown";
            } else {
                string = jsonObj.getString("id");
                Intrinsics.checkNotNull(string);
            }
            if (jsonObj.isNull("text")) {
                string2 = "";
            } else {
                string2 = jsonObj.getString("text");
                Intrinsics.checkNotNull(string2);
            }
            return new NotificationButton(string, string2, jsonObj.isNull(NotificationButton.TEXT_COLOR_RGB_KEY) ? null : jsonObj.getString(NotificationButton.TEXT_COLOR_RGB_KEY));
        }
    }

    public boolean equals(Object other) {
        if (other != null && (other instanceof NotificationButton)) {
            NotificationButton notificationButton = (NotificationButton) other;
            if (Intrinsics.areEqual(this.id, notificationButton.id) && Intrinsics.areEqual(this.text, notificationButton.text) && Intrinsics.areEqual(this.textColorRgb, notificationButton.textColorRgb)) {
                return true;
            }
        }
        return false;
    }

    public int hashCode() {
        return Objects.hash(this.id, this.text, this.textColorRgb);
    }
}
