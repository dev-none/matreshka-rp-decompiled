package com.vk.id.group.subscription.compose.ui;

import androidx.compose.runtime.MutableState;
import androidx.compose.runtime.SnapshotStateKt;
import androidx.compose.runtime.State;
import com.vk.id.VKID;
import com.vk.id.group.subscription.common.fail.VKIDGroupSubscriptionFail;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;
import kotlinx.coroutines.flow.FlowKt;

/* JADX INFO: compiled from: GroupSubscriptionSheet.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1", f = "GroupSubscriptionSheet.kt", i = {}, l = {200}, m = "invokeSuspend", n = {}, s = {})
final class GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ MutableState<Boolean> $isSuccess$delegate;
    final /* synthetic */ State<Function1<VKIDGroupSubscriptionFail, Unit>> $rememberedOnFail$delegate;
    final /* synthetic */ GroupSubscriptionSheetState $state;
    final /* synthetic */ MutableState<Boolean> $wasVisible$delegate;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1(GroupSubscriptionSheetState groupSubscriptionSheetState, MutableState<Boolean> mutableState, MutableState<Boolean> mutableState2, State<? extends Function1<? super VKIDGroupSubscriptionFail, Unit>> state, Continuation<? super GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1> continuation) {
        super(2, continuation);
        this.$state = groupSubscriptionSheetState;
        this.$isSuccess$delegate = mutableState;
        this.$wasVisible$delegate = mutableState2;
        this.$rememberedOnFail$delegate = state;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1(this.$state, this.$isSuccess$delegate, this.$wasVisible$delegate, this.$rememberedOnFail$delegate, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    /* JADX INFO: renamed from: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1$1, reason: invalid class name */
    /* JADX INFO: compiled from: GroupSubscriptionSheet.kt */
    @Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0003\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "it", ""}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1$1", f = "GroupSubscriptionSheet.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass1 extends SuspendLambda implements Function2<Throwable, Continuation<? super Unit>, Object> {
        int label;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass1(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(Throwable th, Continuation<? super Unit> continuation) {
            return ((AnonymousClass1) create(th, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: renamed from: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1$2, reason: invalid class name */
    /* JADX INFO: compiled from: GroupSubscriptionSheet.kt */
    @Metadata(d1 = {"\u0000\u0006\n\u0000\n\u0002\u0010\u0002\u0010\u0000\u001a\u00020\u0001H\n"}, d2 = {"<anonymous>", ""}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1$2", f = "GroupSubscriptionSheet.kt", i = {}, l = {201}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass2 extends SuspendLambda implements Function1<Continuation<? super Unit>, Object> {
        final /* synthetic */ MutableState<Boolean> $isSuccess$delegate;
        final /* synthetic */ State<Function1<VKIDGroupSubscriptionFail, Unit>> $rememberedOnFail$delegate;
        final /* synthetic */ GroupSubscriptionSheetState $state;
        final /* synthetic */ MutableState<Boolean> $wasVisible$delegate;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        AnonymousClass2(GroupSubscriptionSheetState groupSubscriptionSheetState, MutableState<Boolean> mutableState, MutableState<Boolean> mutableState2, State<? extends Function1<? super VKIDGroupSubscriptionFail, Unit>> state, Continuation<? super AnonymousClass2> continuation) {
            super(1, continuation);
            this.$state = groupSubscriptionSheetState;
            this.$isSuccess$delegate = mutableState;
            this.$wasVisible$delegate = mutableState2;
            this.$rememberedOnFail$delegate = state;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Continuation<?> continuation) {
            return new AnonymousClass2(this.$state, this.$isSuccess$delegate, this.$wasVisible$delegate, this.$rememberedOnFail$delegate, continuation);
        }

        @Override // kotlin.jvm.functions.Function1
        public final Object invoke(Continuation<? super Unit> continuation) {
            return ((AnonymousClass2) create(continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                final GroupSubscriptionSheetState groupSubscriptionSheetState = this.$state;
                Flow flowDistinctUntilChanged = FlowKt.distinctUntilChanged(SnapshotStateKt.snapshotFlow(new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1$2$$ExternalSyntheticLambda0
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return Boolean.valueOf(groupSubscriptionSheetState.isVisible());
                    }
                }));
                final MutableState<Boolean> mutableState = this.$isSuccess$delegate;
                final MutableState<Boolean> mutableState2 = this.$wasVisible$delegate;
                final State<Function1<VKIDGroupSubscriptionFail, Unit>> state = this.$rememberedOnFail$delegate;
                this.label = 1;
                if (flowDistinctUntilChanged.collect(new FlowCollector() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt.GroupSubscriptionSheet.2.1.2.2
                    @Override // kotlinx.coroutines.flow.FlowCollector
                    public /* bridge */ /* synthetic */ Object emit(Object obj2, Continuation continuation) {
                        return emit(((Boolean) obj2).booleanValue(), (Continuation<? super Unit>) continuation);
                    }

                    public final Object emit(boolean z, Continuation<? super Unit> continuation) {
                        if (z) {
                            GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$15(mutableState, false);
                        }
                        if (!z && GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$20(mutableState2) && !GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$14(mutableState)) {
                            GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$12(state).invoke(new VKIDGroupSubscriptionFail.Dismiss());
                        }
                        GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$21(mutableState2, z);
                        return Unit.INSTANCE;
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
            return Unit.INSTANCE;
        }
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            this.label = 1;
            if (VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashesSuspend(new AnonymousClass1(null), new AnonymousClass2(this.$state, this.$isSuccess$delegate, this.$wasVisible$delegate, this.$rememberedOnFail$delegate, null), this) == coroutine_suspended) {
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
