package ru.ok.tracer.base.http;

import java.io.IOException;
import java.io.OutputStream;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: HttpByteArrayBody.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0012\n\u0002\b\u0004\n\u0002\u0010\t\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\b\u0000\u0018\u00002\u00020\u00012\u00020\u0002B\u0015\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0002\u0010\u0007J\b\u0010\u0010\u001a\u00020\u0011H\u0016J\u0010\u0010\u0012\u001a\u00020\u00112\u0006\u0010\u0013\u001a\u00020\u0014H\u0016R\u0014\u0010\u0005\u001a\u00020\u0006X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0014\u0010\n\u001a\u00020\u000b8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\f\u0010\rR\u0014\u0010\u0003\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000f¨\u0006\u0015"}, d2 = {"Lru/ok/tracer/base/http/HttpByteArrayBody;", "Lru/ok/tracer/base/http/HttpRequestBody;", "Lru/ok/tracer/base/http/HttpResponseBody;", "contentType", "", "bytes", "", "(Ljava/lang/String;[B)V", "getBytes", "()[B", "contentLength", "", "getContentLength", "()J", "getContentType", "()Ljava/lang/String;", "close", "", "writeTo", "stream", "Ljava/io/OutputStream;", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class HttpByteArrayBody implements HttpRequestBody, HttpResponseBody {
    private final byte[] bytes;
    private final String contentType;

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() {
    }

    public HttpByteArrayBody(String contentType, byte[] bytes) {
        Intrinsics.checkNotNullParameter(contentType, "contentType");
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        this.contentType = contentType;
        this.bytes = bytes;
    }

    @Override // ru.ok.tracer.base.http.HttpRequestBody, ru.ok.tracer.base.http.HttpResponseBody
    public String getContentType() {
        return this.contentType;
    }

    @Override // ru.ok.tracer.base.http.HttpResponseBody
    public byte[] getBytes() {
        return this.bytes;
    }

    @Override // ru.ok.tracer.base.http.HttpRequestBody
    public long getContentLength() {
        return getBytes().length;
    }

    @Override // ru.ok.tracer.base.http.HttpRequestBody
    public void writeTo(OutputStream stream) throws IOException {
        Intrinsics.checkNotNullParameter(stream, "stream");
        stream.write(getBytes());
    }
}
