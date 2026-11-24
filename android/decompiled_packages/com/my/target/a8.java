package com.my.target;

import android.content.Context;
import android.view.View;
import com.my.target.common.menu.MenuFactory;
import com.my.target.common.models.ImageData;
import com.my.target.nativeads.NativeBannerAd;
import com.my.target.nativeads.NativeBannerAdViewBinder;
import com.my.target.nativeads.banners.NativeBanner;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class a8 implements u2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final NativeBannerAd f4533a;
    public final b7 b;
    public final e1 c = e1.a();
    public final d8 d;
    public final NativeBanner e;
    public final l8 f;
    public NativeBannerAd.NativeBannerAdMediaListener g;

    public static class a implements d8.b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final a8 f4534a;
        public final NativeBannerAd b;

        public a(a8 a8Var, NativeBannerAd nativeBannerAd) {
            this.f4534a = a8Var;
            this.b = nativeBannerAd;
        }

        @Override // com.my.target.m8
        public void a(View view, int i) {
            this.f4534a.a(view, i);
        }

        @Override // com.my.target.d8.b
        public void b() {
            NativeBannerAd.NativeBannerAdMediaListener nativeBannerAdMediaListener = this.f4534a.g;
            if (nativeBannerAdMediaListener != null) {
                nativeBannerAdMediaListener.onIconLoad(this.b);
            }
        }

        @Override // com.my.target.d8.b
        public void a(View view) {
            this.f4534a.a(view);
        }

        @Override // com.my.target.a3.b
        public void a(boolean z) {
            NativeBannerAd.NativeBannerAdChoicesListener adChoicesListener = this.b.getAdChoicesListener();
            if (adChoicesListener == null) {
                return;
            }
            if (!z) {
                adChoicesListener.onAdChoicesIconLoad(null, false, this.b);
                return;
            }
            NativeBanner banner = this.b.getBanner();
            if (banner == null) {
                adChoicesListener.onAdChoicesIconLoad(null, false, this.b);
                return;
            }
            ImageData adChoicesIcon = banner.getAdChoicesIcon();
            if (adChoicesIcon == null) {
                adChoicesListener.onAdChoicesIconLoad(null, false, this.b);
            } else {
                adChoicesListener.onAdChoicesIconLoad(adChoicesIcon, true, this.b);
            }
        }

        @Override // com.my.target.d8.b
        public void b(Context context) {
            NativeBannerAd.NativeBannerAdChoicesOptionListener adChoicesOptionListener = this.b.getAdChoicesOptionListener();
            if (adChoicesOptionListener == null) {
                this.f4534a.a(context);
                gb.a("NativeBannerAdEngine: there is no NativeBannerAdChoicesOptionListener, default behaviour for closing the ad.");
            } else if (adChoicesOptionListener.shouldCloseAutomatically()) {
                this.f4534a.a(context);
                adChoicesOptionListener.onCloseAutomatically(this.b);
                gb.a("NativeBannerAdEngine: Ad should close automatically.");
            } else {
                gb.a("NativeBannerAdEngine: Ad shouldn't close automatically.");
                adChoicesOptionListener.closeIfAutomaticallyDisabled(this.b);
            }
        }
    }

    public a8(NativeBannerAd nativeBannerAd, b7 b7Var, MenuFactory menuFactory, Context context) {
        this.f4533a = nativeBannerAd;
        this.b = b7Var;
        this.e = NativeBanner.a(b7Var);
        this.d = d8.a(b7Var, new a(this, nativeBannerAd), menuFactory);
        this.f = l8.a(b7Var, 2, null, context);
    }

    public static a8 a(NativeBannerAd nativeBannerAd, b7 b7Var, MenuFactory menuFactory, Context context) {
        return new a8(nativeBannerAd, b7Var, menuFactory, context);
    }

    @Override // com.my.target.u2
    public float b() {
        return 0.0f;
    }

    @Override // com.my.target.u2
    public NativeBanner c() {
        return this.e;
    }

    @Override // com.my.target.u2
    public void handleAdChoicesClick(Context context) {
        this.d.c(context);
    }

    @Override // com.my.target.u2
    public void registerView(View view, List list, int i) {
        unregisterView();
        l8 l8Var = this.f;
        if (l8Var != null) {
            l8Var.a(view, new l8.b[0]);
        }
        this.d.a(view, list, i);
    }

    @Override // com.my.target.u2
    public void unregisterView() {
        this.d.b();
        l8 l8Var = this.f;
        if (l8Var != null) {
            l8Var.a();
        }
    }

    @Override // com.my.target.u2
    public void a(NativeBannerAd.NativeBannerAdMediaListener nativeBannerAdMediaListener) {
        this.g = nativeBannerAdMediaListener;
    }

    @Override // com.my.target.u2
    public String a() {
        return "myTarget";
    }

    public void a(View view, int i) {
        gb.a("NativeBannerAdEngine: Click received by native banner ad, cs=" + i);
        if (view != null) {
            a(this.b, view, i);
        }
    }

    @Override // com.my.target.u2
    public void registerView(NativeBannerAdViewBinder nativeBannerAdViewBinder, List list, int i) {
        unregisterView();
        l8 l8Var = this.f;
        if (l8Var != null) {
            l8Var.a(nativeBannerAdViewBinder.getRootAdBannerView(), new l8.b[0]);
        }
        this.d.a(nativeBannerAdViewBinder, list, i);
    }

    public void a(View view) {
        l8 l8Var = this.f;
        if (l8Var != null) {
            l8Var.c();
        }
        NativeBannerAd.NativeBannerAdListener listener = this.f4533a.getListener();
        gb.a("NativeBannerAdEngine: Ad shown, banner Id = " + this.b.r());
        if (listener != null) {
            listener.onShow(this.f4533a);
        }
    }

    public void a(Context context) {
        this.d.b(context);
    }

    public final void a(b bVar, View view, int i) {
        Context context;
        if (bVar != null && (context = view.getContext()) != null) {
            this.c.a(bVar, i, context);
        }
        NativeBannerAd.NativeBannerAdListener listener = this.f4533a.getListener();
        if (listener != null) {
            listener.onClick(this.f4533a);
        }
    }
}
