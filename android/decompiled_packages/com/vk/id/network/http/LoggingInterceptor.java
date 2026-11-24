package com.vk.id.network.http;

import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import io.sentry.SentryBaseEvent;
import io.sentry.protocol.Response;
import java.util.Map;
import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: LoggingInterceptor.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0002\b\u0002\b\u0000\u0018\u0000 \u00152\u00020\u0001:\u0001\u0015B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0016\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000bH\u0096@¢\u0006\u0002\u0010\fJ\u0010\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0002J\u0018\u0010\u0011\u001a\u00020\u000e2\u0006\u0010\u0012\u001a\u00020\t2\u0006\u0010\u0013\u001a\u00020\u0014H\u0002R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0016"}, d2 = {"Lcom/vk/id/network/http/LoggingInterceptor;", "Lcom/vk/id/network/http/Interceptor;", "tag", "", "<init>", "(Ljava/lang/String;)V", "httpLogger", "Lcom/vk/id/logger/InternalVKIDLogger;", "intercept", "Lcom/vk/id/network/http/HttpResponse;", "chain", "Lcom/vk/id/network/http/Interceptor$Chain;", "(Lcom/vk/id/network/http/Interceptor$Chain;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "logRequest", "", SentryBaseEvent.JsonKeys.REQUEST, "Lcom/vk/id/network/http/HttpRequest;", "logResponse", Response.TYPE, "duration", "", "Companion", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class LoggingInterceptor implements Interceptor {
    private static final Companion Companion = new Companion(null);

    @Deprecated
    public static final int MAX_LOG_BODY_LENGTH = 1024;
    private final InternalVKIDLogger httpLogger;

    public LoggingInterceptor(String tag) {
        Intrinsics.checkNotNullParameter(tag, "tag");
        this.httpLogger = InternalVKIDLog.INSTANCE.createLoggerForTag(tag);
    }

    @Override // com.vk.id.network.http.Interceptor
    public Object intercept(Interceptor.Chain chain, Continuation<? super HttpResponse> continuation) {
        return chain.proceed(chain.getRequest(), continuation);
    }

    private final void logRequest(HttpRequest request) {
        StringBuilder sb = new StringBuilder();
        sb.append("--> " + request.getMethod() + " " + request.getUrl());
        sb.append(System.lineSeparator());
        for (Map.Entry<String, String> entry : request.getHeaders().entrySet()) {
            sb.append(entry.getKey() + ": " + entry.getValue());
            sb.append(System.lineSeparator());
        }
        String body = request.getBody();
        if (body != null) {
            if (body.length() > 1024) {
                body = StringsKt.take(body, 1024) + "... (truncated)";
            }
            sb.append(System.lineSeparator());
            sb.append(body);
            sb.append(System.lineSeparator());
        }
        sb.append("--> END " + request.getMethod());
        InternalVKIDLogger internalVKIDLogger = this.httpLogger;
        String string = sb.toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        internalVKIDLogger.debug(string);
    }

    private final void logResponse(HttpResponse response, long duration) {
        StringBuilder sb = new StringBuilder();
        sb.append("<-- " + response.getCode() + " " + response.getMessage() + " " + response.getRequest().getUrl() + " (" + duration + "ms)");
        sb.append(System.lineSeparator());
        for (Map.Entry<String, String> entry : response.getHeaders().entrySet()) {
            sb.append(entry.getKey() + ": " + entry.getValue());
            sb.append(System.lineSeparator());
        }
        String body = response.getBody();
        if (body != null) {
            if (body.length() > 1024) {
                body = StringsKt.take(body, 1024) + "... (truncated)";
            }
            sb.append(System.lineSeparator());
            sb.append(body);
            sb.append(System.lineSeparator());
        }
        sb.append("<-- END HTTP");
        InternalVKIDLogger internalVKIDLogger = this.httpLogger;
        String string = sb.toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        internalVKIDLogger.debug(string);
    }

    /* JADX INFO: compiled from: LoggingInterceptor.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000¨\u0006\u0006"}, d2 = {"Lcom/vk/id/network/http/LoggingInterceptor$Companion;", "", "<init>", "()V", "MAX_LOG_BODY_LENGTH", "", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }
}
