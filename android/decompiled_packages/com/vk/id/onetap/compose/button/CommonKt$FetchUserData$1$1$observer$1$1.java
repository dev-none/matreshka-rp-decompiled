package com.vk.id.onetap.compose.button;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: Common.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.onetap.compose.button.CommonKt$FetchUserData$1$1$observer$1$1", f = "Common.kt", i = {}, l = {84, 85, 86}, m = "invokeSuspend", n = {}, s = {})
final class CommonKt$FetchUserData$1$1$observer$1$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ OnFetchingProgress $onFetchingProgress;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    CommonKt$FetchUserData$1$1$observer$1$1(OnFetchingProgress onFetchingProgress, Continuation<? super CommonKt$FetchUserData$1$1$observer$1$1> continuation) {
        super(2, continuation);
        this.$onFetchingProgress = onFetchingProgress;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new CommonKt$FetchUserData$1$1$observer$1$1(this.$onFetchingProgress, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((CommonKt$FetchUserData$1$1$observer$1$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    /* JADX WARN: Code duplicated, block: B:20:0x0054  */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x0062, code lost:
    
        if (r1.onFetched((com.vk.id.VKIDUser) r6, r5) == r0) goto L23;
     */
    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.lang.Object invokeSuspend(java.lang.Object r6) {
        /*
            r5 = this;
            java.lang.Object r0 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
            int r1 = r5.label
            r2 = 3
            r3 = 2
            r4 = 1
            if (r1 == 0) goto L2b
            if (r1 == r4) goto L27
            if (r1 == r3) goto L1d
            if (r1 != r2) goto L15
            kotlin.ResultKt.throwOnFailure(r6)
            goto L65
        L15:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r0 = "call to 'resume' before 'invoke' with coroutine"
            r6.<init>(r0)
            throw r6
        L1d:
            kotlin.ResultKt.throwOnFailure(r6)
            kotlin.Result r6 = (kotlin.Result) r6
            java.lang.Object r6 = r6.getValue()
            goto L4e
        L27:
            kotlin.ResultKt.throwOnFailure(r6)
            goto L3c
        L2b:
            kotlin.ResultKt.throwOnFailure(r6)
            com.vk.id.onetap.compose.button.OnFetchingProgress r6 = r5.$onFetchingProgress
            r1 = r5
            kotlin.coroutines.Continuation r1 = (kotlin.coroutines.Continuation) r1
            r5.label = r4
            java.lang.Object r6 = r6.onPreFetch(r1)
            if (r6 != r0) goto L3c
            goto L64
        L3c:
            com.vk.id.VKID$Companion r6 = com.vk.id.VKID.INSTANCE
            com.vk.id.VKID r6 = r6.getInstance()
            r1 = r5
            kotlin.coroutines.Continuation r1 = (kotlin.coroutines.Continuation) r1
            r5.label = r3
            java.lang.Object r6 = r6.m9258fetchUserDataIoAF18A(r1)
            if (r6 != r0) goto L4e
            goto L64
        L4e:
            boolean r1 = kotlin.Result.m9867isFailureimpl(r6)
            if (r1 == 0) goto L55
            r6 = 0
        L55:
            com.vk.id.VKIDUser r6 = (com.vk.id.VKIDUser) r6
            com.vk.id.onetap.compose.button.OnFetchingProgress r1 = r5.$onFetchingProgress
            r3 = r5
            kotlin.coroutines.Continuation r3 = (kotlin.coroutines.Continuation) r3
            r5.label = r2
            java.lang.Object r6 = r1.onFetched(r6, r3)
            if (r6 != r0) goto L65
        L64:
            return r0
        L65:
            kotlin.Unit r6 = kotlin.Unit.INSTANCE
            return r6
        */
        throw new UnsupportedOperationException("Method not decompiled: com.vk.id.onetap.compose.button.CommonKt$FetchUserData$1$1$observer$1$1.invokeSuspend(java.lang.Object):java.lang.Object");
    }
}
