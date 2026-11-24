package com.vk.id.multibranding;

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
import com.vk.id.OAuth;
import com.vk.id.VKID;
import com.vk.id.analytics.VKIDAnalytics;
import com.vk.id.analytics.stat.StatTracker;
import com.vk.id.onetap.compose.onetap.OneTapAnalytics;
import io.sentry.protocol.Message;
import java.util.Map;
import java.util.Set;
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
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SpreadBuilder;

/* JADX INFO: compiled from: OAuthListWidgetAnalytics.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\"\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010$\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0011\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0001\u0018\u0000  2\u00020\u0001:\u0001 B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0014\u0010\b\u001a\u00020\t2\f\u0010\n\u001a\b\u0012\u0004\u0012\u00020\f0\u000bJ\u001d\u0010\r\u001a\u00020\t2\u0006\u0010\u000e\u001a\u00020\f2\u0006\u0010\u000f\u001a\u00020\u0005H\u0007¢\u0006\u0002\u0010\u0010J\"\u0010\u0011\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00030\u00122\u0006\u0010\u000e\u001a\u00020\f2\u0006\u0010\u000f\u001a\u00020\u0005J\u0016\u0010\u0013\u001a\u00020\t2\u0006\u0010\u0014\u001a\u00020\u00032\u0006\u0010\u000e\u001a\u00020\fJ\u0010\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u000f\u001a\u00020\u0005H\u0002J\u0010\u0010\u0017\u001a\u00020\u00162\u0006\u0010\u0018\u001a\u00020\u0003H\u0002J)\u0010\u0019\u001a\u00020\t2\u0006\u0010\u001a\u001a\u00020\u00032\u0012\u0010\u001b\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00160\u001c\"\u00020\u0016H\u0002¢\u0006\u0002\u0010\u001dR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u001e\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00030\u001fX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006!"}, d2 = {"Lcom/vk/id/multibranding/OAuthListWidgetAnalytics;", "", OneTapAnalytics.SCREEN_PARAM_NAME, "", "paused", "", "<init>", "(Ljava/lang/String;Z)V", "oauthAdded", "", "oAuths", "", "Lcom/vk/id/OAuth;", "OAuthShown", "oAuth", "isText", "(Lcom/vk/id/OAuth;ZLandroidx/compose/runtime/Composer;I)V", "onOAuthTap", "", "onAuthError", "sessionId", "isIconParam", "Lcom/vk/id/analytics/VKIDAnalytics$EventParam;", "uuidParam", "uuid", "track", "name", Message.JsonKeys.PARAMS, "", "(Ljava/lang/String;[Lcom/vk/id/analytics/VKIDAnalytics$EventParam;)V", "flowSource", "Lkotlin/Pair;", "Companion", "multibranding-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class OAuthListWidgetAnalytics {
    public static final int $stable = 0;
    private static final Companion Companion = new Companion(null);

    @Deprecated
    public static final String UNIQUE_SESSION_PARAM_NAME = "unique_session_id";
    private final Pair<String, String> flowSource;
    private final boolean paused;
    private final String screen;

    /* JADX INFO: compiled from: OAuthListWidgetAnalytics.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;
        public static final /* synthetic */ int[] $EnumSwitchMapping$1;

        static {
            int[] iArr = new int[OAuth.values().length];
            try {
                iArr[OAuth.VK.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[OAuth.MAIL.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[OAuth.OK.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            $EnumSwitchMapping$0 = iArr;
            int[] iArr2 = new int[Lifecycle.Event.values().length];
            try {
                iArr2[Lifecycle.Event.ON_RESUME.ordinal()] = 1;
            } catch (NoSuchFieldError unused4) {
            }
            $EnumSwitchMapping$1 = iArr2;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthShown$lambda$9(OAuthListWidgetAnalytics oAuthListWidgetAnalytics, OAuth oAuth, boolean z, int i, Composer composer, int i2) {
        oAuthListWidgetAnalytics.OAuthShown(oAuth, z, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    public OAuthListWidgetAnalytics(String screen, boolean z) {
        Intrinsics.checkNotNullParameter(screen, "screen");
        this.screen = screen;
        this.paused = z;
        this.flowSource = TuplesKt.to(StatTracker.EXTERNAL_PARAM_FLOW_SOURCE, "from_multibranding");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit oauthAdded$lambda$0(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    public final void oauthAdded(final Set<? extends OAuth> oAuths) {
        Intrinsics.checkNotNullParameter(oAuths, "oAuths");
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetAnalytics$$ExternalSyntheticLambda10
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OAuthListWidgetAnalytics.oauthAdded$lambda$0((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.multibranding.OAuthListWidgetAnalytics$$ExternalSyntheticLambda11
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return OAuthListWidgetAnalytics.oauthAdded$lambda$2(this.f$0, oAuths);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final Unit oauthAdded$lambda$2(OAuthListWidgetAnalytics oAuthListWidgetAnalytics, final Set set) {
        Function2 function2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetAnalytics$$ExternalSyntheticLambda6
            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(Object obj, Object obj2) {
                return OAuthListWidgetAnalytics.oauthAdded$lambda$2$lambda$1(set, (String) obj, (OAuth) obj2);
            }
        };
        oAuthListWidgetAnalytics.track("multibranding_oauth_added", function2.invoke("ok_ru", OAuth.OK), function2.invoke("mail_ru", OAuth.MAIL), function2.invoke("vk", OAuth.VK));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VKIDAnalytics.EventParam oauthAdded$lambda$2$lambda$1(Set set, String name, OAuth oauth) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(oauth, "oauth");
        return new VKIDAnalytics.EventParam(name, set.contains(oauth) ? "1" : "0", null, 4, null);
    }

    public final void OAuthShown(final OAuth oAuth, final boolean z, Composer composer, final int i) {
        int i2;
        Intrinsics.checkNotNullParameter(oAuth, "oAuth");
        Composer composerStartRestartGroup = composer.startRestartGroup(415891252);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(oAuth) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(z) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changed(this) ? 256 : 128;
        }
        if ((i2 & 147) != 146 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(415891252, i2, -1, "com.vk.id.multibranding.OAuthListWidgetAnalytics.OAuthShown (OAuthListWidgetAnalytics.kt:36)");
            }
            ProvidableCompositionLocal<LifecycleOwner> localLifecycleOwner = AndroidCompositionLocals_androidKt.getLocalLifecycleOwner();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 2023513938, "CC:CompositionLocal.kt#9igjgp");
            Object objConsume = composerStartRestartGroup.consume(localLifecycleOwner);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            final State stateRememberUpdatedState = SnapshotStateKt.rememberUpdatedState(objConsume, composerStartRestartGroup, 0);
            Object value = stateRememberUpdatedState.getValue();
            composerStartRestartGroup.startReplaceGroup(1941577090);
            boolean zChanged = ((i2 & 14) == 4) | composerStartRestartGroup.changed(stateRememberUpdatedState) | ((i2 & 896) == 256) | ((i2 & 112) == 32);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (zChanged || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetAnalytics$$ExternalSyntheticLambda4
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return OAuthListWidgetAnalytics.OAuthShown$lambda$8$lambda$7(stateRememberUpdatedState, oAuth, this, z, (DisposableEffectScope) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            EffectsKt.DisposableEffect(value, (Function1<? super DisposableEffectScope, ? extends DisposableEffectResult>) objRememberedValue, composerStartRestartGroup, 0);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetAnalytics$$ExternalSyntheticLambda5
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OAuthListWidgetAnalytics.OAuthShown$lambda$9(this.f$0, oAuth, z, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final DisposableEffectResult OAuthShown$lambda$8$lambda$7(State state, final OAuth oAuth, final OAuthListWidgetAnalytics oAuthListWidgetAnalytics, final boolean z, DisposableEffectScope DisposableEffect) {
        Intrinsics.checkNotNullParameter(DisposableEffect, "$this$DisposableEffect");
        final Lifecycle lifecycle = ((LifecycleOwner) state.getValue()).getLifecycle();
        final LifecycleEventObserver lifecycleEventObserver = new LifecycleEventObserver() { // from class: com.vk.id.multibranding.OAuthListWidgetAnalytics$$ExternalSyntheticLambda7
            @Override // androidx.lifecycle.LifecycleEventObserver
            public final void onStateChanged(LifecycleOwner lifecycleOwner, Lifecycle.Event event) {
                OAuthListWidgetAnalytics.OAuthShown$lambda$8$lambda$7$lambda$5(oAuth, oAuthListWidgetAnalytics, z, lifecycleOwner, event);
            }
        };
        lifecycle.addObserver(lifecycleEventObserver);
        return new DisposableEffectResult() { // from class: com.vk.id.multibranding.OAuthListWidgetAnalytics$OAuthShown$lambda$8$lambda$7$$inlined$onDispose$1
            @Override // androidx.compose.runtime.DisposableEffectResult
            public void dispose() {
                lifecycle.removeObserver(lifecycleEventObserver);
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void OAuthShown$lambda$8$lambda$7$lambda$5(final OAuth oAuth, final OAuthListWidgetAnalytics oAuthListWidgetAnalytics, final boolean z, LifecycleOwner lifecycleOwner, Lifecycle.Event event) {
        Intrinsics.checkNotNullParameter(lifecycleOwner, "<unused var>");
        Intrinsics.checkNotNullParameter(event, "event");
        if (WhenMappings.$EnumSwitchMapping$1[event.ordinal()] == 1) {
            VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetAnalytics$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return OAuthListWidgetAnalytics.OAuthShown$lambda$8$lambda$7$lambda$5$lambda$3((Throwable) obj);
                }
            }, new Function0() { // from class: com.vk.id.multibranding.OAuthListWidgetAnalytics$$ExternalSyntheticLambda3
                @Override // kotlin.jvm.functions.Function0
                public final Object invoke() {
                    return OAuthListWidgetAnalytics.OAuthShown$lambda$8$lambda$7$lambda$5$lambda$4(oAuth, oAuthListWidgetAnalytics, z);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthShown$lambda$8$lambda$7$lambda$5$lambda$3(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthShown$lambda$8$lambda$7$lambda$5$lambda$4(OAuth oAuth, OAuthListWidgetAnalytics oAuthListWidgetAnalytics, boolean z) {
        String str;
        int i = WhenMappings.$EnumSwitchMapping$0[oAuth.ordinal()];
        if (i == 1) {
            str = "vk_button_show";
        } else if (i == 2) {
            str = "mail_button_show";
        } else {
            if (i != 3) {
                throw new NoWhenBranchMatchedException();
            }
            str = "ok_button_show";
        }
        oAuthListWidgetAnalytics.track(str, oAuthListWidgetAnalytics.isIconParam(z));
        return Unit.INSTANCE;
    }

    public final Map<String, String> onOAuthTap(final OAuth oAuth, final boolean isText) {
        Intrinsics.checkNotNullParameter(oAuth, "oAuth");
        final String string = UUID.randomUUID().toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetAnalytics$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OAuthListWidgetAnalytics.onOAuthTap$lambda$10((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.multibranding.OAuthListWidgetAnalytics$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return OAuthListWidgetAnalytics.onOAuthTap$lambda$11(oAuth, this, isText, string);
            }
        });
        return MapsKt.mapOf(TuplesKt.to(StatTracker.EXTERNAL_PARAM_SESSION_ID, string), this.flowSource);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onOAuthTap$lambda$10(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onOAuthTap$lambda$11(OAuth oAuth, OAuthListWidgetAnalytics oAuthListWidgetAnalytics, boolean z, String str) {
        String str2;
        int i = WhenMappings.$EnumSwitchMapping$0[oAuth.ordinal()];
        if (i == 1) {
            str2 = "vk_button_tap";
        } else if (i == 2) {
            str2 = "mail_button_tap";
        } else {
            if (i != 3) {
                throw new NoWhenBranchMatchedException();
            }
            str2 = "ok_button_tap";
        }
        oAuthListWidgetAnalytics.track(str2, oAuthListWidgetAnalytics.isIconParam(z), oAuthListWidgetAnalytics.uuidParam(str));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onAuthError$lambda$12(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    public final void onAuthError(final String sessionId, final OAuth oAuth) {
        Intrinsics.checkNotNullParameter(sessionId, "sessionId");
        Intrinsics.checkNotNullParameter(oAuth, "oAuth");
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetAnalytics$$ExternalSyntheticLambda8
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OAuthListWidgetAnalytics.onAuthError$lambda$12((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.multibranding.OAuthListWidgetAnalytics$$ExternalSyntheticLambda9
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return OAuthListWidgetAnalytics.onAuthError$lambda$13(this.f$0, oAuth, sessionId);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onAuthError$lambda$13(OAuthListWidgetAnalytics oAuthListWidgetAnalytics, OAuth oAuth, String str) {
        String str2;
        if (!oAuthListWidgetAnalytics.paused) {
            int i = WhenMappings.$EnumSwitchMapping$0[oAuth.ordinal()];
            if (i == 1) {
                str2 = "vk";
            } else if (i == 2) {
                str2 = "mail_ru";
            } else {
                if (i != 3) {
                    throw new NoWhenBranchMatchedException();
                }
                str2 = "ok_ru";
            }
            VKIDAnalytics.INSTANCE.trackEvent("sdk_auth_error", new VKIDAnalytics.EventParam("sdk_type", "vkid", null, 4, null), oAuthListWidgetAnalytics.uuidParam(str), new VKIDAnalytics.EventParam("error", "sdk_auth_error", null, 4, null), new VKIDAnalytics.EventParam("from_multibranding", AndroidGetIsModulesInitEnabled.ENABLE_MODULES_INIT_VALUE, null, 4, null), new VKIDAnalytics.EventParam("oauth_service", str2, null, 4, null), new VKIDAnalytics.EventParam(OneTapAnalytics.SCREEN_PARAM_NAME, oAuthListWidgetAnalytics.screen, null, 4, null));
        }
        return Unit.INSTANCE;
    }

    private final VKIDAnalytics.EventParam isIconParam(boolean isText) {
        return new VKIDAnalytics.EventParam("button_type", isText ? "default" : PreferencesKey.NOTIFICATION_CONTENT_ICON, null, 4, null);
    }

    private final VKIDAnalytics.EventParam uuidParam(String uuid) {
        return new VKIDAnalytics.EventParam(UNIQUE_SESSION_PARAM_NAME, uuid, null, 4, null);
    }

    private final void track(String name, VKIDAnalytics.EventParam... params) {
        if (this.paused) {
            return;
        }
        VKIDAnalytics.Companion companion = VKIDAnalytics.INSTANCE;
        SpreadBuilder spreadBuilder = new SpreadBuilder(3);
        spreadBuilder.add(new VKIDAnalytics.EventParam("sdk_type", "vkid", null, 4, null));
        spreadBuilder.add(new VKIDAnalytics.EventParam(OneTapAnalytics.SCREEN_PARAM_NAME, this.screen, null, 4, null));
        spreadBuilder.addSpread(params);
        companion.trackEvent(name, (VKIDAnalytics.EventParam[]) spreadBuilder.toArray(new VKIDAnalytics.EventParam[spreadBuilder.size()]));
    }

    /* JADX INFO: compiled from: OAuthListWidgetAnalytics.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000¨\u0006\u0006"}, d2 = {"Lcom/vk/id/multibranding/OAuthListWidgetAnalytics$Companion;", "", "<init>", "()V", "UNIQUE_SESSION_PARAM_NAME", "", "multibranding-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }
}
