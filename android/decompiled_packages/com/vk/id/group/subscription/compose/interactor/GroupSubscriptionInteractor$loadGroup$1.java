package com.vk.id.group.subscription.compose.interactor;

import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;

/* JADX INFO: compiled from: GroupSubscriptionInteractor.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
@DebugMetadata(c = "com.vk.id.group.subscription.compose.interactor.GroupSubscriptionInteractor", f = "GroupSubscriptionInteractor.kt", i = {0, 1, 2}, l = {50, 51, 52, 52}, m = "loadGroup$group_subscription_compose_release", n = {"this", "this", "this"}, s = {"L$0", "L$0", "L$0"})
final class GroupSubscriptionInteractor$loadGroup$1 extends ContinuationImpl {
    Object L$0;
    int label;
    /* synthetic */ Object result;
    final /* synthetic */ GroupSubscriptionInteractor this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    GroupSubscriptionInteractor$loadGroup$1(GroupSubscriptionInteractor groupSubscriptionInteractor, Continuation<? super GroupSubscriptionInteractor$loadGroup$1> continuation) {
        super(continuation);
        this.this$0 = groupSubscriptionInteractor;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) {
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        return this.this$0.loadGroup$group_subscription_compose_release(this);
    }
}
