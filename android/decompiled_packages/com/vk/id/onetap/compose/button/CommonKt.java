package com.vk.id.onetap.compose.button;

import androidx.compose.animation.core.AnimationSpec;
import androidx.compose.animation.core.AnimationSpecKt;
import androidx.compose.animation.core.CubicBezierEasing;
import androidx.compose.foundation.ClickableKt;
import androidx.compose.foundation.interaction.InteractionSourceKt;
import androidx.compose.foundation.interaction.MutableInteractionSource;
import androidx.compose.material3.RippleKt;
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
import androidx.compose.ui.ComposedModifierKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.platform.AndroidCompositionLocals_androidKt;
import androidx.compose.ui.semantics.Role;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleEventObserver;
import androidx.lifecycle.LifecycleOwner;
import androidx.media3.exoplayer.RendererCapabilities;
import com.vk.id.AccessToken;
import com.vk.id.VKID;
import com.vk.id.VKIDAuthFail;
import com.vk.id.auth.AuthCodeData;
import com.vk.id.auth.VKIDAuthCallback;
import com.vk.id.auth.VKIDAuthParams;
import com.vk.id.onetap.common.auth.style.InternalVKIDButtonRippleStyle;
import com.vk.id.onetap.compose.button.auth.style.VKIDButtonRippleStyleKt;
import com.vk.id.onetap.compose.onetap.OneTapTitleScenario;
import io.sentry.protocol.Message;
import java.util.concurrent.CancellationException;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;

/* JADX INFO: compiled from: Common.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0007\n\u0002\b\u0004\u001a\u001a\u0010\u0000\u001a\u00020\u0001*\u00020\u00012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003H\u0000\u001a\\\u0010\u0005\u001a\u00020\u00042\u0006\u0010\u0006\u001a\u00020\u00072\u0012\u0010\b\u001a\u000e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\u00040\t2\u0018\u0010\u000b\u001a\u0014\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u00040\f2\u0012\u0010\u000f\u001a\u000e\u0012\u0004\u0012\u00020\u0010\u0012\u0004\u0012\u00020\u00040\t2\b\b\u0002\u0010\u0011\u001a\u00020\u0012H\u0000\u001a'\u0010\u0013\u001a\u00020\u00042\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\u0014\u001a\u00020\u00152\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017H\u0001¢\u0006\u0002\u0010\u0018\"\u000e\u0010\u0019\u001a\u00020\u001aX\u0080T¢\u0006\u0002\n\u0000\"\u000e\u0010\u001b\u001a\u00020\u001aX\u0080T¢\u0006\u0002\n\u0000\"\u001a\u0010\u001c\u001a\b\u0012\u0004\u0012\u00020\u001e0\u001dX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010 \"\u000e\u0010!\u001a\u00020\u001eX\u0080T¢\u0006\u0002\n\u0000¨\u0006\""}, d2 = {"clickable", "Landroidx/compose/ui/Modifier;", "onClick", "Lkotlin/Function0;", "", "startAuth", "coroutineScope", "Lkotlinx/coroutines/CoroutineScope;", "onAuth", "Lkotlin/Function1;", "Lcom/vk/id/AccessToken;", "onAuthCode", "Lkotlin/Function2;", "Lcom/vk/id/auth/AuthCodeData;", "", "onFail", "Lcom/vk/id/VKIDAuthFail;", Message.JsonKeys.PARAMS, "Lcom/vk/id/auth/VKIDAuthParams$Builder;", "FetchUserData", "onFetchingProgress", "Lcom/vk/id/onetap/compose/button/OnFetchingProgress;", "scenario", "Lcom/vk/id/onetap/compose/onetap/OneTapTitleScenario;", "(Lkotlinx/coroutines/CoroutineScope;Lcom/vk/id/onetap/compose/button/OnFetchingProgress;Lcom/vk/id/onetap/compose/onetap/OneTapTitleScenario;Landroidx/compose/runtime/Composer;I)V", "DURATION_OF_ANIMATION", "", "DURATION_OF_DELAY_BETWEEN_FADE_ANIMATIONS", "easeInOutAnimation", "Landroidx/compose/animation/core/AnimationSpec;", "", "getEaseInOutAnimation", "()Landroidx/compose/animation/core/AnimationSpec;", "SIZE_OF_VK_ICON", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class CommonKt {
    public static final long DURATION_OF_ANIMATION = 300;
    public static final long DURATION_OF_DELAY_BETWEEN_FADE_ANIMATIONS = 100;
    public static final float SIZE_OF_VK_ICON = 28.0f;
    private static final AnimationSpec<Float> easeInOutAnimation = AnimationSpecKt.tween$default(300, 0, new CubicBezierEasing(0.42f, 0.0f, 0.58f, 1.0f), 2, null);

    /* JADX INFO: compiled from: Common.kt */
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
    public static final Unit FetchUserData$lambda$4(CoroutineScope coroutineScope, OnFetchingProgress onFetchingProgress, OneTapTitleScenario oneTapTitleScenario, int i, Composer composer, int i2) {
        FetchUserData(coroutineScope, onFetchingProgress, oneTapTitleScenario, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    public static final Modifier clickable(Modifier modifier, final Function0<Unit> onClick) {
        Intrinsics.checkNotNullParameter(modifier, "<this>");
        Intrinsics.checkNotNullParameter(onClick, "onClick");
        return ComposedModifierKt.composed$default(modifier, null, new Function3<Modifier, Composer, Integer, Modifier>() { // from class: com.vk.id.onetap.compose.button.CommonKt.clickable.1
            @Override // kotlin.jvm.functions.Function3
            public /* bridge */ /* synthetic */ Modifier invoke(Modifier modifier2, Composer composer, Integer num) {
                return invoke(modifier2, composer, num.intValue());
            }

            public final Modifier invoke(Modifier composed, Composer composer, int i) {
                Intrinsics.checkNotNullParameter(composed, "$this$composed");
                composer.startReplaceGroup(1158531603);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(1158531603, i, -1, "com.vk.id.onetap.compose.button.clickable.<anonymous> (Common.kt:39)");
                }
                composer.startReplaceGroup(-1824874190);
                Object objRememberedValue = composer.rememberedValue();
                if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue = InteractionSourceKt.MutableInteractionSource();
                    composer.updateRememberedValue(objRememberedValue);
                }
                composer.endReplaceGroup();
                Modifier modifierM307clickableO2vRcR0$default = ClickableKt.m307clickableO2vRcR0$default(composed, (MutableInteractionSource) objRememberedValue, RippleKt.m2124rippleH2RKhps$default(false, 0.0f, VKIDButtonRippleStyleKt.asColor(InternalVKIDButtonRippleStyle.DARK), 3, null), false, null, Role.m6052boximpl(Role.INSTANCE.m6059getButtono7Vup1c()), onClick, 12, null);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
                composer.endReplaceGroup();
                return modifierM307clickableO2vRcR0$default;
            }
        }, 1, null);
    }

    public static /* synthetic */ void startAuth$default(CoroutineScope coroutineScope, Function1 function1, Function2 function2, Function1 function3, VKIDAuthParams.Builder builder, int i, Object obj) {
        if ((i & 16) != 0) {
            builder = new VKIDAuthParams.Builder();
        }
        startAuth(coroutineScope, function1, function2, function3, builder);
    }

    /* JADX INFO: renamed from: com.vk.id.onetap.compose.button.CommonKt$startAuth$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: Common.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.onetap.compose.button.CommonKt$startAuth$1", f = "Common.kt", i = {}, l = {59}, m = "invokeSuspend", n = {}, s = {})
    static final class C19641 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ Function1<AccessToken, Unit> $onAuth;
        final /* synthetic */ Function2<AuthCodeData, Boolean, Unit> $onAuthCode;
        final /* synthetic */ Function1<VKIDAuthFail, Unit> $onFail;
        final /* synthetic */ VKIDAuthParams.Builder $params;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        C19641(VKIDAuthParams.Builder builder, Function1<? super AccessToken, Unit> function1, Function2<? super AuthCodeData, ? super Boolean, Unit> function2, Function1<? super VKIDAuthFail, Unit> function3, Continuation<? super C19641> continuation) {
            super(2, continuation);
            this.$params = builder;
            this.$onAuth = function1;
            this.$onAuthCode = function2;
            this.$onFail = function3;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19641(this.$params, this.$onAuth, this.$onAuthCode, this.$onFail, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19641) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                VKID companion = VKID.INSTANCE.getInstance();
                final Function1<AccessToken, Unit> function1 = this.$onAuth;
                final Function2<AuthCodeData, Boolean, Unit> function2 = this.$onAuthCode;
                final Function1<VKIDAuthFail, Unit> function3 = this.$onFail;
                this.label = 1;
                if (companion.authorize(new VKIDAuthCallback() { // from class: com.vk.id.onetap.compose.button.CommonKt.startAuth.1.1
                    @Override // com.vk.id.auth.VKIDAuthCallback
                    public void onAuth(AccessToken accessToken) {
                        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
                        function1.invoke(accessToken);
                    }

                    @Override // com.vk.id.auth.VKIDAuthCallback
                    public void onAuthCode(AuthCodeData data, boolean isCompletion) {
                        Intrinsics.checkNotNullParameter(data, "data");
                        function2.invoke(data, Boolean.valueOf(isCompletion));
                    }

                    @Override // com.vk.id.auth.VKIDAuthCallback
                    public void onFail(VKIDAuthFail fail) {
                        Intrinsics.checkNotNullParameter(fail, "fail");
                        function3.invoke(fail);
                    }
                }, this.$params.build(), this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            return Unit.INSTANCE;
        }
    }

    public static final void startAuth(CoroutineScope coroutineScope, Function1<? super AccessToken, Unit> onAuth, Function2<? super AuthCodeData, ? super Boolean, Unit> onAuthCode, Function1<? super VKIDAuthFail, Unit> onFail, VKIDAuthParams.Builder params) {
        Intrinsics.checkNotNullParameter(coroutineScope, "coroutineScope");
        Intrinsics.checkNotNullParameter(onAuth, "onAuth");
        Intrinsics.checkNotNullParameter(onAuthCode, "onAuthCode");
        Intrinsics.checkNotNullParameter(onFail, "onFail");
        Intrinsics.checkNotNullParameter(params, "params");
        params.setInternalUse(true);
        BuildersKt__Builders_commonKt.launch$default(coroutineScope, null, null, new C19641(params, onAuth, onAuthCode, onFail, null), 3, null);
    }

    public static final void FetchUserData(final CoroutineScope coroutineScope, final OnFetchingProgress onFetchingProgress, final OneTapTitleScenario oneTapTitleScenario, Composer composer, final int i) {
        int i2;
        Intrinsics.checkNotNullParameter(coroutineScope, "coroutineScope");
        Intrinsics.checkNotNullParameter(onFetchingProgress, "onFetchingProgress");
        Composer composerStartRestartGroup = composer.startRestartGroup(306954865);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(coroutineScope) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= (i & 64) == 0 ? composerStartRestartGroup.changed(onFetchingProgress) : composerStartRestartGroup.changedInstance(onFetchingProgress) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changed(oneTapTitleScenario) ? 256 : 128;
        }
        if ((i2 & 147) != 146 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(306954865, i2, -1, "com.vk.id.onetap.compose.button.FetchUserData (Common.kt:74)");
            }
            ProvidableCompositionLocal<LifecycleOwner> localLifecycleOwner = AndroidCompositionLocals_androidKt.getLocalLifecycleOwner();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 2023513938, "CC:CompositionLocal.kt#9igjgp");
            Object objConsume = composerStartRestartGroup.consume(localLifecycleOwner);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            boolean z = false;
            final State stateRememberUpdatedState = SnapshotStateKt.rememberUpdatedState(objConsume, composerStartRestartGroup, 0);
            Object value = stateRememberUpdatedState.getValue();
            composerStartRestartGroup.startReplaceGroup(-1069385059);
            boolean zChanged = composerStartRestartGroup.changed(stateRememberUpdatedState) | composerStartRestartGroup.changedInstance(coroutineScope);
            if ((i2 & 112) == 32 || ((i2 & 64) != 0 && composerStartRestartGroup.changedInstance(onFetchingProgress))) {
                z = true;
            }
            boolean z2 = z | zChanged;
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (z2 || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function1() { // from class: com.vk.id.onetap.compose.button.CommonKt$$ExternalSyntheticLambda0
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return CommonKt.FetchUserData$lambda$3$lambda$2(stateRememberUpdatedState, coroutineScope, onFetchingProgress, (DisposableEffectScope) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            EffectsKt.DisposableEffect(value, oneTapTitleScenario, (Function1) objRememberedValue, composerStartRestartGroup, (i2 >> 3) & 112);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.CommonKt$$ExternalSyntheticLambda1
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return CommonKt.FetchUserData$lambda$4(coroutineScope, onFetchingProgress, oneTapTitleScenario, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final DisposableEffectResult FetchUserData$lambda$3$lambda$2(State state, final CoroutineScope coroutineScope, final OnFetchingProgress onFetchingProgress, DisposableEffectScope DisposableEffect) {
        Intrinsics.checkNotNullParameter(DisposableEffect, "$this$DisposableEffect");
        final Ref.ObjectRef objectRef = new Ref.ObjectRef();
        final Lifecycle lifecycle = ((LifecycleOwner) state.getValue()).getLifecycle();
        final LifecycleEventObserver lifecycleEventObserver = new LifecycleEventObserver() { // from class: com.vk.id.onetap.compose.button.CommonKt$$ExternalSyntheticLambda2
            @Override // androidx.lifecycle.LifecycleEventObserver
            public final void onStateChanged(LifecycleOwner lifecycleOwner, Lifecycle.Event event) {
                CommonKt.FetchUserData$lambda$3$lambda$2$lambda$0(objectRef, coroutineScope, onFetchingProgress, lifecycleOwner, event);
            }
        };
        lifecycle.addObserver(lifecycleEventObserver);
        return new DisposableEffectResult() { // from class: com.vk.id.onetap.compose.button.CommonKt$FetchUserData$lambda$3$lambda$2$$inlined$onDispose$1
            @Override // androidx.compose.runtime.DisposableEffectResult
            public void dispose() {
                lifecycle.removeObserver(lifecycleEventObserver);
                Job job = (Job) objectRef.element;
                if (job != null) {
                    Job.DefaultImpls.cancel$default(job, (CancellationException) null, 1, (Object) null);
                }
                onFetchingProgress.onDispose();
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Type inference failed for: r7v1, types: [T, kotlinx.coroutines.Job] */
    public static final void FetchUserData$lambda$3$lambda$2$lambda$0(Ref.ObjectRef objectRef, CoroutineScope coroutineScope, OnFetchingProgress onFetchingProgress, LifecycleOwner lifecycleOwner, Lifecycle.Event event) {
        Intrinsics.checkNotNullParameter(lifecycleOwner, "<unused var>");
        Intrinsics.checkNotNullParameter(event, "event");
        if (WhenMappings.$EnumSwitchMapping$0[event.ordinal()] == 1) {
            objectRef.element = BuildersKt__Builders_commonKt.launch$default(coroutineScope, null, null, new CommonKt$FetchUserData$1$1$observer$1$1(onFetchingProgress, null), 3, null);
        }
    }

    public static final AnimationSpec<Float> getEaseInOutAnimation() {
        return easeInOutAnimation;
    }
}
