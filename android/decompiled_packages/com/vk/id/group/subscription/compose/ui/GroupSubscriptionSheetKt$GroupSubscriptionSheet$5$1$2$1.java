package com.vk.id.group.subscription.compose.ui;

import androidx.compose.runtime.MutableState;
import androidx.compose.runtime.State;
import com.vk.id.group.subscription.common.fail.VKIDGroupSubscriptionFail;
import com.vk.id.group.subscription.compose.interactor.ClientLimitReachedException;
import com.vk.id.group.subscription.compose.interactor.GroupSubscriptionInteractor;
import com.vk.id.group.subscription.compose.interactor.RemoteLimitReachedException;
import com.vk.id.group.subscription.compose.interactor.ServiceAccountException;
import com.vk.id.network.groupsubscription.data.InternalVKIDGroupData;
import com.vk.id.network.groupsubscription.exception.InternalVKIDAlreadyGroupMemberException;
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
@DebugMetadata(c = "com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$GroupSubscriptionSheet$5$1$2$1", f = "GroupSubscriptionSheet.kt", i = {}, l = {225}, m = "invokeSuspend", n = {}, s = {})
final class GroupSubscriptionSheetKt$GroupSubscriptionSheet$5$1$2$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
    final /* synthetic */ GroupSubscriptionInteractor $interactor;
    final /* synthetic */ State<Function1<VKIDGroupSubscriptionFail, Unit>> $rememberedOnFail$delegate;
    final /* synthetic */ MutableState<Boolean> $showBottomSheet$delegate;
    final /* synthetic */ GroupSubscriptionSheetState $state;
    final /* synthetic */ MutableState<GroupSubscriptionSheetStatus> $status;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    GroupSubscriptionSheetKt$GroupSubscriptionSheet$5$1$2$1(GroupSubscriptionInteractor groupSubscriptionInteractor, GroupSubscriptionSheetState groupSubscriptionSheetState, MutableState<GroupSubscriptionSheetStatus> mutableState, MutableState<Boolean> mutableState2, State<? extends Function1<? super VKIDGroupSubscriptionFail, Unit>> state, Continuation<? super GroupSubscriptionSheetKt$GroupSubscriptionSheet$5$1$2$1> continuation) {
        super(2, continuation);
        this.$interactor = groupSubscriptionInteractor;
        this.$state = groupSubscriptionSheetState;
        this.$status = mutableState;
        this.$showBottomSheet$delegate = mutableState2;
        this.$rememberedOnFail$delegate = state;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new GroupSubscriptionSheetKt$GroupSubscriptionSheet$5$1$2$1(this.$interactor, this.$state, this.$status, this.$showBottomSheet$delegate, this.$rememberedOnFail$delegate, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
        return ((GroupSubscriptionSheetKt$GroupSubscriptionSheet$5$1$2$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = this.label;
        try {
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                obj = this.$interactor.loadGroup$group_subscription_compose_release(this);
                if (obj == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            MutableState<GroupSubscriptionSheetStatus> mutableState = this.$status;
            MutableState<Boolean> mutableState2 = this.$showBottomSheet$delegate;
            InternalVKIDGroupData internalVKIDGroupData = (InternalVKIDGroupData) obj;
            String imageUrl = internalVKIDGroupData.getImageUrl();
            String name = internalVKIDGroupData.getName();
            mutableState.setValue(new GroupSubscriptionSheetStatus.Loaded(new GroupSubscriptionSheetStatusData(imageUrl, internalVKIDGroupData.getDescription(), name, internalVKIDGroupData.getUserImageUrls(), internalVKIDGroupData.getSubscriberCount(), internalVKIDGroupData.getFriendsCount(), internalVKIDGroupData.isVerified())));
            GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$11(mutableState2, true);
        } catch (ClientLimitReachedException unused) {
            this.$state.hide();
            GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$12(this.$rememberedOnFail$delegate).invoke(new VKIDGroupSubscriptionFail.ClientLimitReached());
            GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$11(this.$showBottomSheet$delegate, false);
        } catch (RemoteLimitReachedException unused2) {
            this.$state.hide();
            GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$12(this.$rememberedOnFail$delegate).invoke(new VKIDGroupSubscriptionFail.RemoteLimitReached());
            GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$11(this.$showBottomSheet$delegate, false);
        } catch (ServiceAccountException unused3) {
            this.$state.hide();
            GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$12(this.$rememberedOnFail$delegate).invoke(new VKIDGroupSubscriptionFail.ServiceAccount());
            GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$11(this.$showBottomSheet$delegate, false);
        } catch (InternalVKIDAlreadyGroupMemberException unused4) {
            this.$state.hide();
            GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$12(this.$rememberedOnFail$delegate).invoke(new VKIDGroupSubscriptionFail.AlreadyGroupMember());
            GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$11(this.$showBottomSheet$delegate, false);
        } catch (Throwable th) {
            this.$state.hide();
            GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$12(this.$rememberedOnFail$delegate).invoke(new VKIDGroupSubscriptionFail.Other(th));
            GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$11(this.$showBottomSheet$delegate, false);
        }
        return Unit.INSTANCE;
    }
}
