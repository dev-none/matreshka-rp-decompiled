package com.vk.id.internal.user;

import com.vk.id.VKIDUser;
import com.vk.id.VKIDUserKt;
import com.vk.id.internal.auth.ServiceCredentials;
import com.vk.id.internal.concurrent.VKIDCoroutinesDispatchers;
import com.vk.id.internal.ipc.SilentAuthInfoProvider;
import com.vk.id.internal.util.TimeKt;
import com.vk.silentauth.SilentAuthInfo;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.sync.Mutex;
import kotlinx.coroutines.sync.MutexKt;

/* JADX INFO: compiled from: UserDataFetcher.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0001\u0018\u0000 \r2\u00020\u0001:\u0002\r\u000eB\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJ\u0010\u0010\n\u001a\u0004\u0018\u00010\u000bH\u0086@¢\u0006\u0002\u0010\fR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000f"}, d2 = {"Lcom/vk/id/internal/user/UserDataFetcher;", "", "dispatchers", "Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;", "serviceCredentials", "Lcom/vk/id/internal/auth/ServiceCredentials;", "vkSilentAuthInfoProvider", "Lcom/vk/id/internal/ipc/SilentAuthInfoProvider;", "<init>", "(Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;Lcom/vk/id/internal/auth/ServiceCredentials;Lcom/vk/id/internal/ipc/SilentAuthInfoProvider;)V", "fetchUserData", "Lcom/vk/id/VKIDUser;", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "Companion", "CachedUserWithTimeFetched", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class UserDataFetcher {
    public static final int $stable = 0;
    private static final int CACHED_USER_TIME_TO_EXPIRE_MS = 500;
    private static CachedUserWithTimeFetched cachedUserData;
    private final VKIDCoroutinesDispatchers dispatchers;
    private final ServiceCredentials serviceCredentials;
    private final SilentAuthInfoProvider vkSilentAuthInfoProvider;
    private static final Mutex fetchUserMutex = MutexKt.Mutex$default(false, 1, null);

    /* JADX INFO: renamed from: com.vk.id.internal.user.UserDataFetcher$fetchUserData$1, reason: invalid class name */
    /* JADX INFO: compiled from: UserDataFetcher.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.internal.user.UserDataFetcher", f = "UserDataFetcher.kt", i = {0, 0, 1}, l = {55, 35}, m = "fetchUserData", n = {"this", "$this$withLock_u24default$iv", "$this$withLock_u24default$iv"}, s = {"L$0", "L$1", "L$0"})
    static final class AnonymousClass1 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return UserDataFetcher.this.fetchUserData(this);
        }
    }

    public UserDataFetcher(VKIDCoroutinesDispatchers dispatchers, ServiceCredentials serviceCredentials, SilentAuthInfoProvider vkSilentAuthInfoProvider) {
        Intrinsics.checkNotNullParameter(dispatchers, "dispatchers");
        Intrinsics.checkNotNullParameter(serviceCredentials, "serviceCredentials");
        Intrinsics.checkNotNullParameter(vkSilentAuthInfoProvider, "vkSilentAuthInfoProvider");
        this.dispatchers = dispatchers;
        this.serviceCredentials = serviceCredentials;
        this.vkSilentAuthInfoProvider = vkSilentAuthInfoProvider;
    }

    /* JADX WARN: Code duplicated, block: B:37:0x0093 A[Catch: all -> 0x0033, TryCatch #0 {all -> 0x0033, blocks: (B:13:0x002f, B:35:0x008f, B:37:0x0093, B:39:0x009a), top: B:46:0x002f }] */
    /* JADX WARN: Code duplicated, block: B:38:0x0099  */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public final Object fetchUserData(Continuation<? super VKIDUser> continuation) throws Throwable {
        AnonymousClass1 anonymousClass1;
        Mutex mutex;
        UserDataFetcher userDataFetcher;
        Mutex mutex2;
        SilentAuthInfo silentAuthInfo;
        VKIDUser vKIDUser;
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
        Object obj = anonymousClass1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = anonymousClass1.label;
        try {
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                mutex = fetchUserMutex;
                anonymousClass1.L$0 = this;
                anonymousClass1.L$1 = mutex;
                anonymousClass1.label = 1;
                if (mutex.lock(null, anonymousClass1) != coroutine_suspended) {
                    userDataFetcher = this;
                }
                return coroutine_suspended;
            }
            if (i != 1) {
                if (i != 2) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                mutex2 = (Mutex) anonymousClass1.L$0;
                try {
                    ResultKt.throwOnFailure(obj);
                    silentAuthInfo = (SilentAuthInfo) obj;
                    if (silentAuthInfo != null) {
                        vKIDUser = VKIDUserKt.toVKIDUser(silentAuthInfo);
                    } else {
                        vKIDUser = null;
                    }
                    cachedUserData = new CachedUserWithTimeFetched(vKIDUser, 0L, 2, null);
                    mutex2.unlock(null);
                    return vKIDUser;
                } catch (Throwable th) {
                    th = th;
                    Throwable th2 = th;
                    mutex2.unlock(null);
                    throw th2;
                }
            }
            Mutex mutex3 = (Mutex) anonymousClass1.L$1;
            userDataFetcher = (UserDataFetcher) anonymousClass1.L$0;
            ResultKt.throwOnFailure(obj);
            mutex = mutex3;
            CachedUserWithTimeFetched cachedUserWithTimeFetched = cachedUserData;
            if (cachedUserWithTimeFetched != null && cachedUserWithTimeFetched.isValid()) {
                VKIDUser data = cachedUserWithTimeFetched.getData();
                mutex.unlock(null);
                return data;
            }
            CoroutineDispatcher io2 = userDataFetcher.dispatchers.getIo();
            UserDataFetcher$fetchUserData$2$info$1 userDataFetcher$fetchUserData$2$info$1 = new UserDataFetcher$fetchUserData$2$info$1(userDataFetcher, null);
            anonymousClass1.L$0 = mutex;
            anonymousClass1.L$1 = null;
            anonymousClass1.label = 2;
            Object objWithContext = BuildersKt.withContext(io2, userDataFetcher$fetchUserData$2$info$1, anonymousClass1);
            if (objWithContext != coroutine_suspended) {
                mutex2 = mutex;
                obj = objWithContext;
                silentAuthInfo = (SilentAuthInfo) obj;
                if (silentAuthInfo != null) {
                    vKIDUser = VKIDUserKt.toVKIDUser(silentAuthInfo);
                } else {
                    vKIDUser = null;
                }
                cachedUserData = new CachedUserWithTimeFetched(vKIDUser, 0L, 2, null);
                mutex2.unlock(null);
                return vKIDUser;
            }
            return coroutine_suspended;
        } catch (Throwable th3) {
            th = th3;
            mutex2 = mutex;
            Throwable th4 = th;
            mutex2.unlock(null);
            throw th4;
        }
    }

    /* JADX INFO: compiled from: UserDataFetcher.kt */
    @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0002\b\u0002\u0018\u00002\u00020\u0001B\u001b\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0011\u0010\f\u001a\u00020\r8F¢\u0006\u0006\u001a\u0004\b\f\u0010\u000e¨\u0006\u000f"}, d2 = {"Lcom/vk/id/internal/user/UserDataFetcher$CachedUserWithTimeFetched;", "", "data", "Lcom/vk/id/VKIDUser;", "timeFetched", "", "<init>", "(Lcom/vk/id/VKIDUser;J)V", "getData", "()Lcom/vk/id/VKIDUser;", "getTimeFetched", "()J", "isValid", "", "()Z", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class CachedUserWithTimeFetched {
        private final VKIDUser data;
        private final long timeFetched;

        public CachedUserWithTimeFetched(VKIDUser vKIDUser, long j) {
            this.data = vKIDUser;
            this.timeFetched = j;
        }

        public /* synthetic */ CachedUserWithTimeFetched(VKIDUser vKIDUser, long j, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this(vKIDUser, (i & 2) != 0 ? TimeKt.currentTime() : j);
        }

        public final VKIDUser getData() {
            return this.data;
        }

        public final long getTimeFetched() {
            return this.timeFetched;
        }

        public final boolean isValid() {
            return TimeKt.currentTime() - this.timeFetched <= 500;
        }
    }
}
