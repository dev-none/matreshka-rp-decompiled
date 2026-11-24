package com.vk.id.network.http;

import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import io.sentry.SentryBaseEvent;
import io.sentry.SentryEvent;
import java.io.IOException;
import java.util.Collection;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InterceptorManager.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\b\u0000\u0018\u00002\u00020\u0001:\u0001\u0013B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u000e\b\u0002\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\u0004\b\u0007\u0010\bJ\u0016\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000eH\u0086@¢\u0006\u0002\u0010\u000fJ\u000e\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0006R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0014"}, d2 = {"Lcom/vk/id/network/http/InterceptorManager;", "", "httpClient", "Lcom/vk/id/network/http/HttpClient;", "applicationInterceptors", "", "Lcom/vk/id/network/http/Interceptor;", "<init>", "(Lcom/vk/id/network/http/HttpClient;Ljava/util/List;)V", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", "proceed", "Lcom/vk/id/network/http/HttpResponse;", SentryBaseEvent.JsonKeys.REQUEST, "Lcom/vk/id/network/http/HttpRequest;", "(Lcom/vk/id/network/http/HttpRequest;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "addApplicationInterceptor", "", "interceptor", "HttpExecutionInterceptor", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class InterceptorManager {
    private final List<Interceptor> applicationInterceptors;
    private final HttpClient httpClient;
    private final InternalVKIDLogger logger;

    public InterceptorManager(HttpClient httpClient, List<? extends Interceptor> applicationInterceptors) {
        Intrinsics.checkNotNullParameter(httpClient, "httpClient");
        Intrinsics.checkNotNullParameter(applicationInterceptors, "applicationInterceptors");
        this.httpClient = httpClient;
        this.logger = InternalVKIDLog.INSTANCE.createLoggerForTag("InterceptorManager");
        this.applicationInterceptors = CollectionsKt.toList(applicationInterceptors);
    }

    public /* synthetic */ InterceptorManager(HttpClient httpClient, List list, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(httpClient, (i & 2) != 0 ? CollectionsKt.emptyList() : list);
    }

    public final Object proceed(HttpRequest httpRequest, Continuation<? super HttpResponse> continuation) throws IOException {
        return new RealInterceptorChain(CollectionsKt.plus((Collection<? extends HttpExecutionInterceptor>) this.applicationInterceptors, new HttpExecutionInterceptor(this.httpClient)), 0, httpRequest, this.httpClient).proceed(httpRequest, continuation);
    }

    public final void addApplicationInterceptor(Interceptor interceptor) {
        Intrinsics.checkNotNullParameter(interceptor, "interceptor");
        CollectionsKt.toMutableList((Collection) this.applicationInterceptors).add(interceptor);
        this.logger.debug("Added application interceptor: " + interceptor.getClass().getSimpleName());
    }

    /* JADX INFO: compiled from: InterceptorManager.kt */
    @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0002\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0016\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\tH\u0096@¢\u0006\u0002\u0010\nR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"Lcom/vk/id/network/http/InterceptorManager$HttpExecutionInterceptor;", "Lcom/vk/id/network/http/Interceptor;", "httpClient", "Lcom/vk/id/network/http/HttpClient;", "<init>", "(Lcom/vk/id/network/http/HttpClient;)V", "intercept", "Lcom/vk/id/network/http/HttpResponse;", "chain", "Lcom/vk/id/network/http/Interceptor$Chain;", "(Lcom/vk/id/network/http/Interceptor$Chain;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class HttpExecutionInterceptor implements Interceptor {
        private final HttpClient httpClient;

        public HttpExecutionInterceptor(HttpClient httpClient) {
            Intrinsics.checkNotNullParameter(httpClient, "httpClient");
            this.httpClient = httpClient;
        }

        @Override // com.vk.id.network.http.Interceptor
        public Object intercept(Interceptor.Chain chain, Continuation<? super HttpResponse> continuation) {
            return this.httpClient.executeHttpRequest$network_release(chain.getRequest());
        }
    }
}
