package com.my.target;

import android.content.Context;
import android.net.TrafficStats;
import com.google.firebase.perf.network.FirebasePerfUrlConnection;
import java.io.File;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLConnection;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class q2 extends n2 {
    public static q2 a() {
        return new q2();
    }

    @Override // com.my.target.n2
    public o2 a(String str, String str2, Map map, Context context) {
        HttpURLConnection httpURLConnection;
        o2 o2Var = new o2();
        w1 w1VarB = w1.b(context);
        if (w1VarB == null) {
            gb.a("HttpVideoRequest: Unable to open disk cache and load/save video " + str);
            o2Var.f4756a = false;
            return o2Var;
        }
        String strB = w1VarB.b(str);
        o2Var.d = strB;
        if (strB != null) {
            o2Var.b = true;
            return o2Var;
        }
        HttpURLConnection httpURLConnection2 = null;
        try {
            gb.a("HttpVideoRequest: Send video request - " + str);
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
                o2Var.c = responseCode;
                if (responseCode == 200) {
                    File fileB = w1VarB.b(httpURLConnection.getInputStream(), str);
                    if (fileB != null) {
                        o2Var.d = fileB.getAbsolutePath();
                    } else {
                        o2Var.f4756a = false;
                        o2Var.e = "Video request error - can't save video to disk cache";
                        gb.a("HttpVideoRequest: " + o2Var.e);
                    }
                } else {
                    o2Var.f4756a = false;
                    o2Var.e = "Video request error - response code " + responseCode;
                    gb.a("HttpVideoRequest: " + o2Var.e);
                }
            } catch (Throwable th) {
                th = th;
                httpURLConnection2 = httpURLConnection;
                o2Var.f4756a = false;
                o2Var.e = th.getMessage();
                gb.a("HttpVideoRequest: Video request error - " + o2Var.e);
                httpURLConnection = httpURLConnection2;
            }
        } catch (Throwable th2) {
            th = th2;
        }
        if (httpURLConnection != null) {
            httpURLConnection.disconnect();
        }
        return o2Var;
    }
}
