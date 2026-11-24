package com.my.tracker.obfuscated;

import android.text.TextUtils;
import com.my.tracker.MyTrackerConfig;
import java.io.ByteArrayOutputStream;
import java.util.zip.GZIPOutputStream;
import okhttp3.MediaType;
import okhttp3.Request;
import okhttp3.RequestBody;
import okhttp3.Response;
import okhttp3.ResponseBody;

/* JADX INFO: loaded from: classes6.dex */
public final class k1 extends s0 {
    static final MediaType d = MediaType.parse("application/octet-stream");

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final s0.a f4962a;
    final MyTrackerConfig.OkHttpClientProvider b;
    final boolean c;

    k1(s0.a aVar, MyTrackerConfig.OkHttpClientProvider okHttpClientProvider, boolean z) {
        this.f4962a = aVar;
        this.b = okHttpClientProvider;
        this.c = z;
    }

    @Override // com.my.tracker.obfuscated.s0
    public s0.b a(String str) {
        ByteArrayOutputStream byteArrayOutputStream;
        GZIPOutputStream gZIPOutputStream;
        s0.b bVarD = s0.b.d();
        Response response = null;
        try {
            x2.a("OkHttpPostRequest: send request to " + str);
            try {
                byteArrayOutputStream = new ByteArrayOutputStream();
                try {
                    if (this.c) {
                        x2.a("OkHttpPostRequest: populating post request body using gzip");
                        gZIPOutputStream = new GZIPOutputStream(byteArrayOutputStream);
                        try {
                            this.f4962a.a(gZIPOutputStream);
                            gZIPOutputStream.finish();
                        } catch (Throwable th) {
                            th = th;
                            if (gZIPOutputStream != null) {
                                gZIPOutputStream.close();
                            }
                            if (byteArrayOutputStream != null) {
                                byteArrayOutputStream.close();
                            }
                            throw th;
                        }
                    } else {
                        x2.a("OkHttpPostRequest: populating post request body without using gzip");
                        this.f4962a.a(byteArrayOutputStream);
                        byteArrayOutputStream.flush();
                        gZIPOutputStream = null;
                    }
                    Request requestBuild = new Request.Builder().url(str).header("Content-Encoding", "gzip").post(RequestBody.create(byteArrayOutputStream.toByteArray(), d)).build();
                    if (gZIPOutputStream != null) {
                        gZIPOutputStream.close();
                    }
                    byteArrayOutputStream.close();
                    Response responseExecute = this.b.getOkHttpClient().newCall(requestBuild).execute();
                    try {
                        int iCode = responseExecute.code();
                        if (iCode == 200 || iCode == 204) {
                            x2.a("OkHttpPostRequest: response successfully received");
                            bVarD.f4994a = true;
                        } else {
                            x2.a("OkHttpPostRequest error: response code " + iCode);
                            bVarD.f4994a = false;
                        }
                        if (iCode == 200) {
                            x2.a("OkHttpPostRequest: processing server response");
                            ResponseBody responseBodyBody = responseExecute.body();
                            String strString = responseBodyBody != null ? responseBodyBody.string() : null;
                            if (TextUtils.isEmpty(strString)) {
                                x2.a("OkHttpPostRequest: response data is empty");
                            } else {
                                bVarD.b = strString;
                            }
                        }
                        responseExecute.close();
                        return bVarD;
                    } catch (Throwable th2) {
                        response = responseExecute;
                        th = th2;
                        try {
                            x2.a("OkHttpPostRequest error: error while sending data", th);
                            bVarD.f4994a = false;
                            bVarD.c = "OkHttpPostRequest error: error while sending data";
                            return bVarD;
                        } finally {
                            if (response != null) {
                                response.close();
                            }
                        }
                    }
                } catch (Throwable th3) {
                    th = th3;
                    gZIPOutputStream = null;
                }
            } catch (Throwable th4) {
                th = th4;
                byteArrayOutputStream = null;
                gZIPOutputStream = null;
            }
        } catch (Throwable th5) {
            th = th5;
        }
    }
}
