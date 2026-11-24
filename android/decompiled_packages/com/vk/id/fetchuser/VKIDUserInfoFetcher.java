package com.vk.id.fetchuser;

import com.google.firebase.remoteconfig.RemoteConfigComponent;
import com.vk.id.internal.api.VKIDApiService;
import com.vk.id.internal.auth.ServiceCredentials;
import com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider;
import com.vk.id.internal.concurrent.VKIDCoroutinesDispatchers;
import io.flutter.plugins.firebase.auth.Constants;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDUserInfoFetcher.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0003\n\u0002\b\u0002\b\u0001\u0018\u00002\u00020\u0001B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t¢\u0006\u0004\b\n\u0010\u000bJN\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\"\u0010\u0010\u001a\u001e\b\u0001\u0012\u0004\u0012\u00020\u0012\u0012\n\u0012\b\u0012\u0004\u0012\u00020\r0\u0013\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u00112\u0012\u0010\u0014\u001a\u000e\u0012\u0004\u0012\u00020\u0016\u0012\u0004\u0012\u00020\r0\u0015H\u0086@¢\u0006\u0002\u0010\u0017R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0018"}, d2 = {"Lcom/vk/id/fetchuser/VKIDUserInfoFetcher;", "", "api", "Lcom/vk/id/internal/api/VKIDApiService;", "deviceIdProvider", "Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider;", "serviceCredentials", "Lcom/vk/id/internal/auth/ServiceCredentials;", "dispatchers", "Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;", "<init>", "(Lcom/vk/id/internal/api/VKIDApiService;Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider;Lcom/vk/id/internal/auth/ServiceCredentials;Lcom/vk/id/internal/concurrent/VKIDCoroutinesDispatchers;)V", RemoteConfigComponent.FETCH_FILE_NAME, "", Constants.ACCESS_TOKEN, "", "onSuccess", "Lkotlin/Function2;", "Lcom/vk/id/VKIDUser;", "Lkotlin/coroutines/Continuation;", "onFailedApiCall", "Lkotlin/Function1;", "", "(Ljava/lang/String;Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function1;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VKIDUserInfoFetcher {
    public static final int $stable = 8;
    private final VKIDApiService api;
    private final InternalVKIDDeviceIdProvider deviceIdProvider;
    private final VKIDCoroutinesDispatchers dispatchers;
    private final ServiceCredentials serviceCredentials;

    /* JADX INFO: renamed from: com.vk.id.fetchuser.VKIDUserInfoFetcher$fetch$1, reason: invalid class name */
    /* JADX INFO: compiled from: VKIDUserInfoFetcher.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.fetchuser.VKIDUserInfoFetcher", f = "VKIDUserInfoFetcher.kt", i = {0, 0, 0, 0, 0, 1, 1}, l = {25, 26, 35}, m = RemoteConfigComponent.FETCH_FILE_NAME, n = {"this", Constants.ACCESS_TOKEN, "onSuccess", "onFailedApiCall", "clientId", "onSuccess", "onFailedApiCall"}, s = {"L$0", "L$1", "L$2", "L$3", "L$4", "L$0", "L$1"})
    static final class AnonymousClass1 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        int label;
        /* synthetic */ Object result;

        AnonymousClass1(Continuation<? super AnonymousClass1> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return VKIDUserInfoFetcher.this.fetch(null, null, null, this);
        }
    }

    public VKIDUserInfoFetcher(VKIDApiService api, InternalVKIDDeviceIdProvider deviceIdProvider, ServiceCredentials serviceCredentials, VKIDCoroutinesDispatchers dispatchers) {
        Intrinsics.checkNotNullParameter(api, "api");
        Intrinsics.checkNotNullParameter(deviceIdProvider, "deviceIdProvider");
        Intrinsics.checkNotNullParameter(serviceCredentials, "serviceCredentials");
        Intrinsics.checkNotNullParameter(dispatchers, "dispatchers");
        this.api = api;
        this.deviceIdProvider = deviceIdProvider;
        this.serviceCredentials = serviceCredentials;
        this.dispatchers = dispatchers;
    }

    /* JADX WARN: Code duplicated, block: B:28:0x00d8  */
    /* JADX WARN: Code duplicated, block: B:31:0x00e1  */
    /* JADX WARN: Code duplicated, block: B:7:0x0018  */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x010d, code lost:
    
        if (r6.invoke(r9, r2) == r3) goto L33;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.lang.Object fetch(java.lang.String r20, kotlin.jvm.functions.Function2<? super com.vk.id.VKIDUser, ? super kotlin.coroutines.Continuation<? super kotlin.Unit>, ? extends java.lang.Object> r21, kotlin.jvm.functions.Function1<? super java.lang.Throwable, kotlin.Unit> r22, kotlin.coroutines.Continuation<? super kotlin.Unit> r23) {
        /*
            Method dump skipped, instruction units count: 275
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.vk.id.fetchuser.VKIDUserInfoFetcher.fetch(java.lang.String, kotlin.jvm.functions.Function2, kotlin.jvm.functions.Function1, kotlin.coroutines.Continuation):java.lang.Object");
    }
}
