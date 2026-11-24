package ru.rustore.sdk.metrics.internal;

import java.util.ArrayList;
import javax.net.ssl.X509TrustManager;
import kotlin.jvm.internal.Intrinsics;
import ru.rustore.sdk.metrics.internal.network.ssl.CompositeX509TrustManagerApi24;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class m1 {
    public static X509TrustManager a(ArrayList signedCertificates) {
        Intrinsics.checkNotNullParameter(signedCertificates, "signedCertificates");
        return new CompositeX509TrustManagerApi24(signedCertificates);
    }
}
