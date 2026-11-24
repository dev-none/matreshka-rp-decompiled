package com.vk.id;

import com.vk.id.logout.VKIDLoggerOut;
import com.vk.id.logout.VKIDLogoutCallback;
import com.vk.id.logout.VKIDLogoutFail;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AuthResultHandler.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "it", "Lcom/vk/id/AccessToken;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.AuthResultHandler$handleOauth$5$1", f = "AuthResultHandler.kt", i = {}, l = {103}, m = "invokeSuspend", n = {}, s = {})
final class AuthResultHandler$handleOauth$5$1 extends SuspendLambda implements Function2<AccessToken, Continuation<? super Unit>, Object> {
    final /* synthetic */ AccessToken $accessToken;
    /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ AuthResultHandler this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    AuthResultHandler$handleOauth$5$1(AccessToken accessToken, AuthResultHandler authResultHandler, Continuation<? super AuthResultHandler$handleOauth$5$1> continuation) {
        super(2, continuation);
        this.$accessToken = accessToken;
        this.this$0 = authResultHandler;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        AuthResultHandler$handleOauth$5$1 authResultHandler$handleOauth$5$1 = new AuthResultHandler$handleOauth$5$1(this.$accessToken, this.this$0, continuation);
        authResultHandler$handleOauth$5$1.L$0 = obj;
        return authResultHandler$handleOauth$5$1;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(AccessToken accessToken, Continuation<? super Unit> continuation) {
        return ((AuthResultHandler$handleOauth$5$1) create(accessToken, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            final AccessToken accessToken = (AccessToken) this.L$0;
            if (this.$accessToken != null) {
                VKIDLoggerOut vKIDLoggerOut = this.this$0.loggerOut;
                final AuthResultHandler authResultHandler = this.this$0;
                VKIDLogoutCallback vKIDLogoutCallback = new VKIDLogoutCallback() { // from class: com.vk.id.AuthResultHandler$handleOauth$5$1.1
                    @Override // com.vk.id.logout.VKIDLogoutCallback
                    public void onSuccess() {
                        authResultHandler.emitAuthSuccess(accessToken);
                    }

                    @Override // com.vk.id.logout.VKIDLogoutCallback
                    public void onFail(VKIDLogoutFail fail) {
                        Intrinsics.checkNotNullParameter(fail, "fail");
                        authResultHandler.emitAuthSuccess(accessToken);
                    }
                };
                this.label = 1;
                if (VKIDLoggerOut.logout$default(vKIDLoggerOut, vKIDLogoutCallback, this.$accessToken.getToken(), false, null, this, 8, null) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                this.this$0.emitAuthSuccess(accessToken);
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
