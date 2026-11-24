package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import com.my.target.common.ExternalClickHandler;
import com.my.target.common.menu.MenuFactory;
import com.my.target.common.models.ImageData;
import com.my.target.nativeads.NativeAd;
import com.my.target.nativeads.NativeAdViewBinder;
import com.my.target.nativeads.banners.NativePromoBanner;
import com.my.target.nativeads.views.MediaAdView;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class h7 implements t2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final NativeAd f4652a;
    public final b7 d;
    public final r7 f;
    public final NativePromoBanner g;
    public final l8 h;
    public NativeAd.NativeAdMediaListener i;
    public ExternalClickHandler j;
    public boolean k;
    public final ArrayList b = new ArrayList();
    public final ArrayList c = new ArrayList();
    public final e1 e = e1.a();

    public static class a implements r7.c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final h7 f4653a;
        public final NativeAd b;

        public a(h7 h7Var, NativeAd nativeAd) {
            this.f4653a = h7Var;
            this.b = nativeAd;
        }

        @Override // com.my.target.m8
        public void a(View view, int i) {
            this.f4653a.a(view, i);
        }

        @Override // com.my.target.r7.c
        public void b() {
            NativeAd.NativeAdMediaListener nativeAdMediaListener = this.f4653a.i;
            if (nativeAdMediaListener != null) {
                nativeAdMediaListener.onIconLoad(this.b);
            }
        }

        @Override // com.my.target.q7.b
        public void c() {
            this.f4653a.c();
        }

        @Override // com.my.target.q7.b
        public void d() {
            this.f4653a.f();
        }

        @Override // com.my.target.q7.b
        public void e() {
            this.f4653a.g();
        }

        @Override // com.my.target.r7.c
        public void f() {
            NativeAd.NativeAdMediaListener nativeAdMediaListener = this.f4653a.i;
            if (nativeAdMediaListener != null) {
                nativeAdMediaListener.onImageLoad(this.b);
            }
        }

        @Override // com.my.target.q7.b
        public void a() {
            this.f4653a.e();
        }

        @Override // com.my.target.c9.a
        public void a(View view, int i, int i2) {
            this.f4653a.a(view, i, i2);
        }

        @Override // com.my.target.c9.a
        public void a(int[] iArr, Context context) {
            this.f4653a.a(iArr, context);
        }

        @Override // com.my.target.c9.a
        public void a(int i, Context context) {
            this.f4653a.a(i, context);
        }

        @Override // com.my.target.g7.a
        public void a(f7 f7Var, String str, Context context) {
            this.f4653a.a(f7Var, str, context);
        }

        @Override // com.my.target.r7.c
        public void a(View view) {
            this.f4653a.a(view);
        }

        @Override // com.my.target.r7.c
        public void a(Context context) {
            NativeAd.NativeAdChoicesOptionListener adChoicesOptionListener = this.b.getAdChoicesOptionListener();
            if (adChoicesOptionListener == null) {
                this.f4653a.a(context);
                gb.a("NativeAdEngine: there is no NativeAdChoicesOptionListener, default behaviour for closing the ad.");
            } else if (adChoicesOptionListener.shouldCloseAutomatically()) {
                this.f4653a.a(context);
                adChoicesOptionListener.onCloseAutomatically(this.b);
                gb.a("NativeAdEngine: Ad should close automatically.");
            } else {
                adChoicesOptionListener.closeIfAutomaticallyDisabled(this.b);
                gb.a("NativeAdEngine: Ad shouldn't close automatically.");
            }
        }

        @Override // com.my.target.a3.b
        public void a(boolean z) {
            NativeAd.NativeAdChoicesListener adChoicesListener = this.b.getAdChoicesListener();
            if (adChoicesListener == null) {
                return;
            }
            if (!z) {
                adChoicesListener.onAdChoicesIconLoad(null, false, this.b);
                return;
            }
            NativePromoBanner banner = this.b.getBanner();
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
    }

    public h7(NativeAd nativeAd, b7 b7Var, MenuFactory menuFactory, Context context) {
        this.f4652a = nativeAd;
        this.d = b7Var;
        this.g = NativePromoBanner.b(b7Var);
        s5 s5VarP = b7Var.P();
        l8 l8VarA = l8.a(b7Var, s5VarP != null ? 3 : 2, s5VarP, context);
        this.h = l8VarA;
        e8 e8VarA = e8.a(l8VarA, context);
        e8VarA.a(nativeAd.isUseExoPlayer());
        this.f = r7.a(b7Var, new a(this, nativeAd), e8VarA, menuFactory);
    }

    public static h7 a(NativeAd nativeAd, b7 b7Var, MenuFactory menuFactory, Context context) {
        return new h7(nativeAd, b7Var, menuFactory, context);
    }

    @Override // com.my.target.t2
    public float b() {
        return 0.0f;
    }

    public void c() {
        NativeAd.NativeAdListener listener = this.f4652a.getListener();
        if (listener != null) {
            listener.onVideoComplete(this.f4652a);
        }
    }

    @Override // com.my.target.t2
    public NativePromoBanner d() {
        return this.g;
    }

    public void e() {
        gb.a("NativeAdEngine: Video error");
        this.f.a();
    }

    public void f() {
        NativeAd.NativeAdListener listener = this.f4652a.getListener();
        if (listener != null) {
            listener.onVideoPause(this.f4652a);
        }
    }

    public void g() {
        NativeAd.NativeAdListener listener = this.f4652a.getListener();
        if (listener != null) {
            listener.onVideoPlay(this.f4652a);
        }
    }

    @Override // com.my.target.t2
    public void handleAdChoicesClick(Context context) {
        this.f.c(context);
    }

    @Override // com.my.target.t2
    public void registerView(NativeAdViewBinder nativeAdViewBinder, List list, int i) {
        unregisterView();
        l8 l8Var = this.h;
        if (l8Var != null) {
            l8Var.a(nativeAdViewBinder.getRootAdView(), new l8.b[0]);
        }
        this.f.a(nativeAdViewBinder, list, i);
    }

    @Override // com.my.target.t2
    public void unregisterView() {
        this.f.f();
        l8 l8Var = this.h;
        if (l8Var != null) {
            l8Var.a();
        }
    }

    @Override // com.my.target.t2
    public void a(NativeAd.NativeAdMediaListener nativeAdMediaListener) {
        this.i = nativeAdMediaListener;
    }

    public final boolean b(b bVar, String str, int i, Context context) {
        ExternalClickHandler externalClickHandler = this.j;
        if (externalClickHandler == null) {
            return false;
        }
        String strH = bVar.h();
        String strB = bVar.B();
        if (TextUtils.isEmpty(str)) {
            str = (i != 2 || strH == null) ? strB : strH;
        }
        String strE = bVar.e();
        String strJ = bVar.j();
        boolean zHandleClick = externalClickHandler.handleClick(strE, strJ, str, bVar.K());
        if (zHandleClick) {
            if (!TextUtils.isEmpty(str)) {
                if (str.equals(strH)) {
                    bb.a(bVar.x().b("ctaClick"), 2, context);
                    return zHandleClick;
                }
                bb.a(bVar.x().b("click"), 2, context);
                return zHandleClick;
            }
            if (!TextUtils.isEmpty(strE) || !TextUtils.isEmpty(strJ)) {
                bb.a(bVar.x().b("deeplinkClick"), 2, context);
            }
        }
        return zHandleClick;
    }

    @Override // com.my.target.t2
    public void a(View view, List list, int i, MediaAdView mediaAdView) {
        unregisterView();
        l8 l8Var = this.h;
        if (l8Var != null) {
            l8Var.a(view, new l8.b[0]);
        }
        this.f.a(view, list, i, mediaAdView);
    }

    @Override // com.my.target.t2
    public String a() {
        return "myTarget";
    }

    public void a(int[] iArr, Context context) {
        if (this.k) {
            String strD = kb.d(context);
            List listO = this.d.O();
            int length = iArr.length;
            for (int i = 0; i < length; i++) {
                int i2 = iArr[i];
                d7 d7Var = (i2 < 0 || i2 >= listO.size()) ? null : (d7) listO.get(i2);
                if (d7Var != null && !this.b.contains(d7Var)) {
                    za zaVarX = d7Var.x();
                    if (strD != null) {
                        bb.a(zaVarX, strD, 1, context);
                    }
                    bb.b(zaVarX, "show", 1, context);
                    this.b.add(d7Var);
                }
            }
        }
    }

    public void a(int i, Context context) {
        List listO = this.d.O();
        d7 d7Var = (i < 0 || i >= listO.size()) ? null : (d7) listO.get(i);
        if (d7Var == null || this.c.contains(d7Var)) {
            return;
        }
        bb.b(d7Var.x(), "render", 1, context);
        this.c.add(d7Var);
    }

    public void a(View view, int i, int i2) {
        gb.a("NativeAdEngine: Click on native card received");
        List listO = this.d.O();
        if (i >= 0 && i < listO.size()) {
            a((d7) listO.get(i), i2, view.getContext());
        }
        za zaVarX = this.d.x();
        Context context = view.getContext();
        if (context != null) {
            bb.b(zaVarX, i2 == 2 ? "ctaClick" : "click", 2, context);
        }
    }

    public void a(View view, int i) {
        gb.a("NativeAdEngine: Click received by native ad");
        if (view != null) {
            a(this.d, i, view.getContext());
        }
    }

    public void a(f7 f7Var, String str, Context context) {
        gb.a("NativeAdEngine: Click on native content received");
        a(f7Var, str, 1, context);
        bb.b(this.d.x(), "click", 2, context);
    }

    public void a(View view) {
        l8 l8Var = this.h;
        if (l8Var != null) {
            l8Var.c();
        }
        if (this.k) {
            return;
        }
        this.k = true;
        int[] iArrB = this.f.b();
        if (iArrB != null) {
            a(iArrB, view.getContext());
        }
        NativeAd.NativeAdListener listener = this.f4652a.getListener();
        gb.a("NativeAdEngine: Ad shown, banner id = " + this.d.r());
        if (listener != null) {
            listener.onShow(this.f4652a);
        }
    }

    public void a(Context context) {
        this.f.b(context);
    }

    public final void a(b bVar, int i, Context context) {
        a(bVar, (String) null, i, context);
    }

    public final void a(b bVar, String str, int i, Context context) {
        if (bVar != null) {
            if (b(bVar, str, i, context)) {
                gb.a("NativeAdEngine: click was handled by app");
            } else if (str != null) {
                this.e.a(bVar, str, i, context);
            } else {
                this.e.a(bVar, i, context);
            }
        }
        NativeAd.NativeAdListener listener = this.f4652a.getListener();
        if (listener != null) {
            listener.onClick(this.f4652a);
        }
    }

    @Override // com.my.target.t2
    public void a(ExternalClickHandler externalClickHandler) {
        this.j = externalClickHandler;
    }
}
