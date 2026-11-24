package com.my.target;

import android.content.Context;
import android.graphics.BitmapFactory;
import android.net.TrafficStats;
import com.google.firebase.perf.network.FirebasePerfUrlConnection;
import java.io.BufferedInputStream;
import java.io.File;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLConnection;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class l2 extends n2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final o2 f4685a = new o2();

    public static l2 a() {
        return new l2();
    }

    @Override // com.my.target.n2
    public o2 a(String str, String str2, Map map, Context context) {
        w1 w1VarB = w1.b(context);
        if (w1VarB != null) {
            this.f4685a.d = w1VarB.a(str);
            o2 o2Var = this.f4685a;
            if (o2Var.d != null) {
                o2Var.b = true;
                return o2Var;
            }
        } else {
            gb.a("HttpImageRequest: Unable to open disk cache and get image - " + str);
        }
        a(w1VarB, str);
        return this.f4685a;
    }

    public final void a(w1 w1Var, String str) {
        HttpURLConnection httpURLConnection;
        HttpURLConnection httpURLConnection2 = null;
        try {
            gb.a("HttpImageRequest: Send image request - " + str);
            TrafficStats.setThreadStatsTag(98543098);
            httpURLConnection = (HttpURLConnection) ((URLConnection) FirebasePerfUrlConnection.instrument(new URL(str).openConnection()));
            try {
                httpURLConnection.setReadTimeout(10000);
                httpURLConnection.setConnectTimeout(10000);
                httpURLConnection.setInstanceFollowRedirects(true);
                httpURLConnection.setRequestProperty("connection", "close");
                v1.a(httpURLConnection);
                httpURLConnection.connect();
                int responseCode = httpURLConnection.getResponseCode();
                o2 o2Var = this.f4685a;
                o2Var.c = responseCode;
                if (responseCode == 200) {
                    InputStream inputStream = httpURLConnection.getInputStream();
                    if (w1Var != null) {
                        a(w1Var, inputStream, str);
                    } else {
                        a(inputStream);
                    }
                } else {
                    o2Var.f4756a = false;
                    o2Var.e = "Image request error - response code " + responseCode;
                    gb.a("HttpImageRequest: " + this.f4685a.e);
                }
            } catch (Throwable th) {
                th = th;
                httpURLConnection2 = httpURLConnection;
                o2 o2Var2 = this.f4685a;
                o2Var2.f4756a = false;
                o2Var2.e = th.getMessage();
                gb.a("HttpImageRequest: Image request error - " + this.f4685a.e);
                httpURLConnection = httpURLConnection2;
            }
        } catch (Throwable th2) {
            th = th2;
        }
        if (httpURLConnection != null) {
            httpURLConnection.disconnect();
        }
    }

    public final void a(w1 w1Var, InputStream inputStream, String str) {
        File fileA = w1Var.a(inputStream, str);
        if (fileA != null) {
            this.f4685a.d = BitmapFactory.decodeFile(fileA.getAbsolutePath());
            return;
        }
        o2 o2Var = this.f4685a;
        o2Var.f4756a = false;
        o2Var.e = "Image request error - can't save image to disk cache";
        gb.a("HttpImageRequest: Load in cache error - " + this.f4685a.e);
    }

    public final void a(InputStream inputStream) {
        BufferedInputStream bufferedInputStream = new BufferedInputStream(inputStream, 8192);
        this.f4685a.d = BitmapFactory.decodeStream(bufferedInputStream);
        try {
            bufferedInputStream.close();
        } catch (Throwable th) {
            gb.a("HttpImageRequest: Load in memory error - " + th.getMessage());
        }
    }
}
