package com.vk.id.onetap.compose.onetap.sheet;

import androidx.compose.runtime.MutableState;
import com.vk.id.AccessToken;
import com.vk.id.VKID;
import com.vk.id.VKIDAuthFail;
import com.vk.id.auth.AuthCodeData;
import com.vk.id.auth.Prompt;
import com.vk.id.auth.VKIDAuthCallback;
import com.vk.id.auth.VKIDAuthParams;
import com.vk.id.auth.VKIDAuthUiParams;
import com.vk.id.onetap.common.OneTapOAuth;
import com.vk.id.onetap.compose.onetap.sheet.content.CommonKt;
import com.vk.id.onetap.compose.onetap.sheet.content.OneTapBottomSheetAuthStatus;
import com.vk.id.onetap.compose.onetap.sheet.style.OneTapBottomSheetStyle;
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

/* JADX INFO: compiled from: OneTapBottomSheet.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetKt$OneTapBottomSheetInternal$4$1$1$4$1$1", f = "OneTapBottomSheet.kt", i = {}, l = {428}, m = "invokeSuspend", n = {}, s = {})
final class OneTapBottomSheetKt$OneTapBottomSheetInternal$4$1$1$4$1$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ VKIDAuthUiParams $authParams;
    final /* synthetic */ MutableState<OneTapBottomSheetAuthStatus> $authStatus;
    final /* synthetic */ Function2<OneTapOAuth, AccessToken, Unit> $onAuth;
    final /* synthetic */ Function2<AuthCodeData, Boolean, Unit> $onAuthCode;
    final /* synthetic */ Function2<OneTapOAuth, VKIDAuthFail, Unit> $onFail;
    final /* synthetic */ OneTapBottomSheetAuthStatus $status;
    final /* synthetic */ OneTapBottomSheetStyle $style;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    OneTapBottomSheetKt$OneTapBottomSheetInternal$4$1$1$4$1$1(MutableState<OneTapBottomSheetAuthStatus> mutableState, VKIDAuthUiParams vKIDAuthUiParams, Function2<? super OneTapOAuth, ? super AccessToken, Unit> function2, OneTapBottomSheetAuthStatus oneTapBottomSheetAuthStatus, Function2<? super AuthCodeData, ? super Boolean, Unit> function3, Function2<? super OneTapOAuth, ? super VKIDAuthFail, Unit> function4, OneTapBottomSheetStyle oneTapBottomSheetStyle, Continuation<? super OneTapBottomSheetKt$OneTapBottomSheetInternal$4$1$1$4$1$1> continuation) {
        super(2, continuation);
        this.$authStatus = mutableState;
        this.$authParams = vKIDAuthUiParams;
        this.$onAuth = function2;
        this.$status = oneTapBottomSheetAuthStatus;
        this.$onAuthCode = function3;
        this.$onFail = function4;
        this.$style = oneTapBottomSheetStyle;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new OneTapBottomSheetKt$OneTapBottomSheetInternal$4$1$1$4$1$1(this.$authStatus, this.$authParams, this.$onAuth, this.$status, this.$onAuthCode, this.$onFail, this.$style, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((OneTapBottomSheetKt$OneTapBottomSheetInternal$4$1$1$4$1$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            this.$authStatus.setValue(OneTapBottomSheetAuthStatus.AuthStarted.INSTANCE);
            VKID companion = VKID.INSTANCE.getInstance();
            final MutableState<OneTapBottomSheetAuthStatus> mutableState = this.$authStatus;
            final Function2<OneTapOAuth, AccessToken, Unit> function2 = this.$onAuth;
            final OneTapBottomSheetAuthStatus oneTapBottomSheetAuthStatus = this.$status;
            final Function2<AuthCodeData, Boolean, Unit> function3 = this.$onAuthCode;
            final Function2<OneTapOAuth, VKIDAuthFail, Unit> function4 = this.$onFail;
            VKIDAuthCallback vKIDAuthCallback = new VKIDAuthCallback() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetKt$OneTapBottomSheetInternal$4$1$1$4$1$1.1
                @Override // com.vk.id.auth.VKIDAuthCallback
                public void onAuth(AccessToken accessToken) {
                    Intrinsics.checkNotNullParameter(accessToken, "accessToken");
                    mutableState.setValue(OneTapBottomSheetAuthStatus.AuthSuccess.INSTANCE);
                    function2.invoke(((OneTapBottomSheetAuthStatus.AuthFailedMultibranding) oneTapBottomSheetAuthStatus).getOAuth(), accessToken);
                }

                @Override // com.vk.id.auth.VKIDAuthCallback
                public void onAuthCode(AuthCodeData data, boolean isCompletion) {
                    Intrinsics.checkNotNullParameter(data, "data");
                    if (isCompletion) {
                        mutableState.setValue(OneTapBottomSheetAuthStatus.AuthSuccess.INSTANCE);
                    }
                    function3.invoke(data, Boolean.valueOf(isCompletion));
                }

                @Override // com.vk.id.auth.VKIDAuthCallback
                public void onFail(VKIDAuthFail fail) {
                    Intrinsics.checkNotNullParameter(fail, "fail");
                    mutableState.setValue(new OneTapBottomSheetAuthStatus.AuthFailedMultibranding(((OneTapBottomSheetAuthStatus.AuthFailedMultibranding) oneTapBottomSheetAuthStatus).getOAuth()));
                    function4.invoke(((OneTapBottomSheetAuthStatus.AuthFailedMultibranding) oneTapBottomSheetAuthStatus).getOAuth(), fail);
                }
            };
            VKIDAuthUiParams vKIDAuthUiParams = this.$authParams;
            final OneTapBottomSheetAuthStatus oneTapBottomSheetAuthStatus2 = this.$status;
            final OneTapBottomSheetStyle oneTapBottomSheetStyle = this.$style;
            this.label = 1;
            if (companion.authorize(vKIDAuthCallback, vKIDAuthUiParams.asParamsBuilder(new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetKt$OneTapBottomSheetInternal$4$1$1$4$1$1$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj2) {
                    return OneTapBottomSheetKt$OneTapBottomSheetInternal$4$1$1$4$1$1.invokeSuspend$lambda$0(oneTapBottomSheetAuthStatus2, oneTapBottomSheetStyle, (VKIDAuthParams.Builder) obj2);
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
    public static final Unit invokeSuspend$lambda$0(OneTapBottomSheetAuthStatus oneTapBottomSheetAuthStatus, OneTapBottomSheetStyle oneTapBottomSheetStyle, VKIDAuthParams.Builder builder) {
        builder.setOAuth(((OneTapBottomSheetAuthStatus.AuthFailedMultibranding) oneTapBottomSheetAuthStatus).getOAuth().toOAuth());
        builder.setTheme(CommonKt.toProviderTheme(oneTapBottomSheetStyle));
        builder.setPrompt(Prompt.LOGIN);
        return Unit.INSTANCE;
    }
}
