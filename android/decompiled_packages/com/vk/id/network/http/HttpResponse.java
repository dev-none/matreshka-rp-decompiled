package com.vk.id.network.http;

import com.vk.id.common.InternalVKIDApi;
import io.sentry.SentryBaseEvent;
import io.sentry.protocol.OperatingSystem;
import io.sentry.protocol.Request;
import io.sentry.protocol.Response;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: HttpResponse.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010$\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u001c\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010 \n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u0000 22\u00020\u0001:\u000212BK\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\b\u0010\b\u001a\u0004\u0018\u00010\u0007\u0012\u0014\b\u0002\u0010\t\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u00070\n\u0012\b\b\u0002\u0010\u000b\u001a\u00020\f¢\u0006\u0004\b\r\u0010\u000eJ\u0013\u0010!\u001a\u00020\f2\b\u0010\"\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010#\u001a\u00020\u0005H\u0016J\b\u0010$\u001a\u00020\u0007H\u0016J\u0012\u0010(\u001a\u0004\u0018\u00010)2\u0006\u0010*\u001a\u00020+H\u0007J\u0014\u0010,\u001a\b\u0012\u0004\u0012\u00020\u00070-2\u0006\u0010.\u001a\u00020\u0007J\u0006\u0010/\u001a\u000200R\u001c\u0010\u0002\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u000f\u0010\u0010\u001a\u0004\b\u0011\u0010\u0012R\u001c\u0010\u0004\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0013\u0010\u0010\u001a\u0004\b\u0014\u0010\u0015R\u001e\u0010\u0006\u001a\u0004\u0018\u00010\u00078\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0016\u0010\u0010\u001a\u0004\b\u0017\u0010\u0018R\u001e\u0010\b\u001a\u0004\u0018\u00010\u00078\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0019\u0010\u0010\u001a\u0004\b\u001a\u0010\u0018R(\u0010\t\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u00070\n8\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u001b\u0010\u0010\u001a\u0004\b\u001c\u0010\u001dR\u001c\u0010\u000b\u001a\u00020\f8\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u001e\u0010\u0010\u001a\u0004\b\u000b\u0010\u001fR\u0011\u0010 \u001a\u00020\f8F¢\u0006\u0006\u001a\u0004\b \u0010\u001fR\u0011\u0010%\u001a\u00020\f8F¢\u0006\u0006\u001a\u0004\b%\u0010\u001fR\u0011\u0010&\u001a\u00020\f8F¢\u0006\u0006\u001a\u0004\b&\u0010\u001fR\u0011\u0010'\u001a\u00020\f8F¢\u0006\u0006\u001a\u0004\b'\u0010\u001f¨\u00063"}, d2 = {"Lcom/vk/id/network/http/HttpResponse;", "", SentryBaseEvent.JsonKeys.REQUEST, "Lcom/vk/id/network/http/HttpRequest;", "code", "", "message", "", "body", "headers", "", "isRequestSuccessful", "", "<init>", "(Lcom/vk/id/network/http/HttpRequest;ILjava/lang/String;Ljava/lang/String;Ljava/util/Map;Z)V", "getRequest$annotations", "()V", "getRequest", "()Lcom/vk/id/network/http/HttpRequest;", "getCode$annotations", "getCode", "()I", "getMessage$annotations", "getMessage", "()Ljava/lang/String;", "getBody$annotations", "getBody", "getHeaders$annotations", "getHeaders", "()Ljava/util/Map;", "isRequestSuccessful$annotations", "()Z", "isSuccessful", "equals", Request.JsonKeys.OTHER, "hashCode", "toString", "isRedirect", "isClientError", "isServerError", "peekBody", "Lcom/vk/id/network/http/ResponseBody;", "maxBytes", "", "headerValues", "", "name", "newBuilder", "Lcom/vk/id/network/http/HttpResponse$Builder;", "Builder", "Companion", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class HttpResponse {
    private static final int HTTP_MULTIPLE_CHOICES = 300;
    private static final int HTTP_OK = 200;
    private final String body;
    private final int code;
    private final Map<String, String> headers;
    private final boolean isRequestSuccessful;
    private final String message;
    private final HttpRequest request;
    private static final Companion Companion = new Companion(null);
    private static final IntRange REDIRECT_CODES = new IntRange(300, 399);
    private static final IntRange CLIENT_ERROR_CODES = new IntRange(400, 499);
    private static final IntRange SERVER_ERROR_CODES = new IntRange(500, 599);

    @InternalVKIDApi
    public static /* synthetic */ void getBody$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getCode$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getHeaders$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getMessage$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void getRequest$annotations() {
    }

    @InternalVKIDApi
    public static /* synthetic */ void isRequestSuccessful$annotations() {
    }

    public HttpResponse(HttpRequest request, int i, String str, String str2, Map<String, String> headers, boolean z) {
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(headers, "headers");
        this.request = request;
        this.code = i;
        this.message = str;
        this.body = str2;
        this.headers = headers;
        this.isRequestSuccessful = z;
    }

    public final HttpRequest getRequest() {
        return this.request;
    }

    public final int getCode() {
        return this.code;
    }

    public final String getMessage() {
        return this.message;
    }

    public final String getBody() {
        return this.body;
    }

    public final Map<String, String> getHeaders() {
        return this.headers;
    }

    public /* synthetic */ HttpResponse(HttpRequest httpRequest, int i, String str, String str2, Map map, boolean z, int i2, DefaultConstructorMarker defaultConstructorMarker) {
        this(httpRequest, i, str, str2, (i2 & 16) != 0 ? MapsKt.emptyMap() : map, (i2 & 32) != 0 ? false : z);
    }

    /* JADX INFO: renamed from: isRequestSuccessful, reason: from getter */
    public final boolean getIsRequestSuccessful() {
        return this.isRequestSuccessful;
    }

    public final boolean isSuccessful() {
        int i = this.code;
        return 200 <= i && i < 301;
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof HttpResponse)) {
            return false;
        }
        HttpResponse httpResponse = (HttpResponse) other;
        return Intrinsics.areEqual(this.request, httpResponse.request) && this.code == httpResponse.code && Intrinsics.areEqual(this.message, httpResponse.message) && Intrinsics.areEqual(this.body, httpResponse.body) && Intrinsics.areEqual(this.headers, httpResponse.headers) && this.isRequestSuccessful == httpResponse.isRequestSuccessful;
    }

    public int hashCode() {
        int iHashCode = ((this.request.hashCode() * 31) + this.code) * 31;
        String str = this.message;
        int iHashCode2 = (iHashCode + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.body;
        return ((((iHashCode2 + (str2 != null ? str2.hashCode() : 0)) * 31) + this.headers.hashCode()) * 31) + Boolean.hashCode(this.isRequestSuccessful);
    }

    public String toString() {
        return "HttpResponse(request=" + this.request + ", code=" + this.code + ", message=" + this.message + ", body=" + this.body + ", headers=" + this.headers + ", isRequestSuccessful=" + this.isRequestSuccessful + ")";
    }

    public final boolean isRedirect() {
        IntRange intRange = REDIRECT_CODES;
        int first = intRange.getFirst();
        int last = intRange.getLast();
        int i = this.code;
        return first <= i && i <= last;
    }

    public final boolean isClientError() {
        IntRange intRange = CLIENT_ERROR_CODES;
        int first = intRange.getFirst();
        int last = intRange.getLast();
        int i = this.code;
        return first <= i && i <= last;
    }

    public final boolean isServerError() {
        IntRange intRange = SERVER_ERROR_CODES;
        int first = intRange.getFirst();
        int last = intRange.getLast();
        int i = this.code;
        return first <= i && i <= last;
    }

    @InternalVKIDApi
    public final ResponseBody peekBody(long maxBytes) {
        String str = this.body;
        if (str == null) {
            return null;
        }
        return new ResponseBody(StringsKt.take(str, (int) Math.min(maxBytes, str.length())), this.headers.get("Content-Type"));
    }

    public final List<String> headerValues(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        String str = this.headers.get(name);
        return str != null ? CollectionsKt.listOf(str) : CollectionsKt.emptyList();
    }

    public final Builder newBuilder() {
        return new Builder(this);
    }

    /* JADX INFO: compiled from: HttpResponse.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010%\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010$\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B\u0011\b\u0010\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u000e\u0010\u0006\u001a\u00020\u00002\u0006\u0010\u0006\u001a\u00020\u0007J\u000e\u0010\b\u001a\u00020\u00002\u0006\u0010\b\u001a\u00020\tJ\u0010\u0010\n\u001a\u00020\u00002\b\u0010\n\u001a\u0004\u0018\u00010\u000bJ\u0010\u0010\f\u001a\u00020\u00002\b\u0010\f\u001a\u0004\u0018\u00010\u000bJ\u0016\u0010\u0011\u001a\u00020\u00002\u0006\u0010\u0012\u001a\u00020\u000b2\u0006\u0010\u0013\u001a\u00020\u000bJ\u001a\u0010\r\u001a\u00020\u00002\u0012\u0010\r\u001a\u000e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\u000b0\u0014J\u000e\u0010\u000f\u001a\u00020\u00002\u0006\u0010\u0015\u001a\u00020\u0010J\u0006\u0010\u0016\u001a\u00020\u0003R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\f\u001a\u0004\u0018\u00010\u000bX\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u0010\r\u001a\u000e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\u000b0\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0010X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0017"}, d2 = {"Lcom/vk/id/network/http/HttpResponse$Builder;", "", Response.TYPE, "Lcom/vk/id/network/http/HttpResponse;", "<init>", "(Lcom/vk/id/network/http/HttpResponse;)V", SentryBaseEvent.JsonKeys.REQUEST, "Lcom/vk/id/network/http/HttpRequest;", "code", "", "message", "", "body", "headers", "", "isRequestSuccessful", "", "header", "name", "value", "", "isSuccessful", OperatingSystem.JsonKeys.BUILD, "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Builder {
        private String body;
        private int code;
        private Map<String, String> headers;
        private boolean isRequestSuccessful;
        private String message;
        private HttpRequest request;

        public Builder(HttpResponse response) {
            Intrinsics.checkNotNullParameter(response, "response");
            this.request = response.getRequest();
            this.code = response.getCode();
            this.message = response.getMessage();
            this.body = response.getBody();
            this.headers = MapsKt.toMutableMap(response.getHeaders());
            this.isRequestSuccessful = response.getIsRequestSuccessful();
        }

        public final Builder request(HttpRequest request) {
            Intrinsics.checkNotNullParameter(request, "request");
            this.request = request;
            return this;
        }

        public final Builder code(int code) {
            this.code = code;
            return this;
        }

        public final Builder message(String message) {
            this.message = message;
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

        public final Builder headers(Map<String, String> headers) {
            Intrinsics.checkNotNullParameter(headers, "headers");
            this.headers.clear();
            this.headers.putAll(headers);
            return this;
        }

        public final Builder isRequestSuccessful(boolean isSuccessful) {
            this.isRequestSuccessful = isSuccessful;
            return this;
        }

        public final HttpResponse build() {
            return new HttpResponse(this.request, this.code, this.message, this.body, MapsKt.toMap(this.headers), this.isRequestSuccessful);
        }
    }

    /* JADX INFO: compiled from: HttpResponse.kt */
    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0011\u0010\u000b\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\nR\u0011\u0010\r\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\n¨\u0006\u000f"}, d2 = {"Lcom/vk/id/network/http/HttpResponse$Companion;", "", "<init>", "()V", "HTTP_OK", "", "HTTP_MULTIPLE_CHOICES", "REDIRECT_CODES", "Lkotlin/ranges/IntRange;", "getREDIRECT_CODES", "()Lkotlin/ranges/IntRange;", "CLIENT_ERROR_CODES", "getCLIENT_ERROR_CODES", "SERVER_ERROR_CODES", "getSERVER_ERROR_CODES", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final IntRange getREDIRECT_CODES() {
            return HttpResponse.REDIRECT_CODES;
        }

        public final IntRange getCLIENT_ERROR_CODES() {
            return HttpResponse.CLIENT_ERROR_CODES;
        }

        public final IntRange getSERVER_ERROR_CODES() {
            return HttpResponse.SERVER_ERROR_CODES;
        }
    }
}
