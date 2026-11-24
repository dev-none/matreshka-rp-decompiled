package com.vk.id.onetap.compose.onetap.sheet;

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
import com.unity3d.ads.core.domain.AndroidGetIsModulesInitEnabled;
import com.vk.id.VKID;
import com.vk.id.VKIDUser;
import com.vk.id.analytics.VKIDAnalytics;
import com.vk.id.analytics.param.LanguageParamKt;
import com.vk.id.analytics.stat.StatTracker;
import com.vk.id.auth.VKIDAuthParams;
import com.vk.id.onetap.compose.onetap.OneTapAnalytics;
import java.util.Map;
import java.util.UUID;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.TuplesKt;
import kotlin.Unit;
import kotlin.collections.MapsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OneTapBottomSheetAnalytics.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\bÁ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003J\u001f\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0001¢\u0006\u0004\b\n\u0010\u000bJ\u000f\u0010\f\u001a\u00020\u0005H\u0001¢\u0006\u0004\b\r\u0010\u000eJ\u000f\u0010\u000f\u001a\u00020\u0005H\u0001¢\u0006\u0004\b\u0010\u0010\u000eJ\u001b\u0010\u0011\u001a\u00020\u00052\f\u0010\u0012\u001a\b\u0012\u0004\u0012\u00020\u00050\u0013H\u0003¢\u0006\u0002\u0010\u0014J\r\u0010\u0015\u001a\u00020\u0005H\u0000¢\u0006\u0002\b\u0016J\r\u0010\u0017\u001a\u00020\u0005H\u0000¢\u0006\u0002\b\u0018J#\u0010\u0019\u001a\u000e\u0012\u0004\u0012\u00020\u001b\u0012\u0004\u0012\u00020\u001b0\u001a2\b\u0010\u001c\u001a\u0004\u0018\u00010\u001dH\u0000¢\u0006\u0002\b\u001eJ\u0019\u0010\u001f\u001a\u000e\u0012\u0004\u0012\u00020\u001b\u0012\u0004\u0012\u00020\u001b0\u001aH\u0000¢\u0006\u0002\b J\u0015\u0010!\u001a\u00020\u00052\u0006\u0010\"\u001a\u00020#H\u0000¢\u0006\u0002\b$J\u0019\u0010%\u001a\u000e\u0012\u0004\u0012\u00020\u001b\u0012\u0004\u0012\u00020\u001b0\u001aH\u0000¢\u0006\u0002\b&J\u0015\u0010'\u001a\u00020\u00052\u0006\u0010(\u001a\u00020\u001bH\u0000¢\u0006\u0002\b)R\u000e\u0010*\u001a\u00020+X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010,\u001a\u000e\u0012\u0004\u0012\u00020\u001b\u0012\u0004\u0012\u00020\u001b0-X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006."}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/OneTapBottomSheetAnalytics;", "", "<init>", "()V", "OneTapBottomSheetShown", "", "theme", "Lcom/vk/id/auth/VKIDAuthParams$Theme;", "scenario", "Lcom/vk/id/onetap/compose/onetap/sheet/OneTapScenario;", "OneTapBottomSheetShown$onetap_compose_release", "(Lcom/vk/id/auth/VKIDAuthParams$Theme;Lcom/vk/id/onetap/compose/onetap/sheet/OneTapScenario;Landroidx/compose/runtime/Composer;I)V", "BottomSheetInProgressShown", "BottomSheetInProgressShown$onetap_compose_release", "(Landroidx/compose/runtime/Composer;I)V", "BottomSheetErrorShown", "BottomSheetErrorShown$onetap_compose_release", "SheetScreenShown", "fireAnalytics", "Lkotlin/Function0;", "(Lkotlin/jvm/functions/Function0;Landroidx/compose/runtime/Composer;I)V", "noActiveSession", "noActiveSession$onetap_compose_release", "noUserButtonShown", "noUserButtonShown$onetap_compose_release", "oneTapPressed", "", "", "user", "Lcom/vk/id/VKIDUser;", "oneTapPressed$onetap_compose_release", "alternatePressed", "alternatePressed$onetap_compose_release", "userWasFound", "signInAnotherAccountButton", "", "userWasFound$onetap_compose_release", "retryAuthTap", "retryAuthTap$onetap_compose_release", "authError", "uuid", "authError$onetap_compose_release", "screenParam", "Lcom/vk/id/analytics/VKIDAnalytics$EventParam;", "FLOW_SOURCE", "Lkotlin/Pair;", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class OneTapBottomSheetAnalytics {
    public static final OneTapBottomSheetAnalytics INSTANCE = new OneTapBottomSheetAnalytics();
    private static final VKIDAnalytics.EventParam screenParam = new VKIDAnalytics.EventParam(OneTapAnalytics.SCREEN_PARAM_NAME, "floating_one_tap", null, 4, null);
    private static final Pair<String, String> FLOW_SOURCE = TuplesKt.to(StatTracker.EXTERNAL_PARAM_FLOW_SOURCE, "from_floating_one_tap");
    public static final int $stable = 8;

    /* JADX INFO: compiled from: OneTapBottomSheetAnalytics.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[Lifecycle.Event.values().length];
            try {
                iArr[Lifecycle.Event.ON_RESUME.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit BottomSheetErrorShown$lambda$8(OneTapBottomSheetAnalytics oneTapBottomSheetAnalytics, int i, Composer composer, int i2) {
        oneTapBottomSheetAnalytics.BottomSheetErrorShown$onetap_compose_release(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit BottomSheetInProgressShown$lambda$5(OneTapBottomSheetAnalytics oneTapBottomSheetAnalytics, int i, Composer composer, int i2) {
        oneTapBottomSheetAnalytics.BottomSheetInProgressShown$onetap_compose_release(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapBottomSheetShown$lambda$2(OneTapBottomSheetAnalytics oneTapBottomSheetAnalytics, VKIDAuthParams.Theme theme, OneTapScenario oneTapScenario, int i, Composer composer, int i2) {
        oneTapBottomSheetAnalytics.OneTapBottomSheetShown$onetap_compose_release(theme, oneTapScenario, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SheetScreenShown$lambda$15(OneTapBottomSheetAnalytics oneTapBottomSheetAnalytics, Function0 function0, int i, Composer composer, int i2) {
        oneTapBottomSheetAnalytics.SheetScreenShown(function0, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    private OneTapBottomSheetAnalytics() {
    }

    public final void OneTapBottomSheetShown$onetap_compose_release(final VKIDAuthParams.Theme theme, final OneTapScenario scenario, Composer composer, final int i) {
        int i2;
        Intrinsics.checkNotNullParameter(theme, "theme");
        Intrinsics.checkNotNullParameter(scenario, "scenario");
        Composer composerStartRestartGroup = composer.startRestartGroup(296932236);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(theme) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(scenario) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(this) ? 256 : 128;
        }
        if ((i2 & 147) != 146 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(296932236, i2, -1, "com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics.OneTapBottomSheetShown (OneTapBottomSheetAnalytics.kt:27)");
            }
            ProvidableCompositionLocal<Context> localContext = AndroidCompositionLocals_androidKt.getLocalContext();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 2023513938, "CC:CompositionLocal.kt#9igjgp");
            Object objConsume = composerStartRestartGroup.consume(localContext);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            final Context context = (Context) objConsume;
            composerStartRestartGroup.startReplaceGroup(1976173802);
            boolean zChangedInstance = ((i2 & 14) == 4) | ((i2 & 112) == 32) | composerStartRestartGroup.changedInstance(context);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (zChangedInstance || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda17
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return OneTapBottomSheetAnalytics.OneTapBottomSheetShown$lambda$1$lambda$0(theme, scenario, context);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            SheetScreenShown((Function0) objRememberedValue, composerStartRestartGroup, (i2 >> 3) & 112);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda18
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OneTapBottomSheetAnalytics.OneTapBottomSheetShown$lambda$2(this.f$0, theme, scenario, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapBottomSheetShown$lambda$1$lambda$0(VKIDAuthParams.Theme theme, OneTapScenario oneTapScenario, Context context) {
        OneTapAnalytics.INSTANCE.track$onetap_compose_release("screen_proceed", new VKIDAnalytics.EventParam("screen_current", "nowhere", null, 4, null), new VKIDAnalytics.EventParam("screen_to", "floating_one_tap", null, 4, null), OneTapBottomSheetAnalyticsKt.toAnalyticsParam(theme), OneTapBottomSheetAnalyticsKt.toAnalyticsParam(oneTapScenario), LanguageParamKt.vkidInternalLanguageParam(context));
        return Unit.INSTANCE;
    }

    public final void BottomSheetInProgressShown$onetap_compose_release(Composer composer, final int i) {
        int i2;
        Composer composerStartRestartGroup = composer.startRestartGroup(-67814195);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(this) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i2 & 3) != 2 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-67814195, i2, -1, "com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics.BottomSheetInProgressShown (OneTapBottomSheetAnalytics.kt:42)");
            }
            composerStartRestartGroup.startReplaceGroup(2135296729);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda0
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return OneTapBottomSheetAnalytics.BottomSheetInProgressShown$lambda$4$lambda$3();
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            SheetScreenShown((Function0) objRememberedValue, composerStartRestartGroup, ((i2 << 3) & 112) | 6);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda11
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OneTapBottomSheetAnalytics.BottomSheetInProgressShown$lambda$5(this.f$0, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit BottomSheetInProgressShown$lambda$4$lambda$3() {
        OneTapAnalytics.INSTANCE.track$onetap_compose_release("data_loading", screenParam);
        return Unit.INSTANCE;
    }

    public final void BottomSheetErrorShown$onetap_compose_release(Composer composer, final int i) {
        int i2;
        Composer composerStartRestartGroup = composer.startRestartGroup(1398781571);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(this) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i2 & 3) != 2 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1398781571, i2, -1, "com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics.BottomSheetErrorShown (OneTapBottomSheetAnalytics.kt:52)");
            }
            composerStartRestartGroup.startReplaceGroup(-970735563);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda3
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return OneTapBottomSheetAnalytics.BottomSheetErrorShown$lambda$7$lambda$6();
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            SheetScreenShown((Function0) objRememberedValue, composerStartRestartGroup, ((i2 << 3) & 112) | 6);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda4
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OneTapBottomSheetAnalytics.BottomSheetErrorShown$lambda$8(this.f$0, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit BottomSheetErrorShown$lambda$7$lambda$6() {
        OneTapAnalytics.INSTANCE.track$onetap_compose_release("alert_auth_error", new VKIDAnalytics.EventParam("screen_current", "floating_one_tap", null, 4, null), screenParam);
        return Unit.INSTANCE;
    }

    private final void SheetScreenShown(final Function0<Unit> function0, Composer composer, final int i) {
        int i2;
        Composer composerStartRestartGroup = composer.startRestartGroup(520598712);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(function0) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i2 & 3) != 2 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(520598712, i2, -1, "com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics.SheetScreenShown (OneTapBottomSheetAnalytics.kt:63)");
            }
            final State stateRememberUpdatedState = SnapshotStateKt.rememberUpdatedState(function0, composerStartRestartGroup, i2 & 14);
            ProvidableCompositionLocal<LifecycleOwner> localLifecycleOwner = AndroidCompositionLocals_androidKt.getLocalLifecycleOwner();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 2023513938, "CC:CompositionLocal.kt#9igjgp");
            Object objConsume = composerStartRestartGroup.consume(localLifecycleOwner);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            final State stateRememberUpdatedState2 = SnapshotStateKt.rememberUpdatedState(objConsume, composerStartRestartGroup, 0);
            Object value = stateRememberUpdatedState2.getValue();
            composerStartRestartGroup.startReplaceGroup(-1159229373);
            boolean zChanged = composerStartRestartGroup.changed(stateRememberUpdatedState2) | composerStartRestartGroup.changed(stateRememberUpdatedState);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (zChanged || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda10
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return OneTapBottomSheetAnalytics.SheetScreenShown$lambda$14$lambda$13(stateRememberUpdatedState2, stateRememberUpdatedState, (DisposableEffectScope) obj);
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
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda12
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OneTapBottomSheetAnalytics.SheetScreenShown$lambda$15(this.f$0, function0, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final DisposableEffectResult SheetScreenShown$lambda$14$lambda$13(State state, final State state2, DisposableEffectScope DisposableEffect) {
        Intrinsics.checkNotNullParameter(DisposableEffect, "$this$DisposableEffect");
        final Lifecycle lifecycle = ((LifecycleOwner) state.getValue()).getLifecycle();
        final LifecycleEventObserver lifecycleEventObserver = new LifecycleEventObserver() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda7
            @Override // androidx.lifecycle.LifecycleEventObserver
            public final void onStateChanged(LifecycleOwner lifecycleOwner, Lifecycle.Event event) {
                OneTapBottomSheetAnalytics.SheetScreenShown$lambda$14$lambda$13$lambda$11(state2, lifecycleOwner, event);
            }
        };
        lifecycle.addObserver(lifecycleEventObserver);
        return new DisposableEffectResult() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$SheetScreenShown$lambda$14$lambda$13$$inlined$onDispose$1
            @Override // androidx.compose.runtime.DisposableEffectResult
            public void dispose() {
                lifecycle.removeObserver(lifecycleEventObserver);
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void SheetScreenShown$lambda$14$lambda$13$lambda$11(final State state, LifecycleOwner lifecycleOwner, Lifecycle.Event event) {
        Intrinsics.checkNotNullParameter(lifecycleOwner, "<unused var>");
        Intrinsics.checkNotNullParameter(event, "event");
        if (WhenMappings.$EnumSwitchMapping$0[event.ordinal()] == 1) {
            VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda21
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return OneTapBottomSheetAnalytics.SheetScreenShown$lambda$14$lambda$13$lambda$11$lambda$9((Throwable) obj);
                }
            }, new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda22
                @Override // kotlin.jvm.functions.Function0
                public final Object invoke() {
                    return OneTapBottomSheetAnalytics.SheetScreenShown$lambda$14$lambda$13$lambda$11$lambda$10(state);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SheetScreenShown$lambda$14$lambda$13$lambda$11$lambda$9(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SheetScreenShown$lambda$14$lambda$13$lambda$11$lambda$10(State state) {
        ((Function0) state.getValue()).invoke();
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit noActiveSession$lambda$16(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    public final void noActiveSession$onetap_compose_release() {
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda15
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapBottomSheetAnalytics.noActiveSession$lambda$16((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda16
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return OneTapBottomSheetAnalytics.noActiveSession$lambda$17();
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit noActiveSession$lambda$17() {
        OneTapAnalytics.INSTANCE.track$onetap_compose_release("no_active_session", screenParam);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit noUserButtonShown$lambda$18(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    public final void noUserButtonShown$onetap_compose_release() {
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda13
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapBottomSheetAnalytics.noUserButtonShown$lambda$18((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda14
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return OneTapBottomSheetAnalytics.noUserButtonShown$lambda$19();
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit noUserButtonShown$lambda$19() {
        OneTapAnalytics.INSTANCE.track$onetap_compose_release("no_user_button_show", screenParam);
        return Unit.INSTANCE;
    }

    public final Map<String, String> oneTapPressed$onetap_compose_release(final VKIDUser user) {
        final String string = UUID.randomUUID().toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda23
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapBottomSheetAnalytics.oneTapPressed$lambda$20((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda24
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return OneTapBottomSheetAnalytics.oneTapPressed$lambda$21(user, string);
            }
        });
        return MapsKt.mapOf(TuplesKt.to(StatTracker.EXTERNAL_PARAM_SESSION_ID, string), FLOW_SOURCE);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit oneTapPressed$lambda$20(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit oneTapPressed$lambda$21(VKIDUser vKIDUser, String str) {
        if (vKIDUser == null) {
            OneTapAnalytics.INSTANCE.track$onetap_compose_release("no_user_button_tap", OneTapAnalytics.INSTANCE.uuidParam$onetap_compose_release(str), screenParam);
        } else {
            OneTapAnalytics.INSTANCE.track$onetap_compose_release("continue_as_tap", OneTapAnalytics.INSTANCE.uuidParam$onetap_compose_release(str), screenParam);
        }
        return Unit.INSTANCE;
    }

    public final Map<String, String> alternatePressed$onetap_compose_release() {
        final String string = UUID.randomUUID().toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda8
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapBottomSheetAnalytics.alternatePressed$lambda$22((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda9
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return OneTapBottomSheetAnalytics.alternatePressed$lambda$23(string);
            }
        });
        return MapsKt.mapOf(TuplesKt.to(StatTracker.EXTERNAL_PARAM_SESSION_ID, string), FLOW_SOURCE);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit alternatePressed$lambda$22(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit alternatePressed$lambda$23(String str) {
        OneTapAnalytics.INSTANCE.track$onetap_compose_release("alternative_sign_in_tap", OneTapAnalytics.INSTANCE.uuidParam$onetap_compose_release(str), screenParam);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit userWasFound$lambda$24(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    public final void userWasFound$onetap_compose_release(final boolean signInAnotherAccountButton) {
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapBottomSheetAnalytics.userWasFound$lambda$24((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return OneTapBottomSheetAnalytics.userWasFound$lambda$25(signInAnotherAccountButton);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit userWasFound$lambda$25(boolean z) {
        OneTapAnalytics.INSTANCE.track$onetap_compose_release("continue_as_show", OneTapAnalytics.INSTANCE.alternateParam$onetap_compose_release(z), screenParam);
        return Unit.INSTANCE;
    }

    public final Map<String, String> retryAuthTap$onetap_compose_release() {
        String string = UUID.randomUUID().toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda5
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapBottomSheetAnalytics.retryAuthTap$lambda$26((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda6
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return OneTapBottomSheetAnalytics.retryAuthTap$lambda$27();
            }
        });
        return MapsKt.mapOf(TuplesKt.to(StatTracker.EXTERNAL_PARAM_SESSION_ID, string), FLOW_SOURCE);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit retryAuthTap$lambda$26(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit retryAuthTap$lambda$27() {
        OneTapAnalytics.INSTANCE.track$onetap_compose_release("retry_auth_tap", screenParam);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit authError$lambda$28(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    public final void authError$onetap_compose_release(final String uuid) {
        Intrinsics.checkNotNullParameter(uuid, "uuid");
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda19
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapBottomSheetAnalytics.authError$lambda$28((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics$$ExternalSyntheticLambda20
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return OneTapBottomSheetAnalytics.authError$lambda$29(uuid);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit authError$lambda$29(String str) {
        OneTapAnalytics.INSTANCE.track$onetap_compose_release("sdk_auth_error", OneTapAnalytics.INSTANCE.uuidParam$onetap_compose_release(str), new VKIDAnalytics.EventParam("from_floating_one_tap", AndroidGetIsModulesInitEnabled.ENABLE_MODULES_INIT_VALUE, null, 4, null), new VKIDAnalytics.EventParam("error", "sdk_auth_error", null, 4, null));
        return Unit.INSTANCE;
    }
}
