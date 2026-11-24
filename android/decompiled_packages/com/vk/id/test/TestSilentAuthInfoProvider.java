package com.vk.id.test;

import com.google.firebase.remoteconfig.RemoteConfigConstants;
import com.vk.dto.common.id.UserId;
import com.vk.id.internal.ipc.SilentAuthInfoProvider;
import com.vk.silentauth.SilentAuthInfo;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: TestSilentAuthInfoProvider.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\b\u0001\u0018\u00002\u00020\u0001B\t\b\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u001c\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u00052\u0006\u0010\u0007\u001a\u00020\bH\u0096@¢\u0006\u0002\u0010\tJ\u0010\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\rH\u0016J\u0010\u0010\u000e\u001a\u00020\u000b2\u0006\u0010\u000f\u001a\u00020\u0010H\u0016¨\u0006\u0011"}, d2 = {"Lcom/vk/id/test/TestSilentAuthInfoProvider;", "Lcom/vk/id/internal/ipc/SilentAuthInfoProvider;", "<init>", "()V", "getSilentAuthInfos", "", "Lcom/vk/silentauth/SilentAuthInfo;", "timeout", "", "(JLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "setAppId", "", RemoteConfigConstants.RequestFieldKey.APP_ID, "", "setApiVersion", "apiVersion", "", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class TestSilentAuthInfoProvider implements SilentAuthInfoProvider {
    public static final int $stable = 0;

    @Override // com.vk.id.internal.ipc.SilentAuthInfoProvider
    public void setApiVersion(String apiVersion) {
        Intrinsics.checkNotNullParameter(apiVersion, "apiVersion");
    }

    @Override // com.vk.id.internal.ipc.SilentAuthInfoProvider
    public void setAppId(int appId) {
    }

    @Override // com.vk.id.internal.ipc.SilentAuthInfoProvider
    public long getDefaultTimeout() {
        return SilentAuthInfoProvider.DefaultImpls.getDefaultTimeout(this);
    }

    @Override // com.vk.id.internal.ipc.SilentAuthInfoProvider
    public Object getSilentAuthInfos(long j, Continuation<? super List<SilentAuthInfo>> continuation) {
        return CollectionsKt.listOf(new SilentAuthInfo(UserId.DEFAULT, "uuid", "token", ((long) 1000) + System.currentTimeMillis(), null, null, null, null, null, null, null, null, 0, null, null, null, 0, 131056, null));
    }
}
