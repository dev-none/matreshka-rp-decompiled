package com.vk.id.internal.ipc;

import com.google.firebase.remoteconfig.RemoteConfigConstants;
import com.vk.silentauth.SilentAuthInfo;
import java.util.List;
import java.util.concurrent.TimeUnit;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;

/* JADX INFO: compiled from: SilentAuthInfoProvider.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0002\b\u0005\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\b`\u0018\u00002\u00020\u0001J\u001e\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\t2\b\b\u0002\u0010\u000b\u001a\u00020\u0003H¦@¢\u0006\u0002\u0010\fJ\u0010\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H&J\u0010\u0010\u0011\u001a\u00020\u000e2\u0006\u0010\u0012\u001a\u00020\u0013H&R\u001a\u0010\u0002\u001a\u00020\u00038VX\u0096\u0004¢\u0006\f\u0012\u0004\b\u0004\u0010\u0005\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0014"}, d2 = {"Lcom/vk/id/internal/ipc/SilentAuthInfoProvider;", "", "defaultTimeout", "", "getDefaultTimeout$annotations", "()V", "getDefaultTimeout", "()J", "getSilentAuthInfos", "", "Lcom/vk/silentauth/SilentAuthInfo;", "timeout", "(JLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "setAppId", "", RemoteConfigConstants.RequestFieldKey.APP_ID, "", "setApiVersion", "apiVersion", "", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface SilentAuthInfoProvider {
    long getDefaultTimeout();

    Object getSilentAuthInfos(long j, Continuation<? super List<SilentAuthInfo>> continuation);

    void setApiVersion(String apiVersion);

    void setAppId(int appId);

    /* JADX INFO: compiled from: SilentAuthInfoProvider.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public static final class DefaultImpls {
        public static /* synthetic */ void getDefaultTimeout$annotations() {
        }

        public static long getDefaultTimeout(SilentAuthInfoProvider silentAuthInfoProvider) {
            return TimeUnit.SECONDS.toMillis(30L);
        }

        public static /* synthetic */ Object getSilentAuthInfos$default(SilentAuthInfoProvider silentAuthInfoProvider, long j, Continuation continuation, int i, Object obj) {
            if (obj != null) {
                throw new UnsupportedOperationException("Super calls with default arguments not supported in this target, function: getSilentAuthInfos");
            }
            if ((i & 1) != 0) {
                j = silentAuthInfoProvider.getDefaultTimeout();
            }
            return silentAuthInfoProvider.getSilentAuthInfos(j, continuation);
        }
    }
}
