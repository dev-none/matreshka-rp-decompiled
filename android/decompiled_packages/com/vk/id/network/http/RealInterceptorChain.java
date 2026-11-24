package com.vk.id.network.http;

import com.google.firebase.analytics.FirebaseAnalytics;
import io.sentry.SentryBaseEvent;
import io.sentry.rrweb.RRWebVideoEvent;
import java.io.IOException;
import java.util.List;
import java.util.Map;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.Dispatchers;
import kotlinx.coroutines.JobKt;

/* JADX INFO: compiled from: RealInterceptorChain.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\b\u0000\u0018\u0000 \u00152\u00020\u0001:\u0001\u0015B-\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\u0006\u0010\t\u001a\u00020\n¢\u0006\u0004\b\u000b\u0010\fJ\b\u0010\u0007\u001a\u00020\bH\u0016J\u0016\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0007\u001a\u00020\bH\u0096@¢\u0006\u0002\u0010\u0011J\b\u0010\u0005\u001a\u00020\u0006H\u0016J\b\u0010\u0012\u001a\u00020\u0006H\u0016J\u001a\u0010\u0013\u001a\u00020\u00102\b\b\u0002\u0010\u0007\u001a\u00020\bH\u0080@¢\u0006\u0004\b\u0014\u0010\u0011R\u0014\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u000eX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0016"}, d2 = {"Lcom/vk/id/network/http/RealInterceptorChain;", "Lcom/vk/id/network/http/Interceptor$Chain;", "interceptors", "", "Lcom/vk/id/network/http/Interceptor;", FirebaseAnalytics.Param.INDEX, "", SentryBaseEvent.JsonKeys.REQUEST, "Lcom/vk/id/network/http/HttpRequest;", "httpClient", "Lcom/vk/id/network/http/HttpClient;", "<init>", "(Ljava/util/List;ILcom/vk/id/network/http/HttpRequest;Lcom/vk/id/network/http/HttpClient;)V", "calls", "Ljava/util/concurrent/atomic/AtomicInteger;", "proceed", "Lcom/vk/id/network/http/HttpResponse;", "(Lcom/vk/id/network/http/HttpRequest;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", RRWebVideoEvent.JsonKeys.SIZE, "executeRequest", "executeRequest$network_release", "Companion", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class RealInterceptorChain implements Interceptor.Chain {

    @Deprecated
    public static final int CALLS_LIMIT = 100;
    private static final Companion Companion = new Companion(null);
    private final AtomicInteger calls;
    private final HttpClient httpClient;
    private final int index;
    private final List<Interceptor> interceptors;
    private final HttpRequest request;

    /* JADX WARN: Multi-variable type inference failed */
    public RealInterceptorChain(List<? extends Interceptor> interceptors, int i, HttpRequest request, HttpClient httpClient) {
        Intrinsics.checkNotNullParameter(interceptors, "interceptors");
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(httpClient, "httpClient");
        this.interceptors = interceptors;
        this.index = i;
        this.request = request;
        this.httpClient = httpClient;
        this.calls = new AtomicInteger();
    }

    @Override // com.vk.id.network.http.Interceptor.Chain
    /* JADX INFO: renamed from: request, reason: from getter */
    public HttpRequest getRequest() {
        return this.request;
    }

    @Override // com.vk.id.network.http.Interceptor.Chain
    public Object proceed(HttpRequest httpRequest, Continuation<? super HttpResponse> continuation) throws IOException {
        if (this.calls.get() >= 100) {
            throw new IOException("Interceptor chain calls limit (100) exceeded");
        }
        this.calls.incrementAndGet();
        RealInterceptorChain realInterceptorChain = new RealInterceptorChain(this.interceptors, this.index + 1, httpRequest, this.httpClient);
        if (this.index < this.interceptors.size()) {
            return this.interceptors.get(this.index).intercept(realInterceptorChain, continuation);
        }
        return executeRequest$network_release(httpRequest, continuation);
    }

    @Override // com.vk.id.network.http.Interceptor.Chain
    /* JADX INFO: renamed from: index, reason: from getter */
    public int getIndex() {
        return this.index;
    }

    @Override // com.vk.id.network.http.Interceptor.Chain
    public int size() {
        return this.interceptors.size();
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public final Object executeRequest$network_release(HttpRequest httpRequest, Continuation<? super HttpResponse> continuation) throws IOException {
        RealInterceptorChain$executeRequest$1 realInterceptorChain$executeRequest$1;
        if (continuation instanceof RealInterceptorChain$executeRequest$1) {
            realInterceptorChain$executeRequest$1 = (RealInterceptorChain$executeRequest$1) continuation;
            if ((realInterceptorChain$executeRequest$1.label & Integer.MIN_VALUE) != 0) {
                realInterceptorChain$executeRequest$1.label -= Integer.MIN_VALUE;
            } else {
                realInterceptorChain$executeRequest$1 = new RealInterceptorChain$executeRequest$1(this, continuation);
            }
        } else {
            realInterceptorChain$executeRequest$1 = new RealInterceptorChain$executeRequest$1(this, continuation);
        }
        Object objWithContext = realInterceptorChain$executeRequest$1.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = realInterceptorChain$executeRequest$1.label;
        if (i == 0) {
            ResultKt.throwOnFailure(objWithContext);
            JobKt.ensureActive(realInterceptorChain$executeRequest$1.get$context());
            CoroutineDispatcher io2 = Dispatchers.getIO();
            RealInterceptorChain$executeRequest$httpResponse$1 realInterceptorChain$executeRequest$httpResponse$1 = new RealInterceptorChain$executeRequest$httpResponse$1(this, httpRequest, null);
            realInterceptorChain$executeRequest$1.L$0 = httpRequest;
            realInterceptorChain$executeRequest$1.label = 1;
            objWithContext = BuildersKt.withContext(io2, realInterceptorChain$executeRequest$httpResponse$1, realInterceptorChain$executeRequest$1);
            if (objWithContext == coroutine_suspended) {
                return coroutine_suspended;
            }
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            httpRequest = (HttpRequest) realInterceptorChain$executeRequest$1.L$0;
            ResultKt.throwOnFailure(objWithContext);
        }
        HttpRequest httpRequest2 = httpRequest;
        HttpResponse httpResponse = (HttpResponse) objWithContext;
        int code = httpResponse.getCode();
        String message = httpResponse.getMessage();
        String body = httpResponse.getBody();
        Map<String, String> headers = httpResponse.getHeaders();
        int code2 = httpResponse.getCode();
        return new HttpResponse(httpRequest2, code, message, body, headers, 200 <= code2 && code2 < 300);
    }

    public static /* synthetic */ Object executeRequest$network_release$default(RealInterceptorChain realInterceptorChain, HttpRequest httpRequest, Continuation continuation, int i, Object obj) throws IOException {
        if ((i & 1) != 0) {
            httpRequest = realInterceptorChain.request;
        }
        return realInterceptorChain.executeRequest$network_release(httpRequest, continuation);
    }

    /* JADX INFO: compiled from: RealInterceptorChain.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000¨\u0006\u0006"}, d2 = {"Lcom/vk/id/network/http/RealInterceptorChain$Companion;", "", "<init>", "()V", "CALLS_LIMIT", "", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }
}
