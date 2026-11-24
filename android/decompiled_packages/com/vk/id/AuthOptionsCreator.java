package com.vk.id;

import android.content.Context;
import android.net.Uri;
import com.vk.id.auth.Prompt;
import com.vk.id.auth.VKIDAuthParams;
import com.vk.id.internal.auth.AuthOptions;
import com.vk.id.internal.auth.AuthOptionsKt;
import com.vk.id.internal.auth.ServiceCredentials;
import com.vk.id.internal.auth.pkce.PkceGeneratorSHA256;
import com.vk.id.internal.state.StateGenerator;
import com.vk.id.internal.store.InternalVKIDPrefsStore;
import java.security.SecureRandom;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import net.openid.appauth.AuthorizationRequest;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: AuthOptionsCreator.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000B\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0001\u0018\u00002\u00020\u0001BA\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005\u0012\f\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\b0\u0005\u0012\f\u0010\t\u001a\b\u0012\u0004\u0012\u00020\n0\u0005\u0012\u0006\u0010\u000b\u001a\u00020\f¢\u0006\u0004\b\r\u0010\u000eJ\u001d\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u0014H\u0000¢\u0006\u0002\b\u0015R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\b0\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\t\u001a\b\u0012\u0004\u0012\u00020\n0\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\fX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0016"}, d2 = {"Lcom/vk/id/AuthOptionsCreator;", "", "appContext", "Landroid/content/Context;", "pkceGenerator", "Lkotlin/Lazy;", "Lcom/vk/id/internal/auth/pkce/PkceGeneratorSHA256;", "prefsStore", "Lcom/vk/id/internal/store/InternalVKIDPrefsStore;", "serviceCredentials", "Lcom/vk/id/internal/auth/ServiceCredentials;", "stateGenerator", "Lcom/vk/id/internal/state/StateGenerator;", "<init>", "(Landroid/content/Context;Lkotlin/Lazy;Lkotlin/Lazy;Lkotlin/Lazy;Lcom/vk/id/internal/state/StateGenerator;)V", "create", "Lcom/vk/id/internal/auth/AuthOptions;", "authParams", "Lcom/vk/id/auth/VKIDAuthParams;", "statParams", "Lcom/vk/id/StatParams;", "create$vkid_release", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class AuthOptionsCreator {
    public static final int $stable = 8;
    private final Context appContext;
    private final Lazy<PkceGeneratorSHA256> pkceGenerator;
    private final Lazy<InternalVKIDPrefsStore> prefsStore;
    private final Lazy<ServiceCredentials> serviceCredentials;
    private final StateGenerator stateGenerator;

    /* JADX INFO: compiled from: AuthOptionsCreator.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[Prompt.values().length];
            try {
                iArr[Prompt.LOGIN.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[Prompt.CONSENT.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    public AuthOptionsCreator(Context appContext, Lazy<PkceGeneratorSHA256> pkceGenerator, Lazy<InternalVKIDPrefsStore> prefsStore, Lazy<ServiceCredentials> serviceCredentials, StateGenerator stateGenerator) {
        Intrinsics.checkNotNullParameter(appContext, "appContext");
        Intrinsics.checkNotNullParameter(pkceGenerator, "pkceGenerator");
        Intrinsics.checkNotNullParameter(prefsStore, "prefsStore");
        Intrinsics.checkNotNullParameter(serviceCredentials, "serviceCredentials");
        Intrinsics.checkNotNullParameter(stateGenerator, "stateGenerator");
        this.appContext = appContext;
        this.pkceGenerator = pkceGenerator;
        this.prefsStore = prefsStore;
        this.serviceCredentials = serviceCredentials;
        this.stateGenerator = stateGenerator;
    }

    public final AuthOptions create$vkid_release(VKIDAuthParams authParams, StatParams statParams) throws JSONException {
        String str;
        Intrinsics.checkNotNullParameter(authParams, "authParams");
        Intrinsics.checkNotNullParameter(statParams, "statParams");
        String codeChallenge = authParams.getCodeChallenge();
        if (codeChallenge == null) {
            String strGenerateRandomCodeVerifier = this.pkceGenerator.getValue().generateRandomCodeVerifier(new SecureRandom());
            this.prefsStore.getValue().setCodeVerifier$vkid_release(strGenerateRandomCodeVerifier);
            codeChallenge = this.pkceGenerator.getValue().deriveCodeVerifierChallenge(strGenerateRandomCodeVerifier);
        }
        String str2 = codeChallenge;
        String state = authParams.getState();
        if (state != null) {
            this.prefsStore.getValue().setState(state);
        } else {
            state = this.stateGenerator.regenerateState();
        }
        String str3 = state;
        VKIDAuthParams.Locale locale = authParams.getLocale();
        if (locale == null) {
            locale = VKIDAuthParams.Locale.INSTANCE.systemLocale$vkid_release(this.appContext);
        }
        VKIDAuthParams.Theme theme = authParams.getTheme();
        if (theme == null) {
            theme = VKIDAuthParams.Theme.INSTANCE.systemTheme(this.appContext);
        }
        ServiceCredentials value = this.serviceCredentials.getValue();
        JSONObject jSONObject = new JSONObject();
        AuthOptionsCreatorKt.addOAuthParams(jSONObject, authParams.getScopes$vkid_release());
        Uri uri = Uri.parse(value.getRedirectUri());
        Uri.Builder builderBuildUpon = uri.buildUpon();
        builderBuildUpon.appendQueryParameter("oauth2_params", AuthOptionsCreatorKt.toBase64(jSONObject));
        Uri.Builder builderBuildUpon2 = uri.buildUpon();
        JSONObject jSONObjectCreateStatsInfo = AuthOptionsCreatorKt.createStatsInfo(statParams);
        AuthOptionsCreatorKt.addStatParams(jSONObject, jSONObjectCreateStatsInfo);
        builderBuildUpon2.appendQueryParameter("oauth2_params", AuthOptionsCreatorKt.toBase64(jSONObject));
        builderBuildUpon2.appendQueryParameter("v", "2.7.0");
        String clientID = value.getClientID();
        String string = builderBuildUpon.toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        String string2 = builderBuildUpon2.toString();
        Intrinsics.checkNotNullExpressionValue(string2, "toString(...)");
        String queryParam = locale != null ? AuthOptionsKt.toQueryParam(locale) : null;
        String queryParam2 = theme != null ? AuthOptionsKt.toQueryParam(theme) : null;
        boolean z = !authParams.getUseOAuthProviderIfPossible();
        OAuth oAuth = authParams.getOAuth();
        int i = WhenMappings.$EnumSwitchMapping$0[authParams.getPrompt().ordinal()];
        if (i == 1) {
            str = "login";
        } else if (i == 2) {
            str = AuthorizationRequest.Prompt.CONSENT;
        } else {
            str = "";
        }
        return new AuthOptions(clientID, str2, "sha256", string2, string, str3, queryParam, queryParam2, z, oAuth, str, authParams.getScopes$vkid_release(), AuthOptionsCreatorKt.toBase64(jSONObjectCreateStatsInfo), "2.7.0");
    }
}
