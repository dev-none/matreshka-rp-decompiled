package com.vk.id.network.http;

import com.vk.id.common.InternalVKIDApi;
import io.sentry.SentryBaseEvent;
import io.sentry.protocol.OperatingSystem;
import io.sentry.protocol.Request;
import java.net.URL;
import java.util.Map;
import kotlin.Metadata;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: HttpRequest.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010$\n\u0002\b\u0011\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0007\u0018\u0000 '2\u00020\u0001:\u0002&'BC\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\u0014\b\u0002\u0010\u0006\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00030\u0007\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\t\u0010\nJ\u0006\u0010\u0018\u001a\u00020\u0019J\u0013\u0010\u001a\u001a\u00020\u001b2\b\u0010\u001c\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\u001d\u001a\u00020\u001eH\u0016J\b\u0010\u001f\u001a\u00020\u0003H\u0016J\u0006\u0010 \u001a\u00020!J\u0006\u0010\"\u001a\u00020#J\u0010\u0010$\u001a\u0004\u0018\u00010\u00032\u0006\u0010%\u001a\u00020\u0003R\u001c\u0010\u0002\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u000b\u0010\f\u001a\u0004\b\r\u0010\u000eR\u001c\u0010\u0004\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u000f\u0010\f\u001a\u0004\b\u0010\u0010\u000eR\u001e\u0010\u0005\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0011\u0010\f\u001a\u0004\b\u0012\u0010\u000eR(\u0010\u0006\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00030\u00078\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0013\u0010\f\u001a\u0004\b\u0014\u0010\u0015R\u001e\u0010\b\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0016\u0010\f\u001a\u0004\b\u0017\u0010\u000e¨\u0006("}, d2 = {"Lcom/vk/id/network/http/HttpRequest;", "", "method", "", "url", "body", "headers", "", "contentType", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V", "getMethod$annotations", "()V", "getMethod", "()Ljava/lang/String;", "getUrl$annotations", "getUrl", "getBody$annotations", "getBody", "getHeaders$annotations", "getHeaders", "()Ljava/util/Map;", "getContentType$annotations", "getContentType", "newBuilder", "Lcom/vk/id/network/http/HttpRequest$Builder;", "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "toUrl", "Ljava/net/URL;", "urlBuilder", "Lcom/vk/id/network/http/UrlBuilder;", "header", "name", "Builder", "Companion", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class HttpRequest {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final String body;
    private final String contentType;
    private final Map<String, String> headers;
    private final String method;
    private final String url;

    @InternalVKIDApi
    public static /* synthetic */ void getBody$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getContentType$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getHeaders$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getMethod$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getUrl$annotations() {
    }

    public HttpRequest(String method, String url, String str, Map<String, String> headers, String str2) {
        Intrinsics.checkNotNullParameter(method, "method");
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(headers, "headers");
        this.method = method;
        this.url = url;
        this.body = str;
        this.headers = headers;
        this.contentType = str2;
    }

    public final String getMethod() {
        return this.method;
    }

    public final String getUrl() {
        return this.url;
    }

    public final String getBody() {
        return this.body;
    }

    public final Map<String, String> getHeaders() {
        return this.headers;
    }

    public /* synthetic */ HttpRequest(String str, String str2, String str3, Map map, String str4, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, str3, (i & 8) != 0 ? MapsKt.emptyMap() : map, (i & 16) != 0 ? null : str4);
    }

    public final String getContentType() {
        return this.contentType;
    }

    public final Builder newBuilder() {
        return new Builder(this);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof HttpRequest)) {
            return false;
        }
        HttpRequest httpRequest = (HttpRequest) other;
        return Intrinsics.areEqual(this.method, httpRequest.method) && Intrinsics.areEqual(this.url, httpRequest.url) && Intrinsics.areEqual(this.body, httpRequest.body) && Intrinsics.areEqual(this.headers, httpRequest.headers) && Intrinsics.areEqual(this.contentType, httpRequest.contentType);
    }

    public int hashCode() {
        int iHashCode = ((this.method.hashCode() * 31) + this.url.hashCode()) * 31;
        String str = this.body;
        int iHashCode2 = (((iHashCode + (str != null ? str.hashCode() : 0)) * 31) + this.headers.hashCode()) * 31;
        String str2 = this.contentType;
        return iHashCode2 + (str2 != null ? str2.hashCode() : 0);
    }

    public String toString() {
        return "HttpRequest(method='" + this.method + "', url='" + this.url + "', body=" + this.body + ", headers=" + this.headers + ", contentType=" + this.contentType + ")";
    }

    public final URL toUrl() {
        return new URL(this.url);
    }

    public final UrlBuilder urlBuilder() {
        return new UrlBuilder(this.url);
    }

    public final String header(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return this.headers.get(name);
    }

    /* JADX INFO: compiled from: HttpRequest.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010%\n\u0002\b\u0005\n\u0002\u0010$\n\u0002\b\u0002\b\u0007\u0018\u00002\u00020\u0001B\u0011\b\u0010\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\u0006\u001a\u00020\u00002\u0006\u0010\u0006\u001a\u00020\u0007H\u0007J\u000e\u0010\b\u001a\u00020\u00002\u0006\u0010\b\u001a\u00020\u0007J\u0010\u0010\t\u001a\u00020\u00002\b\u0010\t\u001a\u0004\u0018\u00010\u0007J\u0016\u0010\r\u001a\u00020\u00002\u0006\u0010\u000e\u001a\u00020\u00072\u0006\u0010\u000f\u001a\u00020\u0007J\u0016\u0010\u0010\u001a\u00020\u00002\u0006\u0010\u000e\u001a\u00020\u00072\u0006\u0010\u000f\u001a\u00020\u0007J\u001a\u0010\n\u001a\u00020\u00002\u0012\u0010\n\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u00070\u0011J\u0010\u0010\f\u001a\u00020\u00002\b\u0010\f\u001a\u0004\u0018\u00010\u0007J\u0006\u0010\u0012\u001a\u00020\u0003R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\t\u001a\u0004\u0018\u00010\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u0010\n\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u00070\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\f\u001a\u0004\u0018\u00010\u0007X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0013"}, d2 = {"Lcom/vk/id/network/http/HttpRequest$Builder;", "", SentryBaseEvent.JsonKeys.REQUEST, "Lcom/vk/id/network/http/HttpRequest;", "<init>", "(Lcom/vk/id/network/http/HttpRequest;)V", "method", "", "url", "body", "headers", "", "contentType", "header", "name", "value", "addHeader", "", OperatingSystem.JsonKeys.BUILD, "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Builder {
        private String body;
        private String contentType;
        private Map<String, String> headers;
        private String method;
        private String url;

        public Builder(HttpRequest request) {
            Intrinsics.checkNotNullParameter(request, "request");
            this.method = request.getMethod();
            this.url = request.getUrl();
            this.body = request.getBody();
            this.headers = MapsKt.toMutableMap(request.getHeaders());
            this.contentType = request.getContentType();
        }

        @InternalVKIDApi
        public final Builder method(String method) {
            Intrinsics.checkNotNullParameter(method, "method");
            this.method = method;
            return this;
        }

        public final Builder url(String url) {
            Intrinsics.checkNotNullParameter(url, "url");
            this.url = url;
            return this;
        }

        public final Builder body(String body) {
            this.body = body;
            return this;
        }

        public final Builder header(String name, String value) {
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(value, "value");
            this.headers.put(name, value);
            return this;
        }

        public final Builder addHeader(String name, String value) {
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(value, "value");
            this.headers.put(name, value);
            return this;
        }

        public final Builder headers(Map<String, String> headers) {
            Intrinsics.checkNotNullParameter(headers, "headers");
            this.headers.clear();
            this.headers.putAll(headers);
            return this;
        }

        public final Builder contentType(String contentType) {
            this.contentType = contentType;
            return this;
        }

        public final HttpRequest build() {
            return new HttpRequest(this.method, this.url, this.body, MapsKt.toMap(this.headers), this.contentType);
        }
    }

    /* JADX INFO: compiled from: HttpRequest.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\b\u0087\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u0018\u0010\b\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\b\u0010\t\u001a\u0004\u0018\u00010\u0007J\u0016\u0010\b\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\t\u001a\u00020\n¨\u0006\u000b"}, d2 = {"Lcom/vk/id/network/http/HttpRequest$Companion;", "", "<init>", "()V", "get", "Lcom/vk/id/network/http/HttpRequest;", "url", "", "post", "body", "Lcom/vk/id/network/http/FormBody;", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final HttpRequest get(String url) {
            Intrinsics.checkNotNullParameter(url, "url");
            return new HttpRequest("GET", url, null, null, null, 24, null);
        }

        public final HttpRequest post(String url, String body) {
            Intrinsics.checkNotNullParameter(url, "url");
            return new HttpRequest("POST", url, body, null, "", 8, null);
        }

        public final HttpRequest post(String url, FormBody body) {
            Intrinsics.checkNotNullParameter(url, "url");
            Intrinsics.checkNotNullParameter(body, "body");
            return new HttpRequest("POST", url, body.getContent(), null, "application/x-www-form-urlencoded; charset=UTF-8", 8, null);
        }
    }
}
