package ru.rustore.sdk.metrics.internal;

import java.net.URI;
import java.net.URL;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.SSLSession;
import javax.net.ssl.SSLSocketFactory;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final SSLSocketFactory f6624a;
    public final k b;
    public final h1 c;

    public d(SSLSocketFactory internalSslSocketFactory, k logger, h1 userIdDataSource) {
        Intrinsics.checkNotNullParameter(internalSslSocketFactory, "internalSslSocketFactory");
        Intrinsics.checkNotNullParameter(logger, "logger");
        Intrinsics.checkNotNullParameter(userIdDataSource, "userIdDataSource");
        this.f6624a = internalSslSocketFactory;
        this.b = logger;
        this.c = userIdDataSource;
    }

    public static boolean a(String str) {
        String host;
        URI uri = new URI(str);
        return uri.isAbsolute() && StringsKt.equals(uri.getScheme(), "https", true) && (host = uri.getHost()) != null && !StringsKt.isBlank(host) && uri.getRawUserInfo() == null && uri.getRawFragment() == null;
    }

    public static HostnameVerifier a(final URL url) {
        return new HostnameVerifier() { // from class: ru.rustore.sdk.metrics.internal.d$$ExternalSyntheticLambda0
            @Override // javax.net.ssl.HostnameVerifier
            public final boolean verify(String str, SSLSession sSLSession) {
                return d.a(url, str, sSLSession);
            }
        };
    }

    public static final boolean a(URL url, String str, SSLSession sSLSession) {
        return StringsKt.equals(str, url.getHost(), true);
    }
}
