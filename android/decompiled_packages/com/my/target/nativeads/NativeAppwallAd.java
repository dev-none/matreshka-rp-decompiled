package com.my.target.nativeads;

import android.content.Context;
import android.widget.ImageView;
import com.my.target.a3;
import com.my.target.ab;
import com.my.target.bb;
import com.my.target.common.BaseAd;
import com.my.target.common.MyTargetVersion;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.common.models.ImageData;
import com.my.target.e1;
import com.my.target.gb;
import com.my.target.i8;
import com.my.target.m;
import com.my.target.nativeads.banners.NativeAppwallBanner;
import com.my.target.nativeads.views.AppwallAdView;
import com.my.target.s7;
import com.my.target.t;
import com.my.target.u7;
import com.my.target.v7;
import com.my.target.y7;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class NativeAppwallAd extends BaseAd {
    public final Context e;
    public final e1 f;
    public final HashMap g;
    public final ArrayList h;
    public AppwallAdListener i;
    public y7 j;
    public u7 k;
    public WeakReference l;
    public String m;
    public int n;
    public int o;
    public int p;
    public boolean q;

    public interface AppwallAdListener {
        void onClick(NativeAppwallBanner nativeAppwallBanner, NativeAppwallAd nativeAppwallAd);

        void onDismiss(NativeAppwallAd nativeAppwallAd);

        void onDisplay(NativeAppwallAd nativeAppwallAd);

        void onLoad(NativeAppwallAd nativeAppwallAd);

        void onNoAd(IAdLoadingError iAdLoadingError, NativeAppwallAd nativeAppwallAd);
    }

    public class a implements AppwallAdView.AppwallAdViewListener {
        public a() {
        }

        @Override // com.my.target.nativeads.views.AppwallAdView.AppwallAdViewListener
        public void onBannerClick(NativeAppwallBanner nativeAppwallBanner) {
            AppwallAdView appwallAdView;
            NativeAppwallAd.this.handleBannerClick(nativeAppwallBanner);
            WeakReference weakReference = NativeAppwallAd.this.l;
            if (weakReference == null || (appwallAdView = (AppwallAdView) weakReference.get()) == null) {
                return;
            }
            appwallAdView.notifyDataSetChanged();
        }

        @Override // com.my.target.nativeads.views.AppwallAdView.AppwallAdViewListener
        public void onBannersShow(List list) {
            NativeAppwallAd.this.handleBannersShow(list);
        }
    }

    public NativeAppwallAd(int i, Context context) {
        super(i, "appwall");
        this.f = e1.a();
        this.g = new HashMap();
        this.h = new ArrayList();
        this.m = "Apps";
        this.n = -12232093;
        this.o = -13220531;
        this.p = -1;
        this.q = false;
        this.e = context;
        this.f4578a.b(0);
        gb.c("Native appwall ad created. Version - " + MyTargetVersion.VERSION);
    }

    public static void loadImageToView(ImageData imageData, ImageView imageView) {
        a3.b(imageData, imageView);
    }

    public final void a(y7 y7Var, IAdLoadingError iAdLoadingError) {
        AppwallAdListener appwallAdListener = this.i;
        if (appwallAdListener == null) {
            return;
        }
        if (y7Var == null) {
            if (iAdLoadingError == null) {
                iAdLoadingError = m.i;
            }
            appwallAdListener.onNoAd(iAdLoadingError, this);
            return;
        }
        this.j = y7Var;
        for (s7 s7Var : y7Var.c()) {
            NativeAppwallBanner nativeAppwallBannerA = NativeAppwallBanner.a(s7Var);
            this.h.add(nativeAppwallBannerA);
            this.g.put(nativeAppwallBannerA, s7Var);
        }
        this.i.onLoad(this);
    }

    public void destroy() {
        unregisterAppwallAdView();
        u7 u7Var = this.k;
        if (u7Var != null) {
            u7Var.a();
            this.k = null;
        }
        this.i = null;
    }

    public void dismiss() {
        u7 u7Var = this.k;
        if (u7Var != null) {
            u7Var.b();
        }
    }

    public ArrayList<NativeAppwallBanner> getBanners() {
        return this.h;
    }

    public long getCachePeriod() {
        return this.f4578a.e();
    }

    public AppwallAdListener getListener() {
        return this.i;
    }

    public String getTitle() {
        return this.m;
    }

    public int getTitleBackgroundColor() {
        return this.n;
    }

    public int getTitleSupplementaryColor() {
        return this.o;
    }

    public int getTitleTextColor() {
        return this.p;
    }

    public void handleBannerClick(NativeAppwallBanner nativeAppwallBanner) {
        s7 s7Var = (s7) this.g.get(nativeAppwallBanner);
        if (s7Var == null) {
            gb.a("NativeAppwallAd: Unable to handle banner click - no internal banner for id " + nativeAppwallBanner.getId());
            return;
        }
        this.f.a(s7Var, 1, this.e);
        if (this.j != null) {
            nativeAppwallBanner.setHasNotification(false);
            i8.a(this.j, this.f4578a).a(s7Var, false, this.e);
        }
        AppwallAdListener appwallAdListener = this.i;
        if (appwallAdListener != null) {
            appwallAdListener.onClick(nativeAppwallBanner, this);
        }
    }

    public void handleBannerShow(NativeAppwallBanner nativeAppwallBanner) {
        s7 s7Var = (s7) this.g.get(nativeAppwallBanner);
        if (s7Var != null) {
            bb.b(s7Var.x(), "playbackStarted", 1, this.e);
            return;
        }
        gb.a("NativeAppwallAd: Unable to handle banner show - no internal banner for id " + nativeAppwallBanner.getId());
    }

    public void handleBannersShow(List<NativeAppwallBanner> list) {
        ArrayList arrayList = new ArrayList();
        for (NativeAppwallBanner nativeAppwallBanner : list) {
            s7 s7Var = (s7) this.g.get(nativeAppwallBanner);
            if (s7Var != null) {
                gb.a("NativeAppwallAd: Ad shown, banner Id = " + nativeAppwallBanner.getId());
                ab abVarB = s7Var.x().b("playbackStarted");
                if (!abVarB.f4536a.isEmpty()) {
                    arrayList.add(abVarB);
                }
            } else {
                gb.a("NativeAppwallAd: Unable to handle banner show - no internal banner for id " + nativeAppwallBanner.getId());
            }
        }
        int size = arrayList.size();
        int i = 0;
        while (i < size) {
            Object obj = arrayList.get(i);
            i++;
            bb.a((ab) obj, 1, this.e);
        }
    }

    public boolean hasNotifications() {
        Iterator it = this.g.keySet().iterator();
        while (it.hasNext()) {
            if (((NativeAppwallBanner) it.next()).isHasNotification()) {
                return true;
            }
        }
        return false;
    }

    public boolean isAutoLoadImages() {
        int iF = this.f4578a.f();
        return iF == 0 || iF == 1;
    }

    public boolean isHideStatusBarInDialog() {
        return this.q;
    }

    public void load() {
        if (isLoadCalled()) {
            gb.a("NativeAppwallAd: Appwall ad doesn't support multiple load");
            a(null, m.t);
        } else {
            v7.a(this.f4578a, this.b).a(new v7.b() { // from class: com.my.target.nativeads.NativeAppwallAd$$ExternalSyntheticLambda0
                @Override // com.my.target.l.b
                public final void a(t tVar, m mVar) {
                    this.f$0.a((y7) tVar, mVar);
                }
            }).a(this.b.a(), this.e);
        }
    }

    public String prepareBannerClickLink(NativeAppwallBanner nativeAppwallBanner) {
        s7 s7Var = (s7) this.g.get(nativeAppwallBanner);
        if (s7Var == null) {
            gb.a("NativeAppwallAd: Unable to handle banner click - no internal banner for id " + nativeAppwallBanner.getId());
            return null;
        }
        bb.b(s7Var.x(), "click", 2, this.e);
        y7 y7Var = this.j;
        if (y7Var != null) {
            i8.a(y7Var, this.f4578a).a(s7Var, false, this.e);
        }
        return s7Var.B();
    }

    public void registerAppwallAdView(AppwallAdView appwallAdView) {
        unregisterAppwallAdView();
        this.l = new WeakReference(appwallAdView);
        appwallAdView.setAppwallAdViewListener(new a());
    }

    public void setAutoLoadImages(boolean z) {
        this.f4578a.b(0);
    }

    public void setCachePeriod(long j) {
        this.f4578a.a(j);
    }

    public void setHideStatusBarInDialog(boolean z) {
        this.q = z;
    }

    public void setListener(AppwallAdListener appwallAdListener) {
        this.i = appwallAdListener;
    }

    public void setTitle(String str) {
        this.m = str;
    }

    public void setTitleBackgroundColor(int i) {
        this.n = i;
    }

    public void setTitleSupplementaryColor(int i) {
        this.o = i;
    }

    public void setTitleTextColor(int i) {
        this.p = i;
    }

    public void show() {
        if (this.j == null || this.h.size() <= 0) {
            gb.c("Native appwall ad show - no ad");
            return;
        }
        if (this.k == null) {
            this.k = u7.a(this);
        }
        this.k.a(this.e);
    }

    public void unregisterAppwallAdView() {
        WeakReference weakReference = this.l;
        if (weakReference != null) {
            AppwallAdView appwallAdView = (AppwallAdView) weakReference.get();
            if (appwallAdView != null) {
                appwallAdView.setAppwallAdViewListener(null);
            }
            this.l.clear();
            this.l = null;
        }
    }
}
