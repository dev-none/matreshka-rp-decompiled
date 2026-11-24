package com.pushwoosh.m0;

import android.text.TextUtils;
import androidx.media3.common.MimeTypes;
import com.pushwoosh.internal.platform.utils.GeneralUtils;
import com.pushwoosh.repository.RepositoryModule;
import io.appmetrica.analytics.networktasks.internal.CommonUrlParts;
import java.util.ArrayList;
import java.util.Collection;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class r extends c {
    public final String b;
    public final String c;
    public final int d;

    public r(int i, String str, String str2) {
        this.b = str;
        this.c = str2;
        this.d = i;
    }

    @Override // com.pushwoosh.m0.c
    public final boolean a() {
        int i = this.d;
        return (i == 18 || i == 21) ? false : true;
    }

    @Override // com.pushwoosh.m0.c, com.pushwoosh.internal.network.PushRequest
    public final void buildParams(JSONObject jSONObject) throws JSONException {
        super.buildParams(jSONObject);
        jSONObject.put(CommonUrlParts.DEVICE_TYPE, this.d);
        jSONObject.put(MimeTypes.BASE_TYPE_APPLICATION, RepositoryModule.getRegistrationPreferences().applicationId().get());
        int i = this.d;
        if (i == 18) {
            jSONObject.put("hwid", this.b);
        } else if (i == 21) {
            jSONObject.put("hwid", "whatsapp:" + this.b);
        }
        jSONObject.put("push_token", this.b);
        if (!TextUtils.isEmpty(this.c)) {
            jSONObject.put("tags", new JSONObject(this.c));
        }
        ArrayList<String> rawResourses = GeneralUtils.getRawResourses();
        if (rawResourses != null) {
            jSONObject.put("sounds", new JSONArray((Collection) rawResourses));
        }
    }

    @Override // com.pushwoosh.m0.c, com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "registerDevice";
    }
}
