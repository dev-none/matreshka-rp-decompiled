package ru.ok.tracer.base.http;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.OutputStream;
import kotlin.Metadata;
import kotlin.io.ByteStreamsKt;
import kotlin.io.CloseableKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: HttpFileBody.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0000\u0018\u00002\u00020\u0001B\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\u0010\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0016R\u0014\u0010\u0007\u001a\u00020\b8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\t\u0010\nR\u0014\u0010\u0002\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lru/ok/tracer/base/http/HttpFileBody;", "Lru/ok/tracer/base/http/HttpRequestBody;", "contentType", "", "file", "Ljava/io/File;", "(Ljava/lang/String;Ljava/io/File;)V", "contentLength", "", "getContentLength", "()J", "getContentType", "()Ljava/lang/String;", "writeTo", "", "stream", "Ljava/io/OutputStream;", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class HttpFileBody implements HttpRequestBody {
    private final String contentType;
    private final File file;

    public HttpFileBody(String contentType, File file) {
        Intrinsics.checkNotNullParameter(contentType, "contentType");
        Intrinsics.checkNotNullParameter(file, "file");
        this.contentType = contentType;
        this.file = file;
    }

    @Override // ru.ok.tracer.base.http.HttpRequestBody, ru.ok.tracer.base.http.HttpResponseBody
    public String getContentType() {
        return this.contentType;
    }

    @Override // ru.ok.tracer.base.http.HttpRequestBody
    public long getContentLength() {
        return this.file.length();
    }

    @Override // ru.ok.tracer.base.http.HttpRequestBody
    public void writeTo(OutputStream stream) throws IOException {
        Intrinsics.checkNotNullParameter(stream, "stream");
        FileInputStream fileInputStream = new FileInputStream(this.file);
        try {
            ByteStreamsKt.copyTo$default(fileInputStream, stream, 0, 2, null);
            CloseableKt.closeFinally(fileInputStream, null);
        } catch (Throwable th) {
            try {
                throw th;
            } catch (Throwable th2) {
                CloseableKt.closeFinally(fileInputStream, th);
                throw th2;
            }
        }
    }
}
