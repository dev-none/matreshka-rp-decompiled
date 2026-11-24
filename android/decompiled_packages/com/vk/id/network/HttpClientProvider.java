package com.vk.id.network;

import android.content.Context;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.network.http.HttpClient;
import com.vk.id.network.http.Interceptor;
import com.vk.id.network.http.LoggingInterceptor;
import com.vk.id.network.http.RetryInterceptor;
import com.vk.id.network.http.captcha.Error14HandlingInterceptor;
import com.vk.id.network.http.captcha.HitmanChallengeHandlingInterceptor;
import com.vk.id.network.useragent.UserAgentInterceptor;
import com.vk.id.network.useragent.UserAgentProvider;
import java.util.Collection;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: HttpClientProvider.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u0000 \f2\u00020\u0001:\u0001\fB\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0016\u0010\u0006\u001a\u00020\u00072\u000e\b\u0002\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\tJ\u000e\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\n0\tH\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"Lcom/vk/id/network/HttpClientProvider;", "", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "provide", "Lcom/vk/id/network/http/HttpClient;", "additionalInterceptors", "", "Lcom/vk/id/network/http/Interceptor;", "buildBaseInterceptors", "Companion", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class HttpClientProvider {
    private static final Companion Companion = new Companion(null);
    private static final int DEFAULT_MAX_REDIRECTS = 5;
    private static final int DEFAULT_TIMEOUT = 60000;
    private final Context context;

    public HttpClientProvider(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ HttpClient provide$default(HttpClientProvider httpClientProvider, List list, int i, Object obj) {
        if ((i & 1) != 0) {
            list = CollectionsKt.emptyList();
        }
        return httpClientProvider.provide(list);
    }

    public final HttpClient provide(List<? extends Interceptor> additionalInterceptors) {
        Intrinsics.checkNotNullParameter(additionalInterceptors, "additionalInterceptors");
        return new HttpClient(new HttpClient.Config(this.context, 60000, 60000, true, 5, CollectionsKt.plus((Collection) buildBaseInterceptors(), (Iterable) additionalInterceptors)));
    }

    /* JADX WARN: Multi-variable type inference failed */
    private final List<Interceptor> buildBaseInterceptors() {
        int i = 1;
        return CollectionsKt.listOfNotNull((Object[]) new Interceptor[]{new UserAgentInterceptor(new UserAgentProvider(this.context)), new LoggingInterceptor("HttpClient"), new RetryInterceptor(0, null, 3, 0 == true ? 1 : 0), new Error14HandlingInterceptor(0 == true ? 1 : 0, i, 0 == true ? 1 : 0), new HitmanChallengeHandlingInterceptor(0 == true ? 1 : 0, i, 0 == true ? 1 : 0)});
    }

    /* JADX INFO: compiled from: HttpClientProvider.kt */
    @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0002\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0007"}, d2 = {"Lcom/vk/id/network/HttpClientProvider$Companion;", "", "<init>", "()V", "DEFAULT_TIMEOUT", "", "DEFAULT_MAX_REDIRECTS", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }
}
