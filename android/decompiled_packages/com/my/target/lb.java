package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import android.webkit.URLUtil;
import java.net.URL;
import java.net.URLDecoder;
import java.net.URLEncoder;

/* JADX INFO: loaded from: classes6.dex */
public class lb {
    public static final String[] c = {"http://play.google.com", "https://play.google.com", "http://market.android.com", "https://market.android.com", "https://appgallery.huawei.com/", "https://appgallery.cloud.huawei.com/", "market://", "samsungapps://", "appmarket://", "hiapplink://", "mimarket://", "https://apps.rustore.ru", "https://backapi.rustore.ru"};

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f4701a;
    public a b;

    public interface a {
        void a(String str);
    }

    public lb(String str) {
        this.f4701a = str;
    }

    public static String a(String str) {
        try {
            return URLDecoder.decode(str, "UTF-8");
        } catch (Throwable th) {
            gb.a("UrlResolver: Unable to decode url - " + th.getMessage());
            return str;
        }
    }

    public static String b(String str) {
        try {
            return URLEncoder.encode(str, "UTF-8");
        } catch (Throwable th) {
            gb.a("UrlResolver: Unable to encode url - " + th.getMessage());
            return "";
        }
    }

    public static boolean c(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        return str.startsWith("https");
    }

    public static boolean d(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        for (String str2 : c) {
            if (str.startsWith(str2)) {
                return true;
            }
        }
        return false;
    }

    public static boolean e(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        try {
            if (URLUtil.isHttpsUrl(str)) {
                return !TextUtils.isEmpty(new URL(str).getHost());
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    public static lb g(String str) {
        return new lb(str);
    }

    public final /* synthetic */ void f(String str) {
        a aVar = this.b;
        if (aVar != null) {
            aVar.a(str);
            this.b = null;
        }
    }

    public lb a(a aVar) {
        this.b = aVar;
        return this;
    }

    public void a(final h0 h0Var, Context context) {
        final Context applicationContext = context.getApplicationContext();
        f0.e(new Runnable() { // from class: com.my.target.lb$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(applicationContext, h0Var);
            }
        });
    }

    public final /* synthetic */ void a(Context context, h0 h0Var) {
        o2 o2VarA = p2.a().a(this.f4701a, null, context);
        final String str = (String) o2VarA.c();
        if (TextUtils.isEmpty(str)) {
            h0Var.c(2, 7004, "resolvedUrl is empty, url=" + this.f4701a + ", responseCode=" + o2VarA.b());
        }
        if (this.b == null) {
            return;
        }
        f0.f(new Runnable() { // from class: com.my.target.lb$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.f(str);
            }
        });
    }
}
