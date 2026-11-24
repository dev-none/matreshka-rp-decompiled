package com.pushwoosh.v;

import com.pushwoosh.internal.network.PushRequest;
import com.pushwoosh.repository.RepositoryModule;
import java.util.Locale;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class b extends PushRequest {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5318a;
    public final String b;
    public final boolean c;

    public b(String str, String str2, boolean z) {
        this.f5318a = str;
        this.b = str2;
        this.c = z;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final void buildParams(JSONObject jSONObject) throws JSONException {
        jSONObject.put("name", this.f5318a);
        jSONObject.put("description", this.b);
        jSONObject.put("auto_created", this.c);
        jSONObject.put("push_token", RepositoryModule.getRegistrationPreferences().pushToken().get());
        jSONObject.put("language", Locale.getDefault().getLanguage());
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "createTestDevice";
    }
}
