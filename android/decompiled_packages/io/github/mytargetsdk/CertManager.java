package io.github.mytargetsdk;

import android.content.Context;
import android.util.Log;
import com.unity3d.ads.core.data.datasource.AndroidStaticDeviceInfoDataSource;
import java.security.KeyStore;
import java.security.KeyStoreException;
import java.security.SecureRandom;
import java.security.cert.Certificate;
import java.security.cert.CertificateException;
import java.security.cert.CertificateFactory;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import javax.net.ssl.SSLContext;
import javax.net.ssl.TrustManager;
import javax.net.ssl.TrustManagerFactory;
import javax.net.ssl.X509TrustManager;

/* JADX INFO: loaded from: classes7.dex */
public final class CertManager {
    private static final String TAG = "CertManager";
    private final List<Integer> rawCertResIds;

    public CertManager() {
        ArrayList arrayList = new ArrayList();
        this.rawCertResIds = arrayList;
        arrayList.add(Integer.valueOf(R.raw.russian_trusted_root_ca));
        arrayList.add(Integer.valueOf(R.raw.russian_trusted_sub_ca));
    }

    public final CertData createCertData(Context context) {
        String str;
        if (context == null) {
            Log.e(TAG, "Error make certData – context is null");
            return null;
        }
        CertificateFactory certificateFactoryCreateCertificateFactory = createCertificateFactory();
        if (certificateFactoryCreateCertificateFactory == null) {
            Log.e(TAG, "Error make certData – certificateFactory is null");
            return null;
        }
        KeyStore keyStoreCreateKeyStore = createKeyStore();
        if (keyStoreCreateKeyStore == null) {
            Log.e(TAG, "Error make certData – keyStore is null");
            return null;
        }
        CertLoader certLoader = new CertLoader(context, certificateFactoryCreateCertificateFactory);
        Iterator<Integer> it = this.rawCertResIds.iterator();
        while (it.hasNext()) {
            int iIntValue = it.next().intValue();
            Certificate rawCert = certLoader.getRawCert(iIntValue);
            if (rawCert != null) {
                try {
                    if (iIntValue == R.raw.russian_trusted_root_ca) {
                        str = "root_ca";
                    } else if (iIntValue == R.raw.russian_trusted_sub_ca) {
                        str = "sub_ca";
                    } else {
                        str = "resid_" + iIntValue;
                    }
                    keyStoreCreateKeyStore.setCertificateEntry("russian_trusted_" + str, rawCert);
                } catch (KeyStoreException e) {
                    Log.e(TAG, "", e);
                }
            }
        }
        for (X509Certificate x509Certificate : certLoader.getSystemCerts()) {
            try {
                keyStoreCreateKeyStore.setCertificateEntry(x509Certificate.getIssuerDN().getName(), x509Certificate);
            } catch (KeyStoreException e2) {
                Log.e(TAG, "", e2);
            }
        }
        TrustManagerFactory trustManagerFactoryCreateTrustManagerFactory = createTrustManagerFactory(keyStoreCreateKeyStore);
        if (trustManagerFactoryCreateTrustManagerFactory == null) {
            Log.e(TAG, "Error make certData – trustManagerFactory is null");
            return null;
        }
        X509TrustManager x509TrustManagerFindX509TrustManager = findX509TrustManager(trustManagerFactoryCreateTrustManagerFactory);
        if (x509TrustManagerFindX509TrustManager == null) {
            Log.e(TAG, "Error make certData – x509TrustManager is null");
            return null;
        }
        SSLContext sSLContextCreateSslContext = createSslContext(trustManagerFactoryCreateTrustManagerFactory);
        if (sSLContextCreateSslContext == null) {
            Log.e(TAG, "Error make certData – sslContext is null");
            return null;
        }
        return new CertData(x509TrustManagerFindX509TrustManager, sSLContextCreateSslContext, trustManagerFactoryCreateTrustManagerFactory);
    }

    private final CertificateFactory createCertificateFactory() {
        try {
            return CertificateFactory.getInstance(AndroidStaticDeviceInfoDataSource.CERTIFICATE_TYPE_X509);
        } catch (CertificateException e) {
            Log.e(TAG, "", e);
            return null;
        }
    }

    private final KeyStore createKeyStore() {
        try {
            KeyStore keyStore = KeyStore.getInstance(KeyStore.getDefaultType());
            keyStore.load(null, null);
            return keyStore;
        } catch (Throwable th) {
            Log.e(TAG, "", th);
            return null;
        }
    }

    private final TrustManagerFactory createTrustManagerFactory(KeyStore keyStore) {
        try {
            TrustManagerFactory trustManagerFactory = TrustManagerFactory.getInstance(TrustManagerFactory.getDefaultAlgorithm());
            trustManagerFactory.init(keyStore);
            return trustManagerFactory;
        } catch (Throwable th) {
            Log.e(TAG, "", th);
            return null;
        }
    }

    private final X509TrustManager findX509TrustManager(TrustManagerFactory trustManagerFactory) {
        for (TrustManager trustManager : trustManagerFactory.getTrustManagers()) {
            if (trustManager instanceof X509TrustManager) {
                return (X509TrustManager) trustManager;
            }
        }
        return null;
    }

    private final SSLContext createSslContext(TrustManagerFactory trustManagerFactory) {
        try {
            SSLContext sSLContext = SSLContext.getInstance("SSL");
            sSLContext.init(null, trustManagerFactory.getTrustManagers(), new SecureRandom());
            return sSLContext;
        } catch (Throwable th) {
            Log.e(TAG, "", th);
            return null;
        }
    }
}
