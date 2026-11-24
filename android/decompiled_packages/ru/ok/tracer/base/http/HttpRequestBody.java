package ru.ok.tracer.base.http;

import java.io.File;
import java.io.IOException;
import java.io.OutputStream;
import java.nio.charset.Charset;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;

/* JADX INFO: compiled from: HttpRequest.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\bv\u0018\u0000 \u000e2\u00020\u0001:\u0001\u000eJ\u0010\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\rH&R\u0012\u0010\u0002\u001a\u00020\u0003X¦\u0004¢\u0006\u0006\u001a\u0004\b\u0004\u0010\u0005R\u0012\u0010\u0006\u001a\u00020\u0007X¦\u0004¢\u0006\u0006\u001a\u0004\b\b\u0010\t\u0082\u0001\u0003\u000f\u0010\u0011¨\u0006\u0012"}, d2 = {"Lru/ok/tracer/base/http/HttpRequestBody;", "", "contentLength", "", "getContentLength", "()J", "contentType", "", "getContentType", "()Ljava/lang/String;", "writeTo", "", "stream", "Ljava/io/OutputStream;", "Companion", "Lru/ok/tracer/base/http/HttpByteArrayBody;", "Lru/ok/tracer/base/http/HttpFileBody;", "Lru/ok/tracer/base/http/HttpMultipartBody;", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public interface HttpRequestBody {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = Companion.$$INSTANCE;

    long getContentLength();

    String getContentType();

    void writeTo(OutputStream stream) throws IOException;

    /* JADX INFO: compiled from: HttpRequest.kt */
    @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0012\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0016\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\bJ\u0016\u0010\t\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\nJ \u0010\u000b\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\u00062\b\b\u0002\u0010\f\u001a\u00020\r¨\u0006\u000e"}, d2 = {"Lru/ok/tracer/base/http/HttpRequestBody$Companion;", "", "()V", "fromBytes", "Lru/ok/tracer/base/http/HttpRequestBody;", "contentType", "", "content", "", "fromFile", "Ljava/io/File;", "fromString", "charset", "Ljava/nio/charset/Charset;", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    public static final class Companion {
        static final /* synthetic */ Companion $$INSTANCE = new Companion();

        private Companion() {
        }

        public final HttpRequestBody fromBytes(String contentType, byte[] content) {
            Intrinsics.checkNotNullParameter(contentType, "contentType");
            Intrinsics.checkNotNullParameter(content, "content");
            return new HttpByteArrayBody(contentType, content);
        }

        public static /* synthetic */ HttpRequestBody fromString$default(Companion companion, String str, String str2, Charset charset, int i, Object obj) {
            if ((i & 4) != 0) {
                charset = Charsets.UTF_8;
            }
            return companion.fromString(str, str2, charset);
        }

        public final HttpRequestBody fromString(String contentType, String content, Charset charset) {
            Intrinsics.checkNotNullParameter(contentType, "contentType");
            Intrinsics.checkNotNullParameter(content, "content");
            Intrinsics.checkNotNullParameter(charset, "charset");
            byte[] bytes = content.getBytes(charset);
            Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
            return new HttpByteArrayBody(contentType, bytes);
        }

        public final HttpRequestBody fromFile(String contentType, File content) {
            Intrinsics.checkNotNullParameter(contentType, "contentType");
            Intrinsics.checkNotNullParameter(content, "content");
            return new HttpFileBody(contentType, content);
        }
    }
}
