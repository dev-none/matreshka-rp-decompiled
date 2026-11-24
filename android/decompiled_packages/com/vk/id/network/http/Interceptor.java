package com.vk.id.network.http;

import com.google.firebase.analytics.FirebaseAnalytics;
import com.vk.id.common.InternalVKIDApi;
import io.sentry.SentryBaseEvent;
import io.sentry.rrweb.RRWebVideoEvent;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;

/* JADX INFO: compiled from: Interceptor.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\bg\u0018\u00002\u00020\u0001:\u0001\u0007J\u0016\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H§@¢\u0006\u0002\u0010\u0006¨\u0006\b"}, d2 = {"Lcom/vk/id/network/http/Interceptor;", "", "intercept", "Lcom/vk/id/network/http/HttpResponse;", "chain", "Lcom/vk/id/network/http/Interceptor$Chain;", "(Lcom/vk/id/network/http/Interceptor$Chain;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "Chain", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public interface Interceptor {

    /* JADX INFO: compiled from: Interceptor.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\bg\u0018\u00002\u00020\u0001J\b\u0010\u0002\u001a\u00020\u0003H'J\u0016\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0002\u001a\u00020\u0003H§@¢\u0006\u0002\u0010\u0006J\b\u0010\u0007\u001a\u00020\bH'J\b\u0010\t\u001a\u00020\bH'¨\u0006\n"}, d2 = {"Lcom/vk/id/network/http/Interceptor$Chain;", "", SentryBaseEvent.JsonKeys.REQUEST, "Lcom/vk/id/network/http/HttpRequest;", "proceed", "Lcom/vk/id/network/http/HttpResponse;", "(Lcom/vk/id/network/http/HttpRequest;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", FirebaseAnalytics.Param.INDEX, "", RRWebVideoEvent.JsonKeys.SIZE, "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public interface Chain {
        @InternalVKIDApi
        int index();

        @InternalVKIDApi
        Object proceed(HttpRequest httpRequest, Continuation<? super HttpResponse> continuation);

        @InternalVKIDApi
        HttpRequest request();

        @InternalVKIDApi
        int size();
    }

    @InternalVKIDApi
    Object intercept(Chain chain, Continuation<? super HttpResponse> continuation);
}
