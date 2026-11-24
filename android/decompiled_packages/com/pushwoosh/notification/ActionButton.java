package com.pushwoosh.notification;

import android.text.TextUtils;
import com.google.firebase.messaging.Constants;
import com.unity3d.ads.core.domain.HandleInvocationsFromAdViewer;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class ActionButton {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f5273a;
    private final String b;
    private final ActionType c;
    private final String d;
    private final Style e;

    public enum ActionType {
        OPEN,
        URL,
        DEEPLINK,
        CUSTOM
    }

    public enum Style {
        DEFAULT,
        DESTRUCTIVE
    }

    private ActionButton(String str, String str2, ActionType actionType, String str3, Style style) {
        this.f5273a = str;
        this.b = str2;
        this.c = actionType;
        this.d = str3;
        this.e = style;
    }

    public ActionType getAction() {
        return this.c;
    }

    public String getId() {
        return this.f5273a;
    }

    public String getLabel() {
        return this.b;
    }

    public Style getStyle() {
        return this.e;
    }

    public String getUrl() {
        return this.d;
    }

    static ActionButton a(JSONObject jSONObject) {
        ActionType actionType;
        Style style;
        String strOptString = jSONObject.isNull("id") ? null : jSONObject.optString("id");
        String strOptString2 = jSONObject.isNull(Constants.ScionAnalytics.PARAM_LABEL) ? null : jSONObject.optString(Constants.ScionAnalytics.PARAM_LABEL);
        if (TextUtils.isEmpty(strOptString) || TextUtils.isEmpty(strOptString2)) {
            return null;
        }
        String strOptString3 = jSONObject.isNull(HandleInvocationsFromAdViewer.KEY_ACTION) ? null : jSONObject.optString(HandleInvocationsFromAdViewer.KEY_ACTION);
        int i = 0;
        if (strOptString3 != null) {
            ActionType[] actionTypeArrValues = ActionType.values();
            int length = actionTypeArrValues.length;
            int i2 = 0;
            while (true) {
                if (i2 >= length) {
                    actionType = null;
                    break;
                }
                ActionType actionType2 = actionTypeArrValues[i2];
                if (actionType2.name().equalsIgnoreCase(strOptString3)) {
                    actionType = actionType2;
                    break;
                }
                i2++;
            }
        } else {
            actionType = null;
            break;
        }
        if (actionType == null) {
            return null;
        }
        String strOptString4 = jSONObject.isNull("url") ? null : jSONObject.optString("url");
        if ((actionType == ActionType.URL || actionType == ActionType.DEEPLINK) && TextUtils.isEmpty(strOptString4)) {
            return null;
        }
        String strOptString5 = jSONObject.isNull("style") ? null : jSONObject.optString("style");
        if (strOptString5 == null) {
            style = Style.DEFAULT;
            break;
        }
        Style[] styleArrValues = Style.values();
        int length2 = styleArrValues.length;
        while (true) {
            if (i >= length2) {
                style = Style.DEFAULT;
                break;
            }
            style = styleArrValues[i];
            if (style.name().equalsIgnoreCase(strOptString5)) {
                break;
            }
            i++;
        }
        return new ActionButton(strOptString, strOptString2, actionType, TextUtils.isEmpty(strOptString4) ? null : strOptString4, style);
    }
}
