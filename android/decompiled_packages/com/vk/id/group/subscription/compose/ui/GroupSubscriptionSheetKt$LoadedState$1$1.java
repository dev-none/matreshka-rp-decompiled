package com.vk.id.group.subscription.compose.ui;

import androidx.compose.runtime.MutableState;
import androidx.compose.runtime.State;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: GroupSubscriptionSheet.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$LoadedState$1$1", f = "GroupSubscriptionSheet.kt", i = {}, l = {377}, m = "invokeSuspend", n = {}, s = {})
final class GroupSubscriptionSheetKt$LoadedState$1$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ MutableState<Boolean> $once$delegate;
    final /* synthetic */ State<Function1<Continuation<? super Unit>, Object>> $rememberedSaveDisplay$delegate;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    GroupSubscriptionSheetKt$LoadedState$1$1(MutableState<Boolean> mutableState, State<? extends Function1<? super Continuation<? super Unit>, ? extends Object>> state, Continuation<? super GroupSubscriptionSheetKt$LoadedState$1$1> continuation) {
        super(2, continuation);
        this.$once$delegate = mutableState;
        this.$rememberedSaveDisplay$delegate = state;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new GroupSubscriptionSheetKt$LoadedState$1$1(this.$once$delegate, this.$rememberedSaveDisplay$delegate, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((GroupSubscriptionSheetKt$LoadedState$1$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            if (GroupSubscriptionSheetKt.LoadedState$lambda$36(this.$once$delegate)) {
                Function1 function1LoadedState$lambda$38 = GroupSubscriptionSheetKt.LoadedState$lambda$38(this.$rememberedSaveDisplay$delegate);
                this.label = 1;
                if (function1LoadedState$lambda$38.invoke(this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            }
            return Unit.INSTANCE;
        }
        if (i != 1) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ResultKt.throwOnFailure(obj);
        GroupSubscriptionSheetKt.LoadedState$lambda$37(this.$once$delegate, false);
        return Unit.INSTANCE;
    }
}
