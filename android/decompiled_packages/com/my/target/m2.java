package com.my.target;

import android.content.Context;
import android.net.TrafficStats;
import com.google.firebase.perf.network.FirebasePerfUrlConnection;
import java.io.BufferedWriter;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLConnection;
import java.nio.charset.StandardCharsets;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class m2 extends n2 {
    public static m2 a() {
        return new m2();
    }

    @Override // com.my.target.n2
    public o2 a(String str, String str2, Map map, Context context) {
        o2 o2Var = new o2();
        if (str2 == null) {
            gb.a("HttpLogRequest: Can't send log request - body is null");
            o2Var.f4756a = false;
            return o2Var;
        }
        gb.a("HttpLogRequest: Send log request");
        HttpURLConnection httpURLConnection = null;
        try {
            TrafficStats.setThreadStatsTag(98543098);
            HttpURLConnection httpURLConnection2 = (HttpURLConnection) ((URLConnection) FirebasePerfUrlConnection.instrument(new URL(str).openConnection()));
            try {
                httpURLConnection2.setUseCaches(false);
                httpURLConnection2.setDoOutput(true);
                httpURLConnection2.setConnectTimeout(5000);
                httpURLConnection2.setReadTimeout(5000);
                httpURLConnection2.setRequestMethod("POST");
                httpURLConnection2.setRequestProperty("Content-Type", "text/html; charset=utf-8");
                httpURLConnection2.setRequestProperty("connection", "close");
                v1.a(httpURLConnection2);
                httpURLConnection2.connect();
                OutputStream outputStream = httpURLConnection2.getOutputStream();
                BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(outputStream, StandardCharsets.UTF_8));
                bufferedWriter.write(str2);
                bufferedWriter.flush();
                bufferedWriter.close();
                outputStream.close();
                httpURLConnection2.getInputStream().close();
                httpURLConnection2.disconnect();
                return o2Var;
            } catch (Throwable th) {
                th = th;
                httpURLConnection = httpURLConnection2;
                try {
                    o2Var.f4756a = false;
                    o2Var.e = th.getMessage();
                    gb.a("HttpLogRequest: Log request error - " + o2Var.e);
                    return o2Var;
                } finally {
                    if (httpURLConnection != null) {
                        httpURLConnection.disconnect();
                    }
                }
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }
}
