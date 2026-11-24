package com.vk.id.network;

import com.vk.id.common.InternalVKIDApi;
import com.vk.id.network.common.ApiConstants;
import com.vk.id.network.http.FormBody;
import com.vk.id.network.http.HttpClient;
import com.vk.id.network.http.HttpResponse;
import com.vk.id.network.util.CreateRequestKt;
import io.flutter.plugins.firebase.auth.Constants;
import kotlin.Metadata;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.Intrinsics;
import net.openid.appauth.GrantTypeValues;
import org.json.JSONArray;

/* JADX INFO: compiled from: InternalVKIDRealApi.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0011\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0007\u0018\u0000 \u001f2\u00020\u0001:\u0001\u001fB\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J>\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\n2\u0006\u0010\u000f\u001a\u00020\nH\u0016J\u001e\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\u0011\u001a\u00020\nH\u0016J.\u0010\u0012\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\u0012\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\n2\u0006\u0010\u000f\u001a\u00020\nH\u0016J&\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\u0014\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\nH\u0016J6\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\u0016\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\n2\u0006\u0010\u000f\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\nH\u0016J&\u0010\u0018\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\u0014\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\nH\u0016J6\u0010\u0019\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\u0011\u001a\u00020\n2\u0006\u0010\u001a\u001a\u00020\n2\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\nH\u0016J>\u0010\u001e\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\u0014\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\u0011\u001a\u00020\n2\u0006\u0010\u001a\u001a\u00020\n2\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\nH\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006 "}, d2 = {"Lcom/vk/id/network/InternalVKIDRealApi;", "Lcom/vk/id/network/InternalVKIDApiContract;", "client", "Lcom/vk/id/network/http/HttpClient;", "<init>", "(Lcom/vk/id/network/http/HttpClient;)V", "getToken", "Lcom/vk/id/network/InternalVKIDCall;", "Lcom/vk/id/network/http/HttpResponse;", "code", "", "codeVerifier", "clientId", "deviceId", "redirectUri", "state", "getSilentAuthProviders", "clientSecret", "refreshToken", "getUser", Constants.ACCESS_TOKEN, "exchangeToken", "v1Token", "codeChallenge", "logout", "sendStatEventsAnonymously", "sakVersion", "events", "Lorg/json/JSONArray;", "externalDeviceId", "sendStatEvents", "Companion", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class InternalVKIDRealApi implements InternalVKIDApiContract {
    private static final String FIELD_ACCESS_TOKEN = "access_token";
    private static final String FIELD_CLIENT_ID = "client_id";
    private static final String FIELD_CLIENT_SECRET = "client_secret";
    private static final String FIELD_CODE = "code";
    private static final String FIELD_CODE_CHALLENGE = "code_challenge";
    private static final String FIELD_CODE_CHALLENGE_METHOD = "code_challenge_method";
    private static final String FIELD_CODE_VERIFIER = "code_verifier";
    private static final String FIELD_DEVICE_ID = "device_id";
    private static final String FIELD_GRANT_TYPE = "grant_type";
    private static final String FIELD_REDIRECT_URI = "redirect_uri";
    private static final String FIELD_REFRESH_TOKEN = "refresh_token";
    private static final String FIELD_RESPONSE_TYPE = "response_type";
    private static final String FIELD_STATE = "state";
    private static final String HOST_API = "https://api.vk.ru";
    private static final String HOST_VK_ID = "https://id.vk.ru";
    private static final String PATH_AUTH = "oauth2/auth";
    private static final String PATH_LOGOUT = "oauth2/logout";
    private static final String PATH_SILENT_AUTH_PROVIDERS = "method/auth.getSilentAuthProviders";
    private static final String PATH_USER_INFO = "oauth2/user_info";
    private static final String VALUE_ACCESS_TOKEN = "access_token";
    private static final String VALUE_AUTHORIZATION_CODE = "authorization_code";
    private static final String VALUE_CODE = "code";
    private static final String VALUE_CODE_CHALLENGE_METHOD = "s256";
    private static final String VALUE_REFRESH_TOKEN = "refresh_token";
    private final HttpClient client;

    public InternalVKIDRealApi(HttpClient client) {
        Intrinsics.checkNotNullParameter(client, "client");
        this.client = client;
    }

    @Override // com.vk.id.network.InternalVKIDApiContract
    public InternalVKIDCall<HttpResponse> getToken(String code, String codeVerifier, String clientId, String deviceId, String redirectUri, String state) {
        Intrinsics.checkNotNullParameter(code, "code");
        Intrinsics.checkNotNullParameter(codeVerifier, "codeVerifier");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        Intrinsics.checkNotNullParameter(redirectUri, "redirectUri");
        Intrinsics.checkNotNullParameter(state, "state");
        return CreateRequestKt.createRequest$default(this.client, HOST_VK_ID, PATH_AUTH, new FormBody.Builder().add(FIELD_GRANT_TYPE, "authorization_code").add("code", code).add(FIELD_CODE_VERIFIER, codeVerifier).add("client_id", clientId).add(FIELD_DEVICE_ID, deviceId).add(FIELD_REDIRECT_URI, redirectUri).add("state", state).build(), null, 8, null);
    }

    @Override // com.vk.id.network.InternalVKIDApiContract
    public InternalVKIDCall<HttpResponse> getSilentAuthProviders(String clientId, String clientSecret) {
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(clientSecret, "clientSecret");
        return CreateRequestKt.createRequest$default(this.client, HOST_API, PATH_SILENT_AUTH_PROVIDERS, new FormBody.Builder().add("v", ApiConstants.API_VERSION_VALUE).add("client_id", clientId).add(FIELD_CLIENT_SECRET, clientSecret).build(), null, 8, null);
    }

    @Override // com.vk.id.network.InternalVKIDApiContract
    public InternalVKIDCall<HttpResponse> refreshToken(String refreshToken, String clientId, String deviceId, String state) {
        Intrinsics.checkNotNullParameter(refreshToken, "refreshToken");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        Intrinsics.checkNotNullParameter(state, "state");
        return CreateRequestKt.createRequest$default(this.client, HOST_VK_ID, PATH_AUTH, new FormBody.Builder().add(FIELD_GRANT_TYPE, GrantTypeValues.REFRESH_TOKEN).add(GrantTypeValues.REFRESH_TOKEN, refreshToken).add("client_id", clientId).add(FIELD_DEVICE_ID, deviceId).add("state", state).build(), null, 8, null);
    }

    @Override // com.vk.id.network.InternalVKIDApiContract
    public InternalVKIDCall<HttpResponse> getUser(String accessToken, String clientId, String deviceId) {
        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        return CreateRequestKt.createRequest(this.client, HOST_VK_ID, PATH_USER_INFO, new FormBody.Builder().add("access_token", accessToken).add(FIELD_DEVICE_ID, deviceId).build(), MapsKt.mapOf(TuplesKt.to("client_id", clientId)));
    }

    @Override // com.vk.id.network.InternalVKIDApiContract
    public InternalVKIDCall<HttpResponse> exchangeToken(String v1Token, String clientId, String deviceId, String state, String codeChallenge) {
        Intrinsics.checkNotNullParameter(v1Token, "v1Token");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(codeChallenge, "codeChallenge");
        return CreateRequestKt.createRequest$default(this.client, HOST_VK_ID, PATH_AUTH, new FormBody.Builder().add(FIELD_RESPONSE_TYPE, "code").add(FIELD_GRANT_TYPE, "access_token").add("access_token", v1Token).add("client_id", clientId).add(FIELD_DEVICE_ID, deviceId).add("state", state).add(FIELD_CODE_CHALLENGE, codeChallenge).add(FIELD_CODE_CHALLENGE_METHOD, VALUE_CODE_CHALLENGE_METHOD).build(), null, 8, null);
    }

    @Override // com.vk.id.network.InternalVKIDApiContract
    public InternalVKIDCall<HttpResponse> logout(String accessToken, String clientId, String deviceId) {
        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        return CreateRequestKt.createRequest$default(this.client, HOST_VK_ID, PATH_LOGOUT, new FormBody.Builder().add("access_token", accessToken).add("client_id", clientId).add(FIELD_DEVICE_ID, deviceId).build(), null, 8, null);
    }

    @Override // com.vk.id.network.InternalVKIDApiContract
    public InternalVKIDCall<HttpResponse> sendStatEventsAnonymously(String clientId, String clientSecret, String sakVersion, JSONArray events, String externalDeviceId) {
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(clientSecret, "clientSecret");
        Intrinsics.checkNotNullParameter(sakVersion, "sakVersion");
        Intrinsics.checkNotNullParameter(events, "events");
        Intrinsics.checkNotNullParameter(externalDeviceId, "externalDeviceId");
        FormBody.Builder builderAdd = new FormBody.Builder().add("v", ApiConstants.API_VERSION_VALUE).add("client_id", clientId).add(FIELD_CLIENT_SECRET, clientSecret).add("sak_version", sakVersion);
        String string = events.toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        return CreateRequestKt.createRequest(this.client, HOST_API, "method/statEvents.addVKIDAnonymously", builderAdd.add("events", string).build(), MapsKt.mapOf(TuplesKt.to("external_device_id", externalDeviceId)));
    }

    @Override // com.vk.id.network.InternalVKIDApiContract
    public InternalVKIDCall<HttpResponse> sendStatEvents(String accessToken, String clientId, String clientSecret, String sakVersion, JSONArray events, String externalDeviceId) {
        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(clientSecret, "clientSecret");
        Intrinsics.checkNotNullParameter(sakVersion, "sakVersion");
        Intrinsics.checkNotNullParameter(events, "events");
        Intrinsics.checkNotNullParameter(externalDeviceId, "externalDeviceId");
        FormBody.Builder builderAdd = new FormBody.Builder().add("access_token", accessToken).add("v", ApiConstants.API_VERSION_VALUE).add("client_id", clientId).add(FIELD_CLIENT_SECRET, clientSecret).add("sak_version", sakVersion);
        String string = events.toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        return CreateRequestKt.createRequest(this.client, HOST_API, "method/statEvents.addVKID", builderAdd.add("events", string).build(), MapsKt.mapOf(TuplesKt.to("external_device_id", externalDeviceId)));
    }
}
