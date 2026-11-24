package com.vk.id.internal.user;

import com.vk.id.internal.ipc.SilentAuthInfoProvider;
import com.vk.silentauth.SilentAuthInfo;
import java.util.List;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: UserDataFetcher.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/vk/silentauth/SilentAuthInfo;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.internal.user.UserDataFetcher$fetchUserData$2$info$1", f = "UserDataFetcher.kt", i = {}, l = {37}, m = "invokeSuspend", n = {}, s = {})
final class UserDataFetcher$fetchUserData$2$info$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super SilentAuthInfo>, Object> {
    int label;
    final /* synthetic */ UserDataFetcher this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    UserDataFetcher$fetchUserData$2$info$1(UserDataFetcher userDataFetcher, Continuation<? super UserDataFetcher$fetchUserData$2$info$1> continuation) {
        super(2, continuation);
        this.this$0 = userDataFetcher;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new UserDataFetcher$fetchUserData$2$info$1(this.this$0, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super SilentAuthInfo> continuation) {
        return ((UserDataFetcher$fetchUserData$2$info$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            this.this$0.vkSilentAuthInfoProvider.setAppId(Integer.parseInt(this.this$0.serviceCredentials.getClientID()));
            this.label = 1;
            obj = SilentAuthInfoProvider.DefaultImpls.getSilentAuthInfos$default(this.this$0.vkSilentAuthInfoProvider, 0L, this, 1, null);
            if (obj == coroutine_suspended) {
                return coroutine_suspended;
            }
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
        }
        return CollectionsKt.firstOrNull((List) obj);
    }
}
