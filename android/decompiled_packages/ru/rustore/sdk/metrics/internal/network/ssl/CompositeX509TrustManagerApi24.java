package ru.rustore.sdk.metrics.internal.network.ssl;

import android.net.http.X509TrustManagerExtensions;
import android.util.Log;
import com.pichillilorenzo.flutter_inappwebview_android.credential_database.URLProtectionSpaceContract;
import com.unity3d.ads.core.data.datasource.AndroidStaticDeviceInfoDataSource;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.net.Socket;
import java.security.KeyStore;
import java.security.KeyStoreException;
import java.security.NoSuchAlgorithmException;
import java.security.cert.Certificate;
import java.security.cert.CertificateException;
import java.security.cert.CertificateFactory;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.List;
import javax.net.ssl.SSLEngine;
import javax.net.ssl.TrustManager;
import javax.net.ssl.TrustManagerFactory;
import javax.net.ssl.X509ExtendedTrustManager;
import javax.net.ssl.X509TrustManager;
import kotlin.Metadata;
import kotlin.collections.ArraysKt;
import kotlin.collections.CollectionsKt;
import kotlin.io.CloseableKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import ru.rustore.sdk.metrics.internal.n1;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\b\u0003\b\u0001\u0018\u00002\u00020\u0001J;\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u00030\b2\u0010\u0010\u0004\u001a\f\u0012\u0006\b\u0001\u0012\u00020\u0003\u0018\u00010\u00022\b\u0010\u0006\u001a\u0004\u0018\u00010\u00052\b\u0010\u0007\u001a\u0004\u0018\u00010\u0005H\u0007¢\u0006\u0004\b\t\u0010\n¨\u0006\u000b"}, d2 = {"Lru/rustore/sdk/metrics/internal/network/ssl/CompositeX509TrustManagerApi24;", "Ljavax/net/ssl/X509ExtendedTrustManager;", "", "Ljava/security/cert/X509Certificate;", "chain", "", "authType", URLProtectionSpaceContract.FeedEntry.COLUMN_NAME_HOST, "", "checkServerTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;", "sdk-public-metrics_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public final class CompositeX509TrustManagerApi24 extends X509ExtendedTrustManager {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ArrayList f6655a;

    public CompositeX509TrustManagerApi24(ArrayList selfSignedCertificates) throws NoSuchAlgorithmException, IOException, CertificateException, KeyStoreException {
        Intrinsics.checkNotNullParameter(selfSignedCertificates, "selfSignedCertificates");
        ArrayList arrayList = new ArrayList();
        X509TrustManager x509TrustManagerA = a(null);
        if (x509TrustManagerA != null) {
            try {
                arrayList.add(new n1(x509TrustManagerA, new X509TrustManagerExtensions(x509TrustManagerA)));
            } catch (Exception e) {
                Log.e("CompositeX509TrustManagerApi24", e.toString());
            }
        }
        if (!selfSignedCertificates.isEmpty()) {
            CertificateFactory certificateFactory = CertificateFactory.getInstance(AndroidStaticDeviceInfoDataSource.CERTIFICATE_TYPE_X509);
            Intrinsics.checkNotNullExpressionValue(certificateFactory, "getInstance(\"X.509\")");
            ArrayList arrayList2 = new ArrayList(CollectionsKt.collectionSizeOrDefault(selfSignedCertificates, 10));
            int size = selfSignedCertificates.size();
            int i = 0;
            int i2 = 0;
            while (i2 < size) {
                Object obj = selfSignedCertificates.get(i2);
                i2++;
                byte[] bytes = ((String) obj).getBytes(Charsets.UTF_8);
                Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
                ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(bytes);
                try {
                    Certificate certificateGenerateCertificate = certificateFactory.generateCertificate(byteArrayInputStream);
                    CloseableKt.closeFinally(byteArrayInputStream, null);
                    arrayList2.add(certificateGenerateCertificate);
                } catch (Throwable th) {
                    try {
                        throw th;
                    } catch (Throwable th2) {
                        CloseableKt.closeFinally(byteArrayInputStream, th);
                        throw th2;
                    }
                }
            }
            KeyStore keyStore = KeyStore.getInstance(KeyStore.getDefaultType());
            keyStore.load(null, null);
            int size2 = arrayList2.size();
            int i3 = 0;
            while (i < size2) {
                Object obj2 = arrayList2.get(i);
                i++;
                int i4 = i3 + 1;
                if (i3 < 0) {
                    CollectionsKt.throwIndexOverflow();
                }
                keyStore.setCertificateEntry("ca" + i3, (Certificate) obj2);
                i3 = i4;
            }
            X509TrustManager x509TrustManagerA2 = a(keyStore);
            if (x509TrustManagerA2 != null) {
                try {
                    arrayList.add(new n1(x509TrustManagerA2, new X509TrustManagerExtensions(x509TrustManagerA2)));
                } catch (Exception e2) {
                    Log.e("CompositeX509TrustManagerApi24", e2.toString());
                }
            }
        }
        this.f6655a = arrayList;
    }

    public static X509TrustManager a(KeyStore keyStore) {
        try {
            TrustManagerFactory trustManagerFactory = TrustManagerFactory.getInstance(TrustManagerFactory.getDefaultAlgorithm());
            trustManagerFactory.init(keyStore);
            TrustManager[] trustManagers = trustManagerFactory.getTrustManagers();
            Intrinsics.checkNotNullExpressionValue(trustManagers, "factory.trustManagers");
            ArrayList arrayList = new ArrayList();
            for (TrustManager trustManager : trustManagers) {
                if (trustManager instanceof X509TrustManager) {
                    arrayList.add(trustManager);
                }
            }
            return (X509TrustManager) CollectionsKt.firstOrNull((List) arrayList);
        } catch (KeyStoreException e) {
            Log.e("CompositeX509TrustManagerApi24", e.toString());
            return null;
        } catch (NoSuchAlgorithmException e2) {
            Log.e("CompositeX509TrustManagerApi24", e2.toString());
            return null;
        }
    }

    @Override // javax.net.ssl.X509ExtendedTrustManager
    public final void checkClientTrusted(X509Certificate[] chain, String authType, Socket conn) throws CertificateException {
        Intrinsics.checkNotNullParameter(chain, "chain");
        Intrinsics.checkNotNullParameter(authType, "authType");
        Intrinsics.checkNotNullParameter(conn, "conn");
        checkClientTrusted(chain, authType);
    }

    @Override // javax.net.ssl.X509ExtendedTrustManager
    public final void checkServerTrusted(X509Certificate[] chain, String authType, Socket conn) throws CertificateException {
        Intrinsics.checkNotNullParameter(chain, "chain");
        Intrinsics.checkNotNullParameter(authType, "authType");
        Intrinsics.checkNotNullParameter(conn, "conn");
        String hostName = conn.getInetAddress().getHostName();
        ArrayList arrayList = this.f6655a;
        int size = arrayList.size();
        int i = 0;
        while (i < size) {
            Object obj = arrayList.get(i);
            i++;
            try {
                ((n1) obj).b.checkServerTrusted(chain, authType, hostName);
                return;
            } catch (CertificateException e) {
                Log.e("CompositeX509TrustManagerApi24", e.toString());
            }
        }
        throw new CertificateException("None of the TrustManagers trust this certificate chain");
    }

    @Override // javax.net.ssl.X509TrustManager
    public final X509Certificate[] getAcceptedIssuers() {
        ArrayList arrayList = this.f6655a;
        ArrayList arrayList2 = new ArrayList();
        int size = arrayList.size();
        int i = 0;
        while (i < size) {
            Object obj = arrayList.get(i);
            i++;
            X509Certificate[] acceptedIssuers = ((n1) obj).f6653a.getAcceptedIssuers();
            Intrinsics.checkNotNullExpressionValue(acceptedIssuers, "it.trustManager.acceptedIssuers");
            CollectionsKt.addAll(arrayList2, ArraysKt.toList(acceptedIssuers));
        }
        return (X509Certificate[]) arrayList2.toArray(new X509Certificate[0]);
    }

    @Override // javax.net.ssl.X509ExtendedTrustManager
    public final void checkClientTrusted(X509Certificate[] chain, String str, SSLEngine ssl) throws CertificateException {
        Intrinsics.checkNotNullParameter(chain, "chain");
        Intrinsics.checkNotNullParameter(ssl, "ssl");
        checkClientTrusted(chain, str);
    }

    @Override // javax.net.ssl.X509TrustManager
    public final void checkClientTrusted(X509Certificate[] x509CertificateArr, String str) throws CertificateException {
        ArrayList arrayList = this.f6655a;
        int size = arrayList.size();
        int i = 0;
        while (i < size) {
            Object obj = arrayList.get(i);
            i++;
            try {
                ((n1) obj).f6653a.checkClientTrusted(x509CertificateArr, str);
                return;
            } catch (CertificateException e) {
                Log.e("CompositeX509TrustManagerApi24", e.toString());
            }
        }
        throw new CertificateException("None of the TrustManagers trust this certificate chain");
    }

    @Override // javax.net.ssl.X509ExtendedTrustManager
    public final void checkServerTrusted(X509Certificate[] chain, String str, SSLEngine ssl) throws CertificateException {
        Intrinsics.checkNotNullParameter(chain, "chain");
        Intrinsics.checkNotNullParameter(ssl, "ssl");
        String peerHost = ssl.getSession().getPeerHost();
        ArrayList arrayList = this.f6655a;
        int size = arrayList.size();
        int i = 0;
        while (i < size) {
            Object obj = arrayList.get(i);
            i++;
            try {
                ((n1) obj).b.checkServerTrusted(chain, str, peerHost);
                return;
            } catch (CertificateException e) {
                Log.e("CompositeX509TrustManagerApi24", e.toString());
            }
        }
        throw new CertificateException("None of the TrustManagers trust this certificate chain");
    }

    @Override // javax.net.ssl.X509TrustManager
    public final void checkServerTrusted(X509Certificate[] x509CertificateArr, String str) throws CertificateException {
        ArrayList arrayList = this.f6655a;
        int size = arrayList.size();
        int i = 0;
        while (i < size) {
            Object obj = arrayList.get(i);
            i++;
            try {
                ((n1) obj).f6653a.checkServerTrusted(x509CertificateArr, str);
                return;
            } catch (CertificateException e) {
                Log.e("CompositeX509TrustManagerApi24", e.toString());
            }
        }
        throw new CertificateException("None of the TrustManagers trust this certificate chain");
    }

    public final List<X509Certificate> checkServerTrusted(X509Certificate[] chain, String authType, String host) throws CertificateException {
        ArrayList arrayList = this.f6655a;
        int size = arrayList.size();
        int i = 0;
        while (i < size) {
            Object obj = arrayList.get(i);
            i++;
            try {
                List<X509Certificate> listCheckServerTrusted = ((n1) obj).b.checkServerTrusted(chain, authType, host);
                Intrinsics.checkNotNullExpressionValue(listCheckServerTrusted, "pair.trustExtensions.che…ed(chain, authType, host)");
                return listCheckServerTrusted;
            } catch (CertificateException e) {
                Log.e("CompositeX509TrustManagerApi24", e.toString());
            }
        }
        throw new CertificateException("None of the TrustManagers trust this certificate chain");
    }
}
