package com.my.tracker.obfuscated;

import android.text.TextUtils;
import com.my.tracker.MyTrackerConfig;
import okhttp3.Request;
import okhttp3.Response;
import okhttp3.ResponseBody;

/* JADX INFO: loaded from: classes6.dex */
public final class j1 extends s0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final MyTrackerConfig.OkHttpClientProvider f4957a;

    j1(MyTrackerConfig.OkHttpClientProvider okHttpClientProvider) {
        this.f4957a = okHttpClientProvider;
    }

    @Override // com.my.tracker.obfuscated.s0
    public s0.b a(String str) {
        s0.b bVarD = s0.b.d();
        Response response = null;
        try {
            x2.a("OkHttpGetRequest: send request to " + str);
            Response responseExecute = this.f4957a.getOkHttpClient().newCall(new Request.Builder().url(str).get().build()).execute();
            try {
                int iCode = responseExecute.code();
                if (iCode == 200) {
                    x2.a("OkHttpGetRequest: response successfully received");
                    bVarD.f4994a = true;
                } else {
                    x2.a("OkHttpGetRequest error: response code " + iCode);
                    bVarD.f4994a = false;
                }
                if (iCode == 200) {
                    x2.a("OkHttpGetRequest: processing server response");
                    ResponseBody responseBodyBody = responseExecute.body();
                    String strString = responseBodyBody != null ? responseBodyBody.string() : null;
                    if (TextUtils.isEmpty(strString)) {
                        x2.a("OkHttpGetRequest: response data is empty");
                    } else {
                        bVarD.b = strString;
                    }
                }
                responseExecute.close();
                return bVarD;
            } catch (Throwable th) {
                th = th;
                response = responseExecute;
                try {
                    x2.a("OkHttpGetRequest error: error while sending data", th);
                    bVarD.f4994a = false;
                    bVarD.c = "OkHttpGetRequest error: error while sending data";
                    return bVarD;
                } finally {
                    if (response != null) {
                        response.close();
                    }
                }
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }
}
