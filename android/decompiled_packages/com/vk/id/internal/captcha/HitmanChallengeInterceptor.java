package com.vk.id.internal.captcha;

import com.vk.id.network.http.HttpRequest;
import com.vk.id.network.http.HttpResponse;
import com.vk.id.network.http.Interceptor;
import kotlin.Metadata;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;
import kotlin.coroutines.Continuation;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: HitmanChallengeInterceptor.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0001\u0018\u00002\u00020\u0001B\t\b\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0096@¢\u0006\u0002\u0010\b¨\u0006\t"}, d2 = {"Lcom/vk/id/internal/captcha/HitmanChallengeInterceptor;", "Lcom/vk/id/network/http/Interceptor;", "<init>", "()V", "intercept", "Lcom/vk/id/network/http/HttpResponse;", "chain", "Lcom/vk/id/network/http/Interceptor$Chain;", "(Lcom/vk/id/network/http/Interceptor$Chain;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class HitmanChallengeInterceptor implements Interceptor {
    public static final int $stable = 0;

    @Override // com.vk.id.network.http.Interceptor
    public Object intercept(Interceptor.Chain chain, Continuation<? super HttpResponse> continuation) {
        HttpRequest request = chain.getRequest();
        String str = request.getHeaders().get("X-Challenge-Solution");
        if (str == null || StringsKt.isBlank(str)) {
            return new HttpResponse(request, 200, "OK", "", MapsKt.mapOf(TuplesKt.to("Content-Type", "application/json; charset=utf-8"), TuplesKt.to("X-Challenge", "required"), TuplesKt.to("X-Challenge-Url", "/challenge.html")), true);
        }
        return chain.proceed(request, continuation);
    }
}
