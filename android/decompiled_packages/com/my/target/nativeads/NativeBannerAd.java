package com.my.target.nativeads;

import android.content.Context;
import android.view.View;
import com.my.target.a8;
import com.my.target.b7;
import com.my.target.c6;
import com.my.target.common.BaseAd;
import com.my.target.common.MyTargetVersion;
import com.my.target.common.menu.MenuFactory;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.common.models.ImageData;
import com.my.target.gb;
import com.my.target.h6;
import com.my.target.i7;
import com.my.target.j;
import com.my.target.j6;
import com.my.target.k7;
import com.my.target.m;
import com.my.target.nativeads.banners.NativeBanner;
import com.my.target.nativeads.views.NativeBannerAdView;
import com.my.target.o;
import com.my.target.o7;
import com.my.target.u2;
import com.my.target.x5;
import java.util.List;
import java.util.UUID;

/* JADX INFO: loaded from: classes6.dex */
public final class NativeBannerAd extends BaseAd implements INativeBannerAd {
    public final Context e;
    public final i7.b f;
    public MenuFactory g;
    public u2 h;
    public NativeBannerAdListener i;
    public NativeBannerAdMediaListener j;
    public NativeBannerAdChoicesListener k;
    public NativeBannerAdChoicesOptionListener l;
    public int m;

    public interface NativeBannerAdChoicesListener {
        void onAdChoicesIconLoad(ImageData imageData, boolean z, NativeBannerAd nativeBannerAd);
    }

    public interface NativeBannerAdChoicesOptionListener {
        void closeIfAutomaticallyDisabled(NativeBannerAd nativeBannerAd);

        void onCloseAutomatically(NativeBannerAd nativeBannerAd);

        boolean shouldCloseAutomatically();
    }

    public interface NativeBannerAdListener {
        void onClick(NativeBannerAd nativeBannerAd);

        void onLoad(NativeBanner nativeBanner, NativeBannerAd nativeBannerAd);

        void onNoAd(IAdLoadingError iAdLoadingError, NativeBannerAd nativeBannerAd);

        void onShow(NativeBannerAd nativeBannerAd);
    }

    public interface NativeBannerAdMediaListener {
        void onIconLoad(NativeBannerAd nativeBannerAd);
    }

    public NativeBannerAd(int i, Context context) {
        super(i, "nativebanner");
        this.f = new i7.b();
        this.m = 0;
        this.e = context.getApplicationContext();
        gb.c("Native banner ad created. Version - " + MyTargetVersion.VERSION);
    }

    public void a(b7 b7Var) {
        this.h = a8.a(this, b7Var, this.g, this.e);
    }

    public NativeBannerAdChoicesListener getAdChoicesListener() {
        return this.k;
    }

    public NativeBannerAdChoicesOptionListener getAdChoicesOptionListener() {
        return this.l;
    }

    @Override // com.my.target.nativeads.IAd
    public int getAdChoicesPlacement() {
        return this.m;
    }

    public String getAdSource() {
        u2 u2Var = this.h;
        if (u2Var != null) {
            return u2Var.a();
        }
        return null;
    }

    public float getAdSourcePriority() {
        u2 u2Var = this.h;
        if (u2Var != null) {
            return u2Var.b();
        }
        return 0.0f;
    }

    public NativeBanner getBanner() {
        u2 u2Var = this.h;
        if (u2Var == null) {
            return null;
        }
        return u2Var.c();
    }

    @Override // com.my.target.nativeads.IAd
    public int getCachePolicy() {
        return this.f4578a.f();
    }

    public NativeBannerAdListener getListener() {
        return this.i;
    }

    public NativeBannerAdMediaListener getMediaListener() {
        return this.j;
    }

    public void handleAdChoicesClick(Context context) {
        u2 u2Var = this.h;
        if (u2Var == null) {
            return;
        }
        u2Var.handleAdChoicesClick(context);
    }

    @Override // com.my.target.nativeads.IAd
    public void handleData(String str) {
        this.f4578a.a(o.a(this.d, UUID.randomUUID().toString(), 0, j6.f4671a));
        i7.a(this.f, str, this.f4578a, this.b).a(new NativeBannerAd$$ExternalSyntheticLambda0(this)).a(this.b.a(), this.e);
    }

    public boolean isMediationEnabled() {
        return this.f4578a.k();
    }

    @Override // com.my.target.nativeads.IAd
    public void load() {
        if (isLoadCalled()) {
            gb.a("NativeBannerAd: Doesn't support multiple load");
            this.f4578a.a().a(0, 1);
            a((o7) null, m.t);
        } else {
            o oVarA = o.a(this.d, this.f4578a.i(), 0, j6.f4671a);
            this.f4578a.a(oVarA);
            oVarA.b(0, 0);
            i7.a(this.f, this.f4578a, this.b).a(new NativeBannerAd$$ExternalSyntheticLambda0(this)).a(this.b.a(), this.e);
        }
    }

    @Override // com.my.target.nativeads.IAd
    public void loadFromBid(String str) {
        this.f4578a.b(str);
        load();
    }

    @Override // com.my.target.nativeads.INativeBannerAd
    public void registerView(NativeBannerAdViewBinder nativeBannerAdViewBinder, List<View> list) {
        k7.a(nativeBannerAdViewBinder.getRootAdBannerView(), this);
        u2 u2Var = this.h;
        if (u2Var != null) {
            u2Var.registerView(nativeBannerAdViewBinder, list, this.m);
        }
    }

    public void setAdChoicesListener(NativeBannerAdChoicesListener nativeBannerAdChoicesListener) {
        this.k = nativeBannerAdChoicesListener;
    }

    public void setAdChoicesOptionListener(NativeBannerAdChoicesOptionListener nativeBannerAdChoicesOptionListener) {
        this.l = nativeBannerAdChoicesOptionListener;
    }

    @Override // com.my.target.nativeads.IAd
    public void setAdChoicesPlacement(int i) {
        this.m = i;
    }

    @Override // com.my.target.nativeads.IAd
    public void setCachePolicy(int i) {
        this.f4578a.b(i);
    }

    public void setListener(NativeBannerAdListener nativeBannerAdListener) {
        this.i = nativeBannerAdListener;
    }

    public void setMediaListener(NativeBannerAdMediaListener nativeBannerAdMediaListener) {
        this.j = nativeBannerAdMediaListener;
        u2 u2Var = this.h;
        if (u2Var != null) {
            u2Var.a(nativeBannerAdMediaListener);
        }
    }

    public void setMediationEnabled(boolean z) {
        this.f4578a.a(z);
    }

    @Override // com.my.target.nativeads.IAd
    public void unregisterView() {
        k7.a(this);
        u2 u2Var = this.h;
        if (u2Var != null) {
            u2Var.unregisterView();
        }
    }

    public void a(o7 o7Var) {
        this.f4578a.a(o.a(this.d, 0, j6.f4671a));
        h6.a aVarA = h6.a(this.f4578a.i());
        i7.a(this.f, o7Var, this.f4578a, aVarA).a(new NativeBannerAd$$ExternalSyntheticLambda0(this)).a(aVarA.a(), this.e);
    }

    @Override // com.my.target.nativeads.INativeBannerAd
    public void registerView(NativeBannerAdView nativeBannerAdView) {
        registerView(nativeBannerAdView.getNativeBannerAdViewBinder(), (List<View>) null);
    }

    @Override // com.my.target.nativeads.INativeBannerAd
    public void registerView(NativeBannerAdView nativeBannerAdView, List<View> list) {
        registerView(nativeBannerAdView.getNativeBannerAdViewBinder(), list);
    }

    @Override // com.my.target.nativeads.INativeBannerAd
    public void registerView(NativeBannerAdViewBinder nativeBannerAdViewBinder) {
        registerView(nativeBannerAdViewBinder, (List<View>) null);
    }

    @Override // com.my.target.nativeads.IAd
    @Deprecated
    public void registerView(View view, List<View> list) {
        k7.a(view, this);
        u2 u2Var = this.h;
        if (u2Var != null) {
            u2Var.registerView(view, list, this.m);
        }
    }

    @Override // com.my.target.nativeads.IAd
    @Deprecated
    public void registerView(View view) {
        registerView(view, (List<View>) null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(o7 o7Var, IAdLoadingError iAdLoadingError) {
        NativeBannerAdListener nativeBannerAdListener = this.i;
        if (nativeBannerAdListener == null) {
            return;
        }
        if (o7Var == null) {
            if (iAdLoadingError == null) {
                iAdLoadingError = m.o;
            }
            nativeBannerAdListener.onNoAd(iAdLoadingError, this);
            return;
        }
        b7 b7VarD = o7Var.d();
        x5 x5VarB = o7Var.b();
        if (b7VarD != null) {
            a8 a8VarA = a8.a(this, b7VarD, this.g, this.e);
            this.h = a8VarA;
            a8VarA.a(this.j);
            NativeBanner nativeBannerC = this.h.c();
            if (nativeBannerC != null) {
                this.i.onLoad(nativeBannerC, this);
                return;
            }
            return;
        }
        if (x5VarB != null) {
            c6 c6VarA = c6.a(this, x5VarB, this.f4578a, this.b, this.g);
            this.h = c6VarA;
            c6VarA.b(this.e);
        } else {
            NativeBannerAdListener nativeBannerAdListener2 = this.i;
            if (iAdLoadingError == null) {
                iAdLoadingError = m.u;
            }
            nativeBannerAdListener2.onNoAd(iAdLoadingError, this);
        }
    }

    public NativeBannerAd(int i, MenuFactory menuFactory, Context context) {
        this(i, context);
        this.g = menuFactory;
    }

    public void a(j jVar, b7 b7Var) {
        setCachePolicy(jVar.f());
        a(b7Var);
        o oVarA = o.a(this.d, jVar.a());
        this.f4578a.a(oVarA);
        b7Var.d().a(oVarA);
    }
}
