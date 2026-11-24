package com.ironsource.adqualitysdk.sdk.i;

import android.view.View;
import android.webkit.WebView;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Т, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class ViewOnLayoutChangeListenerC0361 implements View.OnLayoutChangeListener {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ AbstractC0325 f1360;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ Object f1361;

    public ViewOnLayoutChangeListenerC0361(AbstractC0325 abstractC0325, Object obj) {
        this.f1360 = abstractC0325;
        this.f1361 = obj;
    }

    @Override // android.view.View.OnLayoutChangeListener
    public final void onLayoutChange(View view, int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8) {
        try {
            ArrayList arrayList = new ArrayList();
            this.f1360.mo8381(this.f1361, arrayList);
            if (arrayList.isEmpty()) {
                return;
            }
            View viewMo8379 = this.f1360.mo8379(this.f1361);
            if (viewMo8379 != null && !this.f1360.f1196.f1312) {
                viewMo8379.removeOnLayoutChangeListener(this);
            }
            this.f1360.m8485(this.f1361, arrayList);
            this.f1360.mo8363(new JSONObject(), (WebView) arrayList.get(0), this.f1361);
        } catch (Throwable th) {
            AbstractC1104.m8887(StringFog.decrypt("neqr8S/8zWu+8Yb5FP7Rarf6tQ==\n", "25/HnVyfvw4=\n"), StringFog.decrypt("JvQpBU/hg/xD6TUmXLiF5xfFMwtTpo8=\n", "Y4Zbaj3B6pI=\n"), th, false);
        }
    }
}
