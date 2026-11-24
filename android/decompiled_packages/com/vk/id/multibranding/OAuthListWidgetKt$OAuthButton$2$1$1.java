package com.vk.id.multibranding;

import com.vk.id.AccessToken;
import com.vk.id.OAuth;
import com.vk.id.VKID;
import com.vk.id.VKIDAuthFail;
import com.vk.id.analytics.stat.StatTracker;
import com.vk.id.auth.AuthCodeData;
import com.vk.id.auth.Prompt;
import com.vk.id.auth.VKIDAuthCallback;
import com.vk.id.auth.VKIDAuthParams;
import com.vk.id.auth.VKIDAuthUiParams;
import com.vk.id.multibranding.common.style.OAuthListWidgetStyle;
import java.util.Map;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: OAuthListWidget.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.multibranding.OAuthListWidgetKt$OAuthButton$2$1$1", f = "OAuthListWidget.kt", i = {}, l = {275}, m = "invokeSuspend", n = {}, s = {})
final class OAuthListWidgetKt$OAuthButton$2$1$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ OAuthListWidgetAnalytics $analytics;
    final /* synthetic */ VKIDAuthUiParams $authParams;
    final /* synthetic */ Map<String, String> $extraAuthParams;
    final /* synthetic */ OAuth $item;
    final /* synthetic */ Function2<OAuth, AccessToken, Unit> $onAuth;
    final /* synthetic */ Function2<AuthCodeData, Boolean, Unit> $onAuthCode;
    final /* synthetic */ Function1<VKIDAuthFail, Unit> $onFail;
    final /* synthetic */ OAuthListWidgetStyle $style;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    OAuthListWidgetKt$OAuthButton$2$1$1(VKIDAuthUiParams vKIDAuthUiParams, Function2<? super OAuth, ? super AccessToken, Unit> function2, OAuth oAuth, Function2<? super AuthCodeData, ? super Boolean, Unit> function3, OAuthListWidgetAnalytics oAuthListWidgetAnalytics, Map<String, String> map, Function1<? super VKIDAuthFail, Unit> function1, OAuthListWidgetStyle oAuthListWidgetStyle, Continuation<? super OAuthListWidgetKt$OAuthButton$2$1$1> continuation) {
        super(2, continuation);
        this.$authParams = vKIDAuthUiParams;
        this.$onAuth = function2;
        this.$item = oAuth;
        this.$onAuthCode = function3;
        this.$analytics = oAuthListWidgetAnalytics;
        this.$extraAuthParams = map;
        this.$onFail = function1;
        this.$style = oAuthListWidgetStyle;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new OAuthListWidgetKt$OAuthButton$2$1$1(this.$authParams, this.$onAuth, this.$item, this.$onAuthCode, this.$analytics, this.$extraAuthParams, this.$onFail, this.$style, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((OAuthListWidgetKt$OAuthButton$2$1$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            VKID companion = VKID.INSTANCE.getInstance();
            final Function2<OAuth, AccessToken, Unit> function2 = this.$onAuth;
            final OAuth oAuth = this.$item;
            final Function2<AuthCodeData, Boolean, Unit> function3 = this.$onAuthCode;
            final OAuthListWidgetAnalytics oAuthListWidgetAnalytics = this.$analytics;
            final Map<String, String> map = this.$extraAuthParams;
            final Function1<VKIDAuthFail, Unit> function1 = this.$onFail;
            VKIDAuthCallback vKIDAuthCallback = new VKIDAuthCallback() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$OAuthButton$2$1$1.1
                @Override // com.vk.id.auth.VKIDAuthCallback
                public void onAuth(AccessToken accessToken) {
                    Intrinsics.checkNotNullParameter(accessToken, "accessToken");
                    function2.invoke(oAuth, accessToken);
                }

                @Override // com.vk.id.auth.VKIDAuthCallback
                public void onAuthCode(AuthCodeData data, boolean isCompletion) {
                    Intrinsics.checkNotNullParameter(data, "data");
                    function3.invoke(data, Boolean.valueOf(isCompletion));
                }

                @Override // com.vk.id.auth.VKIDAuthCallback
                public void onFail(VKIDAuthFail fail) {
                    Intrinsics.checkNotNullParameter(fail, "fail");
                    OAuthListWidgetAnalytics oAuthListWidgetAnalytics2 = oAuthListWidgetAnalytics;
                    String str = map.get(StatTracker.EXTERNAL_PARAM_SESSION_ID);
                    if (str == null) {
                        str = "";
                    }
                    oAuthListWidgetAnalytics2.onAuthError(str, oAuth);
                    function1.invoke(fail);
                }
            };
            VKIDAuthUiParams vKIDAuthUiParams = this.$authParams;
            final OAuth oAuth2 = this.$item;
            final OAuthListWidgetStyle oAuthListWidgetStyle = this.$style;
            final Map<String, String> map2 = this.$extraAuthParams;
            this.label = 1;
            if (companion.authorize(vKIDAuthCallback, vKIDAuthUiParams.asParamsBuilder(new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$OAuthButton$2$1$1$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj2) {
                    return OAuthListWidgetKt$OAuthButton$2$1$1.invokeSuspend$lambda$0(oAuth2, oAuthListWidgetStyle, map2, (VKIDAuthParams.Builder) obj2);
                }
            }).build(), this) == coroutine_suspended) {
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

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$0(OAuth oAuth, OAuthListWidgetStyle oAuthListWidgetStyle, Map map, VKIDAuthParams.Builder builder) {
        builder.setOAuth(oAuth);
        builder.setTheme(OAuthListWidgetKt.toProviderTheme(oAuthListWidgetStyle));
        builder.setPrompt(Prompt.LOGIN);
        builder.setExtraParams(map);
        return Unit.INSTANCE;
    }
}
