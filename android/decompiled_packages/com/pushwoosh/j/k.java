package com.pushwoosh.j;

import android.text.TextUtils;
import com.pushwoosh.internal.network.PushRequest;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class k extends PushRequest {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5229a;
    public final String b;
    public final String c;
    public final String d;
    public final int e;

    public k(String str, String str2, String str3, String str4, int i) {
        this.f5229a = str;
        this.b = str2;
        this.c = str3;
        this.d = str4;
        this.e = i;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final void buildParams(JSONObject jSONObject) throws JSONException {
        String str = this.f5229a;
        if (!TextUtils.isEmpty(str)) {
            jSONObject.put("rich_media_code", str);
        }
        String str2 = this.b;
        if (!TextUtils.isEmpty(str2)) {
            jSONObject.put("inapp_code", str2);
        }
        String str3 = this.c;
        if (!TextUtils.isEmpty(str3)) {
            jSONObject.put("message_hash", str3);
        }
        String str4 = this.d;
        if (!TextUtils.isEmpty(str4)) {
            jSONObject.put("action_attributes", str4);
        }
        jSONObject.put("action_type", this.e);
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "richMediaAction";
    }
}
