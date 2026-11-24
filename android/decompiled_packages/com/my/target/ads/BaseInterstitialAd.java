package com.my.target.ads;

import android.content.Context;
import com.my.target.ba;
import com.my.target.common.BaseAd;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.gb;
import com.my.target.h6;
import com.my.target.i4;
import com.my.target.m;
import com.my.target.s2;
import com.my.target.t4;

/* JADX INFO: loaded from: classes6.dex */
public abstract class BaseInterstitialAd extends BaseAd {
    public final Context e;
    public s2 f;
    public boolean g;
    public h6 h;

    public BaseInterstitialAd(int i, String str, Context context) {
        super(i, str);
        this.g = true;
        this.e = context;
    }

    public final void a(t4 t4Var) {
        i4.a(t4Var, this.f4578a, this.b).a(new BaseInterstitialAd$$ExternalSyntheticLambda0(this)).a(this.b.a(), this.e);
    }

    public void a(t4 t4Var, IAdLoadingError iAdLoadingError) {
    }

    public void b() {
        this.h = this.b.b();
    }

    public void destroy() {
        s2 s2Var = this.f;
        if (s2Var != null) {
            s2Var.destroy();
            this.f = null;
        }
    }

    public void dismiss() {
        s2 s2Var = this.f;
        if (s2Var != null) {
            s2Var.dismiss();
        }
    }

    public String getAdSource() {
        s2 s2Var = this.f;
        if (s2Var != null) {
            return s2Var.a();
        }
        return null;
    }

    public float getAdSourcePriority() {
        s2 s2Var = this.f;
        if (s2Var != null) {
            return s2Var.b();
        }
        return 0.0f;
    }

    public boolean isMediationEnabled() {
        return this.f4578a.k();
    }

    public boolean isUseExoPlayer() {
        return this.g;
    }

    public final void load() {
        if (isLoadCalled()) {
            gb.a("BaseInterstitialAd: Interstitial/Rewarded doesn't support multiple load");
            a(null, m.t);
        } else {
            i4.a(this.f4578a, this.b).a(new BaseInterstitialAd$$ExternalSyntheticLambda0(this)).a(this.b.a(), this.e);
        }
    }

    public void loadFromBid(String str) {
        this.f4578a.b(str);
        load();
    }

    public void setMediationEnabled(boolean z) {
        this.f4578a.a(z);
    }

    public void show() {
        show(null);
    }

    public void useExoPlayer(boolean z) {
        this.g = z;
        if (z) {
            return;
        }
        ba.g();
    }

    public void show(Context context) {
        s2 s2Var = this.f;
        if (s2Var == null) {
            gb.c("Base interstitial ad show - no ad");
            return;
        }
        if (context == null) {
            context = this.e;
        }
        s2Var.a(context);
    }

    public void a() {
        h6 h6Var = this.h;
        if (h6Var == null) {
            return;
        }
        h6Var.b();
        this.h.b(this.e);
    }
}
