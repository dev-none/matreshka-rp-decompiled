package com.pushwoosh.m0;

import com.pushwoosh.internal.network.PushRequest;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class q extends PushRequest {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5254a;
    public final String b;
    public final String c;

    public q(String str, String str2) {
        this.f5254a = str;
        this.b = str2;
        this.c = null;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final void buildParams(JSONObject jSONObject) throws JSONException {
        String str = this.f5254a;
        if (str != null) {
            jSONObject.put("hash", str);
        }
        String str2 = this.b;
        if (str2 != null) {
            jSONObject.put("metaData", str2);
        }
        String str3 = this.c;
        if (str3 != null) {
            jSONObject.put("button_id", str3);
        }
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "pushStat";
    }

    public q(String str, String str2, String str3) {
        this.f5254a = str;
        this.b = str2;
        this.c = str3;
    }
}
