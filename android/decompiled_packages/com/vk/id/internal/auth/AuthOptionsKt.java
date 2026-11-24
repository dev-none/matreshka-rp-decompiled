package com.vk.id.internal.auth;

import android.net.Uri;
import android.util.Base64;
import com.vk.id.OAuth;
import com.vk.id.auth.VKIDAuthParams;
import java.io.IOException;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: AuthOptions.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000(\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u001a\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\u001a\u001d\u0010\u001b\u001a\n \u001d*\u0004\u0018\u00010\u001c0\u001c2\u0006\u0010\u001e\u001a\u00020\u0001H\u0000¢\u0006\u0002\u0010\u001f\u001a\f\u0010 \u001a\u00020\u001c*\u00020!H\u0000\u001a\u0014\u0010\"\u001a\u00020\u001c*\u00020!2\u0006\u0010\u001e\u001a\u00020\u0001H\u0000\u001a\f\u0010#\u001a\u00020\u0001*\u00020$H\u0000\u001a\f\u0010#\u001a\u00020\u0001*\u00020%H\u0000\u001a\f\u0010#\u001a\u00020\u0001*\u00020&H\u0002\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0002\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0003\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0004\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0005\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0006\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0007\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\b\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\t\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\n\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u000b\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\f\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\r\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u000e\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u000f\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0010\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0011\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0012\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0013\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0014\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0015\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0016\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0017\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0018\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u0019\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000\"\u000e\u0010\u001a\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000¨\u0006'"}, d2 = {"APP_ID", "", "CLIENT_ID", "AUTHORITY_BROWSER", "AUTHORITY_CODE_FLOW", "PATH_BROWSER", "CODE_CHALLENGE", "CODE_CHALLENGE_METHOD", "CODE_CHALLENGE_METHOD_VALUE", "REDIRECT_URI", "RESPONSE_TYPE", "RESPONSE_TYPE_CODE", "SCHEME_BROWSER", "STATE", "UUID", "PROMPT", "ACTION", "PROVIDER", "LOCALE", "THEME", "SCREEN_PARAM", "SCREEN_PHONE", "SCOPES", "STATS_INFO", "SDK_TYPE", "SDK_TYPE_VALUE", "SDK_VERSION", "basicCodeFlowUri", "Landroid/net/Uri;", "kotlin.jvm.PlatformType", "appPackage", "(Ljava/lang/String;)Landroid/net/Uri;", "toAuthUriBrowser", "Lcom/vk/id/internal/auth/AuthOptions;", "toAuthUriCodeFlow", "toQueryParam", "Lcom/vk/id/auth/VKIDAuthParams$Locale;", "Lcom/vk/id/auth/VKIDAuthParams$Theme;", "Lcom/vk/id/OAuth;", "vkid_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class AuthOptionsKt {
    private static final String ACTION = "action";
    private static final String APP_ID = "app_id";
    private static final String AUTHORITY_BROWSER = "id.vk.ru";
    private static final String AUTHORITY_CODE_FLOW = "vkcexternalauth-codeflow";
    private static final String CLIENT_ID = "client_id";
    private static final String CODE_CHALLENGE = "code_challenge";
    private static final String CODE_CHALLENGE_METHOD = "code_challenge_method";
    private static final String CODE_CHALLENGE_METHOD_VALUE = "s256";
    private static final String LOCALE = "lang_id";
    private static final String PATH_BROWSER = "authorize";
    private static final String PROMPT = "prompt";
    private static final String PROVIDER = "provider";
    private static final String REDIRECT_URI = "redirect_uri";
    private static final String RESPONSE_TYPE = "response_type";
    private static final String RESPONSE_TYPE_CODE = "code";
    private static final String SCHEME_BROWSER = "https";
    private static final String SCOPES = "scope";
    private static final String SCREEN_PARAM = "screen";
    private static final String SCREEN_PHONE = "phone";
    private static final String SDK_TYPE = "sdk_type";
    private static final String SDK_TYPE_VALUE = "vkid";
    private static final String SDK_VERSION = "v";
    private static final String STATE = "state";
    private static final String STATS_INFO = "stats_info";
    private static final String THEME = "scheme";
    private static final String UUID = "uuid";

    /* JADX INFO: compiled from: AuthOptions.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;
        public static final /* synthetic */ int[] $EnumSwitchMapping$1;

        static {
            int[] iArr = new int[VKIDAuthParams.Locale.values().length];
            try {
                iArr[VKIDAuthParams.Locale.RUS.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[VKIDAuthParams.Locale.UKR.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[VKIDAuthParams.Locale.ENG.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[VKIDAuthParams.Locale.SPA.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                iArr[VKIDAuthParams.Locale.GERMAN.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                iArr[VKIDAuthParams.Locale.POL.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                iArr[VKIDAuthParams.Locale.FRA.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                iArr[VKIDAuthParams.Locale.TURKEY.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            $EnumSwitchMapping$0 = iArr;
            int[] iArr2 = new int[VKIDAuthParams.Theme.values().length];
            try {
                iArr2[VKIDAuthParams.Theme.Light.ordinal()] = 1;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                iArr2[VKIDAuthParams.Theme.Dark.ordinal()] = 2;
            } catch (NoSuchFieldError unused10) {
            }
            $EnumSwitchMapping$1 = iArr2;
        }
    }

    public static final Uri basicCodeFlowUri(String appPackage) {
        Intrinsics.checkNotNullParameter(appPackage, "appPackage");
        return new Uri.Builder().scheme(appPackage).authority(AUTHORITY_CODE_FLOW).build();
    }

    public static final Uri toAuthUriBrowser(AuthOptions authOptions) {
        Intrinsics.checkNotNullParameter(authOptions, "<this>");
        Uri.Builder builderAppendQueryParameter = new Uri.Builder().appendQueryParameter("client_id", authOptions.getAppId()).appendQueryParameter(RESPONSE_TYPE, "code").appendQueryParameter(REDIRECT_URI, authOptions.getRedirectUriBrowser()).appendQueryParameter(CODE_CHALLENGE_METHOD, CODE_CHALLENGE_METHOD_VALUE).appendQueryParameter(CODE_CHALLENGE, authOptions.getCodeChallenge()).appendQueryParameter("state", authOptions.getState()).appendQueryParameter(PROMPT, authOptions.getPrompt()).appendQueryParameter(STATS_INFO, authOptions.getStatsInfo()).appendQueryParameter(SDK_TYPE, SDK_TYPE_VALUE).appendQueryParameter("v", authOptions.getSdkVersion());
        if (!authOptions.getScopes().isEmpty()) {
            builderAppendQueryParameter.appendQueryParameter(SCOPES, CollectionsKt.joinToString$default(authOptions.getScopes(), " ", null, null, 0, null, null, 62, null));
        }
        if (authOptions.getOAuth() != null) {
            builderAppendQueryParameter.appendQueryParameter("action", toQueryParam(authOptions.getOAuth()));
            builderAppendQueryParameter.appendQueryParameter(PROVIDER, authOptions.getOAuth().getServerName());
        }
        if (authOptions.getLocale() != null) {
            builderAppendQueryParameter.appendQueryParameter(LOCALE, authOptions.getLocale());
        }
        if (authOptions.getTheme() != null) {
            builderAppendQueryParameter.appendQueryParameter(THEME, authOptions.getTheme());
        }
        if (authOptions.getWebAuthPhoneScreen()) {
            builderAppendQueryParameter.appendQueryParameter("screen", "phone");
        }
        Uri uriBuild = builderAppendQueryParameter.scheme("https").authority(AUTHORITY_BROWSER).path(PATH_BROWSER).build();
        Intrinsics.checkNotNullExpressionValue(uriBuild, "build(...)");
        return uriBuild;
    }

    public static final Uri toAuthUriCodeFlow(AuthOptions authOptions, String appPackage) {
        Intrinsics.checkNotNullParameter(authOptions, "<this>");
        Intrinsics.checkNotNullParameter(appPackage, "appPackage");
        Uri.Builder builderAppendQueryParameter = new Uri.Builder().appendQueryParameter("app_id", authOptions.getAppId()).appendQueryParameter(RESPONSE_TYPE, "code").appendQueryParameter(REDIRECT_URI, authOptions.getRedirectUriCodeFlow()).appendQueryParameter(CODE_CHALLENGE_METHOD, authOptions.getCodeChallengeMethod()).appendQueryParameter(CODE_CHALLENGE, authOptions.getCodeChallenge()).appendQueryParameter("state", authOptions.getState()).appendQueryParameter("uuid", authOptions.getState());
        if (authOptions.getOAuth() != null) {
            builderAppendQueryParameter.appendQueryParameter("action", toQueryParam(authOptions.getOAuth()));
            builderAppendQueryParameter.appendQueryParameter(PROVIDER, authOptions.getOAuth().getServerName());
        }
        if (authOptions.getLocale() != null) {
            builderAppendQueryParameter.appendQueryParameter(LOCALE, authOptions.getLocale());
        }
        if (authOptions.getTheme() != null) {
            builderAppendQueryParameter.appendQueryParameter(THEME, authOptions.getTheme());
        }
        if (authOptions.getWebAuthPhoneScreen()) {
            builderAppendQueryParameter.appendQueryParameter("screen", "phone");
        }
        Uri uriBuild = builderAppendQueryParameter.scheme(appPackage).authority(AUTHORITY_CODE_FLOW).build();
        Intrinsics.checkNotNullExpressionValue(uriBuild, "build(...)");
        return uriBuild;
    }

    public static final String toQueryParam(VKIDAuthParams.Locale locale) {
        int i;
        Intrinsics.checkNotNullParameter(locale, "<this>");
        switch (WhenMappings.$EnumSwitchMapping$0[locale.ordinal()]) {
            case 1:
                i = 0;
                break;
            case 2:
                i = 1;
                break;
            case 3:
                i = 3;
                break;
            case 4:
                i = 4;
                break;
            case 5:
                i = 6;
                break;
            case 6:
                i = 15;
                break;
            case 7:
                i = 16;
                break;
            case 8:
                i = 82;
                break;
            default:
                throw new NoWhenBranchMatchedException();
        }
        return String.valueOf(i);
    }

    public static final String toQueryParam(VKIDAuthParams.Theme theme) {
        Intrinsics.checkNotNullParameter(theme, "<this>");
        int i = WhenMappings.$EnumSwitchMapping$1[theme.ordinal()];
        if (i == 1) {
            return "bright_light";
        }
        if (i != 2) {
            throw new NoWhenBranchMatchedException();
        }
        return "space_gray";
    }

    private static final String toQueryParam(OAuth oAuth) throws IOException {
        String strEncodeToString = Base64.encodeToString(StringsKt.encodeToByteArray("{\"name\":\"sdk_oauth\",\"params\":{\"oauth\":\"" + oAuth.getServerName() + "\"}}"), 0);
        Intrinsics.checkNotNullExpressionValue(strEncodeToString, "encodeToString(...)");
        String str = strEncodeToString;
        StringBuilder sb = new StringBuilder();
        int length = str.length();
        for (int i = 0; i < length; i++) {
            char cCharAt = str.charAt(i);
            if (cCharAt != '\n') {
                sb.append(cCharAt);
            }
        }
        String string = sb.toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        return string;
    }
}
