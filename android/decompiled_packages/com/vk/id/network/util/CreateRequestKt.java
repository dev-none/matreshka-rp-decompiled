package com.vk.id.network.util;

import com.pichillilorenzo.flutter_inappwebview_android.credential_database.URLProtectionSpaceContract;
import com.vk.id.network.InternalVKIDCall;
import com.vk.id.network.http.FormBody;
import com.vk.id.network.http.HttpClient;
import com.vk.id.network.http.HttpRequest;
import com.vk.id.network.http.HttpResponse;
import com.vk.id.network.http.RealInternalVKIDCall;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.net.URLEncoder;
import java.nio.charset.StandardCharsets;
import java.util.Map;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.apache.commons.io.IOUtils;

/* JADX INFO: compiled from: CreateRequest.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000&\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010$\n\u0002\b\u0004\u001a@\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u0001*\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\b2\u0014\b\u0002\u0010\t\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00050\nH\u0000\u001a.\u0010\u000b\u001a\u00020\u00052\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0014\b\u0002\u0010\t\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00050\nH\u0000\u001a\u0010\u0010\f\u001a\u00020\u00052\u0006\u0010\r\u001a\u00020\u0005H\u0002¨\u0006\u000e"}, d2 = {"createRequest", "Lcom/vk/id/network/InternalVKIDCall;", "Lcom/vk/id/network/http/HttpResponse;", "Lcom/vk/id/network/http/HttpClient;", URLProtectionSpaceContract.FeedEntry.COLUMN_NAME_HOST, "", "path", "requestBody", "Lcom/vk/id/network/http/FormBody;", "query", "", "createUrl", "urlEncode", "value", "network_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class CreateRequestKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final HttpResponse createRequest$lambda$0(HttpResponse it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return it;
    }

    public static /* synthetic */ InternalVKIDCall createRequest$default(HttpClient httpClient, String str, String str2, FormBody formBody, Map map, int i, Object obj) throws IOException {
        if ((i & 8) != 0) {
            map = MapsKt.emptyMap();
        }
        return createRequest(httpClient, str, str2, formBody, map);
    }

    public static final InternalVKIDCall<HttpResponse> createRequest(HttpClient httpClient, String host, String path, FormBody requestBody, Map<String, String> query) throws IOException {
        Intrinsics.checkNotNullParameter(httpClient, "<this>");
        Intrinsics.checkNotNullParameter(host, "host");
        Intrinsics.checkNotNullParameter(path, "path");
        Intrinsics.checkNotNullParameter(requestBody, "requestBody");
        Intrinsics.checkNotNullParameter(query, "query");
        return new RealInternalVKIDCall(httpClient, HttpRequest.INSTANCE.post(createUrl(host, path, query), requestBody), new Function1() { // from class: com.vk.id.network.util.CreateRequestKt$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return CreateRequestKt.createRequest$lambda$0((HttpResponse) obj);
            }
        });
    }

    public static /* synthetic */ String createUrl$default(String str, String str2, Map map, int i, Object obj) {
        if ((i & 4) != 0) {
            map = MapsKt.emptyMap();
        }
        return createUrl(str, str2, map);
    }

    public static final String createUrl(String host, String path, Map<String, String> query) {
        String str;
        Intrinsics.checkNotNullParameter(host, "host");
        Intrinsics.checkNotNullParameter(path, "path");
        Intrinsics.checkNotNullParameter(query, "query");
        StringBuilder sb = new StringBuilder(host);
        String strTrim = StringsKt.trim(path, IOUtils.DIR_SEPARATOR_UNIX);
        if (strTrim.length() == 0) {
            str = "";
        } else {
            str = "/" + strTrim;
        }
        sb.append(str);
        if (!query.isEmpty()) {
            sb.append("?");
            sb.append(CollectionsKt.joinToString$default(query.entrySet(), "&", null, null, 0, null, new Function1() { // from class: com.vk.id.network.util.CreateRequestKt$$ExternalSyntheticLambda1
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return CreateRequestKt.createUrl$lambda$2((Map.Entry) obj);
                }
            }, 30, null));
        }
        String string = sb.toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        return string;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final CharSequence createUrl$lambda$2(Map.Entry entry) throws UnsupportedEncodingException {
        Intrinsics.checkNotNullParameter(entry, "<destruct>");
        String str = (String) entry.getKey();
        String str2 = (String) entry.getValue();
        return urlEncode(str) + "=" + urlEncode(str2);
    }

    private static final String urlEncode(String str) throws UnsupportedEncodingException {
        String strEncode = URLEncoder.encode(str, StandardCharsets.UTF_8.toString());
        Intrinsics.checkNotNullExpressionValue(strEncode, "encode(...)");
        return strEncode;
    }
}
