package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import com.my.target.common.ExternalClickHandler;
import com.my.target.common.MyTargetPrivacy;
import com.my.target.common.menu.MenuFactory;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.common.models.ImageData;
import com.my.target.mediation.AdChoicesClickHandler;
import com.my.target.mediation.AdNetworkConfig;
import com.my.target.mediation.MediationAdapter;
import com.my.target.mediation.MediationNativeAdAdapter;
import com.my.target.mediation.MediationNativeAdConfig;
import com.my.target.mediation.MyTargetNativeAdAdapter;
import com.my.target.nativeads.NativeAd;
import com.my.target.nativeads.NativeAdViewBinder;
import com.my.target.nativeads.banners.NativePromoBanner;
import com.my.target.nativeads.views.IconAdView;
import com.my.target.nativeads.views.MediaAdView;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class b6 extends z5 implements t2, NativeAd.NativeAdChoicesOptionListener {
    public final NativeAd k;
    public final MenuFactory l;
    public NativePromoBanner m;
    public WeakReference n;
    public WeakReference o;
    public WeakReference p;

    public class a implements MediationNativeAdAdapter.MediationNativeAdListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final y5 f4555a;

        public a(y5 y5Var) {
            this.f4555a = y5Var;
        }

        public final boolean a() {
            return (this.f4555a.j() || "0".equals(this.f4555a.c().get("lg"))) ? false : true;
        }

        @Override // com.my.target.mediation.MediationNativeAdAdapter.MediationNativeAdListener
        public void closeIfAutomaticallyDisabled(MediationNativeAdAdapter mediationNativeAdAdapter) {
            NativeAd.NativeAdChoicesOptionListener adChoicesOptionListener = b6.this.k.getAdChoicesOptionListener();
            if (adChoicesOptionListener == null) {
                return;
            }
            adChoicesOptionListener.closeIfAutomaticallyDisabled(b6.this.k);
        }

        @Override // com.my.target.mediation.MediationNativeAdAdapter.MediationNativeAdListener
        public void onAdChoicesIconLoad(ImageData imageData, boolean z, MediationNativeAdAdapter mediationNativeAdAdapter) {
            NativeAd.NativeAdChoicesListener adChoicesListener;
            b6 b6Var = b6.this;
            if (b6Var.d == mediationNativeAdAdapter && (adChoicesListener = b6Var.k.getAdChoicesListener()) != null) {
                String strB = this.f4555a.b();
                if (z) {
                    gb.a("MediationNativeAdEngine: AdChoices icon from" + strB + " ad network loaded successfully");
                } else {
                    gb.a("MediationNativeAdEngine: AdChoices icon from" + strB + " hasn't loaded");
                }
                adChoicesListener.onAdChoicesIconLoad(imageData, z, b6.this.k);
            }
        }

        @Override // com.my.target.mediation.MediationNativeAdAdapter.MediationNativeAdListener
        public void onClick(MediationNativeAdAdapter mediationNativeAdAdapter) {
            b6 b6Var = b6.this;
            if (b6Var.d != mediationNativeAdAdapter) {
                return;
            }
            Context contextG = b6Var.g();
            if (contextG != null) {
                bb.b(this.f4555a.h(), "click", 2, contextG);
            }
            NativeAd.NativeAdListener listener = b6.this.k.getListener();
            if (listener != null) {
                listener.onClick(b6.this.k);
            }
        }

        @Override // com.my.target.mediation.MediationNativeAdAdapter.MediationNativeAdListener
        public void onCloseAutomatically(MediationNativeAdAdapter mediationNativeAdAdapter) {
            NativeAd.NativeAdChoicesOptionListener adChoicesOptionListener = b6.this.k.getAdChoicesOptionListener();
            if (adChoicesOptionListener == null) {
                return;
            }
            adChoicesOptionListener.onCloseAutomatically(b6.this.k);
        }

        @Override // com.my.target.mediation.MediationNativeAdAdapter.MediationNativeAdListener
        public void onLoad(NativePromoBanner nativePromoBanner, MediationNativeAdAdapter mediationNativeAdAdapter) {
            if (b6.this.d != mediationNativeAdAdapter) {
                return;
            }
            String strB = this.f4555a.b();
            gb.a("MediationNativeAdEngine: Data from " + strB + " ad network loaded successfully");
            Context contextG = b6.this.g();
            if (a() && contextG != null) {
                j7.b(strB, nativePromoBanner, contextG);
            }
            b6.this.a(this.f4555a, true);
            b6 b6Var = b6.this;
            b6Var.m = nativePromoBanner;
            NativeAd.NativeAdListener listener = b6Var.k.getListener();
            if (listener != null) {
                listener.onLoad(nativePromoBanner, b6.this.k);
            }
        }

        @Override // com.my.target.mediation.MediationNativeAdAdapter.MediationNativeAdListener
        public void onNoAd(IAdLoadingError iAdLoadingError, MediationNativeAdAdapter mediationNativeAdAdapter) {
            if (b6.this.d != mediationNativeAdAdapter) {
                return;
            }
            gb.a("MediationNativeAdEngine: No data from " + this.f4555a.b() + " ad network - " + iAdLoadingError);
            b6.this.a(this.f4555a, false);
        }

        @Override // com.my.target.mediation.MediationNativeAdAdapter.MediationNativeAdListener
        public void onShow(MediationNativeAdAdapter mediationNativeAdAdapter) {
            b6 b6Var = b6.this;
            if (b6Var.d != mediationNativeAdAdapter) {
                return;
            }
            Context contextG = b6Var.g();
            if (contextG != null) {
                bb.b(this.f4555a.h(), "show", 1, contextG);
            }
            NativeAd.NativeAdListener listener = b6.this.k.getListener();
            if (listener != null) {
                listener.onShow(b6.this.k);
            }
        }

        @Override // com.my.target.mediation.MediationNativeAdAdapter.MediationNativeAdListener
        public void onVideoComplete(MediationNativeAdAdapter mediationNativeAdAdapter) {
            NativeAd.NativeAdListener listener;
            b6 b6Var = b6.this;
            if (b6Var.d == mediationNativeAdAdapter && (listener = b6Var.k.getListener()) != null) {
                listener.onVideoComplete(b6.this.k);
            }
        }

        @Override // com.my.target.mediation.MediationNativeAdAdapter.MediationNativeAdListener
        public void onVideoPause(MediationNativeAdAdapter mediationNativeAdAdapter) {
            NativeAd.NativeAdListener listener;
            b6 b6Var = b6.this;
            if (b6Var.d == mediationNativeAdAdapter && (listener = b6Var.k.getListener()) != null) {
                listener.onVideoPause(b6.this.k);
            }
        }

        @Override // com.my.target.mediation.MediationNativeAdAdapter.MediationNativeAdListener
        public void onVideoPlay(MediationNativeAdAdapter mediationNativeAdAdapter) {
            NativeAd.NativeAdListener listener;
            b6 b6Var = b6.this;
            if (b6Var.d == mediationNativeAdAdapter && (listener = b6Var.k.getListener()) != null) {
                listener.onVideoPlay(b6.this.k);
            }
        }

        @Override // com.my.target.mediation.MediationNativeAdAdapter.MediationNativeAdListener
        public boolean shouldCloseAutomatically() {
            NativeAd.NativeAdChoicesOptionListener adChoicesOptionListener = b6.this.k.getAdChoicesOptionListener();
            if (adChoicesOptionListener == null) {
                return true;
            }
            return adChoicesOptionListener.shouldCloseAutomatically();
        }
    }

    public static class b extends z5.a implements MediationNativeAdConfig {
        public final int h;
        public final int i;
        public final MenuFactory j;

        public b(String str, String str2, Map map, int i, int i2, MyTargetPrivacy myTargetPrivacy, int i3, int i4, AdNetworkConfig adNetworkConfig, MenuFactory menuFactory) {
            super(str, str2, map, i, i2, myTargetPrivacy, adNetworkConfig);
            this.h = i3;
            this.i = i4;
            this.j = menuFactory;
        }

        public static b a(String str, String str2, Map map, int i, int i2, MyTargetPrivacy myTargetPrivacy, int i3, int i4, AdNetworkConfig adNetworkConfig, MenuFactory menuFactory) {
            return new b(str, str2, map, i, i2, myTargetPrivacy, i3, i4, adNetworkConfig, menuFactory);
        }

        @Override // com.my.target.mediation.MediationNativeAdConfig
        public int getAdChoicesPlacement() {
            return this.i;
        }

        @Override // com.my.target.mediation.MediationNativeAdConfig
        public int getCachePolicy() {
            return this.h;
        }

        @Override // com.my.target.mediation.MediationNativeAdConfig
        public MenuFactory getMenuFactory() {
            return this.j;
        }

        @Override // com.my.target.mediation.MediationNativeAdConfig
        public boolean isAutoLoadImages() {
            int i = this.h;
            return i == 0 || i == 1;
        }

        @Override // com.my.target.mediation.MediationNativeAdConfig
        public boolean isAutoLoadVideo() {
            int i = this.h;
            return i == 0 || i == 2;
        }
    }

    public b6(NativeAd nativeAd, x5 x5Var, j jVar, h6.a aVar, MenuFactory menuFactory) {
        super(x5Var, jVar, aVar);
        this.k = nativeAd;
        this.l = menuFactory;
    }

    private void b(ImageData imageData, ma maVar) {
        maVar.setImageData(imageData);
        if (imageData == null || imageData.getBitmap() != null) {
            return;
        }
        a3.b(imageData, maVar);
    }

    @Override // com.my.target.t2
    public void a(ExternalClickHandler externalClickHandler) {
    }

    @Override // com.my.target.nativeads.NativeAd.NativeAdChoicesOptionListener
    public void closeIfAutomaticallyDisabled(NativeAd nativeAd) {
        NativeAd.NativeAdChoicesOptionListener adChoicesOptionListener = this.k.getAdChoicesOptionListener();
        if (adChoicesOptionListener == null) {
            return;
        }
        adChoicesOptionListener.closeIfAutomaticallyDisabled(this.k);
    }

    @Override // com.my.target.t2
    public NativePromoBanner d() {
        return this.m;
    }

    @Override // com.my.target.z5
    public void e() {
        NativeAd.NativeAdListener listener = this.k.getListener();
        if (listener != null) {
            listener.onNoAd(m.u, this.k);
        }
    }

    @Override // com.my.target.t2
    public void handleAdChoicesClick(Context context) {
        MediationAdapter mediationAdapter = this.d;
        if (mediationAdapter instanceof AdChoicesClickHandler) {
            ((AdChoicesClickHandler) mediationAdapter).handleAdChoicesClick(context);
        }
    }

    @Override // com.my.target.z5
    /* JADX INFO: renamed from: i, reason: merged with bridge method [inline-methods] */
    public MediationNativeAdAdapter f() {
        return new MyTargetNativeAdAdapter();
    }

    @Override // com.my.target.nativeads.NativeAd.NativeAdChoicesOptionListener
    public void onCloseAutomatically(NativeAd nativeAd) {
        NativeAd.NativeAdChoicesOptionListener adChoicesOptionListener = this.k.getAdChoicesOptionListener();
        if (adChoicesOptionListener == null) {
            return;
        }
        adChoicesOptionListener.onCloseAutomatically(this.k);
    }

    @Override // com.my.target.t2
    public void registerView(NativeAdViewBinder nativeAdViewBinder, List list, int i) {
        a(null, nativeAdViewBinder, list, i, null, true);
    }

    @Override // com.my.target.nativeads.NativeAd.NativeAdChoicesOptionListener
    public boolean shouldCloseAutomatically() {
        NativeAd.NativeAdChoicesOptionListener adChoicesOptionListener = this.k.getAdChoicesOptionListener();
        if (adChoicesOptionListener == null) {
            return true;
        }
        return adChoicesOptionListener.shouldCloseAutomatically();
    }

    @Override // com.my.target.t2
    public void unregisterView() {
        if (this.d == null) {
            gb.b("MediationNativeAdEngine error: can't unregister view, adapter is not set");
            return;
        }
        WeakReference weakReference = this.o;
        View view = weakReference != null ? (View) weakReference.get() : null;
        if (view != null) {
            this.o.clear();
            ViewParent parent = view.getParent();
            if (parent instanceof ViewGroup) {
                ((ViewGroup) parent).removeView(view);
            }
        }
        WeakReference weakReference2 = this.n;
        MediaAdView mediaAdView = weakReference2 != null ? (MediaAdView) weakReference2.get() : null;
        if (mediaAdView != null) {
            this.n.clear();
            NativePromoBanner nativePromoBanner = this.m;
            a(nativePromoBanner != null ? nativePromoBanner.getImage() : null, (ma) mediaAdView.getImageView());
            mediaAdView.setPlaceHolderDimension(0, 0);
        }
        WeakReference weakReference3 = this.p;
        IconAdView iconAdView = weakReference3 != null ? (IconAdView) weakReference3.get() : null;
        if (iconAdView != null) {
            this.p.clear();
            NativePromoBanner nativePromoBanner2 = this.m;
            a(nativePromoBanner2 != null ? nativePromoBanner2.getIcon() : null, (ma) iconAdView.getImageView());
        }
        this.o = null;
        this.n = null;
        try {
            ((MediationNativeAdAdapter) this.d).unregisterView();
        } catch (Throwable th) {
            gb.b("MediationNativeAdEngine error: " + th);
        }
    }

    public static final b6 a(NativeAd nativeAd, x5 x5Var, j jVar, h6.a aVar, MenuFactory menuFactory) {
        return new b6(nativeAd, x5Var, jVar, aVar, menuFactory);
    }

    @Override // com.my.target.t2
    public void a(NativeAd.NativeAdMediaListener nativeAdMediaListener) {
        gb.a("MediationNativeAdEngine: NativeAdMediaListener is not currently supported for mediation");
    }

    @Override // com.my.target.t2
    public void a(View view, List list, int i, MediaAdView mediaAdView) {
        a(view, null, list, i, mediaAdView, false);
    }

    public final void a(View view, NativeAdViewBinder nativeAdViewBinder, List list, int i, MediaAdView mediaAdView, boolean z) {
        ArrayList arrayList;
        b6 b6Var;
        g8 g8VarA;
        if (z && nativeAdViewBinder == null) {
            gb.b("MediationNativeAdEngine error: wrong args for using nativeAdViewBinder");
            return;
        }
        if (!z && view == null) {
            gb.b("MediationNativeAdEngine error: wrong args for using viewGroup like adView");
            return;
        }
        if (this.d == null) {
            gb.b("MediationNativeAdEngine error: can't register view, adapter is not set");
            return;
        }
        if (this.m == null) {
            gb.b("MediationNativeAdEngine error: can't register view, banner is null or not loaded yet");
            return;
        }
        unregisterView();
        View mediaView = null;
        if (list != null) {
            ArrayList arrayList2 = new ArrayList();
            Iterator it = list.iterator();
            while (it.hasNext()) {
                View view2 = (View) it.next();
                if (view2 != null) {
                    arrayList2.add(view2);
                }
            }
            arrayList = arrayList2;
        } else {
            arrayList = null;
        }
        if (view == null) {
            return;
        }
        if ((this.d instanceof MyTargetNativeAdAdapter) || !(z || (view instanceof ViewGroup))) {
            b6Var = this;
        } else {
            if (z) {
                g8VarA = new g8.a().a(nativeAdViewBinder).a();
            } else {
                g8VarA = new g8.a().b((ViewGroup) view).a(mediaAdView).a();
            }
            MediaAdView mediaAdViewL = g8VarA.l();
            if (mediaAdViewL != null) {
                this.n = new WeakReference(mediaAdViewL);
                try {
                    Context contextF = g8VarA.f();
                    if (contextF != null) {
                        mediaView = ((MediationNativeAdAdapter) this.d).getMediaView(contextF);
                    }
                } catch (Throwable th) {
                    gb.b("MediationNativeAdEngine error: " + th);
                }
                View view3 = mediaView;
                if (view3 != null) {
                    this.o = new WeakReference(view3);
                }
                b6Var = this;
                b6Var.a(mediaAdViewL, view3, this.m.getImage(), this.m.hasVideo(), arrayList);
            } else {
                b6Var = this;
            }
            IconAdView iconAdViewK = g8VarA.k();
            ImageData icon = b6Var.m.getIcon();
            if (iconAdViewK != null && icon != null) {
                b6Var.p = new WeakReference(iconAdViewK);
                b(icon, (ma) iconAdViewK.getImageView());
            }
        }
        try {
            if (z) {
                ((MediationNativeAdAdapter) b6Var.d).registerView(nativeAdViewBinder, arrayList, i);
            } else {
                ((MediationNativeAdAdapter) b6Var.d).registerView(view, arrayList, i);
            }
        } catch (Throwable th2) {
            gb.b("MediationNativeAdEngine error: " + th2);
        }
    }

    @Override // com.my.target.z5
    public void a(MediationNativeAdAdapter mediationNativeAdAdapter, y5 y5Var, Context context) {
        b bVarA = b.a(y5Var.e(), y5Var.d(), y5Var.c(), this.f4885a.g().getAge(), this.f4885a.g().getGender(), MyTargetPrivacy.currentPrivacy(), this.f4885a.f(), this.k.getAdChoicesPlacement(), TextUtils.isEmpty(this.h) ? null : this.f4885a.a(this.h), this.l);
        if (mediationNativeAdAdapter instanceof MyTargetNativeAdAdapter) {
            t tVarG = y5Var.g();
            if (tVarG instanceof o7) {
                ((MyTargetNativeAdAdapter) mediationNativeAdAdapter).a((o7) tVarG);
            }
        }
        try {
            mediationNativeAdAdapter.load(bVarA, new a(y5Var), context);
        } catch (Throwable th) {
            gb.b("MediationNativeAdEngine error: " + th);
        }
    }

    @Override // com.my.target.z5
    public boolean a(MediationAdapter mediationAdapter) {
        return mediationAdapter instanceof MediationNativeAdAdapter;
    }

    private void a(ImageData imageData, ma maVar) {
        if (imageData != null) {
            a3.a(imageData, maVar);
        }
        maVar.setImageData(null);
    }

    public final void a(MediaAdView mediaAdView, View view, ImageData imageData, boolean z, List list) {
        int iIndexOf;
        if (imageData == null && !z) {
            mediaAdView.setPlaceHolderDimension(0, 0);
        } else if (imageData != null && imageData.getWidth() > 0 && imageData.getHeight() > 0) {
            mediaAdView.setPlaceHolderDimension(imageData.getWidth(), imageData.getHeight());
        } else {
            mediaAdView.setPlaceHolderDimension(16, 10);
        }
        if (view != null) {
            gb.a("MediationNativeAdEngine: Got MediaView from adapter");
            mediaAdView.addView(view);
            if (list == null || (iIndexOf = list.indexOf(mediaAdView)) < 0) {
                return;
            }
            list.remove(iIndexOf);
            list.add(view);
            return;
        }
        b(imageData, (ma) mediaAdView.getImageView());
    }
}
