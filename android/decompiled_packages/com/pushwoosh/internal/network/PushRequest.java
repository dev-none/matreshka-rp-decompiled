package com.pushwoosh.internal.network;

import android.text.TextUtils;
import androidx.media3.common.MimeTypes;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.internal.platform.utils.GeneralUtils;
import com.pushwoosh.internal.specific.DeviceSpecificProvider;
import com.pushwoosh.repository.RepositoryModule;
import io.appmetrica.analytics.networktasks.internal.CommonUrlParts;
import io.flutter.plugins.firebase.analytics.Constants;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public abstract class PushRequest<S> {
    protected void buildParams(JSONObject jSONObject) throws JSONException {
    }

    public String getApiPath() {
        return null;
    }

    public String getApplicationCode() {
        return null;
    }

    protected String getApplicationId() {
        return RepositoryModule.getRegistrationPreferences().applicationId().get();
    }

    protected String getHwid() throws InterruptedException {
        return PushwooshPlatform.getInstance().pushwooshRepository().getHwid();
    }

    public abstract String getMethod();

    protected JSONObject getParams() throws JSONException, InterruptedException {
        JSONObject jSONObject = new JSONObject();
        jSONObject.put(MimeTypes.BASE_TYPE_APPLICATION, getApplicationId());
        jSONObject.put("hwid", getHwid());
        jSONObject.put("v", GeneralUtils.SDK_VERSION);
        jSONObject.put(CommonUrlParts.DEVICE_TYPE, DeviceSpecificProvider.getInstance().deviceType());
        String userId = getUserId();
        if (!TextUtils.isEmpty(userId)) {
            jSONObject.put(Constants.USER_ID, userId);
        }
        buildParams(jSONObject);
        return jSONObject;
    }

    protected String getUserId() {
        return RepositoryModule.getRegistrationPreferences().userId().get();
    }

    public S parseResponse(JSONObject jSONObject) throws JSONException {
        return null;
    }

    public boolean shouldWrapRequest() {
        return true;
    }
}
