package com.vk.id.internal.api;

import androidx.exifinterface.media.ExifInterface;
import com.vk.id.VKIDInvalidTokenException;
import com.vk.id.internal.api.dto.VKIDUserInfoPayload;
import com.vk.id.internal.auth.VKIDCodePayload;
import com.vk.id.internal.auth.VKIDTokenPayload;
import com.vk.id.internal.auth.app.VkAuthSilentAuthProvider;
import com.vk.id.network.InternalVKIDApiContract;
import com.vk.id.network.InternalVKIDCall;
import com.vk.id.network.InternalVKIDCallKt;
import com.vk.id.network.http.HttpResponse;
import com.vk.silentauth.SilentAuthInfo;
import io.flutter.plugins.firebase.auth.Constants;
import io.sentry.TraceContext;
import io.sentry.protocol.Response;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import net.openid.appauth.GrantTypeValues;
import net.openid.appauth.ResponseTypeValues;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: VKIDApiService.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0001\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J<\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\n2\u0006\u0010\u000f\u001a\u00020\nJ$\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00110\u00072\u0006\u0010\u0012\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\nJ\"\u0010\u0013\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00150\u00140\u00072\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\u0016\u001a\u00020\nJ,\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\u0017\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\n2\u0006\u0010\u000f\u001a\u00020\nJ4\u0010\u0018\u001a\b\u0012\u0004\u0012\u00020\u00190\u00072\u0006\u0010\u001a\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\n2\u0006\u0010\u000f\u001a\u00020\n2\u0006\u0010\u001b\u001a\u00020\nJ$\u0010\u001c\u001a\b\u0012\u0004\u0012\u00020\u001d0\u00072\u0006\u0010\u0012\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\nJ=\u0010\u001e\u001a\u0016\u0012\u0004\u0012\u0002H \u0018\u00010\u001fj\n\u0012\u0004\u0012\u0002H \u0018\u0001`!\"\u0004\b\u0000\u0010 *\u0004\u0018\u00010\"2\u0012\u0010#\u001a\u000e\u0012\u0004\u0012\u00020%\u0012\u0004\u0012\u0002H 0$H\u0082\bJ\f\u0010&\u001a\u00020\b*\u00020'H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006("}, d2 = {"Lcom/vk/id/internal/api/VKIDApiService;", "", "api", "Lcom/vk/id/network/InternalVKIDApiContract;", "<init>", "(Lcom/vk/id/network/InternalVKIDApiContract;)V", "getToken", "Lcom/vk/id/network/InternalVKIDCall;", "Lcom/vk/id/internal/auth/VKIDTokenPayload;", "code", "", "codeVerifier", "clientId", "deviceId", "redirectUri", "state", "getUserInfo", "Lcom/vk/id/internal/api/dto/VKIDUserInfoPayload;", Constants.ACCESS_TOKEN, "getSilentAuthProviders", "", "Lcom/vk/id/internal/auth/app/VkAuthSilentAuthProvider;", "clientSecret", "refreshToken", "exchangeToken", "Lcom/vk/id/internal/auth/VKIDCodePayload;", "v1Token", "codeChallenge", "logout", "", "parseList", "Ljava/util/ArrayList;", ExifInterface.GPS_DIRECTION_TRUE, "Lkotlin/collections/ArrayList;", "Lorg/json/JSONArray;", "parser", "Lkotlin/Function1;", "Lorg/json/JSONObject;", "parseTokenPayload", "Lcom/vk/id/network/http/HttpResponse;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKIDApiService {
    public static final int $stable = 8;
    private final InternalVKIDApiContract api;

    public VKIDApiService(InternalVKIDApiContract api) {
        Intrinsics.checkNotNullParameter(api, "api");
        this.api = api;
    }

    public final InternalVKIDCall<VKIDTokenPayload> getToken(String code, String codeVerifier, String clientId, String deviceId, String redirectUri, String state) {
        Intrinsics.checkNotNullParameter(code, "code");
        Intrinsics.checkNotNullParameter(codeVerifier, "codeVerifier");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        Intrinsics.checkNotNullParameter(redirectUri, "redirectUri");
        Intrinsics.checkNotNullParameter(state, "state");
        return InternalVKIDCallKt.internalVKIDWrapToVKIDCall(this.api.getToken(code, codeVerifier, clientId, deviceId, redirectUri, state), new Function1() { // from class: com.vk.id.internal.api.VKIDApiService$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return VKIDApiService.getToken$lambda$0(this.f$0, (HttpResponse) obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VKIDTokenPayload getToken$lambda$0(VKIDApiService vKIDApiService, HttpResponse internalVKIDWrapToVKIDCall) {
        Intrinsics.checkNotNullParameter(internalVKIDWrapToVKIDCall, "$this$internalVKIDWrapToVKIDCall");
        return vKIDApiService.parseTokenPayload(internalVKIDWrapToVKIDCall);
    }

    public final InternalVKIDCall<VKIDUserInfoPayload> getUserInfo(String accessToken, String clientId, String deviceId) {
        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        return InternalVKIDCallKt.internalVKIDWrapToVKIDCall(this.api.getUser(accessToken, clientId, deviceId), new Function1() { // from class: com.vk.id.internal.api.VKIDApiService$$ExternalSyntheticLambda4
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return VKIDApiService.getUserInfo$lambda$1((HttpResponse) obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VKIDUserInfoPayload getUserInfo$lambda$1(HttpResponse internalVKIDWrapToVKIDCall) throws JSONException, IOException, VKIDInvalidTokenException {
        Intrinsics.checkNotNullParameter(internalVKIDWrapToVKIDCall, "$this$internalVKIDWrapToVKIDCall");
        JSONObject jSONObject = new JSONObject(internalVKIDWrapToVKIDCall.getBody());
        if (jSONObject.isNull("error")) {
            JSONObject jSONObject2 = jSONObject.getJSONObject("user");
            String strOptString = jSONObject2.optString(SilentAuthInfo.KEY_FIRST_NAME);
            Intrinsics.checkNotNullExpressionValue(strOptString, "optString(...)");
            String strOptString2 = jSONObject2.optString(SilentAuthInfo.KEY_LAST_NAME);
            Intrinsics.checkNotNullExpressionValue(strOptString2, "optString(...)");
            String strOptString3 = jSONObject2.optString("phone");
            Intrinsics.checkNotNullExpressionValue(strOptString3, "optString(...)");
            String strOptString4 = jSONObject2.optString(SilentAuthInfo.KEY_AVATAR);
            Intrinsics.checkNotNullExpressionValue(strOptString4, "optString(...)");
            String strOptString5 = jSONObject2.optString("email");
            Intrinsics.checkNotNullExpressionValue(strOptString5, "optString(...)");
            return new VKIDUserInfoPayload(strOptString, strOptString2, strOptString3, strOptString4, strOptString5);
        }
        if (Intrinsics.areEqual(jSONObject.getString("error"), "invalid_token")) {
            throw new VKIDInvalidTokenException();
        }
        throw new IOException();
    }

    public final InternalVKIDCall<List<VkAuthSilentAuthProvider>> getSilentAuthProviders(String clientId, String clientSecret) {
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(clientSecret, "clientSecret");
        return InternalVKIDCallKt.internalVKIDWrapToVKIDCall(this.api.getSilentAuthProviders(clientId, clientSecret), new Function1() { // from class: com.vk.id.internal.api.VKIDApiService$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return VKIDApiService.getSilentAuthProviders$lambda$2(this.f$0, (HttpResponse) obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final List getSilentAuthProviders$lambda$2(VKIDApiService vKIDApiService, HttpResponse internalVKIDWrapToVKIDCall) throws JSONException {
        ArrayList arrayList;
        Intrinsics.checkNotNullParameter(internalVKIDWrapToVKIDCall, "$this$internalVKIDWrapToVKIDCall");
        JSONArray jSONArray = new JSONObject(internalVKIDWrapToVKIDCall.getBody()).getJSONArray(Response.TYPE);
        VkAuthSilentAuthProvider.Companion companion = VkAuthSilentAuthProvider.INSTANCE;
        if (jSONArray != null) {
            arrayList = new ArrayList(jSONArray.length());
            int length = jSONArray.length();
            for (int i = 0; i < length; i++) {
                JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i);
                if (jSONObjectOptJSONObject != null) {
                    arrayList.add(companion.parse(jSONObjectOptJSONObject));
                }
            }
        } else {
            arrayList = null;
        }
        if (arrayList != null) {
            return arrayList;
        }
        return CollectionsKt.emptyList();
    }

    public final InternalVKIDCall<VKIDTokenPayload> refreshToken(String refreshToken, String clientId, String deviceId, String state) {
        Intrinsics.checkNotNullParameter(refreshToken, "refreshToken");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        Intrinsics.checkNotNullParameter(state, "state");
        return InternalVKIDCallKt.internalVKIDWrapToVKIDCall(this.api.refreshToken(refreshToken, clientId, deviceId, state), new Function1() { // from class: com.vk.id.internal.api.VKIDApiService$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return VKIDApiService.refreshToken$lambda$3(this.f$0, (HttpResponse) obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VKIDTokenPayload refreshToken$lambda$3(VKIDApiService vKIDApiService, HttpResponse internalVKIDWrapToVKIDCall) {
        Intrinsics.checkNotNullParameter(internalVKIDWrapToVKIDCall, "$this$internalVKIDWrapToVKIDCall");
        return vKIDApiService.parseTokenPayload(internalVKIDWrapToVKIDCall);
    }

    public final InternalVKIDCall<VKIDCodePayload> exchangeToken(String v1Token, String clientId, String deviceId, String state, String codeChallenge) {
        Intrinsics.checkNotNullParameter(v1Token, "v1Token");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(codeChallenge, "codeChallenge");
        return InternalVKIDCallKt.internalVKIDWrapToVKIDCall(this.api.exchangeToken(v1Token, clientId, deviceId, state, codeChallenge), new Function1() { // from class: com.vk.id.internal.api.VKIDApiService$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return VKIDApiService.exchangeToken$lambda$4((HttpResponse) obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VKIDCodePayload exchangeToken$lambda$4(HttpResponse internalVKIDWrapToVKIDCall) throws JSONException, IOException {
        Intrinsics.checkNotNullParameter(internalVKIDWrapToVKIDCall, "$this$internalVKIDWrapToVKIDCall");
        if (!internalVKIDWrapToVKIDCall.isSuccessful()) {
            throw new IOException("Api error: " + internalVKIDWrapToVKIDCall.getCode() + " " + internalVKIDWrapToVKIDCall.getBody());
        }
        JSONObject jSONObject = new JSONObject(internalVKIDWrapToVKIDCall.getBody());
        if (jSONObject.has("error")) {
            throw new IOException("Api error: " + internalVKIDWrapToVKIDCall.getCode() + " " + internalVKIDWrapToVKIDCall.getBody());
        }
        String string = jSONObject.getString("code");
        Intrinsics.checkNotNullExpressionValue(string, "getString(...)");
        String strOptString = jSONObject.optString("state");
        Intrinsics.checkNotNullExpressionValue(strOptString, "optString(...)");
        String strOptString2 = jSONObject.optString("device_id");
        Intrinsics.checkNotNullExpressionValue(strOptString2, "optString(...)");
        return new VKIDCodePayload(string, strOptString, strOptString2);
    }

    public final InternalVKIDCall<Unit> logout(String accessToken, String clientId, String deviceId) {
        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        return InternalVKIDCallKt.internalVKIDWrapToVKIDCall(this.api.logout(accessToken, clientId, deviceId), new Function1() { // from class: com.vk.id.internal.api.VKIDApiService$$ExternalSyntheticLambda5
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return VKIDApiService.logout$lambda$5((HttpResponse) obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit logout$lambda$5(HttpResponse internalVKIDWrapToVKIDCall) throws IOException, VKIDInvalidTokenException {
        Intrinsics.checkNotNullParameter(internalVKIDWrapToVKIDCall, "$this$internalVKIDWrapToVKIDCall");
        JSONObject jSONObject = new JSONObject(internalVKIDWrapToVKIDCall.getBody());
        if (!jSONObject.isNull("error")) {
            if (Intrinsics.areEqual(jSONObject.getString("error"), "invalid_token")) {
                throw new VKIDInvalidTokenException();
            }
            throw new IOException();
        }
        return Unit.INSTANCE;
    }

    private final <T> ArrayList<T> parseList(JSONArray jSONArray, Function1<? super JSONObject, ? extends T> function1) {
        if (jSONArray == null) {
            return null;
        }
        ArrayList<T> arrayList = new ArrayList<>(jSONArray.length());
        int length = jSONArray.length();
        for (int i = 0; i < length; i++) {
            JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i);
            if (jSONObjectOptJSONObject != null) {
                arrayList.add(function1.invoke(jSONObjectOptJSONObject));
            }
        }
        return arrayList;
    }

    private final VKIDTokenPayload parseTokenPayload(HttpResponse httpResponse) throws JSONException, IOException {
        if (!httpResponse.isSuccessful()) {
            throw new IOException("Api error: " + httpResponse.getCode() + " " + httpResponse.getBody());
        }
        JSONObject jSONObject = new JSONObject(httpResponse.getBody());
        if (jSONObject.has("error")) {
            throw new IOException("Api error: " + httpResponse.getCode() + " " + jSONObject);
        }
        String string = jSONObject.getString("access_token");
        Intrinsics.checkNotNullExpressionValue(string, "getString(...)");
        String string2 = jSONObject.getString(GrantTypeValues.REFRESH_TOKEN);
        Intrinsics.checkNotNullExpressionValue(string2, "getString(...)");
        String strOptString = jSONObject.optString(ResponseTypeValues.ID_TOKEN);
        Intrinsics.checkNotNullExpressionValue(strOptString, "optString(...)");
        long j = jSONObject.getLong(TraceContext.JsonKeys.USER_ID);
        long jOptLong = jSONObject.optLong("expires_in");
        String strOptString2 = jSONObject.optString("state");
        Intrinsics.checkNotNullExpressionValue(strOptString2, "optString(...)");
        String string3 = jSONObject.getString("scope");
        Intrinsics.checkNotNullExpressionValue(string3, "getString(...)");
        return new VKIDTokenPayload(string, string2, strOptString, jOptLong, j, strOptString2, string3);
    }
}
