package com.vk.id.onetap.compose.onetap.sheet;

import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.DelayKt;

/* JADX INFO: compiled from: OneTapBottomSheet.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetKt$OneTapBottomSheet$14$1$1$1", f = "OneTapBottomSheet.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
final class OneTapBottomSheetKt$OneTapBottomSheet$14$1$1$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ long $it;
    final /* synthetic */ OneTapBottomSheetState $state;
    private /* synthetic */ Object L$0;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    OneTapBottomSheetKt$OneTapBottomSheet$14$1$1$1(long j, OneTapBottomSheetState oneTapBottomSheetState, Continuation<? super OneTapBottomSheetKt$OneTapBottomSheet$14$1$1$1> continuation) {
        super(2, continuation);
        this.$it = j;
        this.$state = oneTapBottomSheetState;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        OneTapBottomSheetKt$OneTapBottomSheet$14$1$1$1 oneTapBottomSheetKt$OneTapBottomSheet$14$1$1$1 = new OneTapBottomSheetKt$OneTapBottomSheet$14$1$1$1(this.$it, this.$state, continuation);
        oneTapBottomSheetKt$OneTapBottomSheet$14$1$1$1.L$0 = obj;
        return oneTapBottomSheetKt$OneTapBottomSheet$14$1$1$1;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((OneTapBottomSheetKt$OneTapBottomSheet$14$1$1$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    /* JADX INFO: renamed from: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetKt$OneTapBottomSheet$14$1$1$1$1, reason: invalid class name */
    /* JADX INFO: compiled from: OneTapBottomSheet.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetKt$OneTapBottomSheet$14$1$1$1$1", f = "OneTapBottomSheet.kt", i = {}, l = {295}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ long $it;
        final /* synthetic */ OneTapBottomSheetState $state;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass1(long j, OneTapBottomSheetState oneTapBottomSheetState, Continuation<? super AnonymousClass1> continuation) {
            super(2, continuation);
            this.$it = j;
            this.$state = oneTapBottomSheetState;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass1(this.$it, this.$state, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                if (DelayKt.delay(this.$it, this) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            this.$state.show();
            return Unit.INSTANCE;
        }
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        IntrinsicsKt.getCOROUTINE_SUSPENDED();
        if (this.label == 0) {
            ResultKt.throwOnFailure(obj);
            BuildersKt__Builders_commonKt.launch$default((CoroutineScope) this.L$0, null, null, new AnonymousClass1(this.$it, this.$state, null), 3, null);
            return Unit.INSTANCE;
        }
        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
    }
}
