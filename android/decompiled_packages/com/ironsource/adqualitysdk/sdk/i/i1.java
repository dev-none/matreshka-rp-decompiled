package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public abstract class i1 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static final String f418 = StringFog.decrypt("YTht0wOnzo1CNGP2\n", "Nl0PhWrCudg=\n");

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static boolean f417 = true;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static boolean f416 = true;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static boolean f415 = true;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static boolean f414 = false;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static boolean f413 = false;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static h1 f412 = new h1();

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public static h1 f411 = new h1();

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static WebViewClient m8366(WebView webView) {
        JSONObject jSONObject;
        Z0 z0M8368 = m8368();
        synchronized (z0M8368) {
            jSONObject = z0M8368.f2592;
        }
        boolean z = true;
        if (jSONObject.optBoolean(StringFog.decrypt("2FhVNg==\n", "vy8jVdyk+nM=\n"), true)) {
            Context context = webView.getContext();
            if (f416) {
                try {
                    f416 = false;
                    WebView webView2 = new WebView(context);
                    P0 p0 = new P0(null, new C1743c1());
                    webView2.setWebViewClient(p0);
                    if (p0 != webView2.getWebViewClient()) {
                        z = false;
                    }
                    f414 = z;
                } catch (Throwable th) {
                    AbstractC1104.m8887(f418, StringFog.decrypt("PAixlzIA+NwcGaiRLke73R9asJktRbvjHBiVkSVX2NgQH62M\n", "eXrD+EAgm7Q=\n"), th, false);
                }
            }
            if (f414) {
                return webView.getWebViewClient();
            }
        }
        m8372(webView.getContext());
        InterfaceC0681 interfaceC0681M8370 = m8370(webView, new f1(), f412);
        if (interfaceC0681M8370 != null) {
            return (WebViewClient) ((C0674) interfaceC0681M8370).m8615();
        }
        throw new RuntimeException(StringFog.decrypt("H9090PaDJUx81CHS9s1VXT7kIdnlrm5ROdw8nPSEZ1Q4\n", "XLJIvJLtAjg=\n"));
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static synchronized Z0 m8368() {
        return ((C0896) AbstractC0895.m8747()).f3178;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static WebChromeClient m8367(WebView webView) {
        JSONObject jSONObject;
        Z0 z0M8368 = m8368();
        synchronized (z0M8368) {
            jSONObject = z0M8368.f2592;
        }
        if (jSONObject.optBoolean(StringFog.decrypt("tOd4hw==\n", "05Ab5IY2SDs=\n"), true)) {
            Context context = webView.getContext();
            if (f415) {
                f415 = false;
                WebView webView2 = new WebView(context);
                H0 h0 = new H0(new C1746d1());
                webView2.setWebChromeClient(h0);
                f413 = h0 == webView2.getWebChromeClient();
            }
            if (f413) {
                return webView.getWebChromeClient();
            }
        }
        m8372(webView.getContext());
        InterfaceC0681 interfaceC0681M8370 = m8370(webView, new g1(), f411);
        if (interfaceC0681M8370 != null) {
            return (WebChromeClient) ((C0674) interfaceC0681M8370).m8615();
        }
        throw new RuntimeException(StringFog.decrypt("NFx9lyfPCT1XVWGVJ4F5LBVwYIkszEsKG1ptlTeBSCASX2w=\n", "dzMI+0OhLkk=\n"));
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8372(Context context) {
        if (f417) {
            f417 = false;
            try {
                WebView webView = new WebView(context);
                P0 p0 = new P0(null, new C1737a1());
                webView.setWebViewClient(p0);
                H0 h0 = new H0(new C1740b1());
                webView.setWebChromeClient(h0);
                f412 = m8369(webView, p0, new f1());
                f411 = m8369(webView, h0, new g1());
            } catch (Throwable th) {
                AbstractC1104.m8887(f418, StringFog.decrypt("s0KmPP+Cb5KTU78648UsnJlC9DrjzGmI1lO4OujMeIk=\n", "9jDUU42iDPo=\n"), th, false);
            }
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static h1 m8369(WebView webView, InterfaceC0462 interfaceC0462, InterfaceC0678 interfaceC0678) {
        h1 h1Var = new h1();
        C0941 c0941 = m8368().f2591;
        JSONObject jSONObject = c0941.f3319;
        String str = c0941.f3325;
        List listM8813 = c0941.f3327;
        String str2 = AbstractC0939.f3313;
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(str);
        if (jSONArrayOptJSONArray != null) {
            listM8813 = AbstractC0939.m8813(jSONArrayOptJSONArray);
        }
        C0941 c0942 = m8368().f2591;
        InterfaceC0681 interfaceC0681M8371 = m8371(webView, interfaceC0678, listM8813, c0942.f3319.optInt(c0942.f3324, 7));
        if (interfaceC0681M8371 != null) {
            Object objM8615 = ((C0674) interfaceC0681M8371).m8615();
            if (objM8615 == interfaceC0462) {
                h1Var.f377 = true;
                return h1Var;
            }
            C0941 c0943 = m8368().f2591;
            JSONObject jSONObject2 = c0943.f3319;
            String str3 = c0943.f3323;
            List listM8814 = c0943.f3326;
            JSONArray jSONArrayOptJSONArray2 = jSONObject2.optJSONArray(str3);
            if (jSONArrayOptJSONArray2 != null) {
                listM8814 = AbstractC0939.m8813(jSONArrayOptJSONArray2);
            }
            C0941 c0944 = m8368().f2591;
            InterfaceC0681 interfaceC0681M8372 = m8371(objM8615, interfaceC0678, listM8814, c0944.f3319.optInt(c0944.f3322, 2));
            if (interfaceC0681M8372 != null && ((C0674) interfaceC0681M8372).m8615() == interfaceC0462) {
                h1Var.f376 = true;
            }
        }
        return h1Var;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static InterfaceC0681 m8371(Object obj, InterfaceC0678 interfaceC0678, List list, int i) {
        C0493 c0493 = C0705.m8630().f2438;
        C1749e1 c1749e1 = new C1749e1(list);
        c0493.getClass();
        C0572 c0572 = new C0572();
        c0572.f2054.f2110 = -1;
        c0572.f2053 = interfaceC0678;
        c0572.f2052 = c1749e1;
        C0597 c0597 = c0572.f2054;
        c0597.f2115 = list;
        c0597.f2114 = i;
        c0597.f2117 = interfaceC0678.getClass();
        c0572.f2054.f2116 = C1749e1.class;
        return c0493.m8557(obj, c0572);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static InterfaceC0681 m8370(WebView webView, InterfaceC0678 interfaceC0678, h1 h1Var) {
        Object objM8615;
        try {
            if (!h1Var.f377 && !h1Var.f376) {
                return null;
            }
            C0941 c0941 = m8368().f2591;
            JSONObject jSONObject = c0941.f3319;
            String str = c0941.f3325;
            List listM8813 = c0941.f3327;
            String str2 = AbstractC0939.f3313;
            JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(str);
            if (jSONArrayOptJSONArray != null) {
                listM8813 = AbstractC0939.m8813(jSONArrayOptJSONArray);
            }
            C0941 c0942 = m8368().f2591;
            InterfaceC0681 interfaceC0681M8371 = m8371(webView, interfaceC0678, listM8813, c0942.f3319.optInt(c0942.f3324, 7));
            if (h1Var.f376 && interfaceC0681M8371 != null && (objM8615 = ((C0674) interfaceC0681M8371).m8615()) != null && !objM8615.getClass().equals(((C0674) interfaceC0681M8371).f2333.getType())) {
                C0941 c0943 = m8368().f2591;
                JSONObject jSONObject2 = c0943.f3319;
                String str3 = c0943.f3323;
                List listM8814 = c0943.f3326;
                JSONArray jSONArrayOptJSONArray2 = jSONObject2.optJSONArray(str3);
                if (jSONArrayOptJSONArray2 != null) {
                    listM8814 = AbstractC0939.m8813(jSONArrayOptJSONArray2);
                }
                C0941 c0944 = m8368().f2591;
                return m8371(objM8615, interfaceC0678, listM8814, c0944.f3319.optInt(c0944.f3322, 2));
            }
            return interfaceC0681M8371;
        } catch (Throwable th) {
            AbstractC1104.m8887(f418, StringFog.decrypt("O4z/xyIaDDUKiuTGNxoIPBeb49xwXAI1Epo=\n", "fv6NqFA6a1A=\n"), th, false);
            return null;
        }
    }
}
