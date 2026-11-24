package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import com.my.target.common.MyTargetPrivacy;
import com.my.target.common.menu.MenuFactory;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.common.models.ImageData;
import com.my.target.mediation.AdChoicesClickHandler;
import com.my.target.mediation.AdNetworkConfig;
import com.my.target.mediation.MediationAdapter;
import com.my.target.mediation.MediationNativeBannerAdAdapter;
import com.my.target.mediation.MediationNativeBannerAdConfig;
import com.my.target.mediation.MyTargetNativeBannerAdAdapter;
import com.my.target.nativeads.NativeBannerAd;
import com.my.target.nativeads.NativeBannerAdViewBinder;
import com.my.target.nativeads.banners.NativeBanner;
import com.my.target.nativeads.views.IconAdView;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class c6 extends z5 implements u2, NativeBannerAd.NativeBannerAdChoicesOptionListener {
    public final NativeBannerAd k;
    public final MenuFactory l;
    public NativeBanner m;
    public WeakReference n;
    public WeakReference o;

    public class a implements MediationNativeBannerAdAdapter.MediationNativeBannerAdListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final y5 f4572a;

        public a(y5 y5Var) {
            this.f4572a = y5Var;
        }

        public final boolean a() {
            return (this.f4572a.j() || "0".equals(this.f4572a.c().get("lg"))) ? false : true;
        }

        @Override // com.my.target.mediation.MediationNativeBannerAdAdapter.MediationNativeBannerAdListener
        public void closeIfAutomaticallyDisabled(MediationNativeBannerAdAdapter mediationNativeBannerAdAdapter) {
            NativeBannerAd.NativeBannerAdChoicesOptionListener adChoicesOptionListener = c6.this.k.getAdChoicesOptionListener();
            if (adChoicesOptionListener == null) {
                return;
            }
            adChoicesOptionListener.closeIfAutomaticallyDisabled(c6.this.k);
        }

        @Override // com.my.target.mediation.MediationNativeBannerAdAdapter.MediationNativeBannerAdListener
        public void onAdChoicesIconLoad(ImageData imageData, boolean z, MediationNativeBannerAdAdapter mediationNativeBannerAdAdapter) {
            NativeBannerAd.NativeBannerAdChoicesListener adChoicesListener = c6.this.k.getAdChoicesListener();
            if (adChoicesListener == null) {
                return;
            }
            String strB = this.f4572a.b();
            if (z) {
                gb.a("MediationNativeBannerAdEngine: AdChoices icon from" + strB + " ad network loaded successfully");
            } else {
                gb.a("MediationNativeBannerAdEngine: AdChoices icon from" + strB + " hasn't loaded");
            }
            adChoicesListener.onAdChoicesIconLoad(imageData, z, c6.this.k);
        }

        @Override // com.my.target.mediation.MediationNativeBannerAdAdapter.MediationNativeBannerAdListener
        public void onClick(MediationNativeBannerAdAdapter mediationNativeBannerAdAdapter) {
            c6 c6Var = c6.this;
            if (c6Var.d != mediationNativeBannerAdAdapter) {
                return;
            }
            Context contextG = c6Var.g();
            if (contextG != null) {
                bb.b(this.f4572a.h(), "click", 2, contextG);
            }
            NativeBannerAd.NativeBannerAdListener listener = c6.this.k.getListener();
            if (listener != null) {
                listener.onClick(c6.this.k);
            }
        }

        @Override // com.my.target.mediation.MediationNativeBannerAdAdapter.MediationNativeBannerAdListener
        public void onCloseAutomatically(MediationNativeBannerAdAdapter mediationNativeBannerAdAdapter) {
            NativeBannerAd.NativeBannerAdChoicesOptionListener adChoicesOptionListener = c6.this.k.getAdChoicesOptionListener();
            if (adChoicesOptionListener == null) {
                return;
            }
            adChoicesOptionListener.onCloseAutomatically(c6.this.k);
        }

        @Override // com.my.target.mediation.MediationNativeBannerAdAdapter.MediationNativeBannerAdListener
        public void onLoad(NativeBanner nativeBanner, MediationNativeBannerAdAdapter mediationNativeBannerAdAdapter) {
            if (c6.this.d != mediationNativeBannerAdAdapter) {
                return;
            }
            String strB = this.f4572a.b();
            gb.a("MediationNativeBannerAdEngine: Data from " + strB + " ad network loaded successfully");
            Context contextG = c6.this.g();
            if (a() && contextG != null) {
                j7.b(strB, nativeBanner, contextG);
            }
            c6.this.a(this.f4572a, true);
            c6 c6Var = c6.this;
            c6Var.m = nativeBanner;
            NativeBannerAd.NativeBannerAdListener listener = c6Var.k.getListener();
            if (listener != null) {
                listener.onLoad(nativeBanner, c6.this.k);
            }
        }

        @Override // com.my.target.mediation.MediationNativeBannerAdAdapter.MediationNativeBannerAdListener
        public void onNoAd(IAdLoadingError iAdLoadingError, MediationNativeBannerAdAdapter mediationNativeBannerAdAdapter) {
            if (c6.this.d != mediationNativeBannerAdAdapter) {
                return;
            }
            gb.a("MediationNativeBannerAdEngine: No data from " + this.f4572a.b() + " ad network - " + iAdLoadingError);
            c6.this.a(this.f4572a, false);
        }

        @Override // com.my.target.mediation.MediationNativeBannerAdAdapter.MediationNativeBannerAdListener
        public void onShow(MediationNativeBannerAdAdapter mediationNativeBannerAdAdapter) {
            c6 c6Var = c6.this;
            if (c6Var.d != mediationNativeBannerAdAdapter) {
                return;
            }
            Context contextG = c6Var.g();
            if (contextG != null) {
                bb.b(this.f4572a.h(), "show", 1, contextG);
            }
            NativeBannerAd.NativeBannerAdListener listener = c6.this.k.getListener();
            if (listener != null) {
                listener.onShow(c6.this.k);
            }
        }

        @Override // com.my.target.mediation.MediationNativeBannerAdAdapter.MediationNativeBannerAdListener
        public boolean shouldCloseAutomatically() {
            NativeBannerAd.NativeBannerAdChoicesOptionListener adChoicesOptionListener = c6.this.k.getAdChoicesOptionListener();
            if (adChoicesOptionListener == null) {
                return true;
            }
            return adChoicesOptionListener.shouldCloseAutomatically();
        }
    }

    public static class b extends z5.a implements MediationNativeBannerAdConfig {
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

        @Override // com.my.target.mediation.MediationNativeBannerAdConfig
        public int getAdChoicesPlacement() {
            return this.i;
        }

        @Override // com.my.target.mediation.MediationNativeBannerAdConfig
        public int getCachePolicy() {
            return this.h;
        }

        @Override // com.my.target.mediation.MediationNativeBannerAdConfig
        public MenuFactory getMenuFactory() {
            return this.j;
        }
    }

    public c6(NativeBannerAd nativeBannerAd, x5 x5Var, j jVar, h6.a aVar, MenuFactory menuFactory) {
        super(x5Var, jVar, aVar);
        this.k = nativeBannerAd;
        this.l = menuFactory;
    }

    public final void b(ImageData imageData, ma maVar) {
        maVar.setImageData(imageData);
        if (imageData == null || imageData.getBitmap() != null) {
            return;
        }
        a3.b(imageData, maVar);
    }

    @Override // com.my.target.u2
    public NativeBanner c() {
        return this.m;
    }

    @Override // com.my.target.nativeads.NativeBannerAd.NativeBannerAdChoicesOptionListener
    public void closeIfAutomaticallyDisabled(NativeBannerAd nativeBannerAd) {
        NativeBannerAd.NativeBannerAdChoicesOptionListener adChoicesOptionListener = this.k.getAdChoicesOptionListener();
        if (adChoicesOptionListener == null) {
            return;
        }
        adChoicesOptionListener.closeIfAutomaticallyDisabled(this.k);
    }

    @Override // com.my.target.z5
    public void e() {
        NativeBannerAd.NativeBannerAdListener listener = this.k.getListener();
        if (listener != null) {
            listener.onNoAd(m.u, this.k);
        }
    }

    @Override // com.my.target.u2
    public void handleAdChoicesClick(Context context) {
        MediationAdapter mediationAdapter = this.d;
        if (mediationAdapter instanceof AdChoicesClickHandler) {
            ((AdChoicesClickHandler) mediationAdapter).handleAdChoicesClick(context);
        }
    }

    @Override // com.my.target.z5
    /* JADX INFO: renamed from: i, reason: merged with bridge method [inline-methods] */
    public MediationNativeBannerAdAdapter f() {
        return new MyTargetNativeBannerAdAdapter();
    }

    @Override // com.my.target.nativeads.NativeBannerAd.NativeBannerAdChoicesOptionListener
    public void onCloseAutomatically(NativeBannerAd nativeBannerAd) {
        NativeBannerAd.NativeBannerAdChoicesOptionListener adChoicesOptionListener = this.k.getAdChoicesOptionListener();
        if (adChoicesOptionListener == null) {
            return;
        }
        adChoicesOptionListener.onCloseAutomatically(this.k);
    }

    @Override // com.my.target.u2
    public void registerView(View view, List list, int i) {
        a(view, (NativeBannerAdViewBinder) null, list, i, false);
    }

    @Override // com.my.target.nativeads.NativeBannerAd.NativeBannerAdChoicesOptionListener
    public boolean shouldCloseAutomatically() {
        NativeBannerAd.NativeBannerAdChoicesOptionListener adChoicesOptionListener = this.k.getAdChoicesOptionListener();
        if (adChoicesOptionListener == null) {
            return true;
        }
        return adChoicesOptionListener.shouldCloseAutomatically();
    }

    @Override // com.my.target.u2
    public void unregisterView() {
        if (this.d == null) {
            gb.b("MediationNativeBannerAdEngine error: can't unregister view, adapter is not set");
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
        IconAdView iconAdView = weakReference2 != null ? (IconAdView) weakReference2.get() : null;
        if (iconAdView != null) {
            this.n.clear();
            NativeBanner nativeBanner = this.m;
            a(nativeBanner != null ? nativeBanner.getIcon() : null, (ma) iconAdView.getImageView());
        }
        this.o = null;
        this.n = null;
        try {
            ((MediationNativeBannerAdAdapter) this.d).unregisterView();
        } catch (Throwable th) {
            gb.b("MediationNativeBannerAdEngine error: " + th);
        }
    }

    public static c6 a(NativeBannerAd nativeBannerAd, x5 x5Var, j jVar, h6.a aVar, MenuFactory menuFactory) {
        return new c6(nativeBannerAd, x5Var, jVar, aVar, menuFactory);
    }

    @Override // com.my.target.u2
    public void registerView(NativeBannerAdViewBinder nativeBannerAdViewBinder, List list, int i) {
        a((View) null, nativeBannerAdViewBinder, list, i, true);
    }

    @Override // com.my.target.u2
    public void a(NativeBannerAd.NativeBannerAdMediaListener nativeBannerAdMediaListener) {
        gb.a("MediationNativeBannerAdEngine: NativeBannerAdMediaListener is not currently supported for mediation");
    }

    public final void a(View view, NativeBannerAdViewBinder nativeBannerAdViewBinder, List list, int i, boolean z) {
        List<View> arrayList;
        g8 g8VarA;
        Object obj;
        View iconView;
        if (z && nativeBannerAdViewBinder == null) {
            gb.b("MediationNativeBannerAdEngine error: wrong args for using nativeBannerAdViewBinder");
            return;
        }
        if (!z && view == null) {
            gb.b("MediationNativeBannerAdEngine error: wrong args for using viewGroup like adView");
            return;
        }
        if (this.d == null) {
            gb.b("MediationNativeBannerAdEngine error: Can't register view, adapter is not set");
            return;
        }
        if (this.m == null) {
            gb.b("MediationNativeBannerAdEngine error: Can't register view, banner is null or not loaded yet");
            return;
        }
        unregisterView();
        if (list != null) {
            arrayList = new ArrayList<>(list);
        } else {
            arrayList = Collections.EMPTY_LIST;
        }
        if (!(this.d instanceof MyTargetNativeBannerAdAdapter) && (z || (view instanceof ViewGroup))) {
            if (z) {
                g8VarA = new g8.a().a(nativeBannerAdViewBinder).a();
            } else {
                g8VarA = new g8.a().b((ViewGroup) view).a();
            }
            IconAdView iconAdViewK = g8VarA.k();
            if (iconAdViewK != null) {
                this.n = new WeakReference(iconAdViewK);
                try {
                    Context contextF = g8VarA.f();
                    iconView = contextF != null ? ((MediationNativeBannerAdAdapter) this.d).getIconView(contextF) : null;
                } catch (Throwable th) {
                    gb.b("MediationNativeBannerAdEngine: Error - " + th);
                }
                if (iconView != null) {
                    this.o = new WeakReference(iconView);
                }
                a(iconAdViewK, iconView, this.m.getIcon(), arrayList);
            } else {
                StringBuilder sb = new StringBuilder("MediationNativeBannerAdEngine: IconView component not found in ");
                if (z) {
                    obj = view;
                    obj = nativeBannerAdViewBinder;
                }
                obj = view;
                sb.append(obj);
                sb.append(". It's required");
                gb.b(sb.toString());
                return;
            }
        }
        try {
            if (z) {
                ((MediationNativeBannerAdAdapter) this.d).registerView(nativeBannerAdViewBinder, arrayList, i);
            } else {
                ((MediationNativeBannerAdAdapter) this.d).registerView(view, arrayList, i);
            }
        } catch (Throwable th2) {
            gb.b("MediationNativeBannerAdEngine: Error - " + th2);
        }
    }

    @Override // com.my.target.z5
    public void a(MediationNativeBannerAdAdapter mediationNativeBannerAdAdapter, y5 y5Var, Context context) {
        b bVarA = b.a(y5Var.e(), y5Var.d(), y5Var.c(), this.f4885a.g().getAge(), this.f4885a.g().getGender(), MyTargetPrivacy.currentPrivacy(), this.f4885a.f(), this.k.getAdChoicesPlacement(), TextUtils.isEmpty(this.h) ? null : this.f4885a.a(this.h), this.l);
        if (mediationNativeBannerAdAdapter instanceof MyTargetNativeBannerAdAdapter) {
            t tVarG = y5Var.g();
            if (tVarG instanceof o7) {
                ((MyTargetNativeBannerAdAdapter) mediationNativeBannerAdAdapter).a((o7) tVarG);
            }
        }
        try {
            mediationNativeBannerAdAdapter.load(bVarA, new a(y5Var), context);
        } catch (Throwable th) {
            gb.b("MediationNativeBannerAdEngine error: " + th);
        }
    }

    @Override // com.my.target.z5
    public boolean a(MediationAdapter mediationAdapter) {
        return mediationAdapter instanceof MediationNativeBannerAdAdapter;
    }

    public final void a(ImageData imageData, ma maVar) {
        if (imageData != null) {
            a3.a(imageData, maVar);
        }
        maVar.setImageData(null);
    }

    public final void a(IconAdView iconAdView, View view, ImageData imageData, List list) {
        if (imageData == null) {
            iconAdView.setPlaceHolderDimension(0, 0);
        } else if (imageData.getWidth() > 0 && imageData.getHeight() > 0) {
            iconAdView.setPlaceHolderDimension(imageData.getWidth(), imageData.getHeight());
        } else {
            iconAdView.setPlaceHolderDimension(1, 1);
        }
        if (view != null) {
            gb.a("MediationNativeBannerAdEngine: Got IconView from adapter");
            iconAdView.addView(view);
            int iIndexOf = list.indexOf(iconAdView);
            if (iIndexOf >= 0) {
                list.remove(iIndexOf);
                list.add(view);
                return;
            }
            return;
        }
        b(imageData, (ma) iconAdView.getImageView());
    }
}
