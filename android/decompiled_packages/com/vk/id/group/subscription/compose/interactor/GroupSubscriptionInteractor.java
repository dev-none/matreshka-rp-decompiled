package com.vk.id.group.subscription.compose.interactor;

import com.vk.id.AccessToken;
import com.vk.id.VKID;
import com.vk.id.group.subscription.compose.storage.GroupSubscriptionPrefsStorage;
import com.vk.id.groupsubscription.GroupSubscriptionLimit;
import com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiContract;
import com.vk.id.network.groupsubscription.data.InternalVKIDGroupByIdData;
import com.vk.id.network.groupsubscription.data.InternalVKIDGroupData;
import com.vk.id.network.groupsubscription.data.InternalVKIDGroupMembersData;
import com.vk.id.network.groupsubscription.data.InternalVKIDMemberData;
import com.vk.id.storage.InternalVKIDTokenStorage;
import io.flutter.plugins.firebase.auth.Constants;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.Collection;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.AwaitKt;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Deferred;
import kotlinx.coroutines.Dispatchers;

/* JADX INFO: compiled from: GroupSubscriptionInteractor.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0001\u0018\u0000  2\u00020\u0001:\u0001 BA\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u000e\u0010\b\u001a\n\u0012\u0004\u0012\u00020\u0007\u0018\u00010\t\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r¢\u0006\u0004\b\u000e\u0010\u000fJ\u0010\u0010\u0013\u001a\u00020\u0014H\u0080@¢\u0006\u0004\b\u0015\u0010\u0016J\u0010\u0010\u0017\u001a\u00020\u0018H\u0080@¢\u0006\u0004\b\u0019\u0010\u0016J\u0010\u0010\u001a\u001a\u00020\u0014H\u0080@¢\u0006\u0004\b\u001b\u0010\u0016J\u000e\u0010\u001c\u001a\u00020\u001dH\u0082@¢\u0006\u0002\u0010\u0016J\u000e\u0010\u001e\u001a\u00020\u001dH\u0082@¢\u0006\u0002\u0010\u0016J\u000e\u0010\u001f\u001a\u00020\u0018H\u0082@¢\u0006\u0002\u0010\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\b\u001a\n\u0012\u0004\u0012\u00020\u0007\u0018\u00010\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\f\u001a\u0004\u0018\u00010\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0010\u001a\u00020\u00078BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u0011\u0010\u0012¨\u0006!"}, d2 = {"Lcom/vk/id/group/subscription/compose/interactor/GroupSubscriptionInteractor;", "", "apiService", "Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApiContract;", "tokenStorage", "Lcom/vk/id/storage/InternalVKIDTokenStorage;", "groupId", "", "externalAccessTokenProvider", "Lkotlin/Function0;", "storage", "Lcom/vk/id/group/subscription/compose/storage/GroupSubscriptionPrefsStorage;", "limit", "Lcom/vk/id/groupsubscription/GroupSubscriptionLimit;", "<init>", "(Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApiContract;Lcom/vk/id/storage/InternalVKIDTokenStorage;Ljava/lang/String;Lkotlin/jvm/functions/Function0;Lcom/vk/id/group/subscription/compose/storage/GroupSubscriptionPrefsStorage;Lcom/vk/id/groupsubscription/GroupSubscriptionLimit;)V", Constants.ACCESS_TOKEN, "getAccessToken", "()Ljava/lang/String;", "saveDisplay", "", "saveDisplay$group_subscription_compose_release", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "loadGroup", "Lcom/vk/id/network/groupsubscription/data/InternalVKIDGroupData;", "loadGroup$group_subscription_compose_release", "subscribeToGroup", "subscribeToGroup$group_subscription_compose_release", "passesRemoteLimits", "", "passesLocalLimits", "getGroup", "Companion", "group-subscription-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class GroupSubscriptionInteractor {

    @Deprecated
    public static final int IMAGE_NUMBER = 3;
    private final InternalVKIDGroupSubscriptionApiContract apiService;
    private final Function0<String> externalAccessTokenProvider;
    private final String groupId;
    private final GroupSubscriptionLimit limit;
    private final GroupSubscriptionPrefsStorage storage;
    private final InternalVKIDTokenStorage tokenStorage;
    private static final Companion Companion = new Companion(null);
    public static final int $stable = 8;

    public GroupSubscriptionInteractor(InternalVKIDGroupSubscriptionApiContract apiService, InternalVKIDTokenStorage tokenStorage, String groupId, Function0<String> function0, GroupSubscriptionPrefsStorage storage, GroupSubscriptionLimit groupSubscriptionLimit) {
        Intrinsics.checkNotNullParameter(apiService, "apiService");
        Intrinsics.checkNotNullParameter(tokenStorage, "tokenStorage");
        Intrinsics.checkNotNullParameter(groupId, "groupId");
        Intrinsics.checkNotNullParameter(storage, "storage");
        this.apiService = apiService;
        this.tokenStorage = tokenStorage;
        this.groupId = groupId;
        this.externalAccessTokenProvider = function0;
        this.storage = storage;
        this.limit = groupSubscriptionLimit;
    }

    /* JADX INFO: compiled from: GroupSubscriptionInteractor.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000¨\u0006\u0006"}, d2 = {"Lcom/vk/id/group/subscription/compose/interactor/GroupSubscriptionInteractor$Companion;", "", "<init>", "()V", "IMAGE_NUMBER", "", "group-subscription-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final String getAccessToken() {
        String strInvoke;
        Function0<String> function0 = this.externalAccessTokenProvider;
        if (function0 != null && (strInvoke = function0.invoke()) != null) {
            return strInvoke;
        }
        AccessToken currentAccessToken = this.tokenStorage.getCurrentAccessToken();
        if (currentAccessToken != null) {
            return currentAccessToken.getToken();
        }
        throw new NotAuthorizedException();
    }

    public final Object saveDisplay$group_subscription_compose_release(Continuation<? super Unit> continuation) {
        Object objRunReportingCrashesSuspend = VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashesSuspend(new GroupSubscriptionInteractor$saveDisplay$2(null), new GroupSubscriptionInteractor$saveDisplay$3(this, null), continuation);
        return objRunReportingCrashesSuspend == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objRunReportingCrashesSuspend : Unit.INSTANCE;
    }

    /* JADX WARN: Code duplicated, block: B:32:0x007d  */
    /* JADX WARN: Code duplicated, block: B:37:0x0096  */
    /* JADX WARN: Code duplicated, block: B:40:0x00a2 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:41:0x00a3  */
    /* JADX WARN: Code duplicated, block: B:43:0x00a9  */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public final Object loadGroup$group_subscription_compose_release(Continuation<? super InternalVKIDGroupData> continuation) {
        GroupSubscriptionInteractor$loadGroup$1 groupSubscriptionInteractor$loadGroup$1;
        GroupSubscriptionInteractor groupSubscriptionInteractor;
        Object group;
        if (continuation instanceof GroupSubscriptionInteractor$loadGroup$1) {
            groupSubscriptionInteractor$loadGroup$1 = (GroupSubscriptionInteractor$loadGroup$1) continuation;
            if ((groupSubscriptionInteractor$loadGroup$1.label & Integer.MIN_VALUE) != 0) {
                groupSubscriptionInteractor$loadGroup$1.label -= Integer.MIN_VALUE;
            } else {
                groupSubscriptionInteractor$loadGroup$1 = new GroupSubscriptionInteractor$loadGroup$1(this, continuation);
            }
        } else {
            groupSubscriptionInteractor$loadGroup$1 = new GroupSubscriptionInteractor$loadGroup$1(this, continuation);
        }
        Object objPassesLocalLimits = groupSubscriptionInteractor$loadGroup$1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = groupSubscriptionInteractor$loadGroup$1.label;
        if (i == 0) {
            ResultKt.throwOnFailure(objPassesLocalLimits);
            groupSubscriptionInteractor$loadGroup$1.L$0 = this;
            groupSubscriptionInteractor$loadGroup$1.label = 1;
            objPassesLocalLimits = passesLocalLimits(groupSubscriptionInteractor$loadGroup$1);
            if (objPassesLocalLimits != coroutine_suspended) {
                groupSubscriptionInteractor = this;
            }
            return coroutine_suspended;
        }
        if (i == 1) {
            groupSubscriptionInteractor = (GroupSubscriptionInteractor) groupSubscriptionInteractor$loadGroup$1.L$0;
            ResultKt.throwOnFailure(objPassesLocalLimits);
        } else {
            if (i == 2) {
                groupSubscriptionInteractor = (GroupSubscriptionInteractor) groupSubscriptionInteractor$loadGroup$1.L$0;
                ResultKt.throwOnFailure(objPassesLocalLimits);
                if (((Boolean) objPassesLocalLimits).booleanValue()) {
                    throw new RemoteLimitReachedException();
                }
                InternalVKIDGroupSubscriptionApiContract internalVKIDGroupSubscriptionApiContract = groupSubscriptionInteractor.apiService;
                String accessToken = groupSubscriptionInteractor.getAccessToken();
                groupSubscriptionInteractor$loadGroup$1.L$0 = groupSubscriptionInteractor;
                groupSubscriptionInteractor$loadGroup$1.label = 3;
                objPassesLocalLimits = internalVKIDGroupSubscriptionApiContract.isServiceAccount(accessToken, groupSubscriptionInteractor$loadGroup$1);
                if (objPassesLocalLimits != coroutine_suspended) {
                }
                return coroutine_suspended;
            }
            if (i != 3) {
                if (i != 4) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(objPassesLocalLimits);
                return objPassesLocalLimits;
            }
            groupSubscriptionInteractor = (GroupSubscriptionInteractor) groupSubscriptionInteractor$loadGroup$1.L$0;
            ResultKt.throwOnFailure(objPassesLocalLimits);
        }
        if (!((Boolean) objPassesLocalLimits).booleanValue()) {
            throw new ServiceAccountException();
        }
        groupSubscriptionInteractor$loadGroup$1.L$0 = null;
        groupSubscriptionInteractor$loadGroup$1.label = 4;
        group = groupSubscriptionInteractor.getGroup(groupSubscriptionInteractor$loadGroup$1);
        if (group != coroutine_suspended) {
            return coroutine_suspended;
        }
        return group;
        if (!((Boolean) objPassesLocalLimits).booleanValue()) {
            throw new ClientLimitReachedException();
        }
        groupSubscriptionInteractor$loadGroup$1.L$0 = groupSubscriptionInteractor;
        groupSubscriptionInteractor$loadGroup$1.label = 2;
        objPassesLocalLimits = groupSubscriptionInteractor.passesRemoteLimits(groupSubscriptionInteractor$loadGroup$1);
        if (objPassesLocalLimits != coroutine_suspended) {
            if (((Boolean) objPassesLocalLimits).booleanValue()) {
                throw new RemoteLimitReachedException();
            }
            InternalVKIDGroupSubscriptionApiContract internalVKIDGroupSubscriptionApiContract2 = groupSubscriptionInteractor.apiService;
            String accessToken2 = groupSubscriptionInteractor.getAccessToken();
            groupSubscriptionInteractor$loadGroup$1.L$0 = groupSubscriptionInteractor;
            groupSubscriptionInteractor$loadGroup$1.label = 3;
            objPassesLocalLimits = internalVKIDGroupSubscriptionApiContract2.isServiceAccount(accessToken2, groupSubscriptionInteractor$loadGroup$1);
            if (objPassesLocalLimits != coroutine_suspended) {
                if (!((Boolean) objPassesLocalLimits).booleanValue()) {
                    throw new ServiceAccountException();
                }
                groupSubscriptionInteractor$loadGroup$1.L$0 = null;
                groupSubscriptionInteractor$loadGroup$1.label = 4;
                group = groupSubscriptionInteractor.getGroup(groupSubscriptionInteractor$loadGroup$1);
                if (group != coroutine_suspended) {
                    return group;
                }
            }
        }
        return coroutine_suspended;
    }

    public final Object subscribeToGroup$group_subscription_compose_release(Continuation<? super Unit> continuation) {
        Object objSubscribeToGroup = this.apiService.subscribeToGroup(getAccessToken(), this.groupId, continuation);
        return objSubscribeToGroup == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objSubscribeToGroup : Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object passesRemoteLimits(Continuation<? super Boolean> continuation) {
        return this.apiService.shouldShowSubscription(getAccessToken(), continuation);
    }

    /* JADX INFO: renamed from: com.vk.id.group.subscription.compose.interactor.GroupSubscriptionInteractor$passesLocalLimits$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: GroupSubscriptionInteractor.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u000b\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.group.subscription.compose.interactor.GroupSubscriptionInteractor$passesLocalLimits$2", f = "GroupSubscriptionInteractor.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {})
    static final class C19532 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Boolean>, Object> {
        int label;

        C19532(Continuation<? super C19532> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return GroupSubscriptionInteractor.this.new C19532(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Boolean> continuation) {
            return ((C19532) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                if (GroupSubscriptionInteractor.this.limit == null) {
                    return Boxing.boxBoolean(true);
                }
                Calendar calendar = Calendar.getInstance();
                calendar.setTime(new Date());
                calendar.add(6, -GroupSubscriptionInteractor.this.limit.getPeriodInDays());
                AccessToken accessToken = VKID.INSTANCE.getInstance().getAccessToken();
                if (accessToken != null) {
                    long userID = accessToken.getUserID();
                    Set<Date> displays = GroupSubscriptionInteractor.this.storage.getDisplays(userID);
                    ArrayList arrayList = new ArrayList();
                    for (Object obj2 : displays) {
                        if (((Date) obj2).after(calendar.getTime())) {
                            arrayList.add(obj2);
                        }
                    }
                    Set<? extends Date> set = CollectionsKt.toSet(arrayList);
                    GroupSubscriptionInteractor.this.storage.saveDisplays(userID, set);
                    return Boxing.boxBoolean(set.size() < GroupSubscriptionInteractor.this.limit.getMaxSubscriptionsToShow());
                }
                return Boxing.boxBoolean(false);
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object passesLocalLimits(Continuation<? super Boolean> continuation) {
        return BuildersKt.withContext(Dispatchers.getIO(), new C19532(null), continuation);
    }

    /* JADX INFO: renamed from: com.vk.id.group.subscription.compose.interactor.GroupSubscriptionInteractor$getGroup$2, reason: invalid class name */
    /* JADX INFO: compiled from: GroupSubscriptionInteractor.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/vk/id/network/groupsubscription/data/InternalVKIDGroupData;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.group.subscription.compose.interactor.GroupSubscriptionInteractor$getGroup$2", f = "GroupSubscriptionInteractor.kt", i = {}, l = {80}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super InternalVKIDGroupData>, Object> {
        private /* synthetic */ Object L$0;
        int label;

        AnonymousClass2(Continuation<? super AnonymousClass2> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            AnonymousClass2 anonymousClass2 = GroupSubscriptionInteractor.this.new AnonymousClass2(continuation);
            anonymousClass2.L$0 = obj;
            return anonymousClass2;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super InternalVKIDGroupData> continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                CoroutineScope coroutineScope = (CoroutineScope) this.L$0;
                Deferred[] deferredArr = {BuildersKt__Builders_commonKt.async$default(coroutineScope, null, null, new AnonymousClass1(GroupSubscriptionInteractor.this, null), 3, null), BuildersKt__Builders_commonKt.async$default(coroutineScope, null, null, new C11992(GroupSubscriptionInteractor.this, null), 3, null), BuildersKt__Builders_commonKt.async$default(coroutineScope, null, null, new AnonymousClass3(GroupSubscriptionInteractor.this, null), 3, null)};
                this.label = 1;
                obj = AwaitKt.awaitAll(deferredArr, this);
                if (obj == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            List list = (List) obj;
            Object obj2 = list.get(0);
            Object obj3 = list.get(1);
            Object obj4 = list.get(2);
            Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type com.vk.id.network.groupsubscription.data.InternalVKIDGroupByIdData");
            InternalVKIDGroupByIdData internalVKIDGroupByIdData = (InternalVKIDGroupByIdData) obj2;
            Intrinsics.checkNotNull(obj3, "null cannot be cast to non-null type com.vk.id.network.groupsubscription.data.InternalVKIDGroupMembersData");
            InternalVKIDGroupMembersData internalVKIDGroupMembersData = (InternalVKIDGroupMembersData) obj3;
            Intrinsics.checkNotNull(obj4, "null cannot be cast to non-null type com.vk.id.network.groupsubscription.data.InternalVKIDGroupMembersData");
            InternalVKIDGroupMembersData internalVKIDGroupMembersData2 = (InternalVKIDGroupMembersData) obj4;
            String imageUrl = internalVKIDGroupByIdData.getImageUrl();
            String name = internalVKIDGroupByIdData.getName();
            String description = internalVKIDGroupByIdData.getDescription();
            List listPlus = CollectionsKt.plus((Collection) internalVKIDGroupMembersData.getMembers(), (Iterable) internalVKIDGroupMembersData2.getMembers());
            ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(listPlus, 10));
            Iterator it = listPlus.iterator();
            while (it.hasNext()) {
                arrayList.add(((InternalVKIDMemberData) it.next()).getImageUrl());
            }
            return new InternalVKIDGroupData(imageUrl, name, description, CollectionsKt.take(arrayList, 3), internalVKIDGroupMembersData.getCount(), internalVKIDGroupMembersData2.getCount(), internalVKIDGroupByIdData.isVerified());
        }

        /* JADX INFO: renamed from: com.vk.id.group.subscription.compose.interactor.GroupSubscriptionInteractor$getGroup$2$1, reason: invalid class name */
        /* JADX INFO: compiled from: GroupSubscriptionInteractor.kt */
        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/vk/id/network/groupsubscription/data/InternalVKIDGroupByIdData;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
        @DebugMetadata(c = "com.vk.id.group.subscription.compose.interactor.GroupSubscriptionInteractor$getGroup$2$1", f = "GroupSubscriptionInteractor.kt", i = {}, l = {81}, m = "invokeSuspend", n = {}, s = {})
        static final class AnonymousClass1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super InternalVKIDGroupByIdData>, Object> {
            int label;
            final /* synthetic */ GroupSubscriptionInteractor this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            AnonymousClass1(GroupSubscriptionInteractor groupSubscriptionInteractor, Continuation<? super AnonymousClass1> continuation) {
                super(2, continuation);
                this.this$0 = groupSubscriptionInteractor;
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
                return new AnonymousClass1(this.this$0, continuation);
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation<? super InternalVKIDGroupByIdData> continuation) {
                return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Object invokeSuspend(Object obj) {
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                int i = this.label;
                if (i != 0) {
                    if (i != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ResultKt.throwOnFailure(obj);
                    return obj;
                }
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                Object group = this.this$0.apiService.getGroup(this.this$0.getAccessToken(), this.this$0.groupId, this);
                return group == coroutine_suspended ? coroutine_suspended : group;
            }
        }

        /* JADX INFO: renamed from: com.vk.id.group.subscription.compose.interactor.GroupSubscriptionInteractor$getGroup$2$2, reason: invalid class name and collision with other inner class name */
        /* JADX INFO: compiled from: GroupSubscriptionInteractor.kt */
        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/vk/id/network/groupsubscription/data/InternalVKIDGroupMembersData;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
        @DebugMetadata(c = "com.vk.id.group.subscription.compose.interactor.GroupSubscriptionInteractor$getGroup$2$2", f = "GroupSubscriptionInteractor.kt", i = {}, l = {82}, m = "invokeSuspend", n = {}, s = {})
        static final class C11992 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super InternalVKIDGroupMembersData>, Object> {
            int label;
            final /* synthetic */ GroupSubscriptionInteractor this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            C11992(GroupSubscriptionInteractor groupSubscriptionInteractor, Continuation<? super C11992> continuation) {
                super(2, continuation);
                this.this$0 = groupSubscriptionInteractor;
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
                return new C11992(this.this$0, continuation);
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation<? super InternalVKIDGroupMembersData> continuation) {
                return ((C11992) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Object invokeSuspend(Object obj) {
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                int i = this.label;
                if (i != 0) {
                    if (i != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ResultKt.throwOnFailure(obj);
                    return obj;
                }
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                Object members = this.this$0.apiService.getMembers(this.this$0.getAccessToken(), this.this$0.groupId, false, this);
                return members == coroutine_suspended ? coroutine_suspended : members;
            }
        }

        /* JADX INFO: renamed from: com.vk.id.group.subscription.compose.interactor.GroupSubscriptionInteractor$getGroup$2$3, reason: invalid class name */
        /* JADX INFO: compiled from: GroupSubscriptionInteractor.kt */
        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/vk/id/network/groupsubscription/data/InternalVKIDGroupMembersData;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
        @DebugMetadata(c = "com.vk.id.group.subscription.compose.interactor.GroupSubscriptionInteractor$getGroup$2$3", f = "GroupSubscriptionInteractor.kt", i = {}, l = {83}, m = "invokeSuspend", n = {}, s = {})
        static final class AnonymousClass3 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super InternalVKIDGroupMembersData>, Object> {
            int label;
            final /* synthetic */ GroupSubscriptionInteractor this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            AnonymousClass3(GroupSubscriptionInteractor groupSubscriptionInteractor, Continuation<? super AnonymousClass3> continuation) {
                super(2, continuation);
                this.this$0 = groupSubscriptionInteractor;
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
                return new AnonymousClass3(this.this$0, continuation);
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation<? super InternalVKIDGroupMembersData> continuation) {
                return ((AnonymousClass3) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
            }

            @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
            public final Object invokeSuspend(Object obj) {
                Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
                int i = this.label;
                if (i != 0) {
                    if (i != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ResultKt.throwOnFailure(obj);
                    return obj;
                }
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                Object members = this.this$0.apiService.getMembers(this.this$0.getAccessToken(), this.this$0.groupId, true, this);
                return members == coroutine_suspended ? coroutine_suspended : members;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object getGroup(Continuation<? super InternalVKIDGroupData> continuation) {
        return BuildersKt.withContext(continuation.get$context(), new AnonymousClass2(null), continuation);
    }
}
