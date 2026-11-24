package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.UUID;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ｱ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1141 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final String f3992;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final JSONObject f3993;

    public C1141(JSONObject jSONObject) {
        String string = UUID.randomUUID().toString();
        this.f3993 = jSONObject;
        this.f3992 = string;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final JSONObject m8927() throws JSONException {
        JSONObject jSONObject = new JSONObject();
        jSONObject.put(StringFog.decrypt("ntI7XbZgAF4=\n", "7r1IKfIBdD8=\n"), this.f3993);
        jSONObject.put(StringFog.decrypt("SNLvSQ==\n", "PaeGLfVUfCs=\n"), this.f3992);
        return jSONObject;
    }

    public C1141(String str, JSONObject jSONObject) {
        this.f3993 = jSONObject;
        this.f3992 = str;
    }
}
