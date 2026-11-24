package com.my.target.nativeads;

import android.content.Context;
import android.view.View;
import com.my.target.b6;
import com.my.target.b7;
import com.my.target.ba;
import com.my.target.c0;
import com.my.target.common.BaseAd;
import com.my.target.common.ExternalClickHandler;
import com.my.target.common.MyTargetVersion;
import com.my.target.common.menu.MenuFactory;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.common.models.ImageData;
import com.my.target.gb;
import com.my.target.h7;
import com.my.target.i7;
import com.my.target.j;
import com.my.target.j6;
import com.my.target.k7;
import com.my.target.m;
import com.my.target.nativeads.banners.NativePromoBanner;
import com.my.target.nativeads.views.MediaAdView;
import com.my.target.nativeads.views.NativeAdView;
import com.my.target.o;
import com.my.target.o7;
import com.my.target.t2;
import com.my.target.x5;
import java.util.List;
import java.util.UUID;

/* JADX INFO: loaded from: classes6.dex */
public final class NativeAd extends BaseAd implements INativeAd {
    public final Context e;
    public final i7.a f;
    public MenuFactory g;
    public t2 h;
    public NativeAdListener i;
    public NativeAdChoicesListener j;
    public NativeAdMediaListener k;
    public NativeAdChoicesOptionListener l;
    public ExternalClickHandler m;
    public int n;
    public boolean o;

    public interface NativeAdChoicesListener {
        void onAdChoicesIconLoad(ImageData imageData, boolean z, NativeAd nativeAd);
    }

    public interface NativeAdChoicesOptionListener {
        void closeIfAutomaticallyDisabled(NativeAd nativeAd);

        void onCloseAutomatically(NativeAd nativeAd);

        boolean shouldCloseAutomatically();
    }

    public interface NativeAdListener {
        void onClick(NativeAd nativeAd);

        void onLoad(NativePromoBanner nativePromoBanner, NativeAd nativeAd);

        void onNoAd(IAdLoadingError iAdLoadingError, NativeAd nativeAd);

        void onShow(NativeAd nativeAd);

        void onVideoComplete(NativeAd nativeAd);

        void onVideoPause(NativeAd nativeAd);

        void onVideoPlay(NativeAd nativeAd);
    }

    public interface NativeAdMediaListener {
        void onIconLoad(NativeAd nativeAd);

        void onImageLoad(NativeAd nativeAd);
    }

    public NativeAd(int i, Context context) {
        super(i, "nativeads");
        this.f = new i7.a();
        this.n = 0;
        this.o = true;
        this.e = context.getApplicationContext();
        this.g = null;
        gb.c("Native ad created. Version - " + MyTargetVersion.VERSION);
    }

    public void a(j jVar, b7 b7Var) {
        setCachePolicy(jVar.f());
        a(b7Var);
        o oVarA = o.a(this.d, jVar.a());
        this.f4578a.a(oVarA);
        b7Var.d().a(oVarA);
    }

    public NativeAdChoicesListener getAdChoicesListener() {
        return this.j;
    }

    public NativeAdChoicesOptionListener getAdChoicesOptionListener() {
        return this.l;
    }

    @Override // com.my.target.nativeads.IAd
    public int getAdChoicesPlacement() {
        return this.n;
    }

    public String getAdSource() {
        t2 t2Var = this.h;
        if (t2Var != null) {
            return t2Var.a();
        }
        return null;
    }

    public float getAdSourcePriority() {
        t2 t2Var = this.h;
        if (t2Var != null) {
            return t2Var.b();
        }
        return 0.0f;
    }

    public NativePromoBanner getBanner() {
        t2 t2Var = this.h;
        if (t2Var == null) {
            return null;
        }
        return t2Var.d();
    }

    @Override // com.my.target.nativeads.IAd
    public int getCachePolicy() {
        return this.f4578a.f();
    }

    public NativeAdListener getListener() {
        return this.i;
    }

    public NativeAdMediaListener getMediaListener() {
        return this.k;
    }

    public void handleAdChoicesClick(Context context) {
        t2 t2Var = this.h;
        if (t2Var == null) {
            return;
        }
        t2Var.handleAdChoicesClick(context);
    }

    @Override // com.my.target.nativeads.IAd
    public void handleData(String str) {
        this.f4578a.a(o.a(this.d, UUID.randomUUID().toString(), 1, j6.f4671a));
        i7.a(this.f, str, this.f4578a, this.b).a(new NativeAd$$ExternalSyntheticLambda0(this)).a(this.b.a(), this.e);
    }

    public boolean isMediationEnabled() {
        return this.f4578a.k();
    }

    public boolean isUseExoPlayer() {
        return this.o;
    }

    @Override // com.my.target.nativeads.IAd
    public void load() {
        if (isLoadCalled()) {
            gb.a("NativeAd: Doesn't support multiple load");
            this.f4578a.a().a(0, 1);
            a((o7) null, m.t);
        } else {
            o oVarA = o.a(this.d, this.f4578a.i(), 1, j6.f4671a);
            this.f4578a.a(oVarA);
            oVarA.b(0, 0);
            i7.a(this.f, this.f4578a, this.b).a(new NativeAd$$ExternalSyntheticLambda0(this)).a(this.b.a(), this.e);
        }
    }

    @Override // com.my.target.nativeads.IAd
    public void loadFromBid(String str) {
        this.f4578a.b(str);
        load();
    }

    @Override // com.my.target.nativeads.INativeAd
    public void registerView(NativeAdViewBinder nativeAdViewBinder) {
        registerView(nativeAdViewBinder, (List<View>) null);
    }

    public void setAdChoicesListener(NativeAdChoicesListener nativeAdChoicesListener) {
        this.j = nativeAdChoicesListener;
    }

    public void setAdChoicesOptionListener(NativeAdChoicesOptionListener nativeAdChoicesOptionListener) {
        this.l = nativeAdChoicesOptionListener;
    }

    @Override // com.my.target.nativeads.IAd
    public void setAdChoicesPlacement(int i) {
        this.n = i;
    }

    @Override // com.my.target.nativeads.IAd
    public void setCachePolicy(int i) {
        this.f4578a.b(i);
    }

    public void setInternalObject(Object obj) {
        if (!c0.a(this.e)) {
            gb.b("You can't use 'setInternalObject' method. It's for internal partners only.");
            return;
        }
        if (!(obj instanceof ExternalClickHandler)) {
            gb.b("'setInternalObject' method error. Wrong object type.");
            return;
        }
        ExternalClickHandler externalClickHandler = (ExternalClickHandler) obj;
        this.m = externalClickHandler;
        t2 t2Var = this.h;
        if (t2Var == null) {
            return;
        }
        t2Var.a(externalClickHandler);
    }

    public void setListener(NativeAdListener nativeAdListener) {
        this.i = nativeAdListener;
    }

    public void setMediaListener(NativeAdMediaListener nativeAdMediaListener) {
        this.k = nativeAdMediaListener;
        t2 t2Var = this.h;
        if (t2Var != null) {
            t2Var.a(nativeAdMediaListener);
        }
    }

    public void setMediationEnabled(boolean z) {
        this.f4578a.a(z);
    }

    @Override // com.my.target.nativeads.IAd
    public void unregisterView() {
        k7.a(this);
        t2 t2Var = this.h;
        if (t2Var != null) {
            t2Var.unregisterView();
        }
    }

    public void useExoPlayer(boolean z) {
        this.o = z;
        if (z) {
            return;
        }
        ba.g();
    }

    @Override // com.my.target.nativeads.INativeAd
    public void registerView(NativeAdViewBinder nativeAdViewBinder, List<View> list) {
        k7.a(nativeAdViewBinder.getRootAdView(), this);
        t2 t2Var = this.h;
        if (t2Var != null) {
            t2Var.registerView(nativeAdViewBinder, list, this.n);
        }
    }

    @Override // com.my.target.nativeads.INativeAd
    public void registerView(NativeAdView nativeAdView) {
        registerView(nativeAdView.getNativeAdViewBinder(), (List<View>) null);
    }

    @Override // com.my.target.nativeads.INativeAd
    public void registerView(NativeAdView nativeAdView, List<View> list) {
        registerView(nativeAdView.getNativeAdViewBinder(), list);
    }

    @Override // com.my.target.nativeads.IAd
    @Deprecated
    public void registerView(View view, List<View> list) {
        k7.a(view, this);
        t2 t2Var = this.h;
        if (t2Var != null) {
            t2Var.a(view, list, this.n, null);
        }
    }

    public void a(View view, List list, MediaAdView mediaAdView) {
        k7.a(view, this);
        t2 t2Var = this.h;
        if (t2Var != null) {
            t2Var.a(view, list, this.n, mediaAdView);
        }
    }

    @Override // com.my.target.nativeads.IAd
    @Deprecated
    public void registerView(View view) {
        registerView(view, (List<View>) null);
    }

    public void a(b7 b7Var) {
        h7 h7VarA = h7.a(this, b7Var, this.g, this.e);
        this.h = h7VarA;
        h7VarA.a(this.m);
    }

    public void a(o7 o7Var) {
        this.f4578a.a(o.a(this.d, 1, j6.f4671a));
        i7.a(this.f, o7Var, this.f4578a, this.b).a(new NativeAd$$ExternalSyntheticLambda0(this)).a(this.b.a(), this.e);
    }

    public NativeAd(int i, MenuFactory menuFactory, Context context) {
        this(i, context);
        this.g = menuFactory;
    }

    public final void a(o7 o7Var, IAdLoadingError iAdLoadingError) {
        NativeAdListener nativeAdListener = this.i;
        if (nativeAdListener == null) {
            return;
        }
        if (o7Var == null) {
            if (iAdLoadingError == null) {
                iAdLoadingError = m.o;
            }
            nativeAdListener.onNoAd(iAdLoadingError, this);
            return;
        }
        b7 b7VarD = o7Var.d();
        x5 x5VarB = o7Var.b();
        if (b7VarD != null) {
            h7 h7VarA = h7.a(this, b7VarD, this.g, this.e);
            this.h = h7VarA;
            h7VarA.a(this.k);
            this.h.a(this.m);
            if (this.h.d() != null) {
                this.i.onLoad(this.h.d(), this);
                this.f4578a.a().b(0, 3);
                return;
            }
            return;
        }
        if (x5VarB != null) {
            b6 b6VarA = b6.a(this, x5VarB, this.f4578a, this.b, this.g);
            this.h = b6VarA;
            b6VarA.b(this.e);
            this.f4578a.a().b(0, 3);
            return;
        }
        NativeAdListener nativeAdListener2 = this.i;
        if (iAdLoadingError == null) {
            iAdLoadingError = m.u;
        }
        nativeAdListener2.onNoAd(iAdLoadingError, this);
    }
}
