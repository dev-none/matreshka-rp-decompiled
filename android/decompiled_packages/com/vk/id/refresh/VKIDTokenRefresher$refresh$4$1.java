package com.vk.id.refresh;

import com.vk.id.AccessToken;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;

/* JADX INFO: compiled from: VKIDTokenRefresher.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "it", "Lcom/vk/id/AccessToken;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.refresh.VKIDTokenRefresher$refresh$4$1", f = "VKIDTokenRefresher.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
final class VKIDTokenRefresher$refresh$4$1 extends SuspendLambda implements Function2<AccessToken, Continuation<? super Unit>, Object> {
    final /* synthetic */ VKIDRefreshTokenCallback $callback;
    /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ VKIDTokenRefresher this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    VKIDTokenRefresher$refresh$4$1(VKIDTokenRefresher vKIDTokenRefresher, VKIDRefreshTokenCallback vKIDRefreshTokenCallback, Continuation<? super VKIDTokenRefresher$refresh$4$1> continuation) {
        super(2, continuation);
        this.this$0 = vKIDTokenRefresher;
        this.$callback = vKIDRefreshTokenCallback;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        VKIDTokenRefresher$refresh$4$1 vKIDTokenRefresher$refresh$4$1 = new VKIDTokenRefresher$refresh$4$1(this.this$0, this.$callback, continuation);
        vKIDTokenRefresher$refresh$4$1.L$0 = obj;
        return vKIDTokenRefresher$refresh$4$1;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(AccessToken accessToken, Continuation<? super Unit> continuation) {
        return ((VKIDTokenRefresher$refresh$4$1) create(accessToken, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        IntrinsicsKt.getCOROUTINE_SUSPENDED();
        if (this.label == 0) {
            ResultKt.throwOnFailure(obj);
            AccessToken accessToken = (AccessToken) this.L$0;
            this.this$0.prefsStore.clear();
            this.$callback.onSuccess(accessToken);
            return Unit.INSTANCE;
        }
        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
    }
}
