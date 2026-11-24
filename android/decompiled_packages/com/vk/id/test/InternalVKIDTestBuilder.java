package com.vk.id.test;

import android.content.Context;
import com.my.target.common.NavigationType;
import com.vk.id.VKID;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.groupsubscription.GroupSubscriptionLimit;
import com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider;
import com.vk.id.internal.context.InternalVKIDActivityStarter;
import com.vk.id.internal.context.InternalVKIDPackageManager;
import com.vk.id.internal.store.InternalVKIDPrefsStore;
import com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiContract;
import com.vk.id.network.groupsubscription.data.InternalVKIDGroupByIdData;
import com.vk.id.network.groupsubscription.data.InternalVKIDGroupMembersData;
import com.vk.id.storage.InternalVKIDPreferencesStorage;
import io.sentry.protocol.OperatingSystem;
import io.sentry.protocol.Response;
import java.util.List;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDTestBuilder.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000\u008f\u0001\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\b\u0013\n\u0002\u0018\u0002\n\u0002\b\u001a\n\u0002\u0018\u0002\n\u0002\b\u0006*\u0001*\b\u0007\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0019\u0010\u0010\u001a\u00020\u00002\f\u0010,\u001a\b\u0012\u0004\u0012\u00020\u000e0\r¢\u0006\u0002\u0010-J\u0019\u0010\f\u001a\u00020\u00002\f\u0010,\u001a\b\u0012\u0004\u0012\u00020\u000e0\r¢\u0006\u0002\u0010-J\u0019\u0010.\u001a\u00020\u00002\f\u0010,\u001a\b\u0012\u0004\u0012\u00020\u00150\r¢\u0006\u0002\u0010-J'\u0010\u0013\u001a\u00020\u00002\f\u0010/\u001a\b\u0012\u0004\u0012\u00020\u00150\r2\f\u00100\u001a\b\u0012\u0004\u0012\u00020\u00150\r¢\u0006\u0002\u00101J\u0019\u00102\u001a\u00020\u00002\f\u0010,\u001a\b\u0012\u0004\u0012\u00020\u00190\r¢\u0006\u0002\u0010-J\u001c\u0010\u0013\u001a\u00020\u00002\u0012\u00103\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00150\r0\u0014H\u0002J\u0019\u0010\u0016\u001a\u00020\u00002\f\u0010,\u001a\b\u0012\u0004\u0012\u00020\u00170\r¢\u0006\u0002\u0010-J\u0019\u0010\u0011\u001a\u00020\u00002\f\u0010,\u001a\b\u0012\u0004\u0012\u00020\u00120\r¢\u0006\u0002\u0010-J\u000e\u00104\u001a\u00020\u00002\u0006\u00105\u001a\u00020\u001bJ\u000e\u00106\u001a\u00020\u00002\u0006\u00107\u001a\u00020\u001dJ\u0010\u0010\u0006\u001a\u00020\u00002\b\u00108\u001a\u0004\u0018\u00010\u0007J\u0010\u0010\b\u001a\u00020\u00002\b\u00109\u001a\u0004\u0018\u00010\tJ\u0010\u0010\n\u001a\u00020\u00002\b\u00108\u001a\u0004\u0018\u00010\u000bJ\u0019\u0010\u001e\u001a\u00020\u00002\f\u0010,\u001a\b\u0012\u0004\u0012\u00020\u001f0\r¢\u0006\u0002\u0010-J\u0019\u0010 \u001a\u00020\u00002\f\u0010,\u001a\b\u0012\u0004\u0012\u00020\u001f0\r¢\u0006\u0002\u0010-J\u0019\u0010!\u001a\u00020\u00002\f\u0010,\u001a\b\u0012\u0004\u0012\u00020\"0\r¢\u0006\u0002\u0010-J'\u0010#\u001a\u00020\u00002\f\u0010/\u001a\b\u0012\u0004\u0012\u00020$0\r2\f\u00100\u001a\b\u0012\u0004\u0012\u00020$0\r¢\u0006\u0002\u00101J\u0019\u0010:\u001a\u00020\u00002\f\u0010,\u001a\b\u0012\u0004\u0012\u00020&0\r¢\u0006\u0002\u0010-J\u001a\u0010%\u001a\u00020\u00002\u0012\u00103\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020&0\r0\u0014J\u000e\u0010'\u001a\u00020\u00002\u0006\u0010;\u001a\u00020(J\u0006\u0010]\u001a\u00020&R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0006\u001a\u0004\u0018\u00010\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\b\u001a\u0004\u0018\u00010\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0016\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u000e0\rX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u000fR\u0016\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u000e0\rX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u000fR\u0016\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u00120\rX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u000fR\u001a\u0010\u0013\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00150\r0\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u0016\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\u00170\rX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u000fR\u0016\u0010\u0018\u001a\b\u0012\u0004\u0012\u00020\u00190\rX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u000fR\u0010\u0010\u001a\u001a\u0004\u0018\u00010\u001bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u001c\u001a\u0004\u0018\u00010\u001dX\u0082\u000e¢\u0006\u0002\n\u0000R\u0016\u0010\u001e\u001a\b\u0012\u0004\u0012\u00020\u001f0\rX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u000fR\u0016\u0010 \u001a\b\u0012\u0004\u0012\u00020\u001f0\rX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u000fR\u0016\u0010!\u001a\b\u0012\u0004\u0012\u00020\"0\rX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u000fR\u001a\u0010#\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020$0\r0\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u0010%\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020&0\r0\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010'\u001a\u0004\u0018\u00010(X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010)\u001a\u00020*X\u0082\u0004¢\u0006\u0004\n\u0002\u0010+R!\u0010<\u001a\u00020=8@X\u0081\u0084\u0002¢\u0006\u0012\n\u0004\bB\u0010C\u0012\u0004\b>\u0010?\u001a\u0004\b@\u0010AR\u001a\u0010D\u001a\u00020\u000e8FX\u0087\u0004¢\u0006\f\u0012\u0004\bE\u0010?\u001a\u0004\bF\u0010GR\u001a\u0010H\u001a\u00020\u000e8FX\u0087\u0004¢\u0006\f\u0012\u0004\bI\u0010?\u001a\u0004\bJ\u0010GR\u001a\u0010K\u001a\u00020\u00128FX\u0087\u0004¢\u0006\f\u0012\u0004\bL\u0010?\u001a\u0004\bM\u0010NR\u001a\u0010O\u001a\u00020\u00178FX\u0087\u0004¢\u0006\f\u0012\u0004\bP\u0010?\u001a\u0004\bQ\u0010RR\u001a\u0010S\u001a\u00020\u00198FX\u0087\u0004¢\u0006\f\u0012\u0004\bT\u0010?\u001a\u0004\bU\u0010VR\u000e\u0010W\u001a\u00020XX\u0082\u0004¢\u0006\u0002\n\u0000R \u0010Y\u001a\b\u0012\u0004\u0012\u00020\u00150\r8FX\u0087\u0004¢\u0006\f\u0012\u0004\bZ\u0010?\u001a\u0004\b[\u0010\\¨\u0006^"}, d2 = {"Lcom/vk/id/test/InternalVKIDTestBuilder;", "", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "deviceIdStorage", "Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider$DeviceIdStorage;", "prefsStore", "Lcom/vk/id/internal/store/InternalVKIDPrefsStore;", "preferencesStorage", "Lcom/vk/id/storage/InternalVKIDPreferencesStorage;", "getTokenResponse", "Lkotlin/Result;", "Lcom/vk/id/test/InternalVKIDTokenPayloadResponse;", "Ljava/lang/Object;", "refreshTokenResponse", "exchangeTokenResponse", "Lcom/vk/id/test/InternalVKIDCodePayloadResponse;", "getUserInfoResponses", "", "Lcom/vk/id/test/InternalVKIDUserInfoPayloadResponse;", "logoutResponse", "Lcom/vk/id/test/InternalVKIDLogoutPayloadResponse;", "getSilentAuthProvidersResponse", "Lcom/vk/id/test/InternalVKIDSilentAuthProvidersResponse;", "packageManager", "Lcom/vk/id/internal/context/InternalVKIDPackageManager;", "activityStarter", "Lcom/vk/id/internal/context/InternalVKIDActivityStarter;", "shouldShowSubscriptionResponse", "", "isServiceAccountResponse", "getGroupResponse", "Lcom/vk/id/network/groupsubscription/data/InternalVKIDGroupByIdData;", "getMembersResponses", "Lcom/vk/id/network/groupsubscription/data/InternalVKIDGroupMembersData;", "subscribeToGroupResponses", "", "groupSubscriptionLimit", "Lcom/vk/id/groupsubscription/GroupSubscriptionLimit;", "mockGroupSubscriptionApi", "com/vk/id/test/InternalVKIDTestBuilder$mockGroupSubscriptionApi$1", "Lcom/vk/id/test/InternalVKIDTestBuilder$mockGroupSubscriptionApi$1;", Response.TYPE, "(Ljava/lang/Object;)Lcom/vk/id/test/InternalVKIDTestBuilder;", "getUserInfoResponse", "response1", "response2", "(Ljava/lang/Object;Ljava/lang/Object;)Lcom/vk/id/test/InternalVKIDTestBuilder;", "getSilentAuthProviders", "responses", "overridePackageManager", "pm", "overrideActivityStarter", "starter", "storage", NavigationType.STORE, "subscribeToGroupResponse", "limit", "mockApi", "Lcom/vk/id/test/InternalVKIDMockApi;", "getMockApi$vkid_release$annotations", "()V", "getMockApi$vkid_release", "()Lcom/vk/id/test/InternalVKIDMockApi;", "mockApi$delegate", "Lkotlin/Lazy;", "getTokenResponseValue", "getGetTokenResponseValue$annotations", "getGetTokenResponseValue", "()Lcom/vk/id/test/InternalVKIDTokenPayloadResponse;", "refreshTokenResponseValue", "getRefreshTokenResponseValue$annotations", "getRefreshTokenResponseValue", "exchangeTokenResponseValue", "getExchangeTokenResponseValue$annotations", "getExchangeTokenResponseValue", "()Lcom/vk/id/test/InternalVKIDCodePayloadResponse;", "logoutResponseValue", "getLogoutResponseValue$annotations", "getLogoutResponseValue", "()Lcom/vk/id/test/InternalVKIDLogoutPayloadResponse;", "getSilentAuthProvidersResponseValue", "getGetSilentAuthProvidersResponseValue$annotations", "getGetSilentAuthProvidersResponseValue", "()Lcom/vk/id/test/InternalVKIDSilentAuthProvidersResponse;", "userInfoResponseIndex", "Ljava/util/concurrent/atomic/AtomicInteger;", "getUserInfoResponsesValue", "getGetUserInfoResponsesValue-d1pmJ48$annotations", "getGetUserInfoResponsesValue-d1pmJ48", "()Ljava/lang/Object;", OperatingSystem.JsonKeys.BUILD, "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class InternalVKIDTestBuilder {
    public static final int $stable = 8;
    private InternalVKIDActivityStarter activityStarter;
    private final Context context;
    private InternalVKIDDeviceIdProvider.DeviceIdStorage deviceIdStorage;
    private Object exchangeTokenResponse;
    private Object getGroupResponse;
    private List<Result<InternalVKIDGroupMembersData>> getMembersResponses;
    private Object getSilentAuthProvidersResponse;
    private Object getTokenResponse;
    private List<Result<InternalVKIDUserInfoPayloadResponse>> getUserInfoResponses;
    private GroupSubscriptionLimit groupSubscriptionLimit;
    private Object isServiceAccountResponse;
    private Object logoutResponse;

    /* JADX INFO: renamed from: mockApi$delegate, reason: from kotlin metadata */
    private final Lazy mockApi;
    private final InternalVKIDTestBuilder$mockGroupSubscriptionApi$1 mockGroupSubscriptionApi;
    private InternalVKIDPackageManager packageManager;
    private InternalVKIDPreferencesStorage preferencesStorage;
    private InternalVKIDPrefsStore prefsStore;
    private Object refreshTokenResponse;
    private Object shouldShowSubscriptionResponse;
    private List<Result<Unit>> subscribeToGroupResponses;
    private final AtomicInteger userInfoResponseIndex;

    @InternalVKIDApi
    public static /* synthetic */ void getExchangeTokenResponseValue$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getGetSilentAuthProvidersResponseValue$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getGetTokenResponseValue$annotations() {
    }

    @InternalVKIDApi
    /* JADX INFO: renamed from: getGetUserInfoResponsesValue-d1pmJ48$annotations, reason: not valid java name */
    public static /* synthetic */ void m9400getGetUserInfoResponsesValued1pmJ48$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getLogoutResponseValue$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getMockApi$vkid_release$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getRefreshTokenResponseValue$annotations() {
    }

    /* JADX WARN: Type inference failed for: r3v58, types: [com.vk.id.test.InternalVKIDTestBuilder$mockGroupSubscriptionApi$1] */
    public InternalVKIDTestBuilder(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
        Result.Companion companion = Result.INSTANCE;
        this.getTokenResponse = Result.m9861constructorimpl(ResultKt.createFailure(new UnsupportedOperationException("Not supported")));
        Result.Companion companion2 = Result.INSTANCE;
        this.refreshTokenResponse = Result.m9861constructorimpl(ResultKt.createFailure(new UnsupportedOperationException("Not supported")));
        Result.Companion companion3 = Result.INSTANCE;
        this.exchangeTokenResponse = Result.m9861constructorimpl(ResultKt.createFailure(new UnsupportedOperationException("Not supported")));
        Result.Companion companion4 = Result.INSTANCE;
        this.getUserInfoResponses = CollectionsKt.listOf(Result.m9860boximpl(Result.m9861constructorimpl(ResultKt.createFailure(new UnsupportedOperationException("Not supported")))));
        Result.Companion companion5 = Result.INSTANCE;
        this.logoutResponse = Result.m9861constructorimpl(new InternalVKIDLogoutPayloadResponse(null, 1, null));
        Result.Companion companion6 = Result.INSTANCE;
        this.getSilentAuthProvidersResponse = Result.m9861constructorimpl(new InternalVKIDSilentAuthProvidersResponse(CollectionsKt.emptyList()));
        Result.Companion companion7 = Result.INSTANCE;
        this.shouldShowSubscriptionResponse = Result.m9861constructorimpl(ResultKt.createFailure(new UnsupportedOperationException("Not mocked")));
        Result.Companion companion8 = Result.INSTANCE;
        this.isServiceAccountResponse = Result.m9861constructorimpl(ResultKt.createFailure(new UnsupportedOperationException("Not mocked")));
        Result.Companion companion9 = Result.INSTANCE;
        this.getGroupResponse = Result.m9861constructorimpl(ResultKt.createFailure(new UnsupportedOperationException("Not mocked")));
        Result.Companion companion10 = Result.INSTANCE;
        this.getMembersResponses = CollectionsKt.listOf(Result.m9860boximpl(Result.m9861constructorimpl(ResultKt.createFailure(new UnsupportedOperationException("Not mocked")))));
        Result.Companion companion11 = Result.INSTANCE;
        this.subscribeToGroupResponses = CollectionsKt.listOf(Result.m9860boximpl(Result.m9861constructorimpl(ResultKt.createFailure(new UnsupportedOperationException("Not mocked")))));
        this.mockGroupSubscriptionApi = new InternalVKIDGroupSubscriptionApiContract() { // from class: com.vk.id.test.InternalVKIDTestBuilder$mockGroupSubscriptionApi$1
            private final AtomicInteger getMembersResponseIndex = new AtomicInteger(0);
            private final AtomicInteger subscribeToGroupResponseIndex = new AtomicInteger(0);

            @Override // com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiContract
            public Object shouldShowSubscription(String str, Continuation<? super Boolean> continuation) {
                Object obj = this.this$0.shouldShowSubscriptionResponse;
                ResultKt.throwOnFailure(obj);
                return obj;
            }

            @Override // com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiContract
            public Object isServiceAccount(String str, Continuation<? super Boolean> continuation) {
                Object obj = this.this$0.isServiceAccountResponse;
                ResultKt.throwOnFailure(obj);
                return obj;
            }

            @Override // com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiContract
            public Object getGroup(String str, String str2, Continuation<? super InternalVKIDGroupByIdData> continuation) {
                Object obj = this.this$0.getGroupResponse;
                ResultKt.throwOnFailure(obj);
                return obj;
            }

            @Override // com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiContract
            public Object getMembers(String str, String str2, boolean z, Continuation<? super InternalVKIDGroupMembersData> continuation) {
                Object value = ((Result) this.this$0.getMembersResponses.get(this.getMembersResponseIndex.getAndIncrement())).getValue();
                ResultKt.throwOnFailure(value);
                return value;
            }

            @Override // com.vk.id.network.groupsubscription.InternalVKIDGroupSubscriptionApiContract
            public Object subscribeToGroup(String str, String str2, Continuation<? super Unit> continuation) {
                ResultKt.throwOnFailure(((Result) this.this$0.subscribeToGroupResponses.get(this.subscribeToGroupResponseIndex.getAndIncrement())).getValue());
                return Unit.INSTANCE;
            }
        };
        this.mockApi = LazyKt.lazy(new Function0() { // from class: com.vk.id.test.InternalVKIDTestBuilder$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return InternalVKIDTestBuilder.mockApi_delegate$lambda$19(this.f$0);
            }
        });
        this.userInfoResponseIndex = new AtomicInteger(0);
    }

    public final InternalVKIDTestBuilder refreshTokenResponse(Object response) {
        this.refreshTokenResponse = response;
        return this;
    }

    public final InternalVKIDTestBuilder getTokenResponse(Object response) {
        this.getTokenResponse = response;
        return this;
    }

    public final InternalVKIDTestBuilder getUserInfoResponse(Object response) {
        getUserInfoResponses(CollectionsKt.listOf(Result.m9860boximpl(response)));
        return this;
    }

    public final InternalVKIDTestBuilder getUserInfoResponses(Object response1, Object response2) {
        return getUserInfoResponses(CollectionsKt.listOf((Object[]) new Result[]{Result.m9860boximpl(response1), Result.m9860boximpl(response2)}));
    }

    public final InternalVKIDTestBuilder getSilentAuthProviders(Object response) {
        this.getSilentAuthProvidersResponse = response;
        return this;
    }

    private final InternalVKIDTestBuilder getUserInfoResponses(List<Result<InternalVKIDUserInfoPayloadResponse>> responses) {
        this.userInfoResponseIndex.set(0);
        this.getUserInfoResponses = responses;
        return this;
    }

    public final InternalVKIDTestBuilder logoutResponse(Object response) {
        this.logoutResponse = response;
        return this;
    }

    public final InternalVKIDTestBuilder exchangeTokenResponse(Object response) {
        this.exchangeTokenResponse = response;
        return this;
    }

    public final InternalVKIDTestBuilder overridePackageManager(InternalVKIDPackageManager pm) {
        Intrinsics.checkNotNullParameter(pm, "pm");
        this.packageManager = pm;
        return this;
    }

    public final InternalVKIDTestBuilder overrideActivityStarter(InternalVKIDActivityStarter starter) {
        Intrinsics.checkNotNullParameter(starter, "starter");
        this.activityStarter = starter;
        return this;
    }

    public final InternalVKIDTestBuilder deviceIdStorage(InternalVKIDDeviceIdProvider.DeviceIdStorage storage) {
        this.deviceIdStorage = storage;
        return this;
    }

    public final InternalVKIDTestBuilder prefsStore(InternalVKIDPrefsStore store) {
        this.prefsStore = store;
        return this;
    }

    public final InternalVKIDTestBuilder preferencesStorage(InternalVKIDPreferencesStorage storage) {
        this.preferencesStorage = storage;
        return this;
    }

    public final InternalVKIDTestBuilder shouldShowSubscriptionResponse(Object response) {
        this.shouldShowSubscriptionResponse = response;
        return this;
    }

    public final InternalVKIDTestBuilder isServiceAccountResponse(Object response) {
        this.isServiceAccountResponse = response;
        return this;
    }

    public final InternalVKIDTestBuilder getGroupResponse(Object response) {
        this.getGroupResponse = response;
        return this;
    }

    public final InternalVKIDTestBuilder getMembersResponses(Object response1, Object response2) {
        this.getMembersResponses = CollectionsKt.listOf((Object[]) new Result[]{Result.m9860boximpl(response1), Result.m9860boximpl(response2)});
        return this;
    }

    public final InternalVKIDTestBuilder subscribeToGroupResponse(Object response) {
        this.subscribeToGroupResponses = CollectionsKt.listOf(Result.m9860boximpl(response));
        return this;
    }

    public final InternalVKIDTestBuilder subscribeToGroupResponses(List<Result<Unit>> responses) {
        Intrinsics.checkNotNullParameter(responses, "responses");
        this.subscribeToGroupResponses = responses;
        return this;
    }

    public final InternalVKIDTestBuilder groupSubscriptionLimit(GroupSubscriptionLimit limit) {
        Intrinsics.checkNotNullParameter(limit, "limit");
        this.groupSubscriptionLimit = limit;
        return this;
    }

    public final InternalVKIDMockApi getMockApi$vkid_release() {
        return (InternalVKIDMockApi) this.mockApi.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final InternalVKIDMockApi mockApi_delegate$lambda$19(InternalVKIDTestBuilder internalVKIDTestBuilder) {
        return new InternalVKIDMockApi(internalVKIDTestBuilder);
    }

    public final InternalVKIDTokenPayloadResponse getGetTokenResponseValue() {
        Object obj = this.getTokenResponse;
        if (Result.m9867isFailureimpl(obj)) {
            obj = null;
        }
        InternalVKIDTokenPayloadResponse internalVKIDTokenPayloadResponse = (InternalVKIDTokenPayloadResponse) obj;
        return internalVKIDTokenPayloadResponse == null ? new InternalVKIDTokenPayloadResponse(null, null, null, null, null, null, null, null, 255, null) : internalVKIDTokenPayloadResponse;
    }

    public final InternalVKIDTokenPayloadResponse getRefreshTokenResponseValue() {
        Object obj = this.refreshTokenResponse;
        if (Result.m9867isFailureimpl(obj)) {
            obj = null;
        }
        InternalVKIDTokenPayloadResponse internalVKIDTokenPayloadResponse = (InternalVKIDTokenPayloadResponse) obj;
        return internalVKIDTokenPayloadResponse == null ? new InternalVKIDTokenPayloadResponse(null, null, null, null, null, null, null, null, 255, null) : internalVKIDTokenPayloadResponse;
    }

    public final InternalVKIDCodePayloadResponse getExchangeTokenResponseValue() {
        Object obj = this.exchangeTokenResponse;
        if (Result.m9867isFailureimpl(obj)) {
            obj = null;
        }
        InternalVKIDCodePayloadResponse internalVKIDCodePayloadResponse = (InternalVKIDCodePayloadResponse) obj;
        return internalVKIDCodePayloadResponse == null ? new InternalVKIDCodePayloadResponse(null, null, null, null, 15, null) : internalVKIDCodePayloadResponse;
    }

    public final InternalVKIDLogoutPayloadResponse getLogoutResponseValue() {
        Object obj = this.logoutResponse;
        if (Result.m9867isFailureimpl(obj)) {
            obj = null;
        }
        InternalVKIDLogoutPayloadResponse internalVKIDLogoutPayloadResponse = (InternalVKIDLogoutPayloadResponse) obj;
        return internalVKIDLogoutPayloadResponse == null ? new InternalVKIDLogoutPayloadResponse(null, 1, null) : internalVKIDLogoutPayloadResponse;
    }

    public final InternalVKIDSilentAuthProvidersResponse getGetSilentAuthProvidersResponseValue() {
        Object obj = this.getSilentAuthProvidersResponse;
        if (Result.m9867isFailureimpl(obj)) {
            obj = null;
        }
        InternalVKIDSilentAuthProvidersResponse internalVKIDSilentAuthProvidersResponse = (InternalVKIDSilentAuthProvidersResponse) obj;
        return internalVKIDSilentAuthProvidersResponse == null ? new InternalVKIDSilentAuthProvidersResponse(CollectionsKt.emptyList()) : internalVKIDSilentAuthProvidersResponse;
    }

    /* JADX INFO: renamed from: getGetUserInfoResponsesValue-d1pmJ48, reason: not valid java name */
    public final Object m9401getGetUserInfoResponsesValued1pmJ48() {
        List<Result<InternalVKIDUserInfoPayloadResponse>> list = this.getUserInfoResponses;
        int andIncrement = this.userInfoResponseIndex.getAndIncrement();
        return ((andIncrement < 0 || andIncrement >= list.size()) ? Result.m9860boximpl(((Result) CollectionsKt.first((List) this.getUserInfoResponses)).getValue()) : list.get(andIncrement)).getValue();
    }

    public final void build() {
        VKID.INSTANCE.init$vkid_release(this.context, getMockApi$vkid_release(), this.mockGroupSubscriptionApi, this.deviceIdStorage, this.prefsStore, this.preferencesStorage, this.packageManager, this.activityStarter, this.groupSubscriptionLimit);
    }
}
