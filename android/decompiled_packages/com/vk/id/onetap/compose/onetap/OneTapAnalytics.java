package com.vk.id.onetap.compose.onetap;

import android.content.Context;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.DisposableEffectResult;
import androidx.compose.runtime.DisposableEffectScope;
import androidx.compose.runtime.EffectsKt;
import androidx.compose.runtime.ProvidableCompositionLocal;
import androidx.compose.runtime.RecomposeScopeImplKt;
import androidx.compose.runtime.ScopeUpdateScope;
import androidx.compose.runtime.SnapshotStateKt;
import androidx.compose.runtime.State;
import androidx.compose.ui.platform.AndroidCompositionLocals_androidKt;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleEventObserver;
import androidx.lifecycle.LifecycleOwner;
import androidx.media3.exoplayer.RendererCapabilities;
import com.pravera.flutter_foreground_task.PreferencesKey;
import com.unity3d.ads.core.domain.AndroidGetIsModulesInitEnabled;
import com.vk.id.VKID;
import com.vk.id.VKIDUser;
import com.vk.id.analytics.VKIDAnalytics;
import com.vk.id.analytics.param.LanguageParamKt;
import com.vk.id.analytics.stat.StatTracker;
import com.vk.id.multibranding.OAuthListWidgetAnalytics;
import com.vk.id.onetap.common.OneTapStyle;
import io.sentry.SentryBaseEvent;
import io.sentry.protocol.Message;
import java.util.Map;
import java.util.UUID;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.Pair;
import kotlin.TuplesKt;
import kotlin.Unit;
import kotlin.collections.MapsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SpreadBuilder;

/* JADX INFO: compiled from: OneTapAnalytics.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000V\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\b\n\u0002\u0010\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010$\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0010\u0011\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\bÁ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003J\r\u0010\r\u001a\u00020\u000eH\u0000¢\u0006\u0002\b\u000fJ\r\u0010\u0010\u001a\u00020\u000eH\u0000¢\u0006\u0002\b\u0011J\u001f\u0010\u0012\u001a\u00020\u000e2\u0006\u0010\u0013\u001a\u00020\u00142\b\b\u0002\u0010\u0015\u001a\u00020\u0014H\u0000¢\u0006\u0002\b\u0016J\r\u0010\u0017\u001a\u00020\u000eH\u0000¢\u0006\u0002\b\u0018J\u0017\u0010\u0019\u001a\u00020\u000e2\b\b\u0002\u0010\u0015\u001a\u00020\u0014H\u0000¢\u0006\u0002\b\u001aJ\u001f\u0010\u001b\u001a\u00020\u000e2\u0006\u0010\u001c\u001a\u00020\u001d2\u0006\u0010\u001e\u001a\u00020\u001fH\u0001¢\u0006\u0004\b \u0010!J)\u0010\"\u001a\u00020\u000e2\b\b\u0002\u0010\u0015\u001a\u00020\u00142\u0006\u0010\u001c\u001a\u00020\u001d2\u0006\u0010\u001e\u001a\u00020\u001fH\u0001¢\u0006\u0004\b#\u0010$J#\u0010%\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00050&2\b\u0010'\u001a\u0004\u0018\u00010(H\u0000¢\u0006\u0002\b)J-\u0010*\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00050&2\b\u0010'\u001a\u0004\u0018\u00010(2\b\b\u0002\u0010\u0015\u001a\u00020\u0014H\u0000¢\u0006\u0002\b+J\u0019\u0010,\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00050&H\u0000¢\u0006\u0002\b-J\u0015\u0010.\u001a\u00020\u000e2\u0006\u0010/\u001a\u00020\u0005H\u0000¢\u0006\u0002\b0J\u001f\u00101\u001a\u00020\u000e2\u0006\u0010/\u001a\u00020\u00052\b\b\u0002\u0010\u0015\u001a\u00020\u0014H\u0000¢\u0006\u0002\b2J\u0010\u00103\u001a\u0002042\u0006\u0010\u001e\u001a\u00020\u001fH\u0002J\u0010\u00105\u001a\u0002042\u0006\u0010\u001e\u001a\u00020\u001fH\u0002J\u0010\u00106\u001a\u0002042\u0006\u0010\u0015\u001a\u00020\u0014H\u0002J\u0010\u00107\u001a\u0002042\u0006\u0010\u001c\u001a\u00020\u001dH\u0002J\u0015\u00108\u001a\u0002042\u0006\u0010\u0013\u001a\u00020\u0014H\u0000¢\u0006\u0002\b9J\u0015\u0010:\u001a\u0002042\u0006\u0010/\u001a\u00020\u0005H\u0000¢\u0006\u0002\b;J+\u0010<\u001a\u00020\u000e2\u0006\u0010=\u001a\u00020\u00052\u0012\u0010>\u001a\n\u0012\u0006\b\u0001\u0012\u0002040?\"\u000204H\u0000¢\u0006\u0004\b@\u0010AJ\u001d\u0010B\u001a\u00020\u0005*\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00050&H\u0000¢\u0006\u0002\bCR\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010D\u001a\u00020\u0005X\u0080T¢\u0006\u0002\n\u0000R\u001a\u0010E\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00050FX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006G"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/OneTapAnalytics;", "", "<init>", "()V", "EVENT_SCREEN_PROCEED", "", "EVENT_USER_FOUND", "EVENT_ONETAP_TAP", "EVENT_ONETAP_ALTERNATIVE_SIGN_IN_TAP", "EVENT_ONETAP_AUTH_ERROR", "EVENT_NO_SESSION_FOUND", "EVENT_NO_USER_SHOW", "EVENT_ONETAP_NO_USER_TAP", "sessionNotFound", "", "sessionNotFound$onetap_compose_release", "userWasFoundIcon", "userWasFoundIcon$onetap_compose_release", "userWasFound", "signInAnotherAccountButton", "", PreferencesKey.NOTIFICATION_CONTENT_ICON, "userWasFound$onetap_compose_release", "userNotFoundIcon", "userNotFoundIcon$onetap_compose_release", "userNotFound", "userNotFound$onetap_compose_release", "OneTapIconShown", "scenario", "Lcom/vk/id/onetap/compose/onetap/OneTapTitleScenario;", "style", "Lcom/vk/id/onetap/common/OneTapStyle;", "OneTapIconShown$onetap_compose_release", "(Lcom/vk/id/onetap/compose/onetap/OneTapTitleScenario;Lcom/vk/id/onetap/common/OneTapStyle;Landroidx/compose/runtime/Composer;I)V", "OneTapShown", "OneTapShown$onetap_compose_release", "(ZLcom/vk/id/onetap/compose/onetap/OneTapTitleScenario;Lcom/vk/id/onetap/common/OneTapStyle;Landroidx/compose/runtime/Composer;II)V", "oneTapPressedIcon", "", "user", "Lcom/vk/id/VKIDUser;", "oneTapPressedIcon$onetap_compose_release", "oneTapPressed", "oneTapPressed$onetap_compose_release", "alternatePressed", "alternatePressed$onetap_compose_release", "authErrorIcon", "uuid", "authErrorIcon$onetap_compose_release", "authError", "authError$onetap_compose_release", "themeParam", "Lcom/vk/id/analytics/VKIDAnalytics$EventParam;", "styleParam", "iconParam", "textTypeParam", "alternateParam", "alternateParam$onetap_compose_release", "uuidParam", "uuidParam$onetap_compose_release", "track", "name", Message.JsonKeys.PARAMS, "", "track$onetap_compose_release", "(Ljava/lang/String;[Lcom/vk/id/analytics/VKIDAnalytics$EventParam;)V", "uuidFromParams", "uuidFromParams$onetap_compose_release", "SCREEN_PARAM_NAME", "FLOW_SOURCE", "Lkotlin/Pair;", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class OneTapAnalytics {
    public static final int $stable = 0;
    private static final String EVENT_NO_SESSION_FOUND = "no_session_found";
    private static final String EVENT_NO_USER_SHOW = "onetap_button_no_user_show";
    private static final String EVENT_ONETAP_ALTERNATIVE_SIGN_IN_TAP = "onetap_button_alternative_sign_in_tap";
    private static final String EVENT_ONETAP_AUTH_ERROR = "sdk_auth_error";
    private static final String EVENT_ONETAP_NO_USER_TAP = "onetap_button_no_user_tap";
    private static final String EVENT_ONETAP_TAP = "onetap_button_tap";
    private static final String EVENT_SCREEN_PROCEED = "screen_proceed";
    private static final String EVENT_USER_FOUND = "onetap_button_user_found";
    public static final String SCREEN_PARAM_NAME = "screen";
    public static final OneTapAnalytics INSTANCE = new OneTapAnalytics();
    private static final Pair<String, String> FLOW_SOURCE = TuplesKt.to(StatTracker.EXTERNAL_PARAM_FLOW_SOURCE, "from_one_tap");

    /* JADX INFO: compiled from: OneTapAnalytics.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;
        public static final /* synthetic */ int[] $EnumSwitchMapping$1;

        static {
            int[] iArr = new int[Lifecycle.Event.values().length];
            try {
                iArr[Lifecycle.Event.ON_RESUME.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            $EnumSwitchMapping$0 = iArr;
            int[] iArr2 = new int[OneTapTitleScenario.values().length];
            try {
                iArr2[OneTapTitleScenario.SignIn.ordinal()] = 1;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr2[OneTapTitleScenario.SignUp.ordinal()] = 2;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr2[OneTapTitleScenario.Get.ordinal()] = 3;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                iArr2[OneTapTitleScenario.Open.ordinal()] = 4;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                iArr2[OneTapTitleScenario.Calculate.ordinal()] = 5;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                iArr2[OneTapTitleScenario.Order.ordinal()] = 6;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                iArr2[OneTapTitleScenario.PlaceOrder.ordinal()] = 7;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                iArr2[OneTapTitleScenario.SendRequest.ordinal()] = 8;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                iArr2[OneTapTitleScenario.Participate.ordinal()] = 9;
            } catch (NoSuchFieldError unused10) {
            }
            $EnumSwitchMapping$1 = iArr2;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapIconShown$lambda$6(OneTapAnalytics oneTapAnalytics, OneTapTitleScenario oneTapTitleScenario, OneTapStyle oneTapStyle, int i, Composer composer, int i2) {
        oneTapAnalytics.OneTapIconShown$onetap_compose_release(oneTapTitleScenario, oneTapStyle, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapShown$lambda$13(OneTapAnalytics oneTapAnalytics, boolean z, OneTapTitleScenario oneTapTitleScenario, OneTapStyle oneTapStyle, int i, int i2, Composer composer, int i3) {
        oneTapAnalytics.OneTapShown$onetap_compose_release(z, oneTapTitleScenario, oneTapStyle, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1), i2);
        return Unit.INSTANCE;
    }

    private OneTapAnalytics() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit sessionNotFound$lambda$0(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    public final void sessionNotFound$onetap_compose_release() {
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapAnalytics.sessionNotFound$lambda$0((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda9
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return OneTapAnalytics.sessionNotFound$lambda$1();
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit sessionNotFound$lambda$1() {
        INSTANCE.track$onetap_compose_release(EVENT_NO_SESSION_FOUND, new VKIDAnalytics.EventParam[0]);
        return Unit.INSTANCE;
    }

    public final void userWasFoundIcon$onetap_compose_release() {
        userWasFound$onetap_compose_release(false, true);
    }

    public static /* synthetic */ void userWasFound$onetap_compose_release$default(OneTapAnalytics oneTapAnalytics, boolean z, boolean z2, int i, Object obj) {
        if ((i & 2) != 0) {
            z2 = false;
        }
        oneTapAnalytics.userWasFound$onetap_compose_release(z, z2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit userWasFound$lambda$2(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    public final void userWasFound$onetap_compose_release(final boolean signInAnotherAccountButton, final boolean icon) {
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapAnalytics.userWasFound$lambda$2((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return OneTapAnalytics.userWasFound$lambda$3(signInAnotherAccountButton, icon);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit userWasFound$lambda$3(boolean z, boolean z2) {
        OneTapAnalytics oneTapAnalytics = INSTANCE;
        oneTapAnalytics.track$onetap_compose_release(EVENT_USER_FOUND, oneTapAnalytics.alternateParam$onetap_compose_release(z), oneTapAnalytics.iconParam(z2));
        return Unit.INSTANCE;
    }

    public final void userNotFoundIcon$onetap_compose_release() {
        userNotFound$onetap_compose_release(true);
    }

    public static /* synthetic */ void userNotFound$onetap_compose_release$default(OneTapAnalytics oneTapAnalytics, boolean z, int i, Object obj) {
        if ((i & 1) != 0) {
            z = false;
        }
        oneTapAnalytics.userNotFound$onetap_compose_release(z);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit userNotFound$lambda$4(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    public final void userNotFound$onetap_compose_release(final boolean icon) {
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda12
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapAnalytics.userNotFound$lambda$4((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda13
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return OneTapAnalytics.userNotFound$lambda$5(icon);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit userNotFound$lambda$5(boolean z) {
        OneTapAnalytics oneTapAnalytics = INSTANCE;
        oneTapAnalytics.track$onetap_compose_release(EVENT_NO_USER_SHOW, oneTapAnalytics.iconParam(z));
        return Unit.INSTANCE;
    }

    public final void OneTapIconShown$onetap_compose_release(OneTapTitleScenario scenario, OneTapStyle style, Composer composer, final int i) {
        int i2;
        final OneTapTitleScenario oneTapTitleScenario;
        final OneTapStyle oneTapStyle;
        Intrinsics.checkNotNullParameter(scenario, "scenario");
        Intrinsics.checkNotNullParameter(style, "style");
        Composer composerStartRestartGroup = composer.startRestartGroup(-2102777987);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(scenario) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(style) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changed(this) ? 256 : 128;
        }
        if ((i2 & 147) != 146 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-2102777987, i2, -1, "com.vk.id.onetap.compose.onetap.OneTapAnalytics.OneTapIconShown (OneTapAnalytics.kt:66)");
            }
            int i3 = i2 << 3;
            oneTapTitleScenario = scenario;
            oneTapStyle = style;
            OneTapShown$onetap_compose_release(true, oneTapTitleScenario, oneTapStyle, composerStartRestartGroup, (i3 & 112) | 6 | (i3 & 896) | (i3 & 7168), 0);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            oneTapTitleScenario = scenario;
            oneTapStyle = style;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda14
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OneTapAnalytics.OneTapIconShown$lambda$6(this.f$0, oneTapTitleScenario, oneTapStyle, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    public final void OneTapShown$onetap_compose_release(boolean z, final OneTapTitleScenario scenario, final OneTapStyle style, Composer composer, final int i, final int i2) {
        boolean z2;
        int i3;
        final boolean z3;
        Intrinsics.checkNotNullParameter(scenario, "scenario");
        Intrinsics.checkNotNullParameter(style, "style");
        Composer composerStartRestartGroup = composer.startRestartGroup(-1081169912);
        int i4 = i2 & 1;
        if (i4 != 0) {
            i3 = i | 6;
            z2 = z;
        } else if ((i & 6) == 0) {
            z2 = z;
            i3 = (composerStartRestartGroup.changed(z2) ? 4 : 2) | i;
        } else {
            z2 = z;
            i3 = i;
        }
        if ((i2 & 2) != 0) {
            i3 |= 48;
        } else if ((i & 48) == 0) {
            i3 |= composerStartRestartGroup.changed(scenario) ? 32 : 16;
        }
        if ((i2 & 4) != 0) {
            i3 |= RendererCapabilities.DECODER_SUPPORT_MASK;
        } else if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i3 |= composerStartRestartGroup.changed(style) ? 256 : 128;
        }
        if ((i3 & 147) != 146 || !composerStartRestartGroup.getSkipping()) {
            if (i4 != 0) {
                z2 = false;
            }
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-1081169912, i3, -1, "com.vk.id.onetap.compose.onetap.OneTapAnalytics.OneTapShown (OneTapAnalytics.kt:71)");
            }
            ProvidableCompositionLocal<Context> localContext = AndroidCompositionLocals_androidKt.getLocalContext();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 2023513938, "CC:CompositionLocal.kt#9igjgp");
            Object objConsume = composerStartRestartGroup.consume(localContext);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            final Context context = (Context) objConsume;
            ProvidableCompositionLocal<LifecycleOwner> localLifecycleOwner = AndroidCompositionLocals_androidKt.getLocalLifecycleOwner();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 2023513938, "CC:CompositionLocal.kt#9igjgp");
            Object objConsume2 = composerStartRestartGroup.consume(localLifecycleOwner);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            final State stateRememberUpdatedState = SnapshotStateKt.rememberUpdatedState(objConsume2, composerStartRestartGroup, 0);
            Object value = stateRememberUpdatedState.getValue();
            composerStartRestartGroup.startReplaceGroup(-345230006);
            boolean zChanged = ((i3 & 14) == 4) | composerStartRestartGroup.changed(stateRememberUpdatedState) | ((i3 & 112) == 32) | ((i3 & 896) == 256) | composerStartRestartGroup.changedInstance(context);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (zChanged || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                z3 = z2;
                Function1 function1 = new Function1() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda4
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return OneTapAnalytics.OneTapShown$lambda$12$lambda$11(stateRememberUpdatedState, z3, scenario, style, context, (DisposableEffectScope) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(function1);
                objRememberedValue = function1;
            } else {
                z3 = z2;
            }
            composerStartRestartGroup.endReplaceGroup();
            EffectsKt.DisposableEffect(value, (Function1<? super DisposableEffectScope, ? extends DisposableEffectResult>) objRememberedValue, composerStartRestartGroup, 0);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            z3 = z2;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda5
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OneTapAnalytics.OneTapShown$lambda$13(this.f$0, z3, scenario, style, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final DisposableEffectResult OneTapShown$lambda$12$lambda$11(State state, final boolean z, final OneTapTitleScenario oneTapTitleScenario, final OneTapStyle oneTapStyle, final Context context, DisposableEffectScope DisposableEffect) {
        Intrinsics.checkNotNullParameter(DisposableEffect, "$this$DisposableEffect");
        final Lifecycle lifecycle = ((LifecycleOwner) state.getValue()).getLifecycle();
        final LifecycleEventObserver lifecycleEventObserver = new LifecycleEventObserver() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda6
            @Override // androidx.lifecycle.LifecycleEventObserver
            public final void onStateChanged(LifecycleOwner lifecycleOwner, Lifecycle.Event event) {
                OneTapAnalytics.OneTapShown$lambda$12$lambda$11$lambda$9(z, oneTapTitleScenario, oneTapStyle, context, lifecycleOwner, event);
            }
        };
        lifecycle.addObserver(lifecycleEventObserver);
        return new DisposableEffectResult() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$OneTapShown$lambda$12$lambda$11$$inlined$onDispose$1
            @Override // androidx.compose.runtime.DisposableEffectResult
            public void dispose() {
                lifecycle.removeObserver(lifecycleEventObserver);
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void OneTapShown$lambda$12$lambda$11$lambda$9(final boolean z, final OneTapTitleScenario oneTapTitleScenario, final OneTapStyle oneTapStyle, final Context context, LifecycleOwner lifecycleOwner, Lifecycle.Event event) {
        Intrinsics.checkNotNullParameter(lifecycleOwner, "<unused var>");
        Intrinsics.checkNotNullParameter(event, "event");
        if (WhenMappings.$EnumSwitchMapping$0[event.ordinal()] == 1) {
            VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda10
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return OneTapAnalytics.OneTapShown$lambda$12$lambda$11$lambda$9$lambda$7((Throwable) obj);
                }
            }, new Function0() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda11
                @Override // kotlin.jvm.functions.Function0
                public final Object invoke() {
                    return OneTapAnalytics.OneTapShown$lambda$12$lambda$11$lambda$9$lambda$8(z, oneTapTitleScenario, oneTapStyle, context);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapShown$lambda$12$lambda$11$lambda$9$lambda$7(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapShown$lambda$12$lambda$11$lambda$9$lambda$8(boolean z, OneTapTitleScenario oneTapTitleScenario, OneTapStyle oneTapStyle, Context context) {
        OneTapAnalytics oneTapAnalytics = INSTANCE;
        oneTapAnalytics.track$onetap_compose_release(EVENT_SCREEN_PROCEED, oneTapAnalytics.iconParam(z), oneTapAnalytics.textTypeParam(oneTapTitleScenario), oneTapAnalytics.themeParam(oneTapStyle), oneTapAnalytics.styleParam(oneTapStyle), LanguageParamKt.vkidInternalLanguageParam(context));
        return Unit.INSTANCE;
    }

    public final Map<String, String> oneTapPressedIcon$onetap_compose_release(VKIDUser user) {
        return oneTapPressed$onetap_compose_release(user, true);
    }

    public static /* synthetic */ Map oneTapPressed$onetap_compose_release$default(OneTapAnalytics oneTapAnalytics, VKIDUser vKIDUser, boolean z, int i, Object obj) {
        if ((i & 2) != 0) {
            z = false;
        }
        return oneTapAnalytics.oneTapPressed$onetap_compose_release(vKIDUser, z);
    }

    public final Map<String, String> oneTapPressed$onetap_compose_release(final VKIDUser user, final boolean icon) {
        final String string = UUID.randomUUID().toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda7
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapAnalytics.oneTapPressed$lambda$14((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda8
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return OneTapAnalytics.oneTapPressed$lambda$15(user, icon, string);
            }
        });
        return MapsKt.mapOf(TuplesKt.to(StatTracker.EXTERNAL_PARAM_SESSION_ID, string), FLOW_SOURCE);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit oneTapPressed$lambda$14(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit oneTapPressed$lambda$15(VKIDUser vKIDUser, boolean z, String str) {
        if (vKIDUser != null) {
            OneTapAnalytics oneTapAnalytics = INSTANCE;
            oneTapAnalytics.track$onetap_compose_release(EVENT_ONETAP_TAP, oneTapAnalytics.iconParam(z), oneTapAnalytics.uuidParam$onetap_compose_release(str));
        } else {
            OneTapAnalytics oneTapAnalytics2 = INSTANCE;
            oneTapAnalytics2.track$onetap_compose_release(EVENT_ONETAP_NO_USER_TAP, oneTapAnalytics2.iconParam(z), oneTapAnalytics2.uuidParam$onetap_compose_release(str));
        }
        return Unit.INSTANCE;
    }

    public final Map<String, String> alternatePressed$onetap_compose_release() {
        final String string = UUID.randomUUID().toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda17
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapAnalytics.alternatePressed$lambda$16((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return OneTapAnalytics.alternatePressed$lambda$17(string);
            }
        });
        return MapsKt.mapOf(TuplesKt.to(StatTracker.EXTERNAL_PARAM_SESSION_ID, string), FLOW_SOURCE);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit alternatePressed$lambda$16(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit alternatePressed$lambda$17(String str) {
        OneTapAnalytics oneTapAnalytics = INSTANCE;
        oneTapAnalytics.track$onetap_compose_release(EVENT_ONETAP_ALTERNATIVE_SIGN_IN_TAP, oneTapAnalytics.uuidParam$onetap_compose_release(str));
        return Unit.INSTANCE;
    }

    public final void authErrorIcon$onetap_compose_release(String uuid) {
        Intrinsics.checkNotNullParameter(uuid, "uuid");
        authError$onetap_compose_release(uuid, true);
    }

    public static /* synthetic */ void authError$onetap_compose_release$default(OneTapAnalytics oneTapAnalytics, String str, boolean z, int i, Object obj) {
        if ((i & 2) != 0) {
            z = false;
        }
        oneTapAnalytics.authError$onetap_compose_release(str, z);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit authError$lambda$18(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    public final void authError$onetap_compose_release(final String uuid, final boolean icon) {
        Intrinsics.checkNotNullParameter(uuid, "uuid");
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda15
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapAnalytics.authError$lambda$18((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.onetap.compose.onetap.OneTapAnalytics$$ExternalSyntheticLambda16
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return OneTapAnalytics.authError$lambda$19(icon, uuid);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit authError$lambda$19(boolean z, String str) {
        OneTapAnalytics oneTapAnalytics = INSTANCE;
        oneTapAnalytics.track$onetap_compose_release(EVENT_ONETAP_AUTH_ERROR, oneTapAnalytics.iconParam(z), oneTapAnalytics.uuidParam$onetap_compose_release(str), new VKIDAnalytics.EventParam("from_one_tap", AndroidGetIsModulesInitEnabled.ENABLE_MODULES_INIT_VALUE, null, 4, null), new VKIDAnalytics.EventParam("error", EVENT_ONETAP_AUTH_ERROR, null, 4, null));
        return Unit.INSTANCE;
    }

    private final VKIDAnalytics.EventParam themeParam(OneTapStyle style) {
        String str;
        if ((style instanceof OneTapStyle.Dark) || (style instanceof OneTapStyle.TransparentDark) || (style instanceof OneTapStyle.SecondaryDark) || (style instanceof OneTapStyle.Icon)) {
            str = "dark";
        } else {
            if (!(style instanceof OneTapStyle.Light) && !(style instanceof OneTapStyle.SecondaryLight) && !(style instanceof OneTapStyle.TransparentLight)) {
                throw new NoWhenBranchMatchedException();
            }
            str = "light";
        }
        return new VKIDAnalytics.EventParam("theme_type", str, null, 4, null);
    }

    private final VKIDAnalytics.EventParam styleParam(OneTapStyle style) {
        String str;
        if ((style instanceof OneTapStyle.Dark) || (style instanceof OneTapStyle.Icon) || (style instanceof OneTapStyle.Light)) {
            str = "primary";
        } else {
            if (!(style instanceof OneTapStyle.SecondaryDark) && !(style instanceof OneTapStyle.SecondaryLight) && !(style instanceof OneTapStyle.TransparentDark) && !(style instanceof OneTapStyle.TransparentLight)) {
                throw new NoWhenBranchMatchedException();
            }
            str = "secondary";
        }
        return new VKIDAnalytics.EventParam("style_type", str, null, 4, null);
    }

    private final VKIDAnalytics.EventParam iconParam(boolean icon) {
        String str;
        if (icon) {
            str = PreferencesKey.NOTIFICATION_CONTENT_ICON;
        } else {
            str = "default";
        }
        return new VKIDAnalytics.EventParam("button_type", str, null, 4, null);
    }

    private final VKIDAnalytics.EventParam textTypeParam(OneTapTitleScenario scenario) {
        String str;
        switch (WhenMappings.$EnumSwitchMapping$1[scenario.ordinal()]) {
            case 1:
                str = "default";
                break;
            case 2:
                str = "appoint";
                break;
            case 3:
                str = "receive";
                break;
            case 4:
                str = "open";
                break;
            case 5:
                str = "calculate";
                break;
            case 6:
                str = "order";
                break;
            case 7:
                str = "service_order_placing";
                break;
            case 8:
                str = SentryBaseEvent.JsonKeys.REQUEST;
                break;
            case 9:
                str = "take_part";
                break;
            default:
                throw new NoWhenBranchMatchedException();
        }
        return new VKIDAnalytics.EventParam("text_type", str, null, 4, null);
    }

    public final VKIDAnalytics.EventParam alternateParam$onetap_compose_release(boolean signInAnotherAccountButton) {
        String str;
        if (signInAnotherAccountButton) {
            str = "available";
        } else {
            str = "not_available";
        }
        return new VKIDAnalytics.EventParam("alternative_sign_in_availability", str, null, 4, null);
    }

    public final VKIDAnalytics.EventParam uuidParam$onetap_compose_release(String uuid) {
        Intrinsics.checkNotNullParameter(uuid, "uuid");
        return new VKIDAnalytics.EventParam(OAuthListWidgetAnalytics.UNIQUE_SESSION_PARAM_NAME, uuid, null, 4, null);
    }

    public final void track$onetap_compose_release(String name, VKIDAnalytics.EventParam... params) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(params, "params");
        VKIDAnalytics.Companion companion = VKIDAnalytics.INSTANCE;
        SpreadBuilder spreadBuilder = new SpreadBuilder(2);
        spreadBuilder.add(new VKIDAnalytics.EventParam("sdk_type", "vkid", null, 4, null));
        spreadBuilder.addSpread(params);
        companion.trackEvent(name, (VKIDAnalytics.EventParam[]) spreadBuilder.toArray(new VKIDAnalytics.EventParam[spreadBuilder.size()]));
    }

    public final String uuidFromParams$onetap_compose_release(Map<String, String> map) {
        Intrinsics.checkNotNullParameter(map, "<this>");
        String str = map.get(StatTracker.EXTERNAL_PARAM_SESSION_ID);
        return str == null ? "" : str;
    }
}
