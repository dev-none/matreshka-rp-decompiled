package com.vk.id.network.http.ssl;

import android.content.Context;
import android.content.res.Resources;
import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import com.vk.id.network.R;
import io.sentry.SentryEvent;
import java.io.BufferedInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.security.KeyManagementException;
import java.security.NoSuchAlgorithmException;
import java.security.SecureRandom;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Set;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.KeyManager;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLSocketFactory;
import javax.net.ssl.TrustManager;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.io.CloseableKt;
import kotlin.io.TextStreamsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;

/* JADX INFO: compiled from: SSLConfigurator.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\"\n\u0002\u0010\u000e\n\u0000\b\u0000\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u000e\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u0011J\b\u0010\u0012\u001a\u00020\u0013H\u0002J\u0013\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u00160\u0015H\u0002¢\u0006\u0002\u0010\u0017J\u000e\u0010\u0018\u001a\b\u0012\u0004\u0012\u00020\u001a0\u0019H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u001b\u0010\b\u001a\u00020\t8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\f\u0010\r\u001a\u0004\b\n\u0010\u000b¨\u0006\u001b"}, d2 = {"Lcom/vk/id/network/http/ssl/SSLConfigurator;", "", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", "sslSocketFactory", "Ljavax/net/ssl/SSLSocketFactory;", "getSslSocketFactory", "()Ljavax/net/ssl/SSLSocketFactory;", "sslSocketFactory$delegate", "Lkotlin/Lazy;", "configureSSL", "", "connection", "Ljava/net/HttpURLConnection;", "createSSLContext", "Ljavax/net/ssl/SSLContext;", "createTrustManagers", "", "Ljavax/net/ssl/TrustManager;", "()[Ljavax/net/ssl/TrustManager;", "loadCertificatePins", "", "", "network_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class SSLConfigurator {
    private final Context context;
    private final InternalVKIDLogger logger;

    /* JADX INFO: renamed from: sslSocketFactory$delegate, reason: from kotlin metadata */
    private final Lazy sslSocketFactory;

    public SSLConfigurator(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
        this.logger = InternalVKIDLog.INSTANCE.createLoggerForTag("SSLConfigurator");
        this.sslSocketFactory = LazyKt.lazy(new Function0() { // from class: com.vk.id.network.http.ssl.SSLConfigurator$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return SSLConfigurator.sslSocketFactory_delegate$lambda$0(this.f$0);
            }
        });
    }

    private final SSLSocketFactory getSslSocketFactory() {
        Object value = this.sslSocketFactory.getValue();
        Intrinsics.checkNotNullExpressionValue(value, "getValue(...)");
        return (SSLSocketFactory) value;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final SSLSocketFactory sslSocketFactory_delegate$lambda$0(SSLConfigurator sSLConfigurator) throws IOException, KeyManagementException {
        SSLContext sSLContextCreateSSLContext = sSLConfigurator.createSSLContext();
        sSLContextCreateSSLContext.init(new KeyManager[0], sSLConfigurator.createTrustManagers(), new SecureRandom());
        return sSLContextCreateSSLContext.getSocketFactory();
    }

    public final void configureSSL(HttpURLConnection connection) throws IOException {
        Intrinsics.checkNotNullParameter(connection, "connection");
        if (!(connection instanceof HttpsURLConnection)) {
            this.logger.debug("Skipping SSL configuration for non-HTTPS connection");
            return;
        }
        try {
            ((HttpsURLConnection) connection).setSSLSocketFactory(getSslSocketFactory());
        } catch (KeyManagementException e) {
            KeyManagementException keyManagementException = e;
            this.logger.error("Failed to initialize SSL context", keyManagementException);
            throw new IOException("Failed to configure SSL", keyManagementException);
        }
    }

    private final SSLContext createSSLContext() throws IOException {
        try {
            try {
                return SSLContext.getInstance("TLSv1.3");
            } catch (NoSuchAlgorithmException unused) {
                return SSLContext.getInstance("TLS");
            }
        } catch (NoSuchAlgorithmException e) {
            NoSuchAlgorithmException noSuchAlgorithmException = e;
            this.logger.error("TLS algorithm not available", noSuchAlgorithmException);
            throw new IOException("Failed to create SSL context", noSuchAlgorithmException);
        }
    }

    private final TrustManager[] createTrustManagers() {
        return new TrustManager[]{new VkIdTrustManager(loadCertificatePins())};
    }

    private final Set<String> loadCertificatePins() throws IOException {
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        try {
            InputStream inputStreamOpenRawResource = this.context.getResources().openRawResource(R.raw.vkid_cacerts_pins);
            try {
                Iterator<T> it = TextStreamsKt.readLines(new InputStreamReader(new BufferedInputStream(inputStreamOpenRawResource), Charsets.UTF_8)).iterator();
                while (it.hasNext()) {
                    linkedHashSet.add((String) it.next());
                }
                Unit unit = Unit.INSTANCE;
                CloseableKt.closeFinally(inputStreamOpenRawResource, null);
                this.logger.debug("Loaded " + linkedHashSet.size() + " certificate pins");
                return linkedHashSet;
            } catch (Throwable th) {
                try {
                    throw th;
                } catch (Throwable th2) {
                    CloseableKt.closeFinally(inputStreamOpenRawResource, th);
                    throw th2;
                }
            }
        } catch (Resources.NotFoundException e) {
            Resources.NotFoundException notFoundException = e;
            this.logger.error("Certificate pins not found in resources", notFoundException);
            throw new IOException("Certificate pins not found in resources", notFoundException);
        } catch (IOException e2) {
            IOException iOException = e2;
            this.logger.error("Failed to read certificate pins file", iOException);
            throw new IOException("Failed to load certificate pins from resources", iOException);
        }
    }
}
