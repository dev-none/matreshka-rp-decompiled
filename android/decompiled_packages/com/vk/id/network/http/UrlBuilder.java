package com.vk.id.network.http;

import com.vk.id.common.InternalVKIDApi;
import io.sentry.protocol.OperatingSystem;
import java.net.URL;
import java.net.URLEncoder;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: HttpRequest.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010%\n\u0002\b\u0005\b\u0007\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0016\u0010\n\u001a\u00020\u00002\u0006\u0010\u000b\u001a\u00020\u00032\u0006\u0010\f\u001a\u00020\u0003J\u0006\u0010\r\u001a\u00020\u0003R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\b\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00030\tX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"Lcom/vk/id/network/http/UrlBuilder;", "", "originalUrl", "", "<init>", "(Ljava/lang/String;)V", "url", "Ljava/net/URL;", "queryParams", "", "addQueryParameter", "name", "value", OperatingSystem.JsonKeys.BUILD, "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class UrlBuilder {
    private final String originalUrl;
    private final Map<String, String> queryParams;
    private final URL url;

    public UrlBuilder(String originalUrl) {
        Intrinsics.checkNotNullParameter(originalUrl, "originalUrl");
        this.originalUrl = originalUrl;
        this.url = new URL(originalUrl);
        this.queryParams = new LinkedHashMap();
    }

    public final UrlBuilder addQueryParameter(String name, String value) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(value, "value");
        this.queryParams.put(name, URLEncoder.encode(value, "UTF-8"));
        return this;
    }

    /* JADX WARN: Code duplicated, block: B:15:0x0070  */
    public final String build() {
        String str;
        if (!this.queryParams.isEmpty()) {
            String query = this.url.getQuery();
            String strJoinToString$default = CollectionsKt.joinToString$default(this.queryParams.entrySet(), "&", null, null, 0, null, new Function1() { // from class: com.vk.id.network.http.UrlBuilder$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return UrlBuilder.build$lambda$1((Map.Entry) obj);
                }
            }, 30, null);
            String str2 = query;
            if (str2 == null || str2.length() == 0) {
                str = "?" + strJoinToString$default;
            } else {
                str = "?" + query + "&" + strJoinToString$default;
            }
        } else {
            String query2 = this.url.getQuery();
            if (query2 != null) {
                str = "?" + query2;
                if (str == null) {
                    str = "";
                }
            } else {
                str = "";
            }
        }
        return this.url.getProtocol() + "://" + this.url.getHost() + str;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final CharSequence build$lambda$1(Map.Entry entry) {
        Intrinsics.checkNotNullParameter(entry, "<destruct>");
        return ((String) entry.getKey()) + "=" + ((String) entry.getValue());
    }
}
