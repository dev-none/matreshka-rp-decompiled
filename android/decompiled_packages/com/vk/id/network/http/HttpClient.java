package com.vk.id.network.http;

import android.content.Context;
import com.google.firebase.perf.network.FirebasePerfUrlConnection;
import com.my.target.common.menu.MenuActionType;
import com.pravera.flutter_foreground_task.RequestCode;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import com.vk.id.network.http.ssl.SSLConfigurator;
import io.sentry.SentryBaseEvent;
import io.sentry.SentryEvent;
import io.sentry.protocol.Request;
import io.sentry.protocol.Response;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.ProtocolException;
import java.net.URL;
import java.net.URLConnection;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.CancellationException;
import kotlin.KotlinNothingValueException;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.SetsKt;
import kotlin.coroutines.Continuation;
import kotlin.io.CloseableKt;
import kotlin.io.TextStreamsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt__BuildersKt;
import okhttp3.internal.http.StatusLine;

/* JADX INFO: compiled from: HttpClient.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000n\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010$\n\u0000\n\u0002\u0010\u0001\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\b\u0007\u0018\u0000 ;2\u00020\u0001:\u0002:;B\u0011\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u001b\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00150\u00142\u0006\u0010\u0016\u001a\u00020\u0017¢\u0006\u0004\b\u0018\u0010\u0019J\u0015\u0010\u001a\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u0017H\u0000¢\u0006\u0002\b\u001bJ\u0018\u0010\u001c\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u0017H\u0080@¢\u0006\u0004\b\u001d\u0010\u001eJ\u0018\u0010\u001f\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010 \u001a\u00020!H\u0002J\u0010\u0010\"\u001a\u00020#2\u0006\u0010 \u001a\u00020!H\u0002J\u0010\u0010$\u001a\u00020%2\u0006\u0010&\u001a\u00020'H\u0002J\u0010\u0010(\u001a\u00020)2\u0006\u0010*\u001a\u00020%H\u0002J>\u0010+\u001a\u0004\u0018\u00010\u00152\u0006\u0010,\u001a\u00020)2\u0006\u0010-\u001a\u00020\u00152\u0006\u0010.\u001a\u00020'2\u0012\u0010/\u001a\u000e\u0012\u0004\u0012\u00020'\u0012\u0004\u0012\u00020'002\u0006\u0010 \u001a\u00020!H\u0002J\u0018\u00101\u001a\u0002022\u0006\u0010&\u001a\u00020'2\u0006\u00103\u001a\u000204H\u0002J\u0018\u00105\u001a\u00020#2\u0006\u0010,\u001a\u00020)2\u0006\u0010\u0016\u001a\u00020\u0017H\u0002J\u001a\u00106\u001a\u00020#2\u0006\u0010,\u001a\u00020)2\b\u00107\u001a\u0004\u0018\u00010'H\u0002J\u0014\u00108\u001a\u00020\u0015*\u00020)2\u0006\u0010\u0016\u001a\u00020\u0017H\u0002J\f\u00109\u001a\u00020'*\u00020)H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u001b\u0010\b\u001a\u00020\t8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\f\u0010\r\u001a\u0004\b\n\u0010\u000bR\u001b\u0010\u000e\u001a\u00020\u000f8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u0012\u0010\r\u001a\u0004\b\u0010\u0010\u0011¨\u0006<"}, d2 = {"Lcom/vk/id/network/http/HttpClient;", "", "config", "Lcom/vk/id/network/http/HttpClient$Config;", "<init>", "(Lcom/vk/id/network/http/HttpClient$Config;)V", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", "sslConfigurator", "Lcom/vk/id/network/http/ssl/SSLConfigurator;", "getSslConfigurator", "()Lcom/vk/id/network/http/ssl/SSLConfigurator;", "sslConfigurator$delegate", "Lkotlin/Lazy;", "interceptorManager", "Lcom/vk/id/network/http/InterceptorManager;", "getInterceptorManager", "()Lcom/vk/id/network/http/InterceptorManager;", "interceptorManager$delegate", "executeRequest", "Lkotlin/Result;", "Lcom/vk/id/network/http/HttpResponse;", SentryBaseEvent.JsonKeys.REQUEST, "Lcom/vk/id/network/http/HttpRequest;", "executeRequest-IoAF18A", "(Lcom/vk/id/network/http/HttpRequest;)Ljava/lang/Object;", "executeHttpRequest", "executeHttpRequest$network_release", "executeWithInterceptors", "executeWithInterceptors$network_release", "(Lcom/vk/id/network/http/HttpRequest;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "executeHttpRequestInternal", "redirectCount", "", "checkRedirectLimit", "", "createUrlOrThrow", "Ljava/net/URL;", "url", "", "createConnection", "Ljava/net/HttpURLConnection;", "requestUrl", "handleRedirectIfNeeded", "connection", Response.TYPE, "method", "headers", "", "logAndThrowNetworkError", "", "e", "Ljava/io/IOException;", "configureConnection", "sendRequestBody", "body", "getResponse", "readResponseBody", "Config", "Companion", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class HttpClient {
    private static final Companion Companion = new Companion(null);
    private static final Set<Integer> REDIRECT_STATUSES = SetsKt.setOf((Object[]) new Integer[]{Integer.valueOf(RequestCode.NOTIFICATION_PRESSED), Integer.valueOf(RequestCode.NOTIFICATION_DISMISSED), 303, 305, Integer.valueOf(StatusLine.HTTP_TEMP_REDIRECT), Integer.valueOf(StatusLine.HTTP_PERM_REDIRECT)});
    private final Config config;

    /* JADX INFO: renamed from: interceptorManager$delegate, reason: from kotlin metadata */
    private final Lazy interceptorManager;
    private final InternalVKIDLogger logger;

    /* JADX INFO: renamed from: sslConfigurator$delegate, reason: from kotlin metadata */
    private final Lazy sslConfigurator;

    public HttpClient(Config config) {
        Intrinsics.checkNotNullParameter(config, "config");
        this.config = config;
        this.logger = InternalVKIDLog.INSTANCE.createLoggerForTag("HttpClient");
        this.sslConfigurator = LazyKt.lazy(new Function0() { // from class: com.vk.id.network.http.HttpClient$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return HttpClient.sslConfigurator_delegate$lambda$0(this.f$0);
            }
        });
        this.interceptorManager = LazyKt.lazy(new Function0() { // from class: com.vk.id.network.http.HttpClient$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return HttpClient.interceptorManager_delegate$lambda$1(this.f$0);
            }
        });
    }

    /* JADX INFO: compiled from: HttpClient.kt */
    @Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0017\n\u0002\u0010\u000e\n\u0000\b\u0080\b\u0018\u00002\u00020\u0001B?\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\u0006\u0010\t\u001a\u00020\u0005\u0012\u000e\b\u0002\u0010\n\u001a\b\u0012\u0004\u0012\u00020\f0\u000b¢\u0006\u0004\b\r\u0010\u000eJ\t\u0010\u0019\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001a\u001a\u00020\u0005HÆ\u0003J\t\u0010\u001b\u001a\u00020\u0005HÆ\u0003J\t\u0010\u001c\u001a\u00020\bHÆ\u0003J\t\u0010\u001d\u001a\u00020\u0005HÆ\u0003J\u000f\u0010\u001e\u001a\b\u0012\u0004\u0012\u00020\f0\u000bHÆ\u0003JK\u0010\u001f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00052\b\b\u0002\u0010\u0007\u001a\u00020\b2\b\b\u0002\u0010\t\u001a\u00020\u00052\u000e\b\u0002\u0010\n\u001a\b\u0012\u0004\u0012\u00020\f0\u000bHÆ\u0001J\u0013\u0010 \u001a\u00020\b2\b\u0010!\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\"\u001a\u00020\u0005HÖ\u0001J\t\u0010#\u001a\u00020$HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0012R\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0011\u0010\t\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0012R\u0017\u0010\n\u001a\b\u0012\u0004\u0012\u00020\f0\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0018¨\u0006%"}, d2 = {"Lcom/vk/id/network/http/HttpClient$Config;", "", "context", "Landroid/content/Context;", "connectingTimeout", "", "readingTimeout", "followRedirects", "", "maxRedirects", "applicationInterceptors", "", "Lcom/vk/id/network/http/Interceptor;", "<init>", "(Landroid/content/Context;IIZILjava/util/List;)V", "getContext", "()Landroid/content/Context;", "getConnectingTimeout", "()I", "getReadingTimeout", "getFollowRedirects", "()Z", "getMaxRedirects", "getApplicationInterceptors", "()Ljava/util/List;", "component1", "component2", "component3", "component4", "component5", "component6", MenuActionType.COPY, "equals", Request.JsonKeys.OTHER, "hashCode", "toString", "", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final /* data */ class Config {
        private final List<Interceptor> applicationInterceptors;
        private final int connectingTimeout;
        private final Context context;
        private final boolean followRedirects;
        private final int maxRedirects;
        private final int readingTimeout;

        /* JADX WARN: Multi-variable type inference failed */
        public static /* synthetic */ Config copy$default(Config config, Context context, int i, int i2, boolean z, int i3, List list, int i4, Object obj) {
            if ((i4 & 1) != 0) {
                context = config.context;
            }
            if ((i4 & 2) != 0) {
                i = config.connectingTimeout;
            }
            if ((i4 & 4) != 0) {
                i2 = config.readingTimeout;
            }
            if ((i4 & 8) != 0) {
                z = config.followRedirects;
            }
            if ((i4 & 16) != 0) {
                i3 = config.maxRedirects;
            }
            if ((i4 & 32) != 0) {
                list = config.applicationInterceptors;
            }
            int i5 = i3;
            List list2 = list;
            return config.copy(context, i, i2, z, i5, list2);
        }

        /* JADX INFO: renamed from: component1, reason: from getter */
        public final Context getContext() {
            return this.context;
        }

        /* JADX INFO: renamed from: component2, reason: from getter */
        public final int getConnectingTimeout() {
            return this.connectingTimeout;
        }

        /* JADX INFO: renamed from: component3, reason: from getter */
        public final int getReadingTimeout() {
            return this.readingTimeout;
        }

        /* JADX INFO: renamed from: component4, reason: from getter */
        public final boolean getFollowRedirects() {
            return this.followRedirects;
        }

        /* JADX INFO: renamed from: component5, reason: from getter */
        public final int getMaxRedirects() {
            return this.maxRedirects;
        }

        public final List<Interceptor> component6() {
            return this.applicationInterceptors;
        }

        public final Config copy(Context context, int connectingTimeout, int readingTimeout, boolean followRedirects, int maxRedirects, List<? extends Interceptor> applicationInterceptors) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(applicationInterceptors, "applicationInterceptors");
            return new Config(context, connectingTimeout, readingTimeout, followRedirects, maxRedirects, applicationInterceptors);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof Config)) {
                return false;
            }
            Config config = (Config) other;
            return Intrinsics.areEqual(this.context, config.context) && this.connectingTimeout == config.connectingTimeout && this.readingTimeout == config.readingTimeout && this.followRedirects == config.followRedirects && this.maxRedirects == config.maxRedirects && Intrinsics.areEqual(this.applicationInterceptors, config.applicationInterceptors);
        }

        public int hashCode() {
            return (((((((((this.context.hashCode() * 31) + Integer.hashCode(this.connectingTimeout)) * 31) + Integer.hashCode(this.readingTimeout)) * 31) + Boolean.hashCode(this.followRedirects)) * 31) + Integer.hashCode(this.maxRedirects)) * 31) + this.applicationInterceptors.hashCode();
        }

        public String toString() {
            return "Config(context=" + this.context + ", connectingTimeout=" + this.connectingTimeout + ", readingTimeout=" + this.readingTimeout + ", followRedirects=" + this.followRedirects + ", maxRedirects=" + this.maxRedirects + ", applicationInterceptors=" + this.applicationInterceptors + ")";
        }

        /* JADX WARN: Multi-variable type inference failed */
        public Config(Context context, int i, int i2, boolean z, int i3, List<? extends Interceptor> applicationInterceptors) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(applicationInterceptors, "applicationInterceptors");
            this.context = context;
            this.connectingTimeout = i;
            this.readingTimeout = i2;
            this.followRedirects = z;
            this.maxRedirects = i3;
            this.applicationInterceptors = applicationInterceptors;
        }

        public final Context getContext() {
            return this.context;
        }

        public final int getConnectingTimeout() {
            return this.connectingTimeout;
        }

        public final int getReadingTimeout() {
            return this.readingTimeout;
        }

        public final boolean getFollowRedirects() {
            return this.followRedirects;
        }

        public final int getMaxRedirects() {
            return this.maxRedirects;
        }

        public /* synthetic */ Config(Context context, int i, int i2, boolean z, int i3, List list, int i4, DefaultConstructorMarker defaultConstructorMarker) {
            this(context, i, i2, z, i3, (i4 & 32) != 0 ? CollectionsKt.emptyList() : list);
        }

        public final List<Interceptor> getApplicationInterceptors() {
            return this.applicationInterceptors;
        }
    }

    private final SSLConfigurator getSslConfigurator() {
        return (SSLConfigurator) this.sslConfigurator.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final SSLConfigurator sslConfigurator_delegate$lambda$0(HttpClient httpClient) {
        return new SSLConfigurator(httpClient.config.getContext());
    }

    private final InterceptorManager getInterceptorManager() {
        return (InterceptorManager) this.interceptorManager.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final InterceptorManager interceptorManager_delegate$lambda$1(HttpClient httpClient) {
        return new InterceptorManager(httpClient, httpClient.config.getApplicationInterceptors());
    }

    /* JADX INFO: renamed from: executeRequest-IoAF18A, reason: not valid java name */
    public final Object m9313executeRequestIoAF18A(HttpRequest request) {
        Intrinsics.checkNotNullParameter(request, "request");
        try {
            HttpResponse httpResponse = (HttpResponse) BuildersKt__BuildersKt.runBlocking$default(null, new HttpClient$executeRequest$response$1(this, request, null), 1, null);
            Result.Companion companion = Result.INSTANCE;
            return Result.m9861constructorimpl(httpResponse);
        } catch (CancellationException e) {
            throw e;
        } catch (Throwable th) {
            Result.Companion companion2 = Result.INSTANCE;
            return Result.m9861constructorimpl(ResultKt.createFailure(th));
        }
    }

    public final HttpResponse executeHttpRequest$network_release(HttpRequest request) {
        Intrinsics.checkNotNullParameter(request, "request");
        return executeHttpRequestInternal(request, 0);
    }

    public final Object executeWithInterceptors$network_release(HttpRequest httpRequest, Continuation<? super HttpResponse> continuation) {
        return getInterceptorManager().proceed(httpRequest, continuation);
    }

    /* JADX WARN: Code duplicated, block: B:43:0x0078  */
    /* JADX WARN: Code duplicated, block: B:55:? A[SYNTHETIC] */
    private final HttpResponse executeHttpRequestInternal(HttpRequest request, int redirectCount) throws Throwable {
        IOException iOException;
        Throwable th;
        checkRedirectLimit(redirectCount);
        URL urlCreateUrlOrThrow = createUrlOrThrow(request.getUrl());
        HttpURLConnection httpURLConnection = null;
        try {
            HttpURLConnection httpURLConnectionCreateConnection = createConnection(urlCreateUrlOrThrow);
            try {
                if (Intrinsics.areEqual(urlCreateUrlOrThrow.getProtocol(), "https")) {
                    try {
                        getSslConfigurator().configureSSL(httpURLConnectionCreateConnection);
                    } catch (IOException e) {
                        iOException = e;
                        httpURLConnection = httpURLConnectionCreateConnection;
                        try {
                            logAndThrowNetworkError(request.getUrl(), iOException);
                            throw new KotlinNothingValueException();
                        } catch (Throwable th2) {
                            th = th2;
                            th = th;
                            if (httpURLConnection != null) {
                                throw th;
                            }
                            httpURLConnection.disconnect();
                            throw th;
                        }
                    } catch (Throwable th3) {
                        th = th3;
                        httpURLConnection = httpURLConnectionCreateConnection;
                        if (httpURLConnection != null) {
                            throw th;
                        }
                        httpURLConnection.disconnect();
                        throw th;
                    }
                }
                configureConnection(httpURLConnectionCreateConnection, request);
                sendRequestBody(httpURLConnectionCreateConnection, request.getBody());
                HttpResponse response = getResponse(httpURLConnectionCreateConnection, request);
                try {
                    HttpResponse httpResponseHandleRedirectIfNeeded = handleRedirectIfNeeded(httpURLConnectionCreateConnection, response, request.getMethod(), request.getHeaders(), redirectCount);
                    if (httpResponseHandleRedirectIfNeeded != null) {
                        response = httpResponseHandleRedirectIfNeeded;
                    }
                    if (httpURLConnectionCreateConnection != null) {
                        httpURLConnectionCreateConnection.disconnect();
                    }
                    return response;
                } catch (IOException e2) {
                    e = e2;
                    iOException = e;
                    httpURLConnection = httpURLConnectionCreateConnection;
                    logAndThrowNetworkError(request.getUrl(), iOException);
                    throw new KotlinNothingValueException();
                } catch (Throwable th4) {
                    th = th4;
                    th = th;
                    httpURLConnection = httpURLConnectionCreateConnection;
                    if (httpURLConnection != null) {
                        throw th;
                    }
                    httpURLConnection.disconnect();
                    throw th;
                }
            } catch (IOException e3) {
                e = e3;
            } catch (Throwable th5) {
                th = th5;
            }
        } catch (IOException e4) {
            iOException = e4;
        } catch (Throwable th6) {
            th = th6;
            th = th;
            if (httpURLConnection != null) {
                throw th;
            }
            httpURLConnection.disconnect();
            throw th;
        }
    }

    private final void checkRedirectLimit(int redirectCount) {
        if (redirectCount <= this.config.getMaxRedirects()) {
            return;
        }
        throw new IllegalArgumentException(("Too many redirects (max: " + this.config.getMaxRedirects() + ")").toString());
    }

    private final URL createUrlOrThrow(String url) {
        try {
            return new URL(url);
        } catch (MalformedURLException e) {
            throw new IllegalArgumentException("Invalid URL: " + url, e);
        }
    }

    private final HttpURLConnection createConnection(URL requestUrl) {
        if (!Intrinsics.areEqual(requestUrl.getProtocol(), "https")) {
            throw new IllegalArgumentException("Only HTTPS protocol is supported".toString());
        }
        URLConnection uRLConnection = (URLConnection) FirebasePerfUrlConnection.instrument(requestUrl.openConnection());
        Intrinsics.checkNotNull(uRLConnection, "null cannot be cast to non-null type java.net.HttpURLConnection");
        return (HttpURLConnection) uRLConnection;
    }

    private final HttpResponse handleRedirectIfNeeded(HttpURLConnection connection, HttpResponse response, String method, Map<String, String> headers, int redirectCount) {
        String headerField;
        if (!this.config.getFollowRedirects() || !Companion.isRedirect(response.getCode()) || (headerField = connection.getHeaderField("Location")) == null) {
            return null;
        }
        this.logger.debug("Redirecting to: " + headerField + " (status: " + response.getCode() + ")");
        connection.disconnect();
        return executeHttpRequestInternal(new HttpRequest(method, headerField, null, headers, null), redirectCount + 1);
    }

    private final Void logAndThrowNetworkError(String url, IOException e) throws IOException {
        IOException iOException = e;
        this.logger.error("Network error during request to " + url, iOException);
        throw new IOException("Network error: " + e.getMessage(), iOException);
    }

    private final void configureConnection(HttpURLConnection connection, HttpRequest request) throws ProtocolException {
        connection.setConnectTimeout(this.config.getConnectingTimeout());
        connection.setReadTimeout(this.config.getReadingTimeout());
        String upperCase = request.getMethod().toUpperCase(Locale.ROOT);
        Intrinsics.checkNotNullExpressionValue(upperCase, "toUpperCase(...)");
        connection.setRequestMethod(upperCase);
        connection.setUseCaches(false);
        for (Map.Entry<String, String> entry : request.getHeaders().entrySet()) {
            connection.setRequestProperty(entry.getKey(), entry.getValue());
        }
        String contentType = request.getContentType();
        if (contentType != null) {
            connection.setRequestProperty("Content-Type", contentType);
        }
    }

    private final void sendRequestBody(HttpURLConnection connection, String body) throws IOException {
        if (body == null) {
            return;
        }
        try {
            connection.setDoOutput(true);
            OutputStream outputStream = connection.getOutputStream();
            try {
                OutputStream outputStream2 = outputStream;
                Charset UTF_8 = StandardCharsets.UTF_8;
                Intrinsics.checkNotNullExpressionValue(UTF_8, "UTF_8");
                byte[] bytes = body.getBytes(UTF_8);
                Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
                outputStream2.write(bytes);
                outputStream2.flush();
                Unit unit = Unit.INSTANCE;
                CloseableKt.closeFinally(outputStream, null);
            } catch (Throwable th) {
                try {
                    throw th;
                } catch (Throwable th2) {
                    CloseableKt.closeFinally(outputStream, th);
                    throw th2;
                }
            }
        } catch (IOException e) {
            IOException iOException = e;
            this.logger.error("Failed to send request body", iOException);
            throw new IOException("Failed to send request body", iOException);
        }
    }

    private final HttpResponse getResponse(HttpURLConnection httpURLConnection, HttpRequest httpRequest) throws IOException {
        String responseBody;
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        Map<String, List<String>> headerFields = httpURLConnection.getHeaderFields();
        Intrinsics.checkNotNullExpressionValue(headerFields, "getHeaderFields(...)");
        for (Map.Entry<String, List<String>> entry : headerFields.entrySet()) {
            String key = entry.getKey();
            List<String> value = entry.getValue();
            if (key != null) {
                Intrinsics.checkNotNull(value);
                if (!value.isEmpty()) {
                    linkedHashMap.put(key, CollectionsKt.first((List) value));
                }
            }
        }
        try {
            responseBody = readResponseBody(httpURLConnection);
        } catch (IOException e) {
            this.logger.error("Failed to read response body", e);
            responseBody = "";
        }
        String str = responseBody;
        int responseCode = httpURLConnection.getResponseCode();
        String responseMessage = httpURLConnection.getResponseMessage();
        int responseCode2 = httpURLConnection.getResponseCode();
        boolean z = false;
        if (200 <= responseCode2 && responseCode2 < 300) {
            z = true;
        }
        return new HttpResponse(httpRequest, responseCode, responseMessage, str, linkedHashMap, z);
    }

    private final String readResponseBody(HttpURLConnection httpURLConnection) {
        InputStream inputStream;
        if (httpURLConnection.getResponseCode() >= 400) {
            inputStream = httpURLConnection.getErrorStream();
        } else {
            inputStream = httpURLConnection.getInputStream();
        }
        if (inputStream == null) {
            return "";
        }
        try {
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStream, StandardCharsets.UTF_8));
            try {
                String text = TextStreamsKt.readText(bufferedReader);
                CloseableKt.closeFinally(bufferedReader, null);
                return text;
            } catch (Throwable th) {
                try {
                    throw th;
                } catch (Throwable th2) {
                    CloseableKt.closeFinally(bufferedReader, th);
                    throw th2;
                }
            }
        } catch (IOException e) {
            this.logger.error("Failed to read response body", e);
            return "";
        }
    }

    /* JADX INFO: compiled from: HttpClient.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\"\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\u0006R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\n"}, d2 = {"Lcom/vk/id/network/http/HttpClient$Companion;", "", "<init>", "()V", "REDIRECT_STATUSES", "", "", "isRedirect", "", "statusCode", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final boolean isRedirect(int statusCode) {
            return HttpClient.REDIRECT_STATUSES.contains(Integer.valueOf(statusCode));
        }
    }
}
