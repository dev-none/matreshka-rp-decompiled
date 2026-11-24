package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.view.View;
import android.webkit.WebView;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.סּ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC1005 implements InterfaceC0510 {
    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0510
    /* JADX INFO: renamed from: ﻐ, reason: merged with bridge method [inline-methods] */
    public abstract void mo8363(JSONObject jSONObject, WebView webView, Activity activity);

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0510
    /* JADX INFO: renamed from: ﻛ, reason: merged with bridge method [inline-methods] */
    public abstract void mo8351(JSONObject jSONObject, WebView webView, Activity activity);

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0510
    /* JADX INFO: renamed from: ｋ, reason: merged with bridge method [inline-methods] */
    public abstract void mo8333(JSONObject jSONObject, WebView webView, Activity activity);

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0510
    /* JADX INFO: renamed from: ｋ, reason: merged with bridge method [inline-methods] */
    public abstract void mo8360(JSONObject jSONObject, WebView webView, Object obj, Activity activity);

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0510
    /* JADX INFO: renamed from: ﾇ, reason: merged with bridge method [inline-methods] */
    public abstract void mo8335(JSONObject jSONObject, WebView webView, Activity activity);

    /* JADX INFO: renamed from: ﾇ */
    public abstract void mo8450(JSONObject jSONObject, WebView webView, Object obj, Activity activity);

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0510
    /* JADX INFO: renamed from: ﾒ, reason: merged with bridge method [inline-methods] */
    public abstract void mo8357(JSONObject jSONObject, WebView webView, Activity activity);

    /* JADX INFO: renamed from: ﾒ */
    public abstract void mo8452(JSONObject jSONObject, WebView webView, Object obj, Activity activity);

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0510
    /* JADX INFO: renamed from: ﾇ */
    public /* bridge */ /* synthetic */ void mo8356(JSONObject jSONObject, View view, Q0 q0, Object obj) {
        mo8450(jSONObject, (WebView) view, (Object) q0, (Activity) obj);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0510
    /* JADX INFO: renamed from: ﾒ */
    public /* bridge */ /* synthetic */ void mo8362(JSONObject jSONObject, View view, Q0 q0, Object obj) {
        mo8452(jSONObject, (WebView) view, (Object) q0, (Activity) obj);
    }
}
