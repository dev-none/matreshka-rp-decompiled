package com.vk.id.test;

import com.vk.id.common.InternalVKIDApi;
import com.vk.id.network.InternalVKIDApiContract;
import com.vk.id.network.InternalVKIDCall;
import com.vk.id.network.http.HttpRequest;
import com.vk.id.network.http.HttpResponse;
import io.flutter.plugins.firebase.auth.Constants;
import io.sentry.protocol.Response;
import java.util.List;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.TuplesKt;
import kotlin.collections.CollectionsKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.json.JSONArray;

/* JADX INFO: compiled from: InternalVKIDMockApi.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000b\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0011\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010 \n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\b\n\u0002\b\u0006\b\u0001\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J>\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\n2\u0006\u0010\u000f\u001a\u00020\nH\u0016J\u001e\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\u0011\u001a\u00020\nH\u0016J.\u0010\u0012\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\u0012\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\n2\u0006\u0010\u000f\u001a\u00020\nH\u0016J&\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\u0014\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\nH\u0016J6\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\u0016\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\n2\u0006\u0010\u000f\u001a\u00020\n2\u0006\u0010\u0017\u001a\u00020\nH\u0016J&\u0010\u0018\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\u0014\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\nH\u0016J6\u0010\u0019\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\u0011\u001a\u00020\n2\u0006\u0010\u001a\u001a\u00020\n2\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\nH\u0016J>\u0010\u001e\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\u0014\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\u0011\u001a\u00020\n2\u0006\u0010\u001a\u001a\u00020\n2\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\nH\u0016J\u001d\u0010\u001f\u001a\b\u0012\u0004\u0012\u00020\b0 2\u0006\u0010!\u001a\u00020\"H\u0003¢\u0006\u0004\b#\u0010$J\u001d\u0010%\u001a\b\u0012\u0004\u0012\u00020\b0 2\u0006\u0010!\u001a\u00020&H\u0003¢\u0006\u0004\b'\u0010(J\u001d\u0010)\u001a\b\u0012\u0004\u0012\u00020\b0 2\u0006\u0010!\u001a\u00020*H\u0003¢\u0006\u0004\b+\u0010,J#\u0010-\u001a\b\u0012\u0004\u0012\u00020\b0 2\f\u0010.\u001a\b\u0012\u0004\u0012\u00020\n0/H\u0003¢\u0006\u0004\b0\u00101J\u001d\u00102\u001a\b\u0012\u0004\u0012\u00020\b0 2\u0006\u0010!\u001a\u000203H\u0003¢\u0006\u0004\b4\u00105J\u0015\u00106\u001a\b\u0012\u0004\u0012\u00020\b0 H\u0003¢\u0006\u0004\b7\u00108J'\u00109\u001a\b\u0012\u0004\u0012\u00020\b0 2\u0006\u0010:\u001a\u00020\n2\b\b\u0002\u0010\t\u001a\u00020;H\u0003¢\u0006\u0004\b<\u0010=J'\u0010>\u001a\b\u0012\u0004\u0012\u00020\b0 2\u0006\u0010?\u001a\u00020\n2\b\b\u0002\u0010\t\u001a\u00020;H\u0003¢\u0006\u0004\b@\u0010=R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006A"}, d2 = {"Lcom/vk/id/test/InternalVKIDMockApi;", "Lcom/vk/id/network/InternalVKIDApiContract;", "testBuilder", "Lcom/vk/id/test/InternalVKIDTestBuilder;", "<init>", "(Lcom/vk/id/test/InternalVKIDTestBuilder;)V", "getToken", "Lcom/vk/id/network/InternalVKIDCall;", "Lcom/vk/id/network/http/HttpResponse;", "code", "", "codeVerifier", "clientId", "deviceId", "redirectUri", "state", "getSilentAuthProviders", "clientSecret", "refreshToken", "getUser", Constants.ACCESS_TOKEN, "exchangeToken", "v1Token", "codeChallenge", "logout", "sendStatEventsAnonymously", "sakVersion", "events", "Lorg/json/JSONArray;", "externalDeviceId", "sendStatEvents", "createSuccessTokenResponse", "Lkotlin/Result;", Response.TYPE, "Lcom/vk/id/test/InternalVKIDTokenPayloadResponse;", "createSuccessTokenResponse-IoAF18A", "(Lcom/vk/id/test/InternalVKIDTokenPayloadResponse;)Ljava/lang/Object;", "createSuccessCodeResponse", "Lcom/vk/id/test/InternalVKIDCodePayloadResponse;", "createSuccessCodeResponse-IoAF18A", "(Lcom/vk/id/test/InternalVKIDCodePayloadResponse;)Ljava/lang/Object;", "createSuccessUserInfoResponse", "Lcom/vk/id/test/InternalVKIDUserInfoPayloadResponse;", "createSuccessUserInfoResponse-IoAF18A", "(Lcom/vk/id/test/InternalVKIDUserInfoPayloadResponse;)Ljava/lang/Object;", "createSuccessSilentAuthProvidersResponse", "providers", "", "createSuccessSilentAuthProvidersResponse-IoAF18A", "(Ljava/util/List;)Ljava/lang/Object;", "createSuccessLogoutResponse", "Lcom/vk/id/test/InternalVKIDLogoutPayloadResponse;", "createSuccessLogoutResponse-IoAF18A", "(Lcom/vk/id/test/InternalVKIDLogoutPayloadResponse;)Ljava/lang/Object;", "createSuccessStatResponse", "createSuccessStatResponse-d1pmJ48", "()Ljava/lang/Object;", "createErrorResponse", "error", "", "createErrorResponse-gIAlu-s", "(Ljava/lang/String;I)Ljava/lang/Object;", "createHttpResponse", "json", "createHttpResponse-gIAlu-s", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class InternalVKIDMockApi implements InternalVKIDApiContract {
    public static final int $stable = 8;
    private final InternalVKIDTestBuilder testBuilder;

    public InternalVKIDMockApi(InternalVKIDTestBuilder testBuilder) {
        Intrinsics.checkNotNullParameter(testBuilder, "testBuilder");
        this.testBuilder = testBuilder;
    }

    @Override // com.vk.id.network.InternalVKIDApiContract
    public InternalVKIDCall<HttpResponse> getToken(String code, String codeVerifier, String clientId, String deviceId, String redirectUri, String state) {
        Intrinsics.checkNotNullParameter(code, "code");
        Intrinsics.checkNotNullParameter(codeVerifier, "codeVerifier");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        Intrinsics.checkNotNullParameter(redirectUri, "redirectUri");
        Intrinsics.checkNotNullParameter(state, "state");
        return new MockInternalVKIDCall(m9391createSuccessTokenResponseIoAF18A(this.testBuilder.getGetTokenResponseValue()));
    }

    @Override // com.vk.id.network.InternalVKIDApiContract
    public InternalVKIDCall<HttpResponse> getSilentAuthProviders(String clientId, String clientSecret) {
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(clientSecret, "clientSecret");
        InternalVKIDSilentAuthProvidersResponse getSilentAuthProvidersResponseValue = this.testBuilder.getGetSilentAuthProvidersResponseValue();
        if (!getSilentAuthProvidersResponseValue.getResponse().isEmpty()) {
            return new MockInternalVKIDCall(m9389createSuccessSilentAuthProvidersResponseIoAF18A(getSilentAuthProvidersResponseValue.getResponse()));
        }
        return new MockInternalVKIDCall(m9384createErrorResponsegIAlus$default(this, "not mocked", 0, 2, null));
    }

    @Override // com.vk.id.network.InternalVKIDApiContract
    public InternalVKIDCall<HttpResponse> refreshToken(String refreshToken, String clientId, String deviceId, String state) {
        Intrinsics.checkNotNullParameter(refreshToken, "refreshToken");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        Intrinsics.checkNotNullParameter(state, "state");
        return new MockInternalVKIDCall(m9391createSuccessTokenResponseIoAF18A(this.testBuilder.getRefreshTokenResponseValue()));
    }

    @Override // com.vk.id.network.InternalVKIDApiContract
    public InternalVKIDCall<HttpResponse> getUser(String accessToken, String clientId, String deviceId) {
        String message;
        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        Object objM9401getGetUserInfoResponsesValued1pmJ48 = this.testBuilder.m9401getGetUserInfoResponsesValued1pmJ48();
        InternalVKIDUserInfoPayloadResponse internalVKIDUserInfoPayloadResponse = (InternalVKIDUserInfoPayloadResponse) (Result.m9867isFailureimpl(objM9401getGetUserInfoResponsesValued1pmJ48) ? null : objM9401getGetUserInfoResponsesValued1pmJ48);
        if (internalVKIDUserInfoPayloadResponse == null) {
            Throwable thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(objM9401getGetUserInfoResponsesValued1pmJ48);
            if (thM9864exceptionOrNullimpl == null || (message = thM9864exceptionOrNullimpl.getMessage()) == null) {
                message = "user error";
            }
            return new MockInternalVKIDCall(m9384createErrorResponsegIAlus$default(this, message, 0, 2, null));
        }
        if (internalVKIDUserInfoPayloadResponse.getError() != null) {
            String error = internalVKIDUserInfoPayloadResponse.getError();
            Intrinsics.checkNotNull(error);
            return new MockInternalVKIDCall(m9384createErrorResponsegIAlus$default(this, error, 0, 2, null));
        }
        if (internalVKIDUserInfoPayloadResponse.getUser() != null) {
            return new MockInternalVKIDCall(m9392createSuccessUserInfoResponseIoAF18A(internalVKIDUserInfoPayloadResponse));
        }
        return new MockInternalVKIDCall(m9384createErrorResponsegIAlus$default(this, "not mocked", 0, 2, null));
    }

    @Override // com.vk.id.network.InternalVKIDApiContract
    public InternalVKIDCall<HttpResponse> exchangeToken(String v1Token, String clientId, String deviceId, String state, String codeChallenge) {
        Intrinsics.checkNotNullParameter(v1Token, "v1Token");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(codeChallenge, "codeChallenge");
        return new MockInternalVKIDCall(m9387createSuccessCodeResponseIoAF18A(this.testBuilder.getExchangeTokenResponseValue()));
    }

    @Override // com.vk.id.network.InternalVKIDApiContract
    public InternalVKIDCall<HttpResponse> logout(String accessToken, String clientId, String deviceId) {
        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        return new MockInternalVKIDCall(m9388createSuccessLogoutResponseIoAF18A(this.testBuilder.getLogoutResponseValue()));
    }

    @Override // com.vk.id.network.InternalVKIDApiContract
    public InternalVKIDCall<HttpResponse> sendStatEventsAnonymously(String clientId, String clientSecret, String sakVersion, JSONArray events, String externalDeviceId) {
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(clientSecret, "clientSecret");
        Intrinsics.checkNotNullParameter(sakVersion, "sakVersion");
        Intrinsics.checkNotNullParameter(events, "events");
        Intrinsics.checkNotNullParameter(externalDeviceId, "externalDeviceId");
        return new MockInternalVKIDCall(m9390createSuccessStatResponsed1pmJ48());
    }

    @Override // com.vk.id.network.InternalVKIDApiContract
    public InternalVKIDCall<HttpResponse> sendStatEvents(String accessToken, String clientId, String clientSecret, String sakVersion, JSONArray events, String externalDeviceId) {
        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(clientSecret, "clientSecret");
        Intrinsics.checkNotNullParameter(sakVersion, "sakVersion");
        Intrinsics.checkNotNullParameter(events, "events");
        Intrinsics.checkNotNullParameter(externalDeviceId, "externalDeviceId");
        return new MockInternalVKIDCall(m9390createSuccessStatResponsed1pmJ48());
    }

    @InternalVKIDApi
    /* JADX INFO: renamed from: createSuccessTokenResponse-IoAF18A, reason: not valid java name */
    private final Object m9391createSuccessTokenResponseIoAF18A(InternalVKIDTokenPayloadResponse response) {
        String accessToken = response.getAccessToken();
        if (accessToken == null) {
            accessToken = "mock";
        }
        String refreshToken = response.getRefreshToken();
        if (refreshToken == null) {
            refreshToken = "mock";
        }
        String idToken = response.getIdToken();
        String str = idToken != null ? idToken : "mock";
        Long expiresIn = response.getExpiresIn();
        long jLongValue = expiresIn != null ? expiresIn.longValue() : 1000L;
        Long userId = response.getUserId();
        long jLongValue2 = userId != null ? userId.longValue() : 0L;
        String state = response.getState();
        if (state == null) {
            state = "state";
        }
        String scope = response.getScope();
        if (scope == null) {
            scope = "phone email";
        }
        return m9386createHttpResponsegIAlus$default(this, StringsKt.trimIndent("\n            {\n                \"access_token\": \"" + accessToken + "\",\n                \"refresh_token\": \"" + refreshToken + "\",\n                \"id_token\": \"" + str + "\",\n                \"expires_in\": " + jLongValue + ",\n                \"user_id\": " + jLongValue2 + ",\n                \"state\": \"" + state + "\",\n                \"scope\": \"" + scope + "\"\n            }\n        "), 0, 2, null);
    }

    @InternalVKIDApi
    /* JADX INFO: renamed from: createSuccessCodeResponse-IoAF18A, reason: not valid java name */
    private final Object m9387createSuccessCodeResponseIoAF18A(InternalVKIDCodePayloadResponse response) {
        String strTrimIndent;
        if (response.getError() != null) {
            strTrimIndent = "{\"error\":\"" + response.getError() + "\"}";
        } else {
            String code = response.getCode();
            if (code == null) {
                code = "mock_code";
            }
            String state = response.getState();
            if (state == null) {
                state = "state";
            }
            String deviceId = response.getDeviceId();
            if (deviceId == null) {
                deviceId = "mock_device_id";
            }
            strTrimIndent = StringsKt.trimIndent("\n            {\n                \"code\": \"" + code + "\",\n                \"state\": \"" + state + "\",\n                \"device_id\": \"" + deviceId + "\"\n            }\n            ");
        }
        return m9386createHttpResponsegIAlus$default(this, strTrimIndent, 0, 2, null);
    }

    @InternalVKIDApi
    /* JADX INFO: renamed from: createSuccessUserInfoResponse-IoAF18A, reason: not valid java name */
    private final Object m9392createSuccessUserInfoResponseIoAF18A(InternalVKIDUserInfoPayloadResponse response) {
        InternalVKIDUserPayloadResponse user = response.getUser();
        if (user == null) {
            return m9384createErrorResponsegIAlus$default(this, "user is null", 0, 2, null);
        }
        String firstName = user.getFirstName();
        String lastName = user.getLastName();
        String phone = user.getPhone();
        String email = user.getEmail();
        String avatar = user.getAvatar();
        String state = response.getState();
        if (state == null) {
            state = "state";
        }
        return m9386createHttpResponsegIAlus$default(this, StringsKt.trimIndent("\n            {\n                \"user\": {\n                    \"first_name\": \"" + firstName + "\",\n                    \"last_name\": \"" + lastName + "\",\n                    \"phone\": \"" + phone + "\",\n                    \"email\": \"" + email + "\",\n                    \"avatar\": \"" + avatar + "\"\n                },\n                \"state\": \"" + state + "\"\n            }\n        "), 0, 2, null);
    }

    @InternalVKIDApi
    /* JADX INFO: renamed from: createSuccessSilentAuthProvidersResponse-IoAF18A, reason: not valid java name */
    private final Object m9389createSuccessSilentAuthProvidersResponseIoAF18A(List<String> providers) {
        return m9386createHttpResponsegIAlus$default(this, StringsKt.trimIndent("\n            {\n                \"response\": [" + CollectionsKt.joinToString$default(providers, ", ", null, null, 0, null, new Function1() { // from class: com.vk.id.test.InternalVKIDMockApi$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return InternalVKIDMockApi.createSuccessSilentAuthProvidersResponse_IoAF18A$lambda$0((String) obj);
            }
        }, 30, null) + "]\n            }\n        "), 0, 2, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final CharSequence createSuccessSilentAuthProvidersResponse_IoAF18A$lambda$0(String it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return "\"" + it + "\"";
    }

    @InternalVKIDApi
    /* JADX INFO: renamed from: createSuccessLogoutResponse-IoAF18A, reason: not valid java name */
    private final Object m9388createSuccessLogoutResponseIoAF18A(InternalVKIDLogoutPayloadResponse response) {
        String str;
        if (response.getError() != null) {
            str = "{\"error\":\"" + response.getError() + "\"}";
        } else {
            str = "{}";
        }
        return m9386createHttpResponsegIAlus$default(this, str, 0, 2, null);
    }

    @InternalVKIDApi
    /* JADX INFO: renamed from: createSuccessStatResponse-d1pmJ48, reason: not valid java name */
    private final Object m9390createSuccessStatResponsed1pmJ48() {
        return m9386createHttpResponsegIAlus$default(this, "{\"response\": 1}", 0, 2, null);
    }

    /* JADX INFO: renamed from: createErrorResponse-gIAlu-s$default, reason: not valid java name */
    static /* synthetic */ Object m9384createErrorResponsegIAlus$default(InternalVKIDMockApi internalVKIDMockApi, String str, int i, int i2, Object obj) {
        if ((i2 & 2) != 0) {
            i = 400;
        }
        return internalVKIDMockApi.m9383createErrorResponsegIAlus(str, i);
    }

    @InternalVKIDApi
    /* JADX INFO: renamed from: createErrorResponse-gIAlu-s, reason: not valid java name */
    private final Object m9383createErrorResponsegIAlus(String error, int code) {
        return m9385createHttpResponsegIAlus("{\"error\": \"" + error + "\"}", code);
    }

    /* JADX INFO: renamed from: createHttpResponse-gIAlu-s$default, reason: not valid java name */
    static /* synthetic */ Object m9386createHttpResponsegIAlus$default(InternalVKIDMockApi internalVKIDMockApi, String str, int i, int i2, Object obj) {
        if ((i2 & 2) != 0) {
            i = 200;
        }
        return internalVKIDMockApi.m9385createHttpResponsegIAlus(str, i);
    }

    @InternalVKIDApi
    /* JADX INFO: renamed from: createHttpResponse-gIAlu-s, reason: not valid java name */
    private final Object m9385createHttpResponsegIAlus(String json, int code) {
        HttpResponse httpResponse = new HttpResponse(new HttpRequest("GET", "https://mock.url", "", MapsKt.emptyMap(), null, 16, null), code, null, json, MapsKt.mapOf(TuplesKt.to("content-type", "application/json")), true);
        Result.Companion companion = Result.INSTANCE;
        return Result.m9861constructorimpl(httpResponse);
    }
}
