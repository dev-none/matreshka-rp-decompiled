package ru.ok.tracer.base.http;

import androidx.webkit.internal.AssetHelper;
import io.sentry.protocol.OperatingSystem;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.random.Random;

/* JADX INFO: compiled from: HttpMultipartBody.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\u0018\u0000 \u000f2\u00020\u0001:\u0001\u000fB\u0005¢\u0006\u0002\u0010\u0002J\"\u0010\u0006\u001a\u00020\u00002\u0006\u0010\u0007\u001a\u00020\b2\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\b2\u0006\u0010\n\u001a\u00020\u000bJ\u0016\u0010\f\u001a\u00020\u00002\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\r\u001a\u00020\bJ\u0006\u0010\u000e\u001a\u00020\u000bR\u0014\u0010\u0003\u001a\b\u0012\u0004\u0012\u00020\u00050\u0004X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0010"}, d2 = {"Lru/ok/tracer/base/http/HttpMultipartBodyBuilder;", "", "()V", "parts", "", "Lru/ok/tracer/base/http/HttpPart;", "add", "name", "", "filename", "body", "Lru/ok/tracer/base/http/HttpRequestBody;", "addString", "content", OperatingSystem.JsonKeys.BUILD, "Companion", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class HttpMultipartBodyBuilder {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final List<HttpPart> parts = new ArrayList();

    public final HttpMultipartBodyBuilder addString(String name, String content) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(content, "content");
        this.parts.add(new HttpPart(name, null, null, HttpRequestBody.Companion.fromString$default(HttpRequestBody.INSTANCE, AssetHelper.DEFAULT_MIME_TYPE, content, null, 4, null), 6, null));
        return this;
    }

    public static /* synthetic */ HttpMultipartBodyBuilder add$default(HttpMultipartBodyBuilder httpMultipartBodyBuilder, String str, String str2, HttpRequestBody httpRequestBody, int i, Object obj) {
        if ((i & 2) != 0) {
            str2 = null;
        }
        return httpMultipartBodyBuilder.add(str, str2, httpRequestBody);
    }

    public final HttpMultipartBodyBuilder add(String name, String filename, HttpRequestBody body) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(body, "body");
        this.parts.add(new HttpPart(name, filename, body.getContentType(), body));
        return this;
    }

    public final HttpRequestBody build() {
        String str = String.format("------------%016x", Arrays.copyOf(new Object[]{Long.valueOf(Random.INSTANCE.nextLong())}, 1));
        Intrinsics.checkNotNullExpressionValue(str, "format(this, *args)");
        return new HttpMultipartBody(str, CollectionsKt.toList(this.parts));
    }

    /* JADX INFO: compiled from: HttpMultipartBody.kt */
    @Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J%\u0010\u0003\u001a\u00020\u00042\u0017\u0010\u0005\u001a\u0013\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\b0\u0006¢\u0006\u0002\b\tH\u0086\bø\u0001\u0000\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\n"}, d2 = {"Lru/ok/tracer/base/http/HttpMultipartBodyBuilder$Companion;", "", "()V", OperatingSystem.JsonKeys.BUILD, "Lru/ok/tracer/base/http/HttpRequestBody;", "block", "Lkotlin/Function1;", "Lru/ok/tracer/base/http/HttpMultipartBodyBuilder;", "", "Lkotlin/ExtensionFunctionType;", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final HttpRequestBody build(Function1<? super HttpMultipartBodyBuilder, Unit> block) {
            Intrinsics.checkNotNullParameter(block, "block");
            HttpMultipartBodyBuilder httpMultipartBodyBuilder = new HttpMultipartBodyBuilder();
            block.invoke(httpMultipartBodyBuilder);
            return httpMultipartBodyBuilder.build();
        }
    }
}
