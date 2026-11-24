package com.pushwoosh.v;

import com.google.firebase.perf.network.FirebasePerfUrlConnection;
import com.pushwoosh.internal.utils.PWLog;
import java.io.BufferedInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLConnection;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class d {
    public static c a(String str, JSONObject jSONObject, String str2, Map map, String str3) throws Exception {
        try {
            URL url = new URL(str + str2);
            HttpURLConnection httpURLConnection = (HttpURLConnection) ((URLConnection) FirebasePerfUrlConnection.instrument(url.openConnection()));
            httpURLConnection.setConnectTimeout(30000);
            httpURLConnection.setReadTimeout(60000);
            httpURLConnection.setRequestMethod("POST");
            for (Map.Entry entry : map.entrySet()) {
                httpURLConnection.setRequestProperty((String) entry.getKey(), (String) entry.getValue());
            }
            httpURLConnection.setRequestProperty("Content-Type", "application/json; charset=utf-8");
            httpURLConnection.setRequestProperty("Authorization", str3);
            httpURLConnection.setDoOutput(true);
            String string = jSONObject.toString();
            httpURLConnection.setRequestProperty("Content-Length", String.valueOf(string.getBytes().length));
            httpURLConnection.setUseCaches(false);
            OutputStream outputStream = httpURLConnection.getOutputStream();
            try {
                outputStream.write(string.getBytes());
                outputStream.flush();
                outputStream.close();
                c cVarA = a(httpURLConnection);
                PWLog.debug("HttpTransport", "\n| Pushwoosh request: " + str2 + "\n| - URL: " + url.toString() + "\n| - Payload: " + string + "\n| - Response: " + cVarA.c + "\n");
                return cVarA;
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
        } catch (Exception e) {
            PWLog.error("HttpTransport", "Request failed: " + e.getMessage(), e);
            throw e;
        }
    }

    public static c a(HttpURLConnection httpURLConnection) throws IOException {
        BufferedInputStream bufferedInputStream;
        int responseCode = httpURLConnection.getResponseCode();
        if (responseCode >= 400 && responseCode < 600) {
            bufferedInputStream = new BufferedInputStream(httpURLConnection.getErrorStream());
        } else {
            bufferedInputStream = new BufferedInputStream(httpURLConnection.getInputStream());
        }
        try {
            String strTrim = "";
            if (httpURLConnection.getContentLength() != 0) {
                try {
                    ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                    try {
                        byte[] bArr = new byte[1024];
                        while (true) {
                            int i = bufferedInputStream.read(bArr);
                            if (i < 0) {
                                break;
                            }
                            byteArrayOutputStream.write(bArr, 0, i);
                        }
                        strTrim = byteArrayOutputStream.toString().trim();
                        byteArrayOutputStream.close();
                    } catch (Throwable th) {
                        try {
                            byteArrayOutputStream.close();
                        } catch (Throwable th2) {
                            th.addSuppressed(th2);
                        }
                        throw th;
                    }
                } catch (Exception e) {
                    PWLog.error("HttpTransport", "Failed to read response body", e);
                }
            }
            bufferedInputStream.close();
            return new c(responseCode, httpURLConnection.getResponseMessage(), strTrim);
        } catch (Throwable th3) {
            bufferedInputStream.close();
            throw th3;
        }
    }
}
