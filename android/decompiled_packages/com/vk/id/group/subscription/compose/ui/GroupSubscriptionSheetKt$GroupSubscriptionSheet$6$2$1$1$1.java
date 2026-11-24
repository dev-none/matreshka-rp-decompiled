package com.vk.id.group.subscription.compose.ui;

import com.vk.id.group.subscription.compose.interactor.GroupSubscriptionInteractor;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function1;

/* JADX INFO: compiled from: GroupSubscriptionSheet.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0006\n\u0000\n\u0002\u0010\u0002\u0010\u0000\u001a\u00020\u0001H\n"}, d2 = {"<anonymous>", ""}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2$1$1$1", f = "GroupSubscriptionSheet.kt", i = {}, l = {293}, m = "invokeSuspend", n = {}, s = {})
final class GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2$1$1$1 extends SuspendLambda implements Function1<Continuation<? super Unit>, Object> {
    final /* synthetic */ GroupSubscriptionInteractor $interactor;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2$1$1$1(GroupSubscriptionInteractor groupSubscriptionInteractor, Continuation<? super GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2$1$1$1> continuation) {
        super(1, continuation);
        this.$interactor = groupSubscriptionInteractor;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Continuation<?> continuation) {
        return new GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2$1$1$1(this.$interactor, continuation);
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Continuation<? super Unit> continuation) {
        return ((GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2$1$1$1) create(continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            this.label = 1;
            if (this.$interactor.saveDisplay$group_subscription_compose_release(this) == coroutine_suspended) {
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
