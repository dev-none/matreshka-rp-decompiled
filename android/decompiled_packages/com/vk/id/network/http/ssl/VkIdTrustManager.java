package com.vk.id.network.http.ssl;

import android.util.Base64;
import com.unity3d.ads.core.data.datasource.AndroidStaticDeviceInfoDataSource;
import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import io.sentry.SentryEvent;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.security.KeyStore;
import java.security.KeyStoreException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.security.cert.Certificate;
import java.security.cert.CertificateException;
import java.security.cert.CertificateFactory;
import java.security.cert.X509Certificate;
import java.util.Set;
import javax.net.ssl.TrustManager;
import javax.net.ssl.TrustManagerFactory;
import javax.net.ssl.X509TrustManager;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: VkIdTrustManager.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\"\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0018\u0002\n\u0002\b\u0006\b\u0000\u0018\u0000  2\u00020\u0001:\u0001 B\u0015\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\u0004\b\u0005\u0010\u0006J#\u0010\n\u001a\u00020\u000b2\f\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u000e0\r2\u0006\u0010\u000f\u001a\u00020\u0004H\u0016¢\u0006\u0002\u0010\u0010J#\u0010\u0011\u001a\u00020\u000b2\f\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u000e0\r2\u0006\u0010\u000f\u001a\u00020\u0004H\u0017¢\u0006\u0002\u0010\u0010J\u0013\u0010\u0012\u001a\b\u0012\u0004\u0012\u00020\u000e0\rH\u0016¢\u0006\u0002\u0010\u0013J\u001b\u0010\u0014\u001a\u00020\u000b2\f\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u000e0\rH\u0002¢\u0006\u0002\u0010\u0015J\u0010\u0010\u0016\u001a\u00020\u00042\u0006\u0010\u0017\u001a\u00020\u000eH\u0002J\b\u0010\u0018\u001a\u00020\u0001H\u0002J\u0010\u0010\u0019\u001a\u00020\u000b2\u0006\u0010\u001a\u001a\u00020\u001bH\u0002J\u0010\u0010\u001c\u001a\u00020\u000e2\u0006\u0010\u001d\u001a\u00020\u0004H\u0002J\b\u0010\u001e\u001a\u00020\u0001H\u0002J\b\u0010\u001f\u001a\u00020\u0001H\u0002R\u0014\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006!"}, d2 = {"Lcom/vk/id/network/http/ssl/VkIdTrustManager;", "Ljavax/net/ssl/X509TrustManager;", "certificatePins", "", "", "<init>", "(Ljava/util/Set;)V", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", "systemTrustManager", "checkClientTrusted", "", "chain", "", "Ljava/security/cert/X509Certificate;", "authType", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;)V", "checkServerTrusted", "getAcceptedIssuers", "()[Ljava/security/cert/X509Certificate;", "checkCertificatePinning", "([Ljava/security/cert/X509Certificate;)V", "computePublicKeyPin", "certificate", "createTrustManagerWithRuCA", "addPlatformTrustedCertificates", "keyStore", "Ljava/security/KeyStore;", "loadCertificate", "pem", "createSystemTrustManager", "getSystemTrustManager", "Companion", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class VkIdTrustManager implements X509TrustManager {
    private static final Companion Companion = new Companion(null);
    private final Set<String> certificatePins;
    private final InternalVKIDLogger logger;
    private final X509TrustManager systemTrustManager;

    public VkIdTrustManager(Set<String> certificatePins) {
        Intrinsics.checkNotNullParameter(certificatePins, "certificatePins");
        this.certificatePins = certificatePins;
        this.logger = InternalVKIDLog.INSTANCE.createLoggerForTag("VkIdTrustManager");
        this.systemTrustManager = createTrustManagerWithRuCA();
    }

    @Override // javax.net.ssl.X509TrustManager
    public void checkClientTrusted(X509Certificate[] chain, String authType) throws CertificateException {
        Intrinsics.checkNotNullParameter(chain, "chain");
        Intrinsics.checkNotNullParameter(authType, "authType");
        this.systemTrustManager.checkClientTrusted(chain, authType);
    }

    @Override // javax.net.ssl.X509TrustManager
    public void checkServerTrusted(X509Certificate[] chain, String authType) throws CertificateException {
        Intrinsics.checkNotNullParameter(chain, "chain");
        Intrinsics.checkNotNullParameter(authType, "authType");
        try {
            try {
                checkCertificatePinning(chain);
            } catch (CertificateException unused) {
                this.systemTrustManager.checkServerTrusted(chain, authType);
            }
        } catch (CertificateException e) {
            this.logger.error("System CA verification failed", e);
            throw e;
        }
    }

    @Override // javax.net.ssl.X509TrustManager
    public X509Certificate[] getAcceptedIssuers() {
        X509Certificate[] acceptedIssuers = this.systemTrustManager.getAcceptedIssuers();
        Intrinsics.checkNotNullExpressionValue(acceptedIssuers, "getAcceptedIssuers(...)");
        return acceptedIssuers;
    }

    private final void checkCertificatePinning(X509Certificate[] chain) throws CertificateException {
        for (X509Certificate x509Certificate : chain) {
            if (this.certificatePins.contains(computePublicKeyPin(x509Certificate))) {
                return;
            }
        }
        StringBuilder sb = new StringBuilder();
        sb.append("Certificate pinning failed.");
        Intrinsics.checkNotNullExpressionValue(sb, "append(...)");
        sb.append('\n');
        Intrinsics.checkNotNullExpressionValue(sb, "append(...)");
        sb.append("Certificate chain pins: ");
        for (X509Certificate x509Certificate2 : chain) {
            sb.append("[" + computePublicKeyPin(x509Certificate2) + " (" + x509Certificate2.getSubjectDN() + ")] ");
        }
        String string = sb.toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        this.logger.error(string, null);
        throw new CertificateException("Certificate pinning failed. None of the provided certificates match expected pins.");
    }

    private final String computePublicKeyPin(X509Certificate certificate) throws CertificateException {
        byte[] encoded = certificate.getPublicKey().getEncoded();
        if (encoded == null) {
            throw new CertificateException("Failed to encode public key for certificate: " + certificate.getSubjectDN());
        }
        String strEncodeToString = Base64.encodeToString(MessageDigest.getInstance("SHA-256").digest(encoded), 0);
        Intrinsics.checkNotNullExpressionValue(strEncodeToString, "encodeToString(...)");
        return StringsKt.trimIndent(strEncodeToString);
    }

    private final X509TrustManager createTrustManagerWithRuCA() throws NoSuchAlgorithmException, IOException, KeyStoreException, CertificateException {
        KeyStore keyStore = KeyStore.getInstance(KeyStore.getDefaultType());
        keyStore.load(null, null);
        Intrinsics.checkNotNull(keyStore);
        addPlatformTrustedCertificates(keyStore);
        keyStore.setCertificateEntry("russian-root-ca", loadCertificate(Companion.getRUSSIAN_ROOT_CA_PEM()));
        TrustManagerFactory trustManagerFactory = TrustManagerFactory.getInstance(TrustManagerFactory.getDefaultAlgorithm());
        trustManagerFactory.init(keyStore);
        TrustManager trustManager = trustManagerFactory.getTrustManagers()[0];
        Intrinsics.checkNotNull(trustManager, "null cannot be cast to non-null type javax.net.ssl.X509TrustManager");
        return (X509TrustManager) trustManager;
    }

    private final void addPlatformTrustedCertificates(KeyStore keyStore) throws IOException {
        try {
            X509Certificate[] acceptedIssuers = createSystemTrustManager().getAcceptedIssuers();
            Intrinsics.checkNotNullExpressionValue(acceptedIssuers, "getAcceptedIssuers(...)");
            for (X509Certificate x509Certificate : acceptedIssuers) {
                keyStore.setCertificateEntry(x509Certificate.getSubjectDN().toString(), x509Certificate);
            }
        } catch (KeyStoreException e) {
            KeyStoreException keyStoreException = e;
            this.logger.error("Failed to add platform trusted certificates", keyStoreException);
            throw new IOException("Failed to add platform trusted certificates", keyStoreException);
        } catch (CertificateException e2) {
            CertificateException certificateException = e2;
            this.logger.error("Failed to add platform trusted certificates", certificateException);
            throw new IOException("Failed to add platform trusted certificates", certificateException);
        }
    }

    private final X509Certificate loadCertificate(String pem) throws CertificateException {
        CertificateFactory certificateFactory = CertificateFactory.getInstance(AndroidStaticDeviceInfoDataSource.CERTIFICATE_TYPE_X509);
        byte[] bytes = pem.getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
        Certificate certificateGenerateCertificate = certificateFactory.generateCertificate(new ByteArrayInputStream(bytes));
        Intrinsics.checkNotNull(certificateGenerateCertificate, "null cannot be cast to non-null type java.security.cert.X509Certificate");
        return (X509Certificate) certificateGenerateCertificate;
    }

    private final X509TrustManager createSystemTrustManager() throws IOException {
        try {
            return getSystemTrustManager();
        } catch (Exception e) {
            Exception exc = e;
            this.logger.error("Failed to create system trust manager", exc);
            throw new IOException("Failed to create system trust manager", exc);
        }
    }

    private final X509TrustManager getSystemTrustManager() throws NoSuchAlgorithmException, KeyStoreException {
        TrustManagerFactory trustManagerFactory = TrustManagerFactory.getInstance(TrustManagerFactory.getDefaultAlgorithm());
        trustManagerFactory.init((KeyStore) null);
        TrustManager[] trustManagers = trustManagerFactory.getTrustManagers();
        Intrinsics.checkNotNull(trustManagers);
        if (!(trustManagers.length == 0)) {
            TrustManager trustManager = trustManagers[0];
            if (trustManager instanceof X509TrustManager) {
                Intrinsics.checkNotNull(trustManager, "null cannot be cast to non-null type javax.net.ssl.X509TrustManager");
                return (X509TrustManager) trustManager;
            }
        }
        throw new IllegalArgumentException("No X509TrustManager found in system trust managers".toString());
    }

    /* JADX INFO: compiled from: VkIdTrustManager.kt */
    @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u0014\u0010\u0004\u001a\u00020\u00058BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u0006\u0010\u0007¨\u0006\b"}, d2 = {"Lcom/vk/id/network/http/ssl/VkIdTrustManager$Companion;", "", "<init>", "()V", "RUSSIAN_ROOT_CA_PEM", "", "getRUSSIAN_ROOT_CA_PEM", "()Ljava/lang/String;", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final String getRUSSIAN_ROOT_CA_PEM() {
            return "-----BEGIN CERTIFICATE-----\nMIIFwjCCA6qgAwIBAgICEAAwDQYJKoZIhvcNAQELBQAwcDELMAkGA1UEBhMCUlUx\nPzA9BgNVBAoMNlRoZSBNaW5pc3RyeSBvZiBEaWdpdGFsIERldmVsb3BtZW50IGFu\nZCBDb21tdW5pY2F0aW9uczEgMB4GA1UEAwwXUnVzc2lhbiBUcnVzdGVkIFJvb3Qg\nQ0EwHhcNMjIwMzAxMjEwNDE1WhcNMzIwMjI3MjEwNDE1WjBwMQswCQYDVQQGEwJS\nVTE/MD0GA1UECgw2VGhlIE1pbmlzdHJ5IG9mIERpZ2l0YWwgRGV2ZWxvcG1lbnQg\nYW5kIENvbW11bmljYXRpb25zMSAwHgYDVQQDDBdSdXNzaWFuIFRydXN0ZWQgUm9v\ndCBDQTCCAiIwDQYJKoZIhvcNAQEBBQADggIPADCCAgoCggIBAMfFOZ8pUAL3+r2n\nqqE0Zp52selXsKGFYoG0GM5bwz1bSFtCt+AZQMhkWQheI3poZAToYJu69pHLKS6Q\nXBiwBC1cvzYmUYKMYZC7jE5YhEU2bSL0mX7NaMxMDmH2/NwuOVRj8OImVa5s1F4U\nzn4Kv3PFlDBjjSjXKVY9kmjUBsXQrIHeaqmUIsPIlNWUnimXS0I0abExqkbdrXbX\nYwCOXhOO2pDUx3ckmJlCMUGacUTnylyQW2VsJIyIGA8V0xzdaeUXg0VZ6ZmNUr5Y\nBer/EAOLPb8NYpsAhJe2mXjMB/J9HNsoFMBFJ0lLOT/+dQvjbdRZoOT8eqJpWnVD\nU+QL/qEZnz57N88OWM3rabJkRNdU/Z7x5SFIM9FrqtN8xewsiBWBI0K6XFuOBOTD\n4V08o4TzJ8+Ccq5XlCUW2L48pZNCYuBDfBh7FxkB7qDgGDiaftEkZZfApRg2E+M9\nG8wkNKTPLDc4wH0FDTijhgxR3Y4PiS1HL2Zhw7bD3CbslmEGgfnnZojNkJtcLeBH\nBLa52/dSwNU4WWLubaYSiAmA9IUMX1/RpfpxOxd4Ykmhz97oFbUaDJFipIggx5sX\nePAlkTdWnv+RWBxlJwMQ25oEHmRguNYf4Zr/Rxr9cS93Y+mdXIZaBEE0KS2iLRqa\nOiWBki9IMQU4phqPOBAaG7A+eP8PAgMBAAGjZjBkMB0GA1UdDgQWBBTh0YHlzlpf\nBKrS6badZrHF+qwshzAfBgNVHSMEGDAWgBTh0YHlzlpfBKrS6badZrHF+qwshzAS\nBgNVHRMBAf8ECDAGAQH/AgEEMA4GA1UdDwEB/wQEAwIBhjANBgkqhkiG9w0BAQsF\nAAOCAgEAALIY1wkilt/urfEVM5vKzr6utOeDWCUczmWX/RX4ljpRdgF+5fAIS4vH\ntmXkqpSCOVeWUrJV9QvZn6L227ZwuE15cWi8DCDal3Ue90WgAJJZMfTshN4OI8cq\nW9E4EG9wglbEtMnObHlms8F3CHmrw3k6KmUkWGoa+/ENmcVl68u/cMRl1JbW2bM+\n/3A+SAg2c6iPDlehczKx2oa95QW0SkPPWGuNA/CE8CpyANIhu9XFrj3RQ3EqeRcS\nAQQod1RNuHpfETLU/A2gMmvn/w/sx7TB3W5BPs6rprOA37tutPq9u6FTZOcG1Oqj\nC/B7yTqgI7rbyvox7DEXoX7rIiEqyNNUguTk/u3SZ4VXE2kmxdmSh3TQvybfbnXV\n4JbCZVaqiZraqc7oZMnRoWrXRG3ztbnbes/9qhRGI7PqXqeKJBztxRTEVj8ONs1d\nWN5szTwaPIvhkhO3CO5ErU2rVdUr89wKpNXbBODFKRtgxUT70YpmJ46VVaqdAhOZ\nD9EUUn4YaeLaS8AjSF/h7UkjOibNc4qVDiPP+rkehFWM66PVnP1Msh93tc+taIfC\nEYVMxjh8zNbFuoc7fzvvrFILLe7ifvEIUqSVIC/AzplM/Jxw7buXFeGP1qVCBEHq\n391d/9RAfaZ12zkwFsl+IKwE/OZxW8AHa9i1p4GO0YSNuczzEm4=\n-----END CERTIFICATE-----";
        }
    }
}
