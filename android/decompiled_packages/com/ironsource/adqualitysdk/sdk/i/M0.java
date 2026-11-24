package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import android.view.View;
import android.webkit.WebView;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.net.URLDecoder;
import java.util.ArrayList;
import java.util.List;
import java.util.WeakHashMap;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public abstract class M0 extends AbstractC0963 implements View.OnLayoutChangeListener {

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public static final String f228 = StringFog.decrypt("zDuRyrtJ7gX/FpLytkD8Ng==\n", "m17znNIsmUQ=\n");

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public V0 f230;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public Y0 f232;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public boolean f233;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public boolean f234;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public String f235;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public List f236;

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public final WeakHashMap f231 = new WeakHashMap();

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public final ArrayList f229 = new ArrayList();

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static JSONObject m8332(M0 m0, String str) {
        m0.getClass();
        try {
            String strDecode = URLDecoder.decode(str, StringFog.decrypt("5x1DS0Y=\n", "skkFZn6BYyA=\n"));
            if (!TextUtils.isEmpty(strDecode)) {
                return new JSONObject(strDecode);
            }
        } catch (Exception e) {
            String str2 = f228;
            AbstractC0323.m8479(str2, str2, StringFog.decrypt("T5fJfp4nUDh+kdJ/iydTPH6E\n", "CuW7EewHN10=\n"), e, null, false);
        }
        return new JSONObject();
    }

    @Override // android.view.View.OnLayoutChangeListener
    public final void onLayoutChange(View view, int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8) {
        try {
            if (view instanceof WebView) {
                WebView webView = (WebView) view;
                if (this.f231.containsKey(webView)) {
                    m8334(webView);
                }
            }
        } catch (Throwable th) {
            AbstractC1104.m8887(f228, StringFog.decrypt("fAXSzbzxWXAZGM7ur6hfa000yMOgtlU=\n", "OXegos7RMB4=\n"), th, false);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0963, com.ironsource.adqualitysdk.sdk.i.InterfaceC0510
    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final void mo8333(JSONObject jSONObject, View view, Object obj) {
        jSONObject.remove(AbstractC1033.f3758);
        super.mo8333(jSONObject, (WebView) view, obj);
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public abstract Object mo8336(WebView webView);

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final void m8334(WebView webView) {
        Y0 y0 = (Y0) this.f231.get(webView);
        if (this.f234 && y0.f347.f247) {
            if (!(i1.m8366(webView) instanceof P0)) {
                y0.m8343();
            }
            V0 v0 = this.f230;
            v0.getClass();
            try {
                AbstractC1766n.m8385(new U0(v0, webView));
            } catch (Exception e) {
                AbstractC0323.m8470(V0.f264, StringFog.decrypt("dNofHrNtr/9bzQ4FqCOhsVvbTQWubbH0U/4EFLZ35g==\n", "MahtccFNxpE=\n") + e.getLocalizedMessage());
            }
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8338(WebView webView) {
        if (webView == null || this.f231.containsKey(webView)) {
            return;
        }
        String strDecrypt = StringFog.decrypt("uaKbO78mFh/3\n", "2Mb4V91NLDA=\n");
        WeakHashMap weakHashMap = Y0.f345;
        Y0 y0 = (Y0) weakHashMap.get(webView);
        if (y0 == null) {
            y0 = new Y0(webView, strDecrypt);
            weakHashMap.put(webView, y0);
        }
        if (this.f232 == null) {
            this.f232 = y0;
        }
        this.f231.put(webView, y0);
        L0 l0 = new L0(this);
        this.f229.add(l0);
        y0.f346.add(l0);
        m8334(webView);
        webView.addOnLayoutChangeListener(this);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0963
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String mo8337(Object obj) {
        return this.f235;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0963, com.ironsource.adqualitysdk.sdk.i.InterfaceC0510
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters and merged with bridge method [inline-methods] */
    public final void mo8335(JSONObject jSONObject, WebView webView, Object obj) {
        if (webView != null) {
            try {
                jSONObject.put(AbstractC1033.f3715, webView.getWindowToken() != null);
            } catch (JSONException unused) {
            }
        }
        super.mo8335(jSONObject, webView, obj);
    }
}
