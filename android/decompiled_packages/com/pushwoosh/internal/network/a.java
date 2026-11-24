package com.pushwoosh.internal.network;

import android.text.TextUtils;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.RegistrationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import com.pushwoosh.v.c;
import com.pushwoosh.v.d;
import com.pushwoosh.v.f;
import com.pushwoosh.v.g;
import com.pushwoosh.v.h;
import com.pushwoosh.v.i;
import com.pushwoosh.v.j;
import io.sentry.SentryBaseEvent;
import io.sentry.protocol.Response;
import java.util.Collections;
import java.util.Map;
import java.util.Objects;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements RequestManager {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final RegistrationPrefs f5197a;
    public final j b;
    public volatile String c;
    public volatile h d;
    public final boolean e;

    public a(RegistrationPrefs registrationPrefs, j jVar, boolean z, d dVar) {
        this.f5197a = registrationPrefs;
        this.b = jVar;
        this.e = z;
    }

    public static void a(final Callback callback, final Result result) {
        if (callback == null) {
            return;
        }
        BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.internal.network.a$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                a.b(callback, result);
            }
        });
    }

    public static /* synthetic */ void b(Callback callback, Result result) {
        try {
            callback.process(result);
        } catch (Exception e) {
            PWLog.error("RequestManager", "Error processing callback", e);
        }
    }

    @Override // com.pushwoosh.internal.network.RequestManager
    public final void sendRequest(PushRequest pushRequest) {
        sendRequest(pushRequest, null, null);
    }

    @Override // com.pushwoosh.internal.network.RequestManager
    public final Result sendRequestSync(PushRequest pushRequest) {
        return a(pushRequest, this.c);
    }

    @Override // com.pushwoosh.internal.network.RequestManager
    public final boolean setReverseProxyUrl(String str, Map map) {
        if (str == null) {
            this.d = null;
            return true;
        }
        String strNormalizeBaseUrl = RegistrationPrefs.normalizeBaseUrl(str);
        if (strNormalizeBaseUrl == null) {
            PWLog.error("RequestManager", "Reverse proxy URL rejected: ".concat(str));
            return false;
        }
        this.d = new h(strNormalizeBaseUrl, map);
        return true;
    }

    @Override // com.pushwoosh.internal.network.RequestManager
    public final boolean updateBaseUrl(String str) {
        String strUpdateBaseUrl = this.f5197a.updateBaseUrl(str);
        if (strUpdateBaseUrl == null) {
            return false;
        }
        this.c = strUpdateBaseUrl;
        return true;
    }

    public final /* synthetic */ void a(PushRequest pushRequest, String str, Callback callback) {
        a(callback, a(pushRequest, str));
    }

    @Override // com.pushwoosh.internal.network.RequestManager
    public final void sendRequest(PushRequest pushRequest, Callback callback) {
        sendRequest(pushRequest, null, callback);
    }

    @Override // com.pushwoosh.internal.network.RequestManager
    public final void sendRequest(final PushRequest pushRequest, final String str, final Callback callback) {
        BackgroundExecutor.network(new Runnable() { // from class: com.pushwoosh.internal.network.a$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(pushRequest, str, callback);
            }
        });
    }

    public final Result a(PushRequest pushRequest, String str) {
        int i;
        if (str == null) {
            str = this.c;
        }
        h hVar = this.d;
        if (this.e && hVar == null) {
            PWLog.error("RequestManager", "Reverse proxy is required but not configured. Request blocked: " + pushRequest.getMethod());
            return Result.fromException(new i("Reverse proxy is required but not configured"));
        }
        String apiPath = pushRequest.getApiPath();
        if (apiPath != null && hVar != null && !hVar.f5322a.endsWith("json/1.3/")) {
            PWLog.error("RequestManager", "Reverse proxy URL does not end with json/1.3/. Request blocked: " + pushRequest.getMethod());
            return Result.fromException(new i("Reverse proxy URL does not end with json/1.3/"));
        }
        f fVar = null;
        int i2 = 0;
        if (apiPath == null) {
            if (hVar != null) {
                fVar = new f(hVar.f5322a, hVar.b, false);
            } else if (TextUtils.isEmpty(str)) {
                PWLog.error("RequestManager", "No base URL and no reverse proxy are configured. Request blocked: " + pushRequest.getMethod());
            } else {
                fVar = new f(str, Collections.EMPTY_MAP, Objects.equals(str, this.c));
            }
        } else if (hVar != null) {
            String str2 = hVar.f5322a;
            fVar = new f(str2.substring(0, str2.length() - 9) + apiPath, hVar.b, false);
        } else if (!TextUtils.isEmpty(str) && str.endsWith("json/1.3/")) {
            fVar = new f(str.substring(0, str.length() - 9) + apiPath, Collections.EMPTY_MAP, false);
        } else {
            String applicationCode = pushRequest.getApplicationCode();
            if (TextUtils.isEmpty(applicationCode)) {
                PWLog.error("RequestManager", "No base URL ending with json/1.3/ and request " + pushRequest.getMethod() + " carries no application code to fall back to. Request blocked");
            } else {
                String strCanonicalBaseUrl = RegistrationPrefs.canonicalBaseUrl(applicationCode);
                String str3 = strCanonicalBaseUrl.substring(0, strCanonicalBaseUrl.length() - 9) + apiPath;
                PWLog.warn("RequestManager", "No base URL ending with json/1.3/, request " + pushRequest.getMethod() + " uses " + str3);
                fVar = new f(str3, Collections.EMPTY_MAP, false);
            }
        }
        if (fVar == null) {
            return Result.fromException(new i("No usable base URL"));
        }
        if (this.f5197a.removeAllDeviceData().get()) {
            PWLog.warn("RequestManager", "Device data was removed from Pushwoosh and all interactions were stopped. Request blocked: " + pushRequest.getMethod());
            return Result.fromException(new i("Device data was removed from Pushwoosh and all interactions were stopped"));
        }
        if (this.b != null && !RepositoryModule.getNotificationPreferences().isServerCommunicationAllowed().get()) {
            PWLog.warn("RequestManager", "Server communication stopped. Call Pushwoosh.startServerCommunication() to resume. Request blocked: " + pushRequest.getMethod());
            return Result.fromException(new i("Server communication stopped. Call Pushwoosh.startServerCommunication() to resume"));
        }
        try {
            String str4 = fVar.f5320a;
            JSONObject params = pushRequest.getParams();
            if (pushRequest.shouldWrapRequest()) {
                params = new JSONObject().put(SentryBaseEvent.JsonKeys.REQUEST, params);
            }
            c cVarA = d.a(str4, params, pushRequest.getMethod(), fVar.b, "Token " + this.f5197a.apiToken().get());
            int i3 = cVarA.f5319a;
            try {
                g gVarA = a(cVarA);
                JSONObject jSONObject = gVarA.f5321a;
                i = gVarA.b;
                if (200 == i3 && 200 == i) {
                    if (jSONObject.has("base_url") && fVar.c) {
                        updateBaseUrl(jSONObject.optString("base_url"));
                    }
                    JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(Response.TYPE);
                    if (jSONObjectOptJSONObject == null) {
                        jSONObjectOptJSONObject = new JSONObject();
                    }
                    return Result.fromData(pushRequest.parseResponse(jSONObjectOptJSONObject));
                }
                e = new NetworkException(jSONObject.toString());
                PWLog.error("RequestManager", "Request failed: " + e.getMessage(), e);
                return Result.fromException(new com.pushwoosh.v.a(i3, i, e.getMessage()));
            } catch (Exception e) {
                e = e;
                i2 = i3;
                i3 = i2;
                i = 0;
            }
        } catch (Exception e2) {
            e = e2;
        }
    }

    public static g a(c cVar) {
        int i;
        JSONObject jSONObject = new JSONObject();
        int i2 = cVar.f5319a;
        if (i2 < 400 || i2 >= 600) {
            i = 0;
        } else {
            try {
                jSONObject.put(Response.JsonKeys.STATUS_CODE, i2);
                jSONObject.put("status_message", cVar.b);
            } catch (JSONException e) {
                PWLog.error("RequestManager", e.getMessage());
            }
            i = cVar.f5319a;
        }
        if (!cVar.c.isEmpty()) {
            try {
                JSONObject jSONObject2 = new JSONObject(cVar.c);
                try {
                    i = jSONObject2.getInt(Response.JsonKeys.STATUS_CODE);
                    jSONObject = jSONObject2;
                } catch (Exception e2) {
                    e = e2;
                    jSONObject = jSONObject2;
                    PWLog.error("RequestManager", "Failed to parse response envelope", e);
                }
            } catch (Exception e3) {
                e = e3;
            }
        }
        return new g(jSONObject, i);
    }
}
