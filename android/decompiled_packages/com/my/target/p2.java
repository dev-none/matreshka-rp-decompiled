package com.my.target;

import android.content.Context;
import android.net.TrafficStats;
import android.os.Build;
import com.google.firebase.perf.network.FirebasePerfUrlConnection;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URI;
import java.net.URL;
import java.net.URLConnection;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class p2 extends n2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final o2 f4765a = new o2();
    public int b;

    public static p2 a() {
        return new p2();
    }

    @Override // com.my.target.n2
    public o2 a(String str, String str2, Map map, Context context) {
        this.b = 0;
        a(str, context);
        return this.f4765a;
    }

    public final void a(String str, Context context) {
        HttpURLConnection httpURLConnection;
        this.f4765a.d = str;
        gb.a("HttpStatRequest: Send stat request - " + str);
        u6 u6VarA = u6.a(context);
        String strA = null;
        try {
            TrafficStats.setThreadStatsTag(98543098);
            httpURLConnection = (HttpURLConnection) ((URLConnection) FirebasePerfUrlConnection.instrument(new URL(str).openConnection()));
            try {
                httpURLConnection.setReadTimeout(10000);
                httpURLConnection.setConnectTimeout(10000);
                httpURLConnection.setRequestMethod("GET");
                httpURLConnection.addRequestProperty("User-Agent", System.getProperty("http.agent"));
                httpURLConnection.setInstanceFollowRedirects(false);
                httpURLConnection.setRequestProperty("connection", "close");
                v1.a(httpURLConnection);
                u6VarA.b(httpURLConnection);
                int responseCode = httpURLConnection.getResponseCode();
                this.f4765a.c = responseCode;
                InputStream inputStream = httpURLConnection.getInputStream();
                if (inputStream != null) {
                    inputStream.close();
                }
                if (responseCode == 200 || responseCode == 204 || responseCode == 404 || responseCode == 403) {
                    u6VarA.a(httpURLConnection);
                } else if (responseCode == 302 || responseCode == 301 || responseCode == 303) {
                    this.b++;
                    strA = a(httpURLConnection);
                }
            } catch (Throwable th) {
                th = th;
                o2 o2Var = this.f4765a;
                o2Var.f4756a = false;
                o2Var.e = th.getMessage();
                gb.a("HttpStatRequest: Stat request error - " + this.f4765a.e);
            }
        } catch (Throwable th2) {
            th = th2;
            httpURLConnection = null;
        }
        if (httpURLConnection != null) {
            httpURLConnection.disconnect();
        }
        if (strA != null) {
            gb.a("HttpStatRequest: Redirected to - " + strA);
            a(strA, context);
        }
    }

    public final String a(HttpURLConnection httpURLConnection) {
        if (this.b <= 10) {
            try {
                String string = httpURLConnection.getURL().toURI().resolve(new URI(httpURLConnection.getHeaderField("Location"))).toString();
                boolean z = Build.VERSION.SDK_INT < 28 || lb.c(string);
                if (!lb.d(string) && z) {
                    return string;
                }
                this.f4765a.d = string;
            } catch (Throwable unused) {
            }
        }
        return null;
    }
}
