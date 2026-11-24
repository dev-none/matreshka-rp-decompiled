package ru.ok.tracer.base.http;

import java.io.IOException;
import java.io.OutputStream;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: HttpMultipartBody.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0006\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0000\u0018\u00002\u00020\u0001B\u001b\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\u0002\u0010\u0007J\u0010\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0012H\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\b\u001a\u00020\tX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0014\u0010\f\u001a\u00020\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0013"}, d2 = {"Lru/ok/tracer/base/http/HttpMultipartBody;", "Lru/ok/tracer/base/http/HttpRequestBody;", "boundary", "", "parts", "", "Lru/ok/tracer/base/http/HttpPart;", "(Ljava/lang/String;Ljava/util/List;)V", "contentLength", "", "getContentLength", "()J", "contentType", "getContentType", "()Ljava/lang/String;", "writeTo", "", "stream", "Ljava/io/OutputStream;", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class HttpMultipartBody implements HttpRequestBody {
    private final String boundary;
    private final long contentLength;
    private final String contentType;
    private final List<HttpPart> parts;

    /* JADX WARN: Code duplicated, block: B:16:0x0075 A[LOOP:0: B:14:0x006f->B:16:0x0075, LOOP_END] */
    public HttpMultipartBody(String boundary, List<HttpPart> parts) {
        long j;
        long length;
        Iterator<T> it;
        Intrinsics.checkNotNullParameter(boundary, "boundary");
        Intrinsics.checkNotNullParameter(parts, "parts");
        this.boundary = boundary;
        this.parts = parts;
        this.contentType = "multipart/form-data; boundary=" + boundary;
        List<HttpPart> list = parts;
        if ((list instanceof Collection) && list.isEmpty()) {
            List<HttpPart> list2 = this.parts;
            length = ((long) HttpMultipartBodyKt.DASHDASH.length) + ((long) HttpMultipartBodyKt.getUtf8Length(this.boundary)) + ((long) HttpMultipartBodyKt.CRLF.length);
            it = list2.iterator();
            while (it.hasNext()) {
                length = length + ((long) HttpMultipartBodyKt.DASHDASH.length) + ((long) HttpMultipartBodyKt.getUtf8Length(this.boundary)) + ((long) HttpMultipartBodyKt.CRLF.length) + ((HttpPart) it.next()).getLength$tracer_base_release();
            }
            j = length;
        } else {
            Iterator<T> it2 = list.iterator();
            while (it2.hasNext()) {
                if (((HttpPart) it2.next()).getBody().getContentLength() < 0) {
                    j = -1;
                }
            }
            List<HttpPart> list3 = this.parts;
            length = ((long) HttpMultipartBodyKt.DASHDASH.length) + ((long) HttpMultipartBodyKt.getUtf8Length(this.boundary)) + ((long) HttpMultipartBodyKt.CRLF.length);
            it = list3.iterator();
            while (it.hasNext()) {
                length = length + ((long) HttpMultipartBodyKt.DASHDASH.length) + ((long) HttpMultipartBodyKt.getUtf8Length(this.boundary)) + ((long) HttpMultipartBodyKt.CRLF.length) + ((HttpPart) it.next()).getLength$tracer_base_release();
            }
            j = length;
        }
        this.contentLength = j;
    }

    @Override // ru.ok.tracer.base.http.HttpRequestBody, ru.ok.tracer.base.http.HttpResponseBody
    public String getContentType() {
        return this.contentType;
    }

    @Override // ru.ok.tracer.base.http.HttpRequestBody
    public long getContentLength() {
        return this.contentLength;
    }

    @Override // ru.ok.tracer.base.http.HttpRequestBody
    public void writeTo(OutputStream stream) throws IOException {
        Intrinsics.checkNotNullParameter(stream, "stream");
        for (HttpPart httpPart : this.parts) {
            stream.write(HttpMultipartBodyKt.DASHDASH);
            HttpMultipartBodyKt.writeUtf8(stream, this.boundary);
            stream.write(HttpMultipartBodyKt.CRLF);
            httpPart.writeTo(stream);
        }
        stream.write(HttpMultipartBodyKt.DASHDASH);
        HttpMultipartBodyKt.writeUtf8(stream, this.boundary);
        stream.write(HttpMultipartBodyKt.DASHDASH);
    }
}
