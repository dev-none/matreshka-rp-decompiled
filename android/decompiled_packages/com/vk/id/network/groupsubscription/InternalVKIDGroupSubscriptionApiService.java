package com.vk.id.network.groupsubscription;

import com.vk.id.common.InternalVKIDApi;
import com.vk.id.network.groupsubscription.data.InternalVKIDGroupByIdData;
import com.vk.id.network.groupsubscription.data.InternalVKIDGroupMembersData;
import com.vk.id.network.groupsubscription.data.InternalVKIDMemberData;
import com.vk.id.network.groupsubscription.exception.InternalVKIDAlreadyGroupMemberException;
import com.vk.id.network.http.HttpResponse;
import io.flutter.plugins.firebase.auth.Constants;
import io.sentry.protocol.Response;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.IntIterator;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;
import kotlin.ranges.RangesKt;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Dispatchers;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: InternalVKIDGroupSubscriptionApiService.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\b\u0007\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0016\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0096@¢\u0006\u0002\u0010\nJ\u0016\u0010\u000b\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0096@¢\u0006\u0002\u0010\nJ\u001e\u0010\f\u001a\u00020\r2\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\u000e\u001a\u00020\tH\u0096@¢\u0006\u0002\u0010\u000fJ&\u0010\u0010\u001a\u00020\u00112\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\u000e\u001a\u00020\t2\u0006\u0010\u0012\u001a\u00020\u0007H\u0096@¢\u0006\u0002\u0010\u0013J\u001e\u0010\u0014\u001a\u00020\u00152\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\u000e\u001a\u00020\tH\u0096@¢\u0006\u0002\u0010\u000fR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0016"}, d2 = {"Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApiService;", "Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApiContract;", "api", "Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApi;", "<init>", "(Lcom/vk/id/network/groupsubscription/InternalVKIDGroupSubscriptionApi;)V", "shouldShowSubscription", "", Constants.ACCESS_TOKEN, "", "(Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "isServiceAccount", "getGroup", "Lcom/vk/id/network/groupsubscription/data/InternalVKIDGroupByIdData;", "groupId", "(Ljava/lang/String;Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getMembers", "Lcom/vk/id/network/groupsubscription/data/InternalVKIDGroupMembersData;", "justFriends", "(Ljava/lang/String;Ljava/lang/String;ZLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "subscribeToGroup", "", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class InternalVKIDGroupSubscriptionApiService implements InternalVKIDGroupSubscriptionApiContract {
    private final InternalVKIDGroupSubscriptionApi api;

    public InternalVKIDGroupSubscriptionApiService(InternalVKIDGroupSubscriptionApi api) {
        Intrinsics.checkNotNullParameter(api, "api");
        this.api = api;
    }

    /* JADX INFO: renamed from: com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiService$shouldShowSubscription$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: InternalVKIDGroupSubscriptionApiService.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u000b\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiService$shouldShowSubscription$2", f = "InternalVKIDGroupSubscriptionApiService.kt", i = {}, l = {22}, m = "invokeSuspend", n = {}, s = {})
    static final class C19602 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Boolean>, Object> {
        final /* synthetic */ String $accessToken;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19602(String str, Continuation<? super C19602> continuation) {
            super(2, continuation);
            this.$accessToken = str;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return InternalVKIDGroupSubscriptionApiService.this.new C19602(this.$accessToken, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Boolean> continuation) {
            return ((C19602) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object objMo9311executeIoAF18A;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                objMo9311executeIoAF18A = InternalVKIDGroupSubscriptionApiService.this.api.getShouldShowSubscription(this.$accessToken).mo9311executeIoAF18A(this);
                if (objMo9311executeIoAF18A == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
                objMo9311executeIoAF18A = ((Result) obj).getValue();
            }
            ResultKt.throwOnFailure(objMo9311executeIoAF18A);
            String body = ((HttpResponse) objMo9311executeIoAF18A).getBody();
            if (body == null) {
                throw new IllegalArgumentException("Required value was null.".toString());
            }
            return Boxing.boxBoolean(new JSONObject(body).getJSONObject(Response.TYPE).getBoolean("show"));
        }
    }

    @Override // com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiContract
    public Object shouldShowSubscription(String str, Continuation<? super Boolean> continuation) {
        return BuildersKt.withContext(Dispatchers.getIO(), new C19602(str, null), continuation);
    }

    /* JADX INFO: renamed from: com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiService$isServiceAccount$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: InternalVKIDGroupSubscriptionApiService.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u000b\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiService$isServiceAccount$2", f = "InternalVKIDGroupSubscriptionApiService.kt", i = {}, l = {32}, m = "invokeSuspend", n = {}, s = {})
    static final class C19592 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Boolean>, Object> {
        final /* synthetic */ String $accessToken;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19592(String str, Continuation<? super C19592> continuation) {
            super(2, continuation);
            this.$accessToken = str;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return InternalVKIDGroupSubscriptionApiService.this.new C19592(this.$accessToken, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Boolean> continuation) {
            return ((C19592) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) throws IOException {
            Object objMo9311executeIoAF18A;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                objMo9311executeIoAF18A = InternalVKIDGroupSubscriptionApiService.this.api.getProfileShortInfo(this.$accessToken).mo9311executeIoAF18A(this);
                if (objMo9311executeIoAF18A == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
                objMo9311executeIoAF18A = ((Result) obj).getValue();
            }
            ResultKt.throwOnFailure(objMo9311executeIoAF18A);
            String body = ((HttpResponse) objMo9311executeIoAF18A).getBody();
            if (body != null) {
                JSONObject jSONObject = new JSONObject(body);
                if (!jSONObject.isNull("error")) {
                    throw new IOException(jSONObject.getString("error"));
                }
                return Boxing.boxBoolean(jSONObject.getJSONObject(Response.TYPE).getBoolean("is_service_account"));
            }
            throw new IllegalArgumentException("Required value was null.".toString());
        }
    }

    @Override // com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiContract
    public Object isServiceAccount(String str, Continuation<? super Boolean> continuation) {
        return BuildersKt.withContext(Dispatchers.getIO(), new C19592(str, null), continuation);
    }

    /* JADX INFO: renamed from: com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiService$getGroup$2, reason: invalid class name */
    /* JADX INFO: compiled from: InternalVKIDGroupSubscriptionApiService.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/vk/id/network/groupsubscription/data/InternalVKIDGroupByIdData;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiService$getGroup$2", f = "InternalVKIDGroupSubscriptionApiService.kt", i = {}, l = {47}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super InternalVKIDGroupByIdData>, Object> {
        final /* synthetic */ String $accessToken;
        final /* synthetic */ String $groupId;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass2(String str, String str2, Continuation<? super AnonymousClass2> continuation) {
            super(2, continuation);
            this.$accessToken = str;
            this.$groupId = str2;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return InternalVKIDGroupSubscriptionApiService.this.new AnonymousClass2(this.$accessToken, this.$groupId, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super InternalVKIDGroupByIdData> continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) throws JSONException, IOException {
            Object objMo9311executeIoAF18A;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                objMo9311executeIoAF18A = InternalVKIDGroupSubscriptionApiService.this.api.getGroup(this.$accessToken, this.$groupId).mo9311executeIoAF18A(this);
                if (objMo9311executeIoAF18A == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
                objMo9311executeIoAF18A = ((Result) obj).getValue();
            }
            ResultKt.throwOnFailure(objMo9311executeIoAF18A);
            String body = ((HttpResponse) objMo9311executeIoAF18A).getBody();
            if (body != null) {
                JSONObject jSONObject = new JSONObject(body);
                if (jSONObject.isNull("error")) {
                    Object obj2 = jSONObject.getJSONObject(Response.TYPE).getJSONArray("groups").get(0);
                    Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type org.json.JSONObject");
                    JSONObject jSONObject2 = (JSONObject) obj2;
                    if (jSONObject2.getInt("is_member") == 1) {
                        throw new InternalVKIDAlreadyGroupMemberException();
                    }
                    String string = jSONObject2.getString("id");
                    Intrinsics.checkNotNullExpressionValue(string, "getString(...)");
                    String string2 = jSONObject2.getString("name");
                    Intrinsics.checkNotNullExpressionValue(string2, "getString(...)");
                    String string3 = jSONObject2.getString("photo_200");
                    Intrinsics.checkNotNullExpressionValue(string3, "getString(...)");
                    String string4 = jSONObject2.getString("description");
                    Intrinsics.checkNotNullExpressionValue(string4, "getString(...)");
                    return new InternalVKIDGroupByIdData(string, string2, string3, string4, jSONObject2.getInt("verified") == 1);
                }
                throw new IOException(jSONObject.getString("error"));
            }
            throw new IllegalArgumentException("Required value was null.".toString());
        }
    }

    @Override // com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiContract
    public Object getGroup(String str, String str2, Continuation<? super InternalVKIDGroupByIdData> continuation) {
        return BuildersKt.withContext(Dispatchers.getIO(), new AnonymousClass2(str, str2, null), continuation);
    }

    /* JADX INFO: renamed from: com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiService$getMembers$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: InternalVKIDGroupSubscriptionApiService.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/vk/id/network/groupsubscription/data/InternalVKIDGroupMembersData;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiService$getMembers$2", f = "InternalVKIDGroupSubscriptionApiService.kt", i = {}, l = {73}, m = "invokeSuspend", n = {}, s = {})
    static final class C19582 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super InternalVKIDGroupMembersData>, Object> {
        final /* synthetic */ String $accessToken;
        final /* synthetic */ String $groupId;
        final /* synthetic */ boolean $justFriends;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19582(String str, String str2, boolean z, Continuation<? super C19582> continuation) {
            super(2, continuation);
            this.$accessToken = str;
            this.$groupId = str2;
            this.$justFriends = z;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return InternalVKIDGroupSubscriptionApiService.this.new C19582(this.$accessToken, this.$groupId, this.$justFriends, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super InternalVKIDGroupMembersData> continuation) {
            return ((C19582) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) throws JSONException, IOException {
            Object objMo9311executeIoAF18A;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                objMo9311executeIoAF18A = InternalVKIDGroupSubscriptionApiService.this.api.getMembers(this.$accessToken, this.$groupId, this.$justFriends).mo9311executeIoAF18A(this);
                if (objMo9311executeIoAF18A == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
                objMo9311executeIoAF18A = ((Result) obj).getValue();
            }
            ResultKt.throwOnFailure(objMo9311executeIoAF18A);
            String body = ((HttpResponse) objMo9311executeIoAF18A).getBody();
            if (body != null) {
                JSONObject jSONObject = new JSONObject(body);
                if (jSONObject.isNull("error")) {
                    JSONObject jSONObject2 = jSONObject.getJSONObject(Response.TYPE);
                    JSONArray jSONArray = jSONObject2.getJSONArray("items");
                    int i2 = jSONObject2.getInt("count");
                    IntRange intRangeUntil = RangesKt.until(0, jSONArray.length());
                    ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(intRangeUntil, 10));
                    Iterator<Integer> it = intRangeUntil.iterator();
                    while (it.hasNext()) {
                        String string = jSONArray.getJSONObject(((IntIterator) it).nextInt()).getString("photo_200");
                        Intrinsics.checkNotNullExpressionValue(string, "getString(...)");
                        arrayList.add(new InternalVKIDMemberData(string));
                    }
                    return new InternalVKIDGroupMembersData(i2, arrayList);
                }
                throw new IOException(jSONObject.getString("error"));
            }
            throw new IllegalArgumentException("Required value was null.".toString());
        }
    }

    @Override // com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiContract
    public Object getMembers(String str, String str2, boolean z, Continuation<? super InternalVKIDGroupMembersData> continuation) {
        return BuildersKt.withContext(Dispatchers.getIO(), new C19582(str, str2, z, null), continuation);
    }

    /* JADX INFO: renamed from: com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiService$subscribeToGroup$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: InternalVKIDGroupSubscriptionApiService.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiService$subscribeToGroup$2", f = "InternalVKIDGroupSubscriptionApiService.kt", i = {}, l = {99}, m = "invokeSuspend", n = {}, s = {})
    static final class C19612 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ String $accessToken;
        final /* synthetic */ String $groupId;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19612(String str, String str2, Continuation<? super C19612> continuation) {
            super(2, continuation);
            this.$accessToken = str;
            this.$groupId = str2;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return InternalVKIDGroupSubscriptionApiService.this.new C19612(this.$accessToken, this.$groupId, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19612) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) throws IOException {
            Object objMo9311executeIoAF18A;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                objMo9311executeIoAF18A = InternalVKIDGroupSubscriptionApiService.this.api.subscribeToGroup(this.$accessToken, this.$groupId).mo9311executeIoAF18A(this);
                if (objMo9311executeIoAF18A == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
                objMo9311executeIoAF18A = ((Result) obj).getValue();
            }
            ResultKt.throwOnFailure(objMo9311executeIoAF18A);
            String body = ((HttpResponse) objMo9311executeIoAF18A).getBody();
            if (body != null) {
                JSONObject jSONObject = new JSONObject(body);
                if (!jSONObject.has(Response.TYPE) || jSONObject.getInt(Response.TYPE) != 1) {
                    throw new IOException(jSONObject.getString("error"));
                }
                return Unit.INSTANCE;
            }
            throw new IllegalArgumentException("Required value was null.".toString());
        }
    }

    @Override // com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiContract
    public Object subscribeToGroup(String str, String str2, Continuation<? super Unit> continuation) {
        Object objWithContext = BuildersKt.withContext(Dispatchers.getIO(), new C19612(str, str2, null), continuation);
        return objWithContext == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objWithContext : Unit.INSTANCE;
    }
}
