package com.pravera.flutter_foreground_task.models;

import android.content.Context;
import android.content.SharedPreferences;
import com.my.target.common.menu.MenuActionType;
import com.pravera.flutter_foreground_task.PreferencesKey;
import io.sentry.protocol.Request;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: NotificationContent.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0012\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\b\u0086\b\u0018\u0000 !2\u00020\u0001:\u0001!B9\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\f\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\b\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u000b\u0010\fJ\t\u0010\u0015\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u0017\u001a\u0004\u0018\u00010\u0006HÆ\u0003J\u000f\u0010\u0018\u001a\b\u0012\u0004\u0012\u00020\t0\bHÆ\u0003J\u000b\u0010\u0019\u001a\u0004\u0018\u00010\u0003HÆ\u0003JE\u0010\u001a\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00062\u000e\b\u0002\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\b2\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u0003HÆ\u0001J\u0013\u0010\u001b\u001a\u00020\u001c2\b\u0010\u001d\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001e\u001a\u00020\u001fHÖ\u0001J\t\u0010 \u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u000eR\u0013\u0010\u0005\u001a\u0004\u0018\u00010\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0017\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\b¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0013\u0010\n\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u000e¨\u0006\""}, d2 = {"Lcom/pravera/flutter_foreground_task/models/NotificationContent;", "", "title", "", "text", PreferencesKey.NOTIFICATION_CONTENT_ICON, "Lcom/pravera/flutter_foreground_task/models/NotificationIcon;", PreferencesKey.NOTIFICATION_CONTENT_BUTTONS, "", "Lcom/pravera/flutter_foreground_task/models/NotificationButton;", PreferencesKey.NOTIFICATION_INITIAL_ROUTE, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lcom/pravera/flutter_foreground_task/models/NotificationIcon;Ljava/util/List;Ljava/lang/String;)V", "getTitle", "()Ljava/lang/String;", "getText", "getIcon", "()Lcom/pravera/flutter_foreground_task/models/NotificationIcon;", "getButtons", "()Ljava/util/List;", "getInitialRoute", "component1", "component2", "component3", "component4", "component5", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class NotificationContent {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final List<NotificationButton> buttons;
    private final NotificationIcon icon;
    private final String initialRoute;
    private final String text;
    private final String title;

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ NotificationContent copy$default(NotificationContent notificationContent, String str, String str2, NotificationIcon notificationIcon, List list, String str3, int i, Object obj) {
        if ((i & 1) != 0) {
            str = notificationContent.title;
        }
        if ((i & 2) != 0) {
            str2 = notificationContent.text;
        }
        if ((i & 4) != 0) {
            notificationIcon = notificationContent.icon;
        }
        if ((i & 8) != 0) {
            list = notificationContent.buttons;
        }
        if ((i & 16) != 0) {
            str3 = notificationContent.initialRoute;
        }
        String str4 = str3;
        NotificationIcon notificationIcon2 = notificationIcon;
        return notificationContent.copy(str, str2, notificationIcon2, list, str4);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getTitle() {
        return this.title;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getText() {
        return this.text;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final NotificationIcon getIcon() {
        return this.icon;
    }

    public final List<NotificationButton> component4() {
        return this.buttons;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final String getInitialRoute() {
        return this.initialRoute;
    }

    public final NotificationContent copy(String title, String text, NotificationIcon icon, List<NotificationButton> buttons, String initialRoute) {
        Intrinsics.checkNotNullParameter(title, "title");
        Intrinsics.checkNotNullParameter(text, "text");
        Intrinsics.checkNotNullParameter(buttons, "buttons");
        return new NotificationContent(title, text, icon, buttons, initialRoute);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof NotificationContent)) {
            return false;
        }
        NotificationContent notificationContent = (NotificationContent) other;
        return Intrinsics.areEqual(this.title, notificationContent.title) && Intrinsics.areEqual(this.text, notificationContent.text) && Intrinsics.areEqual(this.icon, notificationContent.icon) && Intrinsics.areEqual(this.buttons, notificationContent.buttons) && Intrinsics.areEqual(this.initialRoute, notificationContent.initialRoute);
    }

    public int hashCode() {
        int iHashCode = ((this.title.hashCode() * 31) + this.text.hashCode()) * 31;
        NotificationIcon notificationIcon = this.icon;
        int iHashCode2 = (((iHashCode + (notificationIcon == null ? 0 : notificationIcon.hashCode())) * 31) + this.buttons.hashCode()) * 31;
        String str = this.initialRoute;
        return iHashCode2 + (str != null ? str.hashCode() : 0);
    }

    public String toString() {
        return "NotificationContent(title=" + this.title + ", text=" + this.text + ", icon=" + this.icon + ", buttons=" + this.buttons + ", initialRoute=" + this.initialRoute + ")";
    }

    public NotificationContent(String title, String text, NotificationIcon notificationIcon, List<NotificationButton> buttons, String str) {
        Intrinsics.checkNotNullParameter(title, "title");
        Intrinsics.checkNotNullParameter(text, "text");
        Intrinsics.checkNotNullParameter(buttons, "buttons");
        this.title = title;
        this.text = text;
        this.icon = notificationIcon;
        this.buttons = buttons;
        this.initialRoute = str;
    }

    public final String getTitle() {
        return this.title;
    }

    public final String getText() {
        return this.text;
    }

    public final NotificationIcon getIcon() {
        return this.icon;
    }

    public final List<NotificationButton> getButtons() {
        return this.buttons;
    }

    public final String getInitialRoute() {
        return this.initialRoute;
    }

    /* JADX INFO: compiled from: NotificationContent.kt */
    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010$\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J \u0010\b\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u00072\u0010\u0010\n\u001a\f\u0012\u0002\b\u0003\u0012\u0002\b\u0003\u0018\u00010\u000bJ \u0010\f\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u00072\u0010\u0010\n\u001a\f\u0012\u0002\b\u0003\u0012\u0002\b\u0003\u0018\u00010\u000bJ\u000e\u0010\r\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\u000e"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/NotificationContent$Companion;", "", "<init>", "()V", "getData", "Lcom/pravera/flutter_foreground_task/models/NotificationContent;", "context", "Landroid/content/Context;", "setData", "", "map", "", "updateData", "clearData", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final NotificationContent getData(Context context) throws JSONException {
            Intrinsics.checkNotNullParameter(context, "context");
            SharedPreferences sharedPreferences = context.getSharedPreferences(PreferencesKey.NOTIFICATION_OPTIONS_PREFS, 0);
            String string = sharedPreferences.getString(PreferencesKey.NOTIFICATION_CONTENT_TITLE, null);
            String str = string == null ? "" : string;
            String string2 = sharedPreferences.getString(PreferencesKey.NOTIFICATION_CONTENT_TEXT, null);
            String str2 = string2 == null ? "" : string2;
            String string3 = sharedPreferences.getString(PreferencesKey.NOTIFICATION_CONTENT_ICON, null);
            NotificationIcon notificationIconFromJsonString = string3 != null ? NotificationIcon.INSTANCE.fromJsonString(string3) : null;
            String string4 = sharedPreferences.getString(PreferencesKey.NOTIFICATION_CONTENT_BUTTONS, null);
            ArrayList arrayList = new ArrayList();
            if (string4 != null) {
                JSONArray jSONArray = new JSONArray(string4);
                int length = jSONArray.length();
                for (int i = 0; i < length; i++) {
                    JSONObject jSONObject = jSONArray.getJSONObject(i);
                    NotificationButton.Companion companion = NotificationButton.INSTANCE;
                    Intrinsics.checkNotNull(jSONObject);
                    arrayList.add(companion.fromJSONObject(jSONObject));
                }
            }
            return new NotificationContent(str, str2, notificationIconFromJsonString, arrayList, sharedPreferences.getString(PreferencesKey.NOTIFICATION_INITIAL_ROUTE, null));
        }

        public final void setData(Context context, Map<?, ?> map) {
            Intrinsics.checkNotNullParameter(context, "context");
            SharedPreferences sharedPreferences = context.getSharedPreferences(PreferencesKey.NOTIFICATION_OPTIONS_PREFS, 0);
            Object obj = map != null ? map.get(PreferencesKey.NOTIFICATION_CONTENT_TITLE) : null;
            String str = obj instanceof String ? (String) obj : null;
            if (str == null) {
                str = "";
            }
            Object obj2 = map != null ? map.get(PreferencesKey.NOTIFICATION_CONTENT_TEXT) : null;
            String str2 = obj2 instanceof String ? (String) obj2 : null;
            String str3 = str2 != null ? str2 : "";
            Object obj3 = map != null ? map.get(PreferencesKey.NOTIFICATION_CONTENT_ICON) : null;
            Map map2 = obj3 instanceof Map ? (Map) obj3 : null;
            String string = map2 != null ? new JSONObject(map2).toString() : null;
            Object obj4 = map != null ? map.get(PreferencesKey.NOTIFICATION_CONTENT_BUTTONS) : null;
            List list = obj4 instanceof List ? (List) obj4 : null;
            String string2 = list != null ? new JSONArray((Collection) list).toString() : null;
            Object obj5 = map != null ? map.get(PreferencesKey.NOTIFICATION_INITIAL_ROUTE) : null;
            String str4 = obj5 instanceof String ? (String) obj5 : null;
            SharedPreferences.Editor editorEdit = sharedPreferences.edit();
            editorEdit.putString(PreferencesKey.NOTIFICATION_CONTENT_TITLE, str);
            editorEdit.putString(PreferencesKey.NOTIFICATION_CONTENT_TEXT, str3);
            editorEdit.putString(PreferencesKey.NOTIFICATION_CONTENT_ICON, string);
            editorEdit.putString(PreferencesKey.NOTIFICATION_CONTENT_BUTTONS, string2);
            editorEdit.putString(PreferencesKey.NOTIFICATION_INITIAL_ROUTE, str4);
            editorEdit.commit();
        }

        public final void updateData(Context context, Map<?, ?> map) {
            Intrinsics.checkNotNullParameter(context, "context");
            SharedPreferences sharedPreferences = context.getSharedPreferences(PreferencesKey.NOTIFICATION_OPTIONS_PREFS, 0);
            Object obj = map != null ? map.get(PreferencesKey.NOTIFICATION_CONTENT_TITLE) : null;
            String str = obj instanceof String ? (String) obj : null;
            Object obj2 = map != null ? map.get(PreferencesKey.NOTIFICATION_CONTENT_TEXT) : null;
            String str2 = obj2 instanceof String ? (String) obj2 : null;
            Object obj3 = map != null ? map.get(PreferencesKey.NOTIFICATION_CONTENT_ICON) : null;
            Map map2 = obj3 instanceof Map ? (Map) obj3 : null;
            String string = map2 != null ? new JSONObject(map2).toString() : null;
            Object obj4 = map != null ? map.get(PreferencesKey.NOTIFICATION_CONTENT_BUTTONS) : null;
            List list = obj4 instanceof List ? (List) obj4 : null;
            String string2 = list != null ? new JSONArray((Collection) list).toString() : null;
            Object obj5 = map != null ? map.get(PreferencesKey.NOTIFICATION_INITIAL_ROUTE) : null;
            String str3 = obj5 instanceof String ? (String) obj5 : null;
            SharedPreferences.Editor editorEdit = sharedPreferences.edit();
            if (str != null) {
                editorEdit.putString(PreferencesKey.NOTIFICATION_CONTENT_TITLE, str);
            }
            if (str2 != null) {
                editorEdit.putString(PreferencesKey.NOTIFICATION_CONTENT_TEXT, str2);
            }
            if (string != null) {
                editorEdit.putString(PreferencesKey.NOTIFICATION_CONTENT_ICON, string);
            }
            if (string2 != null) {
                editorEdit.putString(PreferencesKey.NOTIFICATION_CONTENT_BUTTONS, string2);
            }
            if (str3 != null) {
                editorEdit.putString(PreferencesKey.NOTIFICATION_INITIAL_ROUTE, str3);
            }
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
