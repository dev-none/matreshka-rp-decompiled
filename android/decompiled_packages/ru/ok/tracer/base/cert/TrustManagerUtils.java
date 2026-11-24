package ru.ok.tracer.base.cert;

import android.content.Context;
import android.content.res.Resources;
import java.io.IOException;
import java.io.InputStream;
import java.security.KeyManagementException;
import java.security.KeyStore;
import java.security.KeyStoreException;
import java.security.NoSuchAlgorithmException;
import java.security.cert.Certificate;
import java.security.cert.CertificateException;
import java.security.cert.CertificateFactory;
import java.security.cert.X509Certificate;
import javax.net.ssl.KeyManagerFactory;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLSocketFactory;
import javax.net.ssl.TrustManager;
import javax.net.ssl.TrustManagerFactory;
import javax.net.ssl.X509TrustManager;
import kotlin.Metadata;
import kotlin.collections.ArraysKt;
import kotlin.io.CloseableKt;
import kotlin.jvm.internal.Intrinsics;
import ru.ok.tracer.base.R;

/* JADX INFO: compiled from: TrustManagerUtils.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u00000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0011\n\u0002\b\u0002\u001a\b\u0010\u0000\u001a\u00020\u0001H\u0002\u001a\u001a\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\b\b\u0001\u0010\u0006\u001a\u00020\u0007H\u0002\u001a\u0010\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000bH\u0000\u001a\u0010\u0010\f\u001a\u00020\u00012\u0006\u0010\u0004\u001a\u00020\u0005H\u0000\u001a\u0012\u0010\r\u001a\u00020\u00012\b\u0010\u000e\u001a\u0004\u0018\u00010\u0003H\u0002\u001a!\u0010\r\u001a\u00020\u00012\u0012\u0010\u000f\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00010\u0010\"\u00020\u0001H\u0002¢\u0006\u0002\u0010\u0011¨\u0006\u0012"}, d2 = {"createDefaultTrustManager", "Ljavax/net/ssl/X509TrustManager;", "createKeyStoreFromResource", "Ljava/security/KeyStore;", "context", "Landroid/content/Context;", "resId", "", "createSSLSocketFactory", "Ljavax/net/ssl/SSLSocketFactory;", "trustManager", "Ljavax/net/ssl/TrustManager;", "createTracerTrustManager", "createTrustManager", "keyStore", "trustManagers", "", "([Ljavax/net/ssl/X509TrustManager;)Ljavax/net/ssl/X509TrustManager;", "tracer-base_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class TrustManagerUtils {
    public static final X509TrustManager createTracerTrustManager(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        return createTrustManager(createDefaultTrustManager(), createTrustManager(createKeyStoreFromResource(context, R.raw.rootca_ssl_rsa2022)));
    }

    public static final SSLSocketFactory createSSLSocketFactory(TrustManager trustManager) throws NoSuchAlgorithmException, KeyManagementException {
        Intrinsics.checkNotNullParameter(trustManager, "trustManager");
        SSLContext sSLContext = SSLContext.getInstance("SSL");
        sSLContext.init(null, new TrustManager[]{trustManager}, null);
        SSLSocketFactory socketFactory = sSLContext.getSocketFactory();
        Intrinsics.checkNotNullExpressionValue(socketFactory, "getInstance(\"SSL\")\n     … }\n        .socketFactory");
        return socketFactory;
    }

    private static final KeyStore createKeyStoreFromResource(Context context, int i) throws NoSuchAlgorithmException, IOException, KeyStoreException, CertificateException {
        Resources resources = context.getApplicationContext().getResources();
        InputStream inputStreamOpenRawResource = resources.openRawResource(i);
        try {
            Certificate certificateGenerateCertificate = CertificateFactory.getInstance("X509").generateCertificate(inputStreamOpenRawResource);
            CloseableKt.closeFinally(inputStreamOpenRawResource, null);
            Intrinsics.checkNotNull(certificateGenerateCertificate, "null cannot be cast to non-null type java.security.cert.X509Certificate");
            String resourceEntryName = resources.getResourceEntryName(i);
            KeyStore keyStore = KeyStore.getInstance(KeyStore.getDefaultType());
            keyStore.load(null, null);
            keyStore.setCertificateEntry(resourceEntryName, (X509Certificate) certificateGenerateCertificate);
            Intrinsics.checkNotNullExpressionValue(keyStore, "getInstance(KeyStore.get…certName, cert)\n        }");
            return keyStore;
        } catch (Throwable th) {
            try {
                throw th;
            } catch (Throwable th2) {
                CloseableKt.closeFinally(inputStreamOpenRawResource, th);
                throw th2;
            }
        }
    }

    private static final X509TrustManager createTrustManager(KeyStore keyStore) throws NoSuchAlgorithmException, KeyStoreException {
        TrustManagerFactory trustManagerFactory = TrustManagerFactory.getInstance(KeyManagerFactory.getDefaultAlgorithm());
        trustManagerFactory.init(keyStore);
        TrustManager[] trustManagers = trustManagerFactory.getTrustManagers();
        Intrinsics.checkNotNullExpressionValue(trustManagers, "getInstance(KeyManagerFa… }\n        .trustManagers");
        Object objFirst = ArraysKt.first(trustManagers);
        Intrinsics.checkNotNull(objFirst, "null cannot be cast to non-null type javax.net.ssl.X509TrustManager");
        return (X509TrustManager) objFirst;
    }

    private static final X509TrustManager createDefaultTrustManager() {
        return createTrustManager((KeyStore) null);
    }

    private static final X509TrustManager createTrustManager(X509TrustManager... x509TrustManagerArr) {
        return new CompositeX509TrustManager(x509TrustManagerArr);
    }
}
