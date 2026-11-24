package ru.ok.tracer.base.http;

import java.io.IOException;
import java.io.OutputStream;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: HttpMultipartBody.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0000\u0018\u00002\u00020\u0001B-\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0002\u0010\bJ\u000e\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0013R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u000e\u0010\u000b\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\f\u001a\u00020\r8@X\u0080\u0004¢\u0006\u0006\u001a\u0004\b\u000e\u0010\u000f¨\u0006\u0014"}, d2 = {"Lru/ok/tracer/base/http/HttpPart;", "", "name", "", "filename", "contentType", "body", "Lru/ok/tracer/base/http/HttpRequestBody;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lru/ok/tracer/base/http/HttpRequestBody;)V", "getBody", "()Lru/ok/tracer/base/http/HttpRequestBody;", "headers", "length", "", "getLength$tracer_base_release", "()J", "writeTo", "", "stream", "Ljava/io/OutputStream;", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class HttpPart {
    private final HttpRequestBody body;
    private final String headers;

    public HttpPart(String name, String str, String str2, HttpRequestBody body) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(body, "body");
        this.body = body;
        StringBuilder sb = new StringBuilder();
        sb.append("Content-Disposition: form-data; name=");
        HttpMultipartBodyKt.appendQuoted(sb, name);
        if (str != null) {
            sb.append("; filename=");
            HttpMultipartBodyKt.appendQuoted(sb, str);
        }
        sb.append("\r\n");
        if (str2 != null) {
            sb.append("Content-Type: ");
            sb.append(str2);
            sb.append("\r\n");
        }
        String string = sb.toString();
        Intrinsics.checkNotNullExpressionValue(string, "StringBuilder().apply(builderAction).toString()");
        this.headers = string;
    }

    public /* synthetic */ HttpPart(String str, String str2, String str3, HttpRequestBody httpRequestBody, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, (i & 2) != 0 ? null : str2, (i & 4) != 0 ? null : str3, httpRequestBody);
    }

    public final HttpRequestBody getBody() {
        return this.body;
    }

    public final long getLength$tracer_base_release() {
        if (this.body.getContentLength() < 0) {
            return -1L;
        }
        return ((long) (HttpMultipartBodyKt.getUtf8Length(this.headers) + HttpMultipartBodyKt.CRLF.length)) + this.body.getContentLength() + ((long) HttpMultipartBodyKt.CRLF.length);
    }

    public final void writeTo(OutputStream stream) throws IOException {
        Intrinsics.checkNotNullParameter(stream, "stream");
        HttpMultipartBodyKt.writeUtf8(stream, this.headers);
        stream.write(HttpMultipartBodyKt.CRLF);
        this.body.writeTo(stream);
        stream.write(HttpMultipartBodyKt.CRLF);
    }
}
