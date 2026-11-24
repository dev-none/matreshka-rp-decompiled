package com.pushwoosh.j;

import com.pushwoosh.internal.network.PushRequest;
import com.unity3d.ads.core.domain.HandleInvocationsFromAdViewer;
import java.util.Calendar;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class l extends PushRequest {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5230a;
    public final String b;
    public final String c;

    public l(String str, String str2, String str3) {
        this.f5230a = str;
        this.b = str2;
        this.c = str3;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final void buildParams(JSONObject jSONObject) throws JSONException {
        jSONObject.put(HandleInvocationsFromAdViewer.KEY_ACTION, "show");
        jSONObject.put("code", this.f5230a.startsWith("r-") ? "" : this.f5230a);
        String str = this.b;
        if (str != null) {
            jSONObject.put("messageHash", str);
        }
        if (this.c.startsWith("r-")) {
            jSONObject.put("richMediaCode", this.c.substring(2));
        }
        int rawOffset = Calendar.getInstance().getTimeZone().getRawOffset() / 1000;
        long jCurrentTimeMillis = System.currentTimeMillis() / 1000;
        jSONObject.put("timestampUTC", jCurrentTimeMillis);
        jSONObject.put("timestampCurrent", ((long) rawOffset) + jCurrentTimeMillis);
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "triggerInAppAction";
    }
}
