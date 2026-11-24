package com.vk.id.onetap.compose.onetap;

import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.MutableState;
import androidx.compose.ui.Modifier;
import com.vk.id.AccessToken;
import com.vk.id.VKIDAuthFail;
import com.vk.id.VKIDUser;
import com.vk.id.auth.AuthCodeData;
import com.vk.id.auth.Prompt;
import com.vk.id.auth.VKIDAuthParams;
import com.vk.id.auth.VKIDAuthUiParams;
import com.vk.id.onetap.common.OneTapOAuth;
import com.vk.id.onetap.common.OneTapStyle;
import com.vk.id.onetap.compose.button.CommonKt;
import java.util.Map;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: OneTap.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
final class OneTapKt$OneTap$14$LargeOneTap$1 implements Function2<Composer, Integer, Unit> {
    final /* synthetic */ VKIDAuthUiParams $authParams;
    final /* synthetic */ CoroutineScope $coroutineScope;
    final /* synthetic */ boolean $fastAuthEnabled;
    final /* synthetic */ boolean $largeText;
    final /* synthetic */ boolean $measureInProgress;
    final /* synthetic */ Set<OneTapOAuth> $oAuths;
    final /* synthetic */ Function2<OneTapOAuth, AccessToken, Unit> $onAuth;
    final /* synthetic */ Function2<AuthCodeData, Boolean, Unit> $onAuthCode;
    final /* synthetic */ Function2<OneTapOAuth, VKIDAuthFail, Unit> $onFail;
    final /* synthetic */ OneTapTitleScenario $scenario;
    final /* synthetic */ boolean $signInAnotherAccountButtonEnabled;
    final /* synthetic */ OneTapStyle $style;
    final /* synthetic */ MutableState<VKIDUser> $user$delegate;

    /* JADX WARN: Multi-variable type inference failed */
    OneTapKt$OneTap$14$LargeOneTap$1(OneTapStyle oneTapStyle, Set<? extends OneTapOAuth> set, boolean z, CoroutineScope coroutineScope, Function2<? super OneTapOAuth, ? super AccessToken, Unit> function2, Function2<? super AuthCodeData, ? super Boolean, Unit> function3, Function2<? super OneTapOAuth, ? super VKIDAuthFail, Unit> function4, VKIDAuthUiParams vKIDAuthUiParams, boolean z2, boolean z3, boolean z4, OneTapTitleScenario oneTapTitleScenario, MutableState<VKIDUser> mutableState) {
        this.$style = oneTapStyle;
        this.$oAuths = set;
        this.$signInAnotherAccountButtonEnabled = z;
        this.$coroutineScope = coroutineScope;
        this.$onAuth = function2;
        this.$onAuthCode = function3;
        this.$onFail = function4;
        this.$authParams = vKIDAuthUiParams;
        this.$fastAuthEnabled = z2;
        this.$measureInProgress = z3;
        this.$largeText = z4;
        this.$scenario = oneTapTitleScenario;
        this.$user$delegate = mutableState;
    }

    @Override // kotlin.jvm.functions.Function2
    public /* bridge */ /* synthetic */ Unit invoke(Composer composer, Integer num) {
        invoke(composer, num.intValue());
        return Unit.INSTANCE;
    }

    public final void invoke(Composer composer, int i) {
        if ((i & 3) != 2 || !composer.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1470100130, i, -1, "com.vk.id.onetap.compose.onetap.OneTap.<anonymous>.LargeOneTap.<anonymous> (OneTap.kt:300)");
            }
            Modifier.Companion companion = Modifier.INSTANCE;
            OneTapStyle oneTapStyle = this.$style;
            Set<OneTapOAuth> set = this.$oAuths;
            boolean z = this.$signInAnotherAccountButtonEnabled;
            composer.startReplaceGroup(-446734343);
            boolean zChangedInstance = composer.changedInstance(this.$coroutineScope) | composer.changed(this.$onAuth) | composer.changed(this.$onAuthCode) | composer.changed(this.$onFail) | composer.changedInstance(this.$authParams) | composer.changed(this.$style) | composer.changed(this.$fastAuthEnabled);
            final CoroutineScope coroutineScope = this.$coroutineScope;
            final Function2<AuthCodeData, Boolean, Unit> function2 = this.$onAuthCode;
            final VKIDAuthUiParams vKIDAuthUiParams = this.$authParams;
            final MutableState<VKIDUser> mutableState = this.$user$delegate;
            final Function2<OneTapOAuth, AccessToken, Unit> function3 = this.$onAuth;
            final Function2<OneTapOAuth, VKIDAuthFail, Unit> function4 = this.$onFail;
            final OneTapStyle oneTapStyle2 = this.$style;
            final boolean z2 = this.$fastAuthEnabled;
            Object objRememberedValue = composer.rememberedValue();
            if (zChangedInstance || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.onetap.OneTapKt$OneTap$14$LargeOneTap$1$$ExternalSyntheticLambda3
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return OneTapKt$OneTap$14$LargeOneTap$1.invoke$lambda$4$lambda$3(coroutineScope, function2, vKIDAuthUiParams, mutableState, function3, function4, oneTapStyle2, z2);
                    }
                };
                composer.updateRememberedValue(objRememberedValue);
            }
            Function0 function0 = (Function0) objRememberedValue;
            composer.endReplaceGroup();
            composer.startReplaceGroup(-446695965);
            boolean zChangedInstance2 = composer.changedInstance(this.$coroutineScope) | composer.changed(this.$onAuth) | composer.changed(this.$onAuthCode) | composer.changed(this.$onFail) | composer.changedInstance(this.$authParams) | composer.changed(this.$style);
            final CoroutineScope coroutineScope2 = this.$coroutineScope;
            final Function2<AuthCodeData, Boolean, Unit> function5 = this.$onAuthCode;
            final VKIDAuthUiParams vKIDAuthUiParams2 = this.$authParams;
            final Function2<OneTapOAuth, AccessToken, Unit> function6 = this.$onAuth;
            final Function2<OneTapOAuth, VKIDAuthFail, Unit> function7 = this.$onFail;
            final OneTapStyle oneTapStyle3 = this.$style;
            Object objRememberedValue2 = composer.rememberedValue();
            if (zChangedInstance2 || objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue2 = new Function0() { // from class: com.vk.id.onetap.compose.onetap.OneTapKt$OneTap$14$LargeOneTap$1$$ExternalSyntheticLambda4
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return OneTapKt$OneTap$14$LargeOneTap$1.invoke$lambda$9$lambda$8(coroutineScope2, function5, vKIDAuthUiParams2, function6, function7, oneTapStyle3);
                    }
                };
                composer.updateRememberedValue(objRememberedValue2);
            }
            Function0 function1 = (Function0) objRememberedValue2;
            composer.endReplaceGroup();
            Function2<OneTapOAuth, AccessToken, Unit> function8 = this.$onAuth;
            Function2<AuthCodeData, Boolean, Unit> function9 = this.$onAuthCode;
            Function2<OneTapOAuth, VKIDAuthFail, Unit> function10 = this.$onFail;
            VKIDAuthUiParams vKIDAuthUiParams3 = this.$authParams;
            composer.startReplaceGroup(-446661651);
            boolean zChanged = composer.changed(this.$measureInProgress) | composer.changed(this.$signInAnotherAccountButtonEnabled);
            final boolean z3 = this.$measureInProgress;
            final boolean z4 = this.$signInAnotherAccountButtonEnabled;
            final MutableState<VKIDUser> mutableState2 = this.$user$delegate;
            Object objRememberedValue3 = composer.rememberedValue();
            if (zChanged || objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue3 = new Function1() { // from class: com.vk.id.onetap.compose.onetap.OneTapKt$OneTap$14$LargeOneTap$1$$ExternalSyntheticLambda5
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return OneTapKt$OneTap$14$LargeOneTap$1.invoke$lambda$11$lambda$10(z3, z4, mutableState2, (VKIDUser) obj);
                    }
                };
                composer.updateRememberedValue(objRememberedValue3);
            }
            composer.endReplaceGroup();
            OneTapKt.OneTap(companion, oneTapStyle, set, z, null, function0, function1, function8, function9, function10, vKIDAuthUiParams3, (Function1) objRememberedValue3, this.$fastAuthEnabled, this.$largeText, this.$measureInProgress, this.$scenario, composer, 24582, VKIDAuthUiParams.$stable, 0);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
                return;
            }
            return;
        }
        composer.skipToGroupEnd();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invoke$lambda$4$lambda$3(CoroutineScope coroutineScope, Function2 function2, VKIDAuthUiParams vKIDAuthUiParams, final MutableState mutableState, final Function2 function3, final Function2 function4, final OneTapStyle oneTapStyle, final boolean z) {
        final Map mapOneTapPressed$onetap_compose_release$default = OneTapAnalytics.oneTapPressed$onetap_compose_release$default(OneTapAnalytics.INSTANCE, OneTapKt.AnonymousClass14.invoke$lambda$1(mutableState), false, 2, null);
        CommonKt.startAuth(coroutineScope, new Function1() { // from class: com.vk.id.onetap.compose.onetap.OneTapKt$OneTap$14$LargeOneTap$1$$ExternalSyntheticLambda6
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapKt$OneTap$14$LargeOneTap$1.invoke$lambda$4$lambda$3$lambda$0(function3, (AccessToken) obj);
            }
        }, function2, new Function1() { // from class: com.vk.id.onetap.compose.onetap.OneTapKt$OneTap$14$LargeOneTap$1$$ExternalSyntheticLambda7
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapKt$OneTap$14$LargeOneTap$1.invoke$lambda$4$lambda$3$lambda$1(mapOneTapPressed$onetap_compose_release$default, function4, (VKIDAuthFail) obj);
            }
        }, vKIDAuthUiParams.asParamsBuilder(new Function1() { // from class: com.vk.id.onetap.compose.onetap.OneTapKt$OneTap$14$LargeOneTap$1$$ExternalSyntheticLambda8
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapKt$OneTap$14$LargeOneTap$1.invoke$lambda$4$lambda$3$lambda$2(oneTapStyle, mapOneTapPressed$onetap_compose_release$default, z, mutableState, (VKIDAuthParams.Builder) obj);
            }
        }));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invoke$lambda$4$lambda$3$lambda$0(Function2 function2, AccessToken it) {
        Intrinsics.checkNotNullParameter(it, "it");
        function2.invoke(null, it);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invoke$lambda$4$lambda$3$lambda$1(Map map, Function2 function2, VKIDAuthFail it) {
        Intrinsics.checkNotNullParameter(it, "it");
        OneTapAnalytics.authError$onetap_compose_release$default(OneTapAnalytics.INSTANCE, OneTapAnalytics.INSTANCE.uuidFromParams$onetap_compose_release(map), false, 2, null);
        function2.invoke(null, it);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invoke$lambda$4$lambda$3$lambda$2(OneTapStyle oneTapStyle, Map map, boolean z, MutableState mutableState, VKIDAuthParams.Builder asParamsBuilder) {
        Intrinsics.checkNotNullParameter(asParamsBuilder, "$this$asParamsBuilder");
        asParamsBuilder.setTheme(OneTapKt.toProviderTheme(oneTapStyle));
        asParamsBuilder.setExtraParams(map);
        if (z) {
            if (OneTapKt.AnonymousClass14.invoke$lambda$1(mutableState) == null) {
                asParamsBuilder.setPrompt(Prompt.CONSENT);
            }
        } else {
            asParamsBuilder.setUseOAuthProviderIfPossible(false);
            asParamsBuilder.setPrompt(Prompt.LOGIN);
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invoke$lambda$9$lambda$8(CoroutineScope coroutineScope, Function2 function2, VKIDAuthUiParams vKIDAuthUiParams, final Function2 function3, final Function2 function4, final OneTapStyle oneTapStyle) {
        final Map<String, String> mapAlternatePressed$onetap_compose_release = OneTapAnalytics.INSTANCE.alternatePressed$onetap_compose_release();
        CommonKt.startAuth(coroutineScope, new Function1() { // from class: com.vk.id.onetap.compose.onetap.OneTapKt$OneTap$14$LargeOneTap$1$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapKt$OneTap$14$LargeOneTap$1.invoke$lambda$9$lambda$8$lambda$5(function3, (AccessToken) obj);
            }
        }, function2, new Function1() { // from class: com.vk.id.onetap.compose.onetap.OneTapKt$OneTap$14$LargeOneTap$1$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapKt$OneTap$14$LargeOneTap$1.invoke$lambda$9$lambda$8$lambda$6(mapAlternatePressed$onetap_compose_release, function4, (VKIDAuthFail) obj);
            }
        }, vKIDAuthUiParams.asParamsBuilder(new Function1() { // from class: com.vk.id.onetap.compose.onetap.OneTapKt$OneTap$14$LargeOneTap$1$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapKt$OneTap$14$LargeOneTap$1.invoke$lambda$9$lambda$8$lambda$7(oneTapStyle, mapAlternatePressed$onetap_compose_release, (VKIDAuthParams.Builder) obj);
            }
        }));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invoke$lambda$9$lambda$8$lambda$5(Function2 function2, AccessToken it) {
        Intrinsics.checkNotNullParameter(it, "it");
        function2.invoke(null, it);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invoke$lambda$9$lambda$8$lambda$6(Map map, Function2 function2, VKIDAuthFail it) {
        Intrinsics.checkNotNullParameter(it, "it");
        OneTapAnalytics.authError$onetap_compose_release$default(OneTapAnalytics.INSTANCE, OneTapAnalytics.INSTANCE.uuidFromParams$onetap_compose_release(map), false, 2, null);
        function2.invoke(null, it);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invoke$lambda$9$lambda$8$lambda$7(OneTapStyle oneTapStyle, Map map, VKIDAuthParams.Builder asParamsBuilder) {
        Intrinsics.checkNotNullParameter(asParamsBuilder, "$this$asParamsBuilder");
        asParamsBuilder.setUseOAuthProviderIfPossible(false);
        asParamsBuilder.setTheme(OneTapKt.toProviderTheme(oneTapStyle));
        asParamsBuilder.setPrompt(Prompt.LOGIN);
        asParamsBuilder.setExtraParams(map);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invoke$lambda$11$lambda$10(boolean z, boolean z2, MutableState mutableState, VKIDUser vKIDUser) {
        if (!z) {
            mutableState.setValue(vKIDUser);
            if (OneTapKt.AnonymousClass14.invoke$lambda$1(mutableState) == null) {
                OneTapAnalytics.INSTANCE.sessionNotFound$onetap_compose_release();
                OneTapAnalytics.userNotFound$onetap_compose_release$default(OneTapAnalytics.INSTANCE, false, 1, null);
            } else {
                OneTapAnalytics.userWasFound$onetap_compose_release$default(OneTapAnalytics.INSTANCE, z2, false, 2, null);
            }
        }
        return Unit.INSTANCE;
    }
}
