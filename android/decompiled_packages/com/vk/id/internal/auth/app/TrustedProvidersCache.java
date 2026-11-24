package com.vk.id.internal.auth.app;

import com.vk.id.internal.api.VKIDApiService;
import com.vk.id.internal.concurrent.VKIDCoroutinesDispatchers;
import java.util.Collection;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: TrustedProvidersCache.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0001\u0018\u0000 \u00122\u00020\u0001:\u0001\u0012B-\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006\u0012\u0006\u0010\b\u001a\u00020\t¢\u0006\u0004\b\n\u0010\u000bJ\u0014\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\u000e0\rH\u0086@¢\u0006\u0002\u0010\u0010J\u0014\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u000e0\rH\u0082@¢\u0006\u0002\u0010\u0010R\u0014\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\f\u001a\n\u0012\u0004\u0012\u00020\u000e\u0018\u00010\rX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0013"}, d2 = {"Lcom/vk/id/internal/auth/app/TrustedProvidersCache;", "", "api", "Lkotlin/Lazy;", "Lcom/vk/id/internal/api/VKIDApiService;", "clientId", "", "clientSecret", "dispatchers", "Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;", "<init>", "(Lkotlin/Lazy;Ljava/lang/String;Ljava/lang/String;Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;)V", "cachedTrustedProviders", "", "Lcom/vk/id/internal/auth/app/VkAuthSilentAuthProvider;", "getSilentAuthProviders", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "fetchSilentAuthProvidersSync", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class TrustedProvidersCache {
    public static final int $stable;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE;
    private static final String DEBUG_APP_SHA = "86259288a43f6c409a922bc3ce40ba08085bbadb";
    private static final List<VkAuthSilentAuthProvider> DEFAULT_TRUSTED_PROVIDERS;
    private static final String RELEASE_APP_SHA = "48761eef50ee53afc4cc9c5f10e6bde7f8f5b82f";
    private final Lazy<VKIDApiService> api;
    private List<VkAuthSilentAuthProvider> cachedTrustedProviders;
    private final String clientId;
    private final String clientSecret;
    private final VKIDCoroutinesDispatchers dispatchers;

    /* JADX INFO: renamed from: com.vk.id.internal.auth.app.TrustedProvidersCache$fetchSilentAuthProvidersSync$1, reason: invalid class name */
    /* JADX INFO: compiled from: TrustedProvidersCache.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.internal.auth.app.TrustedProvidersCache", f = "TrustedProvidersCache.kt", i = {0}, l = {54}, m = "fetchSilentAuthProvidersSync", n = {"this"}, s = {"L$0"})
    static final class AnonymousClass1 extends ContinuationImpl {
        Object L$0;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return TrustedProvidersCache.this.fetchSilentAuthProvidersSync(this);
        }
    }

    public TrustedProvidersCache(Lazy<VKIDApiService> api, String clientId, String clientSecret, VKIDCoroutinesDispatchers dispatchers) {
        Intrinsics.checkNotNullParameter(api, "api");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(clientSecret, "clientSecret");
        Intrinsics.checkNotNullParameter(dispatchers, "dispatchers");
        this.api = api;
        this.clientId = clientId;
        this.clientSecret = clientSecret;
        this.dispatchers = dispatchers;
    }

    public final Object getSilentAuthProviders(Continuation<? super List<VkAuthSilentAuthProvider>> continuation) {
        List<VkAuthSilentAuthProvider> list = this.cachedTrustedProviders;
        return list == null ? fetchSilentAuthProvidersSync(continuation) : list;
    }

    /* JADX INFO: renamed from: com.vk.id.internal.auth.app.TrustedProvidersCache$fetchSilentAuthProvidersSync$2, reason: invalid class name */
    /* JADX INFO: compiled from: TrustedProvidersCache.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00030\u00020\u0001*\u00020\u0004H\n"}, d2 = {"<anonymous>", "Lkotlin/Result;", "", "Lcom/vk/id/internal/auth/app/VkAuthSilentAuthProvider;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.internal.auth.app.TrustedProvidersCache$fetchSilentAuthProvidersSync$2", f = "TrustedProvidersCache.kt", i = {}, l = {56}, m = "invokeSuspend", n = {}, s = {})
    static final class AnonymousClass2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Result<? extends List<? extends VkAuthSilentAuthProvider>>>, Object> {
        int label;

        AnonymousClass2(Continuation<? super AnonymousClass2> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return TrustedProvidersCache.this.new AnonymousClass2(continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public /* bridge */ /* synthetic */ Object invoke(CoroutineScope coroutineScope, Continuation<? super Result<? extends List<? extends VkAuthSilentAuthProvider>>> continuation) {
            return invoke2(coroutineScope, (Continuation<? super Result<? extends List<VkAuthSilentAuthProvider>>>) continuation);
        }

        /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
        public final Object invoke2(CoroutineScope coroutineScope, Continuation<? super Result<? extends List<VkAuthSilentAuthProvider>>> continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object objMo9311executeIoAF18A;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                objMo9311executeIoAF18A = ((VKIDApiService) TrustedProvidersCache.this.api.getValue()).getSilentAuthProviders(TrustedProvidersCache.this.clientId, TrustedProvidersCache.this.clientSecret).mo9311executeIoAF18A(this);
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
            return Result.m9860boximpl(objMo9311executeIoAF18A);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public final Object fetchSilentAuthProvidersSync(Continuation<? super List<VkAuthSilentAuthProvider>> continuation) {
        AnonymousClass1 anonymousClass1;
        TrustedProvidersCache trustedProvidersCache;
        if (continuation instanceof AnonymousClass1) {
            anonymousClass1 = (AnonymousClass1) continuation;
            if ((anonymousClass1.label & Integer.MIN_VALUE) != 0) {
                anonymousClass1.label -= Integer.MIN_VALUE;
            } else {
                anonymousClass1 = new AnonymousClass1(continuation);
            }
        } else {
            anonymousClass1 = new AnonymousClass1(continuation);
        }
        Object objWithContext = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass1.label;
        if (i == 0) {
            ResultKt.throwOnFailure(objWithContext);
            CoroutineDispatcher io2 = this.dispatchers.getIo();
            AnonymousClass2 anonymousClass2 = new AnonymousClass2(null);
            anonymousClass1.L$0 = this;
            anonymousClass1.label = 1;
            objWithContext = BuildersKt.withContext(io2, anonymousClass2, anonymousClass1);
            if (objWithContext == coroutine_suspended) {
                return coroutine_suspended;
            }
            trustedProvidersCache = this;
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            trustedProvidersCache = (TrustedProvidersCache) anonymousClass1.L$0;
            ResultKt.throwOnFailure(objWithContext);
        }
        Object value = ((Result) objWithContext).getValue();
        List listEmptyList = (List) (Result.m9867isFailureimpl(value) ? null : value);
        if (listEmptyList == null) {
            listEmptyList = CollectionsKt.emptyList();
        }
        List<VkAuthSilentAuthProvider> listPlus = CollectionsKt.plus((Collection) listEmptyList, (Iterable) DEFAULT_TRUSTED_PROVIDERS);
        trustedProvidersCache.cachedTrustedProviders = listPlus;
        return listPlus;
    }

    /* JADX INFO: compiled from: TrustedProvidersCache.kt */
    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u001e\u0010\n\u001a\b\u0012\u0004\u0012\u00020\t0\b2\u0006\u0010\u000b\u001a\u00020\u00052\u0006\u0010\f\u001a\u00020\rH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u0014\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"Lcom/vk/id/internal/auth/app/TrustedProvidersCache$Companion;", "", "<init>", "()V", "RELEASE_APP_SHA", "", "DEBUG_APP_SHA", "DEFAULT_TRUSTED_PROVIDERS", "", "Lcom/vk/id/internal/auth/app/VkAuthSilentAuthProvider;", "createBaseProviders", "appPackage", "weight", "", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final List<VkAuthSilentAuthProvider> createBaseProviders(String appPackage, int weight) {
            return CollectionsKt.listOf((Object[]) new VkAuthSilentAuthProvider[]{new VkAuthSilentAuthProvider(appPackage, TrustedProvidersCache.RELEASE_APP_SHA, weight), new VkAuthSilentAuthProvider(appPackage, TrustedProvidersCache.DEBUG_APP_SHA, weight)});
        }
    }

    static {
        Companion companion = new Companion(null);
        INSTANCE = companion;
        $stable = 8;
        DEFAULT_TRUSTED_PROVIDERS = CollectionsKt.flatten(CollectionsKt.listOf((Object[]) new List[]{companion.createBaseProviders("com.vkontakte.android", 3), companion.createBaseProviders("com.vk.im", 2), companion.createBaseProviders("com.vk.calls", 1)}));
    }
}
