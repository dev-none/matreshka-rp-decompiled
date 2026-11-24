package com.vk.id.auth;

import android.content.Context;
import com.vk.id.OAuth;
import com.vk.id.common.InternalVKIDApi;
import io.sentry.protocol.OperatingSystem;
import io.sentry.protocol.Request;
import java.util.Map;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.SetsKt;
import kotlin.enums.EnumEntries;
import kotlin.enums.EnumEntriesKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDAuthParams.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000Z\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\"\n\u0000\n\u0002\u0010$\n\u0002\b\u0017\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\b\n\u0002\b\u0004\b\u0007\u0018\u00002\u00020\u0001:\u0003345B{\b\u0002\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\b\u0010\b\u001a\u0004\u0018\u00010\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\r\u0012\f\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\r0\u0010\u0012\u0016\b\u0002\u0010\u0011\u001a\u0010\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u00020\r\u0018\u00010\u0012\u0012\b\b\u0002\u0010\u0013\u001a\u00020\u0007¢\u0006\u0004\b\u0014\u0010\u0015J!\u0010(\u001a\u00020\u00002\u0017\u0010)\u001a\u0013\u0012\u0004\u0012\u00020+\u0012\u0004\u0012\u00020,0*¢\u0006\u0002\b-H\u0007J\b\u0010.\u001a\u00020\rH\u0016J\u0013\u0010/\u001a\u00020\u00072\b\u00100\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u00101\u001a\u000202H\u0016R\u0016\u0010\u0002\u001a\u0004\u0018\u00010\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017R\u0016\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0019R\u0014\u0010\u0006\u001a\u00020\u0007X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u001bR\u0016\u0010\b\u001a\u0004\u0018\u00010\tX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u001dR\u0014\u0010\n\u001a\u00020\u000bX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u001fR\u0016\u0010\f\u001a\u0004\u0018\u00010\rX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b \u0010!R\u0016\u0010\u000e\u001a\u0004\u0018\u00010\rX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\"\u0010!R\u001a\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\r0\u0010X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b#\u0010$R\"\u0010\u0011\u001a\u0010\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u00020\r\u0018\u00010\u0012X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b%\u0010&R\u0014\u0010\u0013\u001a\u00020\u0007X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b'\u0010\u001b¨\u00066"}, d2 = {"Lcom/vk/id/auth/VKIDAuthParams;", "", "locale", "Lcom/vk/id/auth/VKIDAuthParams$Locale;", "theme", "Lcom/vk/id/auth/VKIDAuthParams$Theme;", "useOAuthProviderIfPossible", "", "oAuth", "Lcom/vk/id/OAuth;", "prompt", "Lcom/vk/id/auth/Prompt;", "state", "", "codeChallenge", "scopes", "", "extraParams", "", "internalUse", "<init>", "(Lcom/vk/id/auth/VKIDAuthParams$Locale;Lcom/vk/id/auth/VKIDAuthParams$Theme;ZLcom/vk/id/OAuth;Lcom/vk/id/auth/Prompt;Ljava/lang/String;Ljava/lang/String;Ljava/util/Set;Ljava/util/Map;Z)V", "getLocale$vkid_release", "()Lcom/vk/id/auth/VKIDAuthParams$Locale;", "getTheme$vkid_release", "()Lcom/vk/id/auth/VKIDAuthParams$Theme;", "getUseOAuthProviderIfPossible$vkid_release", "()Z", "getOAuth$vkid_release", "()Lcom/vk/id/OAuth;", "getPrompt$vkid_release", "()Lcom/vk/id/auth/Prompt;", "getState$vkid_release", "()Ljava/lang/String;", "getCodeChallenge$vkid_release", "getScopes$vkid_release", "()Ljava/util/Set;", "getExtraParams$vkid_release", "()Ljava/util/Map;", "getInternalUse$vkid_release", "newBuilder", "initializer", "Lkotlin/Function1;", "Lcom/vk/id/auth/VKIDAuthParams$Builder;", "", "Lkotlin/ExtensionFunctionType;", "toString", "equals", Request.JsonKeys.OTHER, "hashCode", "", "Locale", "Theme", "Builder", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKIDAuthParams {
    public static final int $stable = 8;
    private final String codeChallenge;
    private final Map<String, String> extraParams;
    private final boolean internalUse;
    private final Locale locale;
    private final OAuth oAuth;
    private final Prompt prompt;
    private final Set<String> scopes;
    private final String state;
    private final Theme theme;
    private final boolean useOAuthProviderIfPossible;

    public /* synthetic */ VKIDAuthParams(Locale locale, Theme theme, boolean z, OAuth oAuth, Prompt prompt, String str, String str2, Set set, Map map, boolean z2, DefaultConstructorMarker defaultConstructorMarker) {
        this(locale, theme, z, oAuth, prompt, str, str2, set, map, z2);
    }

    private VKIDAuthParams(Locale locale, Theme theme, boolean z, OAuth oAuth, Prompt prompt, String str, String str2, Set<String> set, Map<String, String> map, boolean z2) {
        this.locale = locale;
        this.theme = theme;
        this.useOAuthProviderIfPossible = z;
        this.oAuth = oAuth;
        this.prompt = prompt;
        this.state = str;
        this.codeChallenge = str2;
        this.scopes = set;
        this.extraParams = map;
        this.internalUse = z2;
    }

    /* synthetic */ VKIDAuthParams(Locale locale, Theme theme, boolean z, OAuth oAuth, Prompt prompt, String str, String str2, Set set, Map map, boolean z2, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(locale, theme, z, oAuth, prompt, str, str2, set, (i & 256) != 0 ? null : map, (i & 512) != 0 ? false : z2);
    }

    /* JADX INFO: renamed from: getLocale$vkid_release, reason: from getter */
    public final Locale getLocale() {
        return this.locale;
    }

    /* JADX INFO: renamed from: getTheme$vkid_release, reason: from getter */
    public final Theme getTheme() {
        return this.theme;
    }

    /* JADX INFO: renamed from: getUseOAuthProviderIfPossible$vkid_release, reason: from getter */
    public final boolean getUseOAuthProviderIfPossible() {
        return this.useOAuthProviderIfPossible;
    }

    /* JADX INFO: renamed from: getOAuth$vkid_release, reason: from getter */
    public final OAuth getOAuth() {
        return this.oAuth;
    }

    /* JADX INFO: renamed from: getPrompt$vkid_release, reason: from getter */
    public final Prompt getPrompt() {
        return this.prompt;
    }

    /* JADX INFO: renamed from: getState$vkid_release, reason: from getter */
    public final String getState() {
        return this.state;
    }

    /* JADX INFO: renamed from: getCodeChallenge$vkid_release, reason: from getter */
    public final String getCodeChallenge() {
        return this.codeChallenge;
    }

    public final Set<String> getScopes$vkid_release() {
        return this.scopes;
    }

    public final Map<String, String> getExtraParams$vkid_release() {
        return this.extraParams;
    }

    /* JADX INFO: renamed from: getInternalUse$vkid_release, reason: from getter */
    public final boolean getInternalUse() {
        return this.internalUse;
    }

    /* JADX INFO: compiled from: VKIDAuthParams.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\f\b\u0086\u0081\u0002\u0018\u0000 \f2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\fB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000b¨\u0006\r"}, d2 = {"Lcom/vk/id/auth/VKIDAuthParams$Locale;", "", "<init>", "(Ljava/lang/String;I)V", "RUS", "UKR", "ENG", "SPA", "GERMAN", "POL", "FRA", "TURKEY", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public enum Locale {
        RUS,
        UKR,
        ENG,
        SPA,
        GERMAN,
        POL,
        FRA,
        TURKEY;

        private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());

        /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
        public static final Companion INSTANCE = new Companion(null);

        public static EnumEntries<Locale> getEntries() {
            return $ENTRIES;
        }

        /* JADX INFO: compiled from: VKIDAuthParams.kt */
        @InternalVKIDApi
        @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\b\u0087\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0017\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0000¢\u0006\u0002\b\bJ\u0014\u0010\t\u001a\u0004\u0018\u00010\u00052\b\u0010\n\u001a\u0004\u0018\u00010\u000bH\u0007¨\u0006\f"}, d2 = {"Lcom/vk/id/auth/VKIDAuthParams$Locale$Companion;", "", "<init>", "()V", "systemLocale", "Lcom/vk/id/auth/VKIDAuthParams$Locale;", "context", "Landroid/content/Context;", "systemLocale$vkid_release", "fromLocale", "locale", "Ljava/util/Locale;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            private Companion() {
            }

            public final Locale systemLocale$vkid_release(Context context) {
                Intrinsics.checkNotNullParameter(context, "context");
                return fromLocale(context.getResources().getConfiguration().getLocales().get(0));
            }

            @InternalVKIDApi
            public final Locale fromLocale(java.util.Locale locale) {
                String language = locale != null ? locale.getLanguage() : null;
                if (language != null) {
                    int iHashCode = language.hashCode();
                    if (iHashCode != 3201) {
                        if (iHashCode != 3241) {
                            if (iHashCode != 3246) {
                                if (iHashCode != 3276) {
                                    if (iHashCode != 3580) {
                                        if (iHashCode != 3651) {
                                            if (iHashCode != 3710) {
                                                if (iHashCode == 3734 && language.equals("uk")) {
                                                    return Locale.UKR;
                                                }
                                            } else if (language.equals("tr")) {
                                                return Locale.TURKEY;
                                            }
                                        } else if (language.equals("ru")) {
                                            return Locale.RUS;
                                        }
                                    } else if (language.equals("pl")) {
                                        return Locale.POL;
                                    }
                                } else if (language.equals("fr")) {
                                    return Locale.FRA;
                                }
                            } else if (language.equals("es")) {
                                return Locale.SPA;
                            }
                        } else if (language.equals("en")) {
                            return Locale.ENG;
                        }
                    } else if (language.equals("de")) {
                        return Locale.GERMAN;
                    }
                }
                return null;
            }
        }
    }

    /* JADX INFO: compiled from: VKIDAuthParams.kt */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0006\b\u0086\u0081\u0002\u0018\u0000 \u00062\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u0006B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005¨\u0006\u0007"}, d2 = {"Lcom/vk/id/auth/VKIDAuthParams$Theme;", "", "<init>", "(Ljava/lang/String;I)V", "Light", "Dark", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public enum Theme {
        Light,
        Dark;

        private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());

        /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
        public static final Companion INSTANCE = new Companion(null);

        public static EnumEntries<Theme> getEntries() {
            return $ENTRIES;
        }

        /* JADX INFO: compiled from: VKIDAuthParams.kt */
        @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0080\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lcom/vk/id/auth/VKIDAuthParams$Theme$Companion;", "", "<init>", "()V", "systemTheme", "Lcom/vk/id/auth/VKIDAuthParams$Theme;", "context", "Landroid/content/Context;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            private Companion() {
            }

            public final Theme systemTheme(Context context) {
                Intrinsics.checkNotNullParameter(context, "context");
                int i = context.getResources().getConfiguration().uiMode & 48;
                if (i == 16) {
                    return Theme.Light;
                }
                if (i != 32) {
                    return null;
                }
                return Theme.Dark;
            }
        }
    }

    /* JADX INFO: compiled from: VKIDAuthParams.kt */
    @Metadata(d1 = {"\u0000R\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000e\n\u0002\b\b\n\u0002\u0010\"\n\u0002\b\u0005\n\u0002\u0010$\n\u0002\b\n\n\u0002\u0018\u0002\n\u0000\b\u0007\u0018\u00002\u00020\u0001B\t\b\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010<\u001a\u00020=R\u001c\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0006\u0010\u0007\"\u0004\b\b\u0010\tR\u001c\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\f\u0010\r\"\u0004\b\u000e\u0010\u000fR\u001a\u0010\u0010\u001a\u00020\u0011X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0012\u0010\u0013\"\u0004\b\u0014\u0010\u0015R\u001c\u0010\u0016\u001a\u0004\u0018\u00010\u0017X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0018\u0010\u0019\"\u0004\b\u001a\u0010\u001bR\u001a\u0010\u001c\u001a\u00020\u001dX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001e\u0010\u001f\"\u0004\b \u0010!R\u001c\u0010\"\u001a\u0004\u0018\u00010#X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b$\u0010%\"\u0004\b&\u0010'R\u001c\u0010(\u001a\u0004\u0018\u00010#X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b)\u0010%\"\u0004\b*\u0010'R \u0010+\u001a\b\u0012\u0004\u0012\u00020#0,X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b-\u0010.\"\u0004\b/\u00100R2\u00101\u001a\u0010\u0012\u0004\u0012\u00020#\u0012\u0004\u0012\u00020#\u0018\u0001028\u0006@\u0006X\u0087\u000e¢\u0006\u0014\n\u0000\u0012\u0004\b3\u0010\u0003\u001a\u0004\b4\u00105\"\u0004\b6\u00107R$\u00108\u001a\u00020\u00118\u0006@\u0006X\u0087\u000e¢\u0006\u0014\n\u0000\u0012\u0004\b9\u0010\u0003\u001a\u0004\b:\u0010\u0013\"\u0004\b;\u0010\u0015¨\u0006>"}, d2 = {"Lcom/vk/id/auth/VKIDAuthParams$Builder;", "", "<init>", "()V", "locale", "Lcom/vk/id/auth/VKIDAuthParams$Locale;", "getLocale", "()Lcom/vk/id/auth/VKIDAuthParams$Locale;", "setLocale", "(Lcom/vk/id/auth/VKIDAuthParams$Locale;)V", "theme", "Lcom/vk/id/auth/VKIDAuthParams$Theme;", "getTheme", "()Lcom/vk/id/auth/VKIDAuthParams$Theme;", "setTheme", "(Lcom/vk/id/auth/VKIDAuthParams$Theme;)V", "useOAuthProviderIfPossible", "", "getUseOAuthProviderIfPossible", "()Z", "setUseOAuthProviderIfPossible", "(Z)V", "oAuth", "Lcom/vk/id/OAuth;", "getOAuth", "()Lcom/vk/id/OAuth;", "setOAuth", "(Lcom/vk/id/OAuth;)V", "prompt", "Lcom/vk/id/auth/Prompt;", "getPrompt", "()Lcom/vk/id/auth/Prompt;", "setPrompt", "(Lcom/vk/id/auth/Prompt;)V", "state", "", "getState", "()Ljava/lang/String;", "setState", "(Ljava/lang/String;)V", "codeChallenge", "getCodeChallenge", "setCodeChallenge", "scopes", "", "getScopes", "()Ljava/util/Set;", "setScopes", "(Ljava/util/Set;)V", "extraParams", "", "getExtraParams$annotations", "getExtraParams", "()Ljava/util/Map;", "setExtraParams", "(Ljava/util/Map;)V", "internalUse", "getInternalUse$annotations", "getInternalUse", "setInternalUse", OperatingSystem.JsonKeys.BUILD, "Lcom/vk/id/auth/VKIDAuthParams;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Builder {
        public static final int $stable = 8;
        private String codeChallenge;
        private Map<String, String> extraParams;
        private boolean internalUse;
        private Locale locale;
        private OAuth oAuth;
        private String state;
        private Theme theme;
        private boolean useOAuthProviderIfPossible = true;
        private Prompt prompt = Prompt.BLANK;
        private Set<String> scopes = SetsKt.emptySet();

        @InternalVKIDApi
        public static /* synthetic */ void getExtraParams$annotations() {
        }

        @InternalVKIDApi
        public static /* synthetic */ void getInternalUse$annotations() {
        }

        public final Locale getLocale() {
            return this.locale;
        }

        public final void setLocale(Locale locale) {
            this.locale = locale;
        }

        public final Theme getTheme() {
            return this.theme;
        }

        public final void setTheme(Theme theme) {
            this.theme = theme;
        }

        public final boolean getUseOAuthProviderIfPossible() {
            return this.useOAuthProviderIfPossible;
        }

        public final void setUseOAuthProviderIfPossible(boolean z) {
            this.useOAuthProviderIfPossible = z;
        }

        public final OAuth getOAuth() {
            return this.oAuth;
        }

        public final void setOAuth(OAuth oAuth) {
            this.oAuth = oAuth;
        }

        public final Prompt getPrompt() {
            return this.prompt;
        }

        public final void setPrompt(Prompt prompt) {
            Intrinsics.checkNotNullParameter(prompt, "<set-?>");
            this.prompt = prompt;
        }

        public final String getState() {
            return this.state;
        }

        public final void setState(String str) {
            this.state = str;
        }

        public final String getCodeChallenge() {
            return this.codeChallenge;
        }

        public final void setCodeChallenge(String str) {
            this.codeChallenge = str;
        }

        public final Set<String> getScopes() {
            return this.scopes;
        }

        public final void setScopes(Set<String> set) {
            Intrinsics.checkNotNullParameter(set, "<set-?>");
            this.scopes = set;
        }

        public final Map<String, String> getExtraParams() {
            return this.extraParams;
        }

        public final void setExtraParams(Map<String, String> map) {
            this.extraParams = map;
        }

        public final boolean getInternalUse() {
            return this.internalUse;
        }

        public final void setInternalUse(boolean z) {
            this.internalUse = z;
        }

        public final VKIDAuthParams build() {
            return new VKIDAuthParams(this.locale, this.theme, this.useOAuthProviderIfPossible, this.oAuth, this.prompt, this.state, this.codeChallenge, this.scopes, this.extraParams, this.internalUse, null);
        }
    }

    public String toString() {
        return "VKIDAuthParams(locale=" + this.locale + ", theme=" + this.theme + ", useOAuthProviderIfPossible=" + this.useOAuthProviderIfPossible + ", oAuth=" + this.oAuth + ", prompt=" + this.prompt + ", state=" + this.state + ", codeChallenge=" + this.codeChallenge + ", scopes=" + this.scopes + ", extraParams=" + this.extraParams + ", internalUse=" + this.internalUse + ")";
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!Intrinsics.areEqual(getClass(), other != null ? other.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(other, "null cannot be cast to non-null type com.vk.id.auth.VKIDAuthParams");
        VKIDAuthParams vKIDAuthParams = (VKIDAuthParams) other;
        return this.locale == vKIDAuthParams.locale && this.theme == vKIDAuthParams.theme && this.useOAuthProviderIfPossible == vKIDAuthParams.useOAuthProviderIfPossible && this.oAuth == vKIDAuthParams.oAuth && this.prompt == vKIDAuthParams.prompt && Intrinsics.areEqual(this.state, vKIDAuthParams.state) && Intrinsics.areEqual(this.codeChallenge, vKIDAuthParams.codeChallenge) && Intrinsics.areEqual(this.scopes, vKIDAuthParams.scopes) && Intrinsics.areEqual(this.extraParams, vKIDAuthParams.extraParams) && this.internalUse == vKIDAuthParams.internalUse;
    }

    public int hashCode() {
        Locale locale = this.locale;
        int iHashCode = (locale != null ? locale.hashCode() : 0) * 31;
        Theme theme = this.theme;
        int iHashCode2 = (((iHashCode + (theme != null ? theme.hashCode() : 0)) * 31) + Boolean.hashCode(this.useOAuthProviderIfPossible)) * 31;
        OAuth oAuth = this.oAuth;
        int iHashCode3 = (((iHashCode2 + (oAuth != null ? oAuth.hashCode() : 0)) * 31) + this.prompt.hashCode()) * 31;
        String str = this.state;
        int iHashCode4 = (iHashCode3 + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.codeChallenge;
        int iHashCode5 = (((iHashCode4 + (str2 != null ? str2.hashCode() : 0)) * 31) + this.scopes.hashCode()) * 31;
        Map<String, String> map = this.extraParams;
        return ((iHashCode5 + (map != null ? map.hashCode() : 0)) * 31) + Boolean.hashCode(this.internalUse);
    }

    @InternalVKIDApi
    public final VKIDAuthParams newBuilder(Function1<? super Builder, Unit> initializer) {
        Intrinsics.checkNotNullParameter(initializer, "initializer");
        Builder builder = new Builder();
        builder.setLocale(this.locale);
        builder.setTheme(this.theme);
        builder.setUseOAuthProviderIfPossible(this.useOAuthProviderIfPossible);
        builder.setOAuth(this.oAuth);
        builder.setPrompt(this.prompt);
        builder.setState(this.state);
        builder.setCodeChallenge(this.codeChallenge);
        builder.setScopes(this.scopes);
        builder.setExtraParams(this.extraParams);
        builder.setInternalUse(this.internalUse);
        initializer.invoke(builder);
        return builder.build();
    }
}
