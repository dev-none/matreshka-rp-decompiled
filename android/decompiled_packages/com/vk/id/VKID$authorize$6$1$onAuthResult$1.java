package com.vk.id;

import com.vk.id.auth.VKIDAuthParams;
import com.vk.id.internal.analytics.CustomAuthAnalytics;
import com.vk.id.internal.auth.AuthResult;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.sync.Mutex;

/* JADX INFO: compiled from: VKID.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.VKID$authorize$6$1$onAuthResult$1", f = "VKID.kt", i = {}, l = {473}, m = "invokeSuspend", n = {}, s = {})
final class VKID$authorize$6$1$onAuthResult$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ VKIDAuthParams $actualParams;
    final /* synthetic */ AuthResult $authResult;
    final /* synthetic */ String $performanceKey;
    final /* synthetic */ StatParams $statParams;
    int label;
    final /* synthetic */ VKID this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    VKID$authorize$6$1$onAuthResult$1(VKID vkid, AuthResult authResult, String str, VKIDAuthParams vKIDAuthParams, StatParams statParams, Continuation<? super VKID$authorize$6$1$onAuthResult$1> continuation) {
        super(2, continuation);
        this.this$0 = vkid;
        this.$authResult = authResult;
        this.$performanceKey = str;
        this.$actualParams = vKIDAuthParams;
        this.$statParams = statParams;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new VKID$authorize$6$1$onAuthResult$1(this.this$0, this.$authResult, this.$performanceKey, this.$actualParams, this.$statParams, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((VKID$authorize$6$1$onAuthResult$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            AuthResultHandler authResultHandler = (AuthResultHandler) this.this$0.authResultHandler.getValue();
            AuthResult authResult = this.$authResult;
            final VKIDAuthParams vKIDAuthParams = this.$actualParams;
            final StatParams statParams = this.$statParams;
            this.label = 1;
            if (authResultHandler.handle$vkid_release(authResult, new Function0() { // from class: com.vk.id.VKID$authorize$6$1$onAuthResult$1$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function0
                public final Object invoke() {
                    return VKID$authorize$6$1$onAuthResult$1.invokeSuspend$lambda$0(vKIDAuthParams, statParams);
                }
            }, this) == coroutine_suspended) {
                return coroutine_suspended;
            }
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
        }
        this.this$0.getPerformanceTracker().endTracking(this.$performanceKey);
        if (this.this$0.requestMutex.isLocked()) {
            Mutex.DefaultImpls.unlock$default(this.this$0.requestMutex, null, 1, null);
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$0(VKIDAuthParams vKIDAuthParams, StatParams statParams) {
        if (!vKIDAuthParams.getInternalUse()) {
            CustomAuthAnalytics.INSTANCE.customAuthError$vkid_release(statParams);
        }
        return Unit.INSTANCE;
    }
}
