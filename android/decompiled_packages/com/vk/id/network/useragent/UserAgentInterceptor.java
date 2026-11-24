package com.vk.id.network.useragent;

import com.vk.id.network.http.HttpResponse;
import com.vk.id.network.http.Interceptor;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: UserAgentInterceptor.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0016\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0096@¢\u0006\u0002\u0010\nR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"Lcom/vk/id/network/useragent/UserAgentInterceptor;", "Lcom/vk/id/network/http/Interceptor;", "userAgentProvider", "Lcom/vk/id/network/useragent/UserAgentProvider;", "<init>", "(Lcom/vk/id/network/useragent/UserAgentProvider;)V", "intercept", "Lcom/vk/id/network/http/HttpResponse;", "chain", "Lcom/vk/id/network/http/Interceptor$Chain;", "(Lcom/vk/id/network/http/Interceptor$Chain;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class UserAgentInterceptor implements Interceptor {
    private final UserAgentProvider userAgentProvider;

    public UserAgentInterceptor(UserAgentProvider userAgentProvider) {
        Intrinsics.checkNotNullParameter(userAgentProvider, "userAgentProvider");
        this.userAgentProvider = userAgentProvider;
    }

    @Override // com.vk.id.network.http.Interceptor
    public Object intercept(Interceptor.Chain chain, Continuation<? super HttpResponse> continuation) {
        return chain.proceed(chain.getRequest().newBuilder().header("User-Agent", this.userAgentProvider.getUserAgent$network_release()).build(), continuation);
    }
}
