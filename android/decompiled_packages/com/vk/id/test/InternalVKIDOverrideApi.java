package com.vk.id.test;

import com.vk.id.common.InternalVKIDApi;
import io.flutter.plugins.firebase.auth.Constants;
import kotlin.Metadata;

/* JADX INFO: compiled from: InternalVKIDOverrideApi.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\bg\u0018\u00002\u00020\u0001J5\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u0006\u0010\u0002\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u00052\u0006\u0010\b\u001a\u00020\u0005H&¢\u0006\u0004\b\t\u0010\nJ=\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\f0\u00032\u0006\u0010\r\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u00052\u0006\u0010\b\u001a\u00020\u00052\u0006\u0010\u000e\u001a\u00020\u0005H&¢\u0006\u0004\b\u000f\u0010\u0010JE\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\u0006\u0010\u0012\u001a\u00020\u00052\u0006\u0010\u0013\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u00052\u0006\u0010\u0014\u001a\u00020\u00052\u0006\u0010\b\u001a\u00020\u0005H&¢\u0006\u0004\b\u0015\u0010\u0016J-\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00180\u00032\u0006\u0010\u0019\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0005H&¢\u0006\u0004\b\u001a\u0010\u001bJ-\u0010\u001c\u001a\b\u0012\u0004\u0012\u00020\u001d0\u00032\u0006\u0010\u0019\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0005H&¢\u0006\u0004\b\u001e\u0010\u001bJ%\u0010\u001f\u001a\b\u0012\u0004\u0012\u00020 0\u00032\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010!\u001a\u00020\u0005H&¢\u0006\u0004\b\"\u0010#¨\u0006$"}, d2 = {"Lcom/vk/id/test/InternalVKIDOverrideApi;", "", "refreshToken", "Lkotlin/Result;", "Lcom/vk/id/test/InternalVKIDTokenPayloadResponse;", "", "clientId", "deviceId", "state", "refreshToken-BWLJW6A", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", "exchangeToken", "Lcom/vk/id/test/InternalVKIDCodePayloadResponse;", "v1Token", "codeChallenge", "exchangeToken-yxL6bBk", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", "getToken", "code", "codeVerifier", "redirectUri", "getToken-hUnOzRk", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", "getUserInfo", "Lcom/vk/id/test/InternalVKIDUserInfoPayloadResponse;", Constants.ACCESS_TOKEN, "getUserInfo-0E7RQCE", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", "logout", "Lcom/vk/id/test/InternalVKIDLogoutPayloadResponse;", "logout-0E7RQCE", "getSilentAuthProviders", "Lcom/vk/id/test/InternalVKIDSilentAuthProvidersResponse;", "clientSecret", "getSilentAuthProviders-gIAlu-s", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface InternalVKIDOverrideApi {
    /* JADX INFO: renamed from: exchangeToken-yxL6bBk, reason: not valid java name */
    Object m9393exchangeTokenyxL6bBk(String v1Token, String clientId, String deviceId, String state, String codeChallenge);

    /* JADX INFO: renamed from: getSilentAuthProviders-gIAlu-s, reason: not valid java name */
    Object m9394getSilentAuthProvidersgIAlus(String clientId, String clientSecret);

    /* JADX INFO: renamed from: getToken-hUnOzRk, reason: not valid java name */
    Object m9395getTokenhUnOzRk(String code, String codeVerifier, String clientId, String deviceId, String redirectUri, String state);

    /* JADX INFO: renamed from: getUserInfo-0E7RQCE, reason: not valid java name */
    Object m9396getUserInfo0E7RQCE(String accessToken, String clientId, String deviceId);

    /* JADX INFO: renamed from: logout-0E7RQCE, reason: not valid java name */
    Object m9397logout0E7RQCE(String accessToken, String clientId, String deviceId);

    /* JADX INFO: renamed from: refreshToken-BWLJW6A, reason: not valid java name */
    Object m9398refreshTokenBWLJW6A(String refreshToken, String clientId, String deviceId, String state);
}
