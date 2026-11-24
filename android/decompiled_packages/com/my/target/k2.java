package com.my.target;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkCapabilities;
import android.net.TrafficStats;
import com.google.firebase.perf.network.FirebasePerfUrlConnection;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.SocketTimeoutException;
import java.net.URL;
import java.net.URLConnection;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class k2 extends n2 {
    public static final Charset b = StandardCharsets.UTF_8;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final o f4676a;

    public k2(o oVar) {
        this.f4676a = oVar;
    }

    public static k2 a() {
        return new k2(o.i);
    }

    public static k2 a(o oVar) {
        return new k2(oVar);
    }

    public static boolean a(Context context) {
        NetworkCapabilities networkCapabilities;
        try {
            ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
            Network activeNetwork = connectivityManager.getActiveNetwork();
            return (activeNetwork == null || (networkCapabilities = connectivityManager.getNetworkCapabilities(activeNetwork)) == null || (!networkCapabilities.hasTransport(1) && !networkCapabilities.hasTransport(0) && !networkCapabilities.hasTransport(3))) ? false : true;
        } catch (Throwable th) {
            gb.a("HttpAdRequest: can't check network state " + th.getMessage());
            return false;
        }
    }

    @Override // com.my.target.n2
    public o2 a(String str, String str2, Map map, Context context) {
        HttpURLConnection httpURLConnection;
        String str3;
        o2 o2Var = new o2();
        HttpURLConnection httpURLConnection2 = null;
        try {
            gb.a("HttpAdRequest: Send ad request - " + str);
            TrafficStats.setThreadStatsTag(98543098);
            httpURLConnection = (HttpURLConnection) ((URLConnection) FirebasePerfUrlConnection.instrument(new URL(str).openConnection()));
            try {
                httpURLConnection.setReadTimeout(10000);
                httpURLConnection.setConnectTimeout(10000);
                httpURLConnection.setInstanceFollowRedirects(true);
                httpURLConnection.setRequestProperty("connection", "close");
                v1.a(httpURLConnection);
                if (map != null) {
                    for (Map.Entry entry : map.entrySet()) {
                        httpURLConnection.setRequestProperty((String) entry.getKey(), (String) entry.getValue());
                    }
                }
                if (str2 != null) {
                    str3 = "body - " + str2;
                    httpURLConnection.setDoOutput(true);
                    httpURLConnection.setRequestMethod("POST");
                    httpURLConnection.setRequestProperty("Content-Type", "application/x-mtrgdata-v1");
                    OutputStream outputStream = httpURLConnection.getOutputStream();
                    try {
                        outputStream.write(str2.getBytes());
                        outputStream.close();
                    } catch (Throwable th) {
                        if (outputStream != null) {
                            try {
                                outputStream.close();
                            } catch (Throwable th2) {
                                th.addSuppressed(th2);
                            }
                        }
                        throw th;
                    }
                } else {
                    str3 = "url - " + str;
                    httpURLConnection.connect();
                }
                gb.a("HttpAdRequest: Send ad request, " + str3);
                int responseCode = httpURLConnection.getResponseCode();
                o2Var.c = responseCode;
                if (responseCode == 200) {
                    BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(httpURLConnection.getInputStream(), b));
                    try {
                        StringBuilder sb = new StringBuilder();
                        while (true) {
                            String line = bufferedReader.readLine();
                            if (line == null) {
                                break;
                            }
                            sb.append(line);
                            th = th;
                            httpURLConnection2 = httpURLConnection;
                            this.f4676a.b(0, 2001, eb.a(th));
                            if (th instanceof SocketTimeoutException) {
                                o2Var.c = 408;
                            }
                            o2Var.f4756a = false;
                            o2Var.e = th.getMessage();
                            gb.a("HttpAdRequest: Ad request error - " + o2Var.e);
                            httpURLConnection = httpURLConnection2;
                        }
                        o2Var.d = sb.toString();
                        bufferedReader.close();
                    } catch (Throwable th3) {
                        try {
                            bufferedReader.close();
                        } catch (Throwable th4) {
                            th3.addSuppressed(th4);
                        }
                        throw th3;
                    }
                } else if (responseCode != 204) {
                    this.f4676a.c(0, 2001, "code=" + httpURLConnection.getResponseCode());
                    o2Var.f4756a = false;
                    o2Var.e = "Ad request error - response code " + responseCode;
                    gb.a("HttpAdRequest: " + o2Var.e);
                }
            } catch (Throwable th5) {
                th = th5;
                httpURLConnection2 = httpURLConnection;
            }
        } catch (Throwable th6) {
            th = th6;
        }
        if (httpURLConnection != null) {
            httpURLConnection.disconnect();
        }
        return o2Var;
    }
}
