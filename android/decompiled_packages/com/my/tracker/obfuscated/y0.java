package com.my.tracker.obfuscated;

import android.text.TextUtils;
import com.my.tracker.MyTrackerConfig;
import java.net.InetAddress;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class y0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    boolean f5011a = false;
    private x0 b = null;

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
    public void b(String str, MyTrackerConfig.OkHttpClientProvider okHttpClientProvider) {
        x2.a("Ipv4DataProvider: get IPv4 address");
        try {
            s0.b bVarA = s0.a(okHttpClientProvider).a(str);
            if (!bVarA.c()) {
                x2.a("Ipv4DataProvider: unsuccessful response from server: " + bVarA.a());
                return;
            }
            String str2 = (String) bVarA.b();
            if (TextUtils.isEmpty(str2)) {
                x2.a("Ipv4DataProvider: empty response from server");
                return;
            }
            String strOptString = new JSONObject(str2).optString("ip");
            if (TextUtils.isEmpty(strOptString)) {
                x2.a("Ipv4DataProvider: IP is empty");
                return;
            }
            x2.a("Ipv4DataProvider: IPv4 address is received " + strOptString);
            this.b = new x0(InetAddress.getByName(strOptString).getAddress());
        } catch (Throwable th) {
            x2.b("Ipv4DataProvider: failed to get IPv4 address", th);
        }
    }

    public x0 a(final String str, final MyTrackerConfig.OkHttpClientProvider okHttpClientProvider) {
        if (!this.f5011a) {
            this.f5011a = true;
            m.b(new Runnable() { // from class: com.my.tracker.obfuscated.y0$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.b(str, okHttpClientProvider);
                }
            });
        }
        return this.b;
    }
}
