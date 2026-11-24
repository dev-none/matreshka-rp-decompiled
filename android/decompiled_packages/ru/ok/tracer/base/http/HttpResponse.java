package ru.ok.tracer.base.http;

import java.io.Closeable;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: HttpResponse.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0010\u0002\n\u0000\u0018\u00002\u00020\u0001B!\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\u0002\u0010\bJ\b\u0010\u000f\u001a\u00020\u0010H\u0016R\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000e¨\u0006\u0011"}, d2 = {"Lru/ok/tracer/base/http/HttpResponse;", "Ljava/io/Closeable;", "statusCode", "", "message", "", "body", "Lru/ok/tracer/base/http/HttpResponseBody;", "(ILjava/lang/String;Lru/ok/tracer/base/http/HttpResponseBody;)V", "getBody", "()Lru/ok/tracer/base/http/HttpResponseBody;", "getMessage", "()Ljava/lang/String;", "getStatusCode", "()I", "close", "", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class HttpResponse implements Closeable {
    private final HttpResponseBody body;
    private final String message;
    private final int statusCode;

    public HttpResponse(int i, String message, HttpResponseBody httpResponseBody) {
        Intrinsics.checkNotNullParameter(message, "message");
        this.statusCode = i;
        this.message = message;
        this.body = httpResponseBody;
    }

    public final int getStatusCode() {
        return this.statusCode;
    }

    public final String getMessage() {
        return this.message;
    }

    public final HttpResponseBody getBody() {
        return this.body;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        HttpResponseBody httpResponseBody = this.body;
        if (httpResponseBody != null) {
            httpResponseBody.close();
        }
    }
}
