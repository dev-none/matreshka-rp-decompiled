package com.vk.id.network;

import com.vk.id.common.InternalVKIDApi;
import com.vk.id.network.http.HttpResponse;
import io.flutter.plugins.firebase.auth.Constants;
import kotlin.Metadata;
import org.json.JSONArray;

/* JADX INFO: compiled from: InternalVKIDApiContract.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0011\n\u0002\u0018\u0002\n\u0002\b\u0003\bg\u0018\u00002\u00020\u0001J>\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\u00062\u0006\u0010\b\u001a\u00020\u00062\u0006\u0010\t\u001a\u00020\u00062\u0006\u0010\n\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\u0006H&J\u001e\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u0006\u0010\b\u001a\u00020\u00062\u0006\u0010\r\u001a\u00020\u0006H&J.\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u0006\u0010\u000e\u001a\u00020\u00062\u0006\u0010\b\u001a\u00020\u00062\u0006\u0010\t\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\u0006H&J&\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u0006\u0010\u0010\u001a\u00020\u00062\u0006\u0010\b\u001a\u00020\u00062\u0006\u0010\t\u001a\u00020\u0006H&J6\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u0006\u0010\u0012\u001a\u00020\u00062\u0006\u0010\b\u001a\u00020\u00062\u0006\u0010\t\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\u00062\u0006\u0010\u0013\u001a\u00020\u0006H&J&\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u0006\u0010\u0010\u001a\u00020\u00062\u0006\u0010\b\u001a\u00020\u00062\u0006\u0010\t\u001a\u00020\u0006H&J6\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u0006\u0010\b\u001a\u00020\u00062\u0006\u0010\r\u001a\u00020\u00062\u0006\u0010\u0016\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u0006H&J>\u0010\u001a\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u0006\u0010\u0010\u001a\u00020\u00062\u0006\u0010\b\u001a\u00020\u00062\u0006\u0010\r\u001a\u00020\u00062\u0006\u0010\u0016\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u0006H&¨\u0006\u001b"}, d2 = {"Lcom/vk/id/network/InternalVKIDApiContract;", "", "getToken", "Lcom/vk/id/network/InternalVKIDCall;", "Lcom/vk/id/network/http/HttpResponse;", "code", "", "codeVerifier", "clientId", "deviceId", "redirectUri", "state", "getSilentAuthProviders", "clientSecret", "refreshToken", "getUser", Constants.ACCESS_TOKEN, "exchangeToken", "v1Token", "codeChallenge", "logout", "sendStatEventsAnonymously", "sakVersion", "events", "Lorg/json/JSONArray;", "externalDeviceId", "sendStatEvents", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface InternalVKIDApiContract {
    InternalVKIDCall<HttpResponse> exchangeToken(String v1Token, String clientId, String deviceId, String state, String codeChallenge);

    InternalVKIDCall<HttpResponse> getSilentAuthProviders(String clientId, String clientSecret);

    InternalVKIDCall<HttpResponse> getToken(String code, String codeVerifier, String clientId, String deviceId, String redirectUri, String state);

    InternalVKIDCall<HttpResponse> getUser(String accessToken, String clientId, String deviceId);

    InternalVKIDCall<HttpResponse> logout(String accessToken, String clientId, String deviceId);

    InternalVKIDCall<HttpResponse> refreshToken(String refreshToken, String clientId, String deviceId, String state);

    InternalVKIDCall<HttpResponse> sendStatEvents(String accessToken, String clientId, String clientSecret, String sakVersion, JSONArray events, String externalDeviceId);

    InternalVKIDCall<HttpResponse> sendStatEventsAnonymously(String clientId, String clientSecret, String sakVersion, JSONArray events, String externalDeviceId);
}
