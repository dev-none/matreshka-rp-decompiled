package com.my.target;

import android.content.Context;
import io.github.mytargetsdk.CertData;
import io.github.mytargetsdk.CertManager;
import java.net.HttpURLConnection;
import javax.net.ssl.HttpsURLConnection;

/* JADX INFO: loaded from: classes6.dex */
public abstract class v1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static CertData f4838a;
    public static boolean b;

    public static void a(Context context) {
        if (b) {
            return;
        }
        CertData certDataCreateCertData = new CertManager().createCertData(context);
        f4838a = certDataCreateCertData;
        if (certDataCreateCertData == null) {
            gb.b("DigitalGovCertsUtils: can't init digital gov certs – certData is null");
        }
        b = true;
    }

    public static CertData a() {
        return f4838a;
    }

    public static void a(HttpURLConnection httpURLConnection) {
        CertData certData = f4838a;
        if (certData != null && (httpURLConnection instanceof HttpsURLConnection)) {
            try {
                ((HttpsURLConnection) httpURLConnection).setSSLSocketFactory(certData.sslContext.getSocketFactory());
            } catch (Throwable th) {
                gb.a("DigitalGovCertsUtils: can't setSSLSocketFactory to httpsURLConnection" + th.getMessage());
            }
        }
    }
}
