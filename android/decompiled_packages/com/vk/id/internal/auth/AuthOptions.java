package com.vk.id.internal.auth;

import com.google.firebase.remoteconfig.RemoteConfigConstants;
import com.my.target.common.menu.MenuActionType;
import com.vk.id.OAuth;
import io.sentry.protocol.Request;
import java.util.Set;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AuthOptions.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\b\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\"\n\u0002\b(\n\u0002\u0010\b\n\u0002\b\u0002\b\u0081\b\u0018\u00002\u00020\u0001B\u0083\u0001\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\u0006\u0010\u0007\u001a\u00020\u0003\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u000b\u001a\u00020\f\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u000e\u0012\u0006\u0010\u000f\u001a\u00020\u0003\u0012\f\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00030\u0011\u0012\u0006\u0010\u0012\u001a\u00020\u0003\u0012\u0006\u0010\u0013\u001a\u00020\u0003¢\u0006\u0004\b\u0014\u0010\u0015J\t\u0010(\u001a\u00020\u0003HÆ\u0003J\t\u0010)\u001a\u00020\u0003HÆ\u0003J\t\u0010*\u001a\u00020\u0003HÆ\u0003J\t\u0010+\u001a\u00020\u0003HÆ\u0003J\t\u0010,\u001a\u00020\u0003HÆ\u0003J\t\u0010-\u001a\u00020\u0003HÆ\u0003J\u000b\u0010.\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010/\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\t\u00100\u001a\u00020\fHÆ\u0003J\u000b\u00101\u001a\u0004\u0018\u00010\u000eHÆ\u0003J\t\u00102\u001a\u00020\u0003HÆ\u0003J\u000f\u00103\u001a\b\u0012\u0004\u0012\u00020\u00030\u0011HÆ\u0003J\t\u00104\u001a\u00020\u0003HÆ\u0003J\t\u00105\u001a\u00020\u0003HÆ\u0003J¡\u0001\u00106\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u00032\b\b\u0002\u0010\u0007\u001a\u00020\u00032\b\b\u0002\u0010\b\u001a\u00020\u00032\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u000b\u001a\u00020\f2\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u000e2\b\b\u0002\u0010\u000f\u001a\u00020\u00032\u000e\b\u0002\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00030\u00112\b\b\u0002\u0010\u0012\u001a\u00020\u00032\b\b\u0002\u0010\u0013\u001a\u00020\u0003HÇ\u0001J\u0013\u00107\u001a\u00020\f2\b\u00108\u001a\u0004\u0018\u00010\u0001H×\u0003J\t\u00109\u001a\u00020:H×\u0001J\t\u0010;\u001a\u00020\u0003H×\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0017R\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u0017R\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u0017R\u0011\u0010\u0007\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u0017R\u0011\u0010\b\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u0017R\u0013\u0010\t\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u0017R\u0013\u0010\n\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u0017R\u0011\u0010\u000b\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010 R\u0013\u0010\r\u001a\u0004\u0018\u00010\u000e¢\u0006\b\n\u0000\u001a\u0004\b!\u0010\"R\u0011\u0010\u000f\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b#\u0010\u0017R\u0017\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00030\u0011¢\u0006\b\n\u0000\u001a\u0004\b$\u0010%R\u0011\u0010\u0012\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b&\u0010\u0017R\u0011\u0010\u0013\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b'\u0010\u0017¨\u0006<"}, d2 = {"Lcom/vk/id/internal/auth/AuthOptions;", "", RemoteConfigConstants.RequestFieldKey.APP_ID, "", "codeChallenge", "codeChallengeMethod", "redirectUriCodeFlow", "redirectUriBrowser", "state", "locale", "theme", "webAuthPhoneScreen", "", "oAuth", "Lcom/vk/id/OAuth;", "prompt", "scopes", "", "statsInfo", RemoteConfigConstants.RequestFieldKey.SDK_VERSION, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLcom/vk/id/OAuth;Ljava/lang/String;Ljava/util/Set;Ljava/lang/String;Ljava/lang/String;)V", "getAppId", "()Ljava/lang/String;", "getCodeChallenge", "getCodeChallengeMethod", "getRedirectUriCodeFlow", "getRedirectUriBrowser", "getState", "getLocale", "getTheme", "getWebAuthPhoneScreen", "()Z", "getOAuth", "()Lcom/vk/id/OAuth;", "getPrompt", "getScopes", "()Ljava/util/Set;", "getStatsInfo", "getSdkVersion", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "component13", "component14", MenuActionType.COPY, "equals", Request.JsonKeys.OTHER, "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class AuthOptions {
    public static final int $stable = 8;
    private final String appId;
    private final String codeChallenge;
    private final String codeChallengeMethod;
    private final String locale;
    private final OAuth oAuth;
    private final String prompt;
    private final String redirectUriBrowser;
    private final String redirectUriCodeFlow;
    private final Set<String> scopes;
    private final String sdkVersion;
    private final String state;
    private final String statsInfo;
    private final String theme;
    private final boolean webAuthPhoneScreen;

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getAppId() {
        return this.appId;
    }

    /* JADX INFO: renamed from: component10, reason: from getter */
    public final OAuth getOAuth() {
        return this.oAuth;
    }

    /* JADX INFO: renamed from: component11, reason: from getter */
    public final String getPrompt() {
        return this.prompt;
    }

    public final Set<String> component12() {
        return this.scopes;
    }

    /* JADX INFO: renamed from: component13, reason: from getter */
    public final String getStatsInfo() {
        return this.statsInfo;
    }

    /* JADX INFO: renamed from: component14, reason: from getter */
    public final String getSdkVersion() {
        return this.sdkVersion;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getCodeChallenge() {
        return this.codeChallenge;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getCodeChallengeMethod() {
        return this.codeChallengeMethod;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final String getRedirectUriCodeFlow() {
        return this.redirectUriCodeFlow;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final String getRedirectUriBrowser() {
        return this.redirectUriBrowser;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final String getState() {
        return this.state;
    }

    /* JADX INFO: renamed from: component7, reason: from getter */
    public final String getLocale() {
        return this.locale;
    }

    /* JADX INFO: renamed from: component8, reason: from getter */
    public final String getTheme() {
        return this.theme;
    }

    /* JADX INFO: renamed from: component9, reason: from getter */
    public final boolean getWebAuthPhoneScreen() {
        return this.webAuthPhoneScreen;
    }

    public final AuthOptions copy(String appId, String codeChallenge, String codeChallengeMethod, String redirectUriCodeFlow, String redirectUriBrowser, String state, String locale, String theme, boolean webAuthPhoneScreen, OAuth oAuth, String prompt, Set<String> scopes, String statsInfo, String sdkVersion) {
        Intrinsics.checkNotNullParameter(appId, "appId");
        Intrinsics.checkNotNullParameter(codeChallenge, "codeChallenge");
        Intrinsics.checkNotNullParameter(codeChallengeMethod, "codeChallengeMethod");
        Intrinsics.checkNotNullParameter(redirectUriCodeFlow, "redirectUriCodeFlow");
        Intrinsics.checkNotNullParameter(redirectUriBrowser, "redirectUriBrowser");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(prompt, "prompt");
        Intrinsics.checkNotNullParameter(scopes, "scopes");
        Intrinsics.checkNotNullParameter(statsInfo, "statsInfo");
        Intrinsics.checkNotNullParameter(sdkVersion, "sdkVersion");
        return new AuthOptions(appId, codeChallenge, codeChallengeMethod, redirectUriCodeFlow, redirectUriBrowser, state, locale, theme, webAuthPhoneScreen, oAuth, prompt, scopes, statsInfo, sdkVersion);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof AuthOptions)) {
            return false;
        }
        AuthOptions authOptions = (AuthOptions) other;
        return Intrinsics.areEqual(this.appId, authOptions.appId) && Intrinsics.areEqual(this.codeChallenge, authOptions.codeChallenge) && Intrinsics.areEqual(this.codeChallengeMethod, authOptions.codeChallengeMethod) && Intrinsics.areEqual(this.redirectUriCodeFlow, authOptions.redirectUriCodeFlow) && Intrinsics.areEqual(this.redirectUriBrowser, authOptions.redirectUriBrowser) && Intrinsics.areEqual(this.state, authOptions.state) && Intrinsics.areEqual(this.locale, authOptions.locale) && Intrinsics.areEqual(this.theme, authOptions.theme) && this.webAuthPhoneScreen == authOptions.webAuthPhoneScreen && this.oAuth == authOptions.oAuth && Intrinsics.areEqual(this.prompt, authOptions.prompt) && Intrinsics.areEqual(this.scopes, authOptions.scopes) && Intrinsics.areEqual(this.statsInfo, authOptions.statsInfo) && Intrinsics.areEqual(this.sdkVersion, authOptions.sdkVersion);
    }

    public int hashCode() {
        int iHashCode = ((((((((((this.appId.hashCode() * 31) + this.codeChallenge.hashCode()) * 31) + this.codeChallengeMethod.hashCode()) * 31) + this.redirectUriCodeFlow.hashCode()) * 31) + this.redirectUriBrowser.hashCode()) * 31) + this.state.hashCode()) * 31;
        String str = this.locale;
        int iHashCode2 = (iHashCode + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.theme;
        int iHashCode3 = (((iHashCode2 + (str2 == null ? 0 : str2.hashCode())) * 31) + Boolean.hashCode(this.webAuthPhoneScreen)) * 31;
        OAuth oAuth = this.oAuth;
        return ((((((((iHashCode3 + (oAuth != null ? oAuth.hashCode() : 0)) * 31) + this.prompt.hashCode()) * 31) + this.scopes.hashCode()) * 31) + this.statsInfo.hashCode()) * 31) + this.sdkVersion.hashCode();
    }

    public String toString() {
        return "AuthOptions(appId=" + this.appId + ", codeChallenge=" + this.codeChallenge + ", codeChallengeMethod=" + this.codeChallengeMethod + ", redirectUriCodeFlow=" + this.redirectUriCodeFlow + ", redirectUriBrowser=" + this.redirectUriBrowser + ", state=" + this.state + ", locale=" + this.locale + ", theme=" + this.theme + ", webAuthPhoneScreen=" + this.webAuthPhoneScreen + ", oAuth=" + this.oAuth + ", prompt=" + this.prompt + ", scopes=" + this.scopes + ", statsInfo=" + this.statsInfo + ", sdkVersion=" + this.sdkVersion + ")";
    }

    public AuthOptions(String appId, String codeChallenge, String codeChallengeMethod, String redirectUriCodeFlow, String redirectUriBrowser, String state, String str, String str2, boolean z, OAuth oAuth, String prompt, Set<String> scopes, String statsInfo, String sdkVersion) {
        Intrinsics.checkNotNullParameter(appId, "appId");
        Intrinsics.checkNotNullParameter(codeChallenge, "codeChallenge");
        Intrinsics.checkNotNullParameter(codeChallengeMethod, "codeChallengeMethod");
        Intrinsics.checkNotNullParameter(redirectUriCodeFlow, "redirectUriCodeFlow");
        Intrinsics.checkNotNullParameter(redirectUriBrowser, "redirectUriBrowser");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(prompt, "prompt");
        Intrinsics.checkNotNullParameter(scopes, "scopes");
        Intrinsics.checkNotNullParameter(statsInfo, "statsInfo");
        Intrinsics.checkNotNullParameter(sdkVersion, "sdkVersion");
        this.appId = appId;
        this.codeChallenge = codeChallenge;
        this.codeChallengeMethod = codeChallengeMethod;
        this.redirectUriCodeFlow = redirectUriCodeFlow;
        this.redirectUriBrowser = redirectUriBrowser;
        this.state = state;
        this.locale = str;
        this.theme = str2;
        this.webAuthPhoneScreen = z;
        this.oAuth = oAuth;
        this.prompt = prompt;
        this.scopes = scopes;
        this.statsInfo = statsInfo;
        this.sdkVersion = sdkVersion;
    }

    public final String getAppId() {
        return this.appId;
    }

    public final String getCodeChallenge() {
        return this.codeChallenge;
    }

    public final String getCodeChallengeMethod() {
        return this.codeChallengeMethod;
    }

    public final String getRedirectUriCodeFlow() {
        return this.redirectUriCodeFlow;
    }

    public final String getRedirectUriBrowser() {
        return this.redirectUriBrowser;
    }

    public final String getState() {
        return this.state;
    }

    public final String getLocale() {
        return this.locale;
    }

    public final String getTheme() {
        return this.theme;
    }

    public final boolean getWebAuthPhoneScreen() {
        return this.webAuthPhoneScreen;
    }

    public final OAuth getOAuth() {
        return this.oAuth;
    }

    public final String getPrompt() {
        return this.prompt;
    }

    public final Set<String> getScopes() {
        return this.scopes;
    }

    public final String getStatsInfo() {
        return this.statsInfo;
    }

    public final String getSdkVersion() {
        return this.sdkVersion;
    }
}
