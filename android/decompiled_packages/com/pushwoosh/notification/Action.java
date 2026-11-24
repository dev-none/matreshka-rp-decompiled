package com.pushwoosh.notification;

import android.text.TextUtils;
import com.pravera.flutter_foreground_task.PreferencesKey;
import com.pushwoosh.internal.utils.PWLog;
import com.unity3d.ads.core.domain.HandleInvocationsFromAdViewer;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
@Deprecated
public class Action {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Type f5271a;
    private final String b;
    private final String c;
    private final String d;
    private final String e;
    private final Class f;
    private final JSONObject g;

    public enum Type {
        ACTIVITY,
        SERVICE,
        BROADCAST
    }

    public Action(JSONObject jSONObject) throws JSONException {
        try {
            this.f5271a = Type.valueOf(jSONObject.getString("type"));
            this.c = jSONObject.getString("title");
            this.d = jSONObject.optString(PreferencesKey.NOTIFICATION_CONTENT_ICON);
            this.b = jSONObject.optString(HandleInvocationsFromAdViewer.KEY_ACTION);
            this.e = jSONObject.optString("url");
            String strOptString = jSONObject.optString("class");
            if (!TextUtils.isEmpty(strOptString)) {
                try {
                    this.f = Class.forName(strOptString);
                } catch (ClassNotFoundException | LinkageError e) {
                    PWLog.exception(e);
                }
            }
            try {
                this.g = jSONObject.getJSONObject(HandleInvocationsFromAdViewer.KEY_EXTRAS);
            } catch (JSONException unused) {
            }
        } catch (Exception e2) {
            throw new JSONException(e2.getMessage());
        }
    }

    public Class getActionClass() {
        return this.f;
    }

    public JSONObject getExtras() {
        return this.g;
    }

    public String getIcon() {
        return this.d;
    }

    public String getIntentAction() {
        return this.b;
    }

    public String getTitle() {
        return this.c;
    }

    public Type getType() {
        return this.f5271a;
    }

    public String getUrl() {
        return this.e;
    }
}
