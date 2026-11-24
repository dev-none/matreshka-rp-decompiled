package com.pushwoosh.j;

import com.pushwoosh.internal.network.PushRequest;
import java.util.Calendar;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class e extends PushRequest {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5223a;
    public final String b;
    public final boolean c;

    public e(String str, String str2, boolean z) {
        this.f5223a = str;
        this.b = str2;
        this.c = z;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final void buildParams(JSONObject jSONObject) throws JSONException {
        jSONObject.put("oldUserId", this.f5223a);
        jSONObject.put("newUserId", this.b);
        jSONObject.put("merge", this.c);
        jSONObject.put("ts", (System.currentTimeMillis() / 1000) + ((long) (Calendar.getInstance().getTimeZone().getRawOffset() / 1000)));
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "mergeUser";
    }
}
