package ru.ok.tracer.base.cert;

import android.net.http.X509TrustManagerExtensions;
import com.pichillilorenzo.flutter_inappwebview_android.credential_database.URLProtectionSpaceContract;
import java.security.cert.CertificateException;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import javax.net.ssl.X509TrustManager;
import kotlin.Metadata;
import kotlin.collections.ArraysKt;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: TrustManagerUtils.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0011\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0007\b\u0003\u0018\u00002\u00020\u0001B\u0015\u0012\u000e\u0010\u0002\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00010\u0003¢\u0006\u0002\u0010\u0004J#\u0010\t\u001a\u00020\n2\f\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\f0\u00032\u0006\u0010\r\u001a\u00020\u000eH\u0016¢\u0006\u0002\u0010\u000fJ#\u0010\u0010\u001a\u00020\n2\f\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\f0\u00032\u0006\u0010\r\u001a\u00020\u000eH\u0016¢\u0006\u0002\u0010\u000fJ/\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\f0\u00062\f\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\f0\u00032\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u0011\u001a\u00020\u000e¢\u0006\u0002\u0010\u0012J\u0013\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\f0\u0003H\u0016¢\u0006\u0002\u0010\u0014R\u0014\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00070\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u0018\u0010\u0002\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00010\u0003X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\b¨\u0006\u0015"}, d2 = {"Lru/ok/tracer/base/cert/CompositeX509TrustManager;", "Ljavax/net/ssl/X509TrustManager;", "delegates", "", "([Ljavax/net/ssl/X509TrustManager;)V", "delegateExtensions", "", "Landroid/net/http/X509TrustManagerExtensions;", "[Ljavax/net/ssl/X509TrustManager;", "checkClientTrusted", "", "chain", "Ljava/security/cert/X509Certificate;", "authType", "", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;)V", "checkServerTrusted", URLProtectionSpaceContract.FeedEntry.COLUMN_NAME_HOST, "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;", "getAcceptedIssuers", "()[Ljava/security/cert/X509Certificate;", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
final class CompositeX509TrustManager implements X509TrustManager {
    private final List<X509TrustManagerExtensions> delegateExtensions;
    private final X509TrustManager[] delegates;

    public CompositeX509TrustManager(X509TrustManager[] delegates) {
        Intrinsics.checkNotNullParameter(delegates, "delegates");
        this.delegates = delegates;
        ArrayList arrayList = new ArrayList(delegates.length);
        for (X509TrustManager x509TrustManager : delegates) {
            arrayList.add(new X509TrustManagerExtensions(x509TrustManager));
        }
        this.delegateExtensions = arrayList;
    }

    @Override // javax.net.ssl.X509TrustManager
    public void checkClientTrusted(X509Certificate[] chain, String authType) throws CertificateException {
        Intrinsics.checkNotNullParameter(chain, "chain");
        Intrinsics.checkNotNullParameter(authType, "authType");
        for (X509TrustManager x509TrustManager : this.delegates) {
            try {
                x509TrustManager.checkClientTrusted(chain, authType);
                return;
            } catch (CertificateException unused) {
            }
        }
        throw new CertificateException("None of the TrustManagers trust this certificate chain");
    }

    @Override // javax.net.ssl.X509TrustManager
    public void checkServerTrusted(X509Certificate[] chain, String authType) throws CertificateException {
        Intrinsics.checkNotNullParameter(chain, "chain");
        Intrinsics.checkNotNullParameter(authType, "authType");
        for (X509TrustManager x509TrustManager : this.delegates) {
            try {
                x509TrustManager.checkServerTrusted(chain, authType);
                return;
            } catch (CertificateException unused) {
            }
        }
        throw new CertificateException("None of the TrustManagers trust this certificate chain");
    }

    public final List<X509Certificate> checkServerTrusted(X509Certificate[] chain, String authType, String host) throws CertificateException {
        Intrinsics.checkNotNullParameter(chain, "chain");
        Intrinsics.checkNotNullParameter(authType, "authType");
        Intrinsics.checkNotNullParameter(host, "host");
        Iterator<X509TrustManagerExtensions> it = this.delegateExtensions.iterator();
        while (it.hasNext()) {
            try {
                List<X509Certificate> listCheckServerTrusted = it.next().checkServerTrusted(chain, authType, host);
                Intrinsics.checkNotNullExpressionValue(listCheckServerTrusted, "delegateExtension.checkS…ed(chain, authType, host)");
                return listCheckServerTrusted;
            } catch (CertificateException unused) {
            }
        }
        throw new CertificateException("None of the TrustManagers trust this certificate chain");
    }

    @Override // javax.net.ssl.X509TrustManager
    public X509Certificate[] getAcceptedIssuers() throws CertificateException {
        X509TrustManager[] x509TrustManagerArr = this.delegates;
        ArrayList arrayList = new ArrayList();
        for (X509TrustManager x509TrustManager : x509TrustManagerArr) {
            X509Certificate[] acceptedIssuers = x509TrustManager.getAcceptedIssuers();
            Intrinsics.checkNotNullExpressionValue(acceptedIssuers, "it.acceptedIssuers");
            CollectionsKt.addAll(arrayList, ArraysKt.toList(acceptedIssuers));
        }
        Object[] array = arrayList.toArray(new X509Certificate[0]);
        Intrinsics.checkNotNull(array, "null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
        return (X509Certificate[]) array;
    }
}
