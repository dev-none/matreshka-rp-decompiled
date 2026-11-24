package com.my.target.mediation;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import com.my.target.common.CustomParams;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.common.models.ImageData;
import com.my.target.gb;
import com.my.target.m;
import com.my.target.nativeads.NativeBannerAd;
import com.my.target.nativeads.NativeBannerAdViewBinder;
import com.my.target.nativeads.banners.NativeBanner;
import com.my.target.o7;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class MyTargetNativeBannerAdAdapter implements MediationNativeBannerAdAdapter, AdChoicesClickHandler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public o7 f4713a;
    public NativeBannerAd b;

    public class a implements NativeBannerAd.NativeBannerAdListener, NativeBannerAd.NativeBannerAdChoicesOptionListener, NativeBannerAd.NativeBannerAdChoicesListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final MediationNativeBannerAdAdapter.MediationNativeBannerAdListener f4714a;

        public a(MediationNativeBannerAdAdapter.MediationNativeBannerAdListener mediationNativeBannerAdListener) {
            this.f4714a = mediationNativeBannerAdListener;
        }

        @Override // com.my.target.nativeads.NativeBannerAd.NativeBannerAdChoicesOptionListener
        public void closeIfAutomaticallyDisabled(NativeBannerAd nativeBannerAd) {
            gb.a("MyTargetNativeAdAdapter: the ad [" + nativeBannerAd + "] should close manually");
            this.f4714a.closeIfAutomaticallyDisabled(MyTargetNativeBannerAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeBannerAd.NativeBannerAdChoicesListener
        public void onAdChoicesIconLoad(ImageData imageData, boolean z, NativeBannerAd nativeBannerAd) {
            gb.a("MyTargetNativeBannerAdAdapter$AdListener: AdChoices icon downloading successfully");
            this.f4714a.onAdChoicesIconLoad(imageData, z, MyTargetNativeBannerAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeBannerAd.NativeBannerAdListener
        public void onClick(NativeBannerAd nativeBannerAd) {
            gb.a("MyTargetNativeBannerAdAdapter$AdListener: Ad clicked");
            this.f4714a.onClick(MyTargetNativeBannerAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeBannerAd.NativeBannerAdChoicesOptionListener
        public void onCloseAutomatically(NativeBannerAd nativeBannerAd) {
            gb.a("MyTargetNativeAdAdapter: the ad [" + nativeBannerAd + "] should close automatically");
            this.f4714a.onCloseAutomatically(MyTargetNativeBannerAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeBannerAd.NativeBannerAdListener
        public void onLoad(NativeBanner nativeBanner, NativeBannerAd nativeBannerAd) {
            gb.a("MyTargetNativeBannerAdAdapter$AdListener: Ad loaded");
            this.f4714a.onLoad(nativeBanner, MyTargetNativeBannerAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeBannerAd.NativeBannerAdListener
        public void onNoAd(IAdLoadingError iAdLoadingError, NativeBannerAd nativeBannerAd) {
            gb.a("MyTargetNativeBannerAdAdapter$AdListener: No ad (" + iAdLoadingError.getMessage() + ")");
            this.f4714a.onNoAd(iAdLoadingError, MyTargetNativeBannerAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeBannerAd.NativeBannerAdListener
        public void onShow(NativeBannerAd nativeBannerAd) {
            gb.a("MyTargetNativeBannerAdAdapter$AdListener: Ad shown");
            this.f4714a.onShow(MyTargetNativeBannerAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeBannerAd.NativeBannerAdChoicesOptionListener
        public boolean shouldCloseAutomatically() {
            gb.a("MyTargetNativeAdAdapter: call 'shouldCloseAutomatically' for the ad");
            return this.f4714a.shouldCloseAutomatically();
        }
    }

    public void a(o7 o7Var) {
        this.f4713a = o7Var;
    }

    @Override // com.my.target.mediation.MediationAdapter
    public void destroy() {
        NativeBannerAd nativeBannerAd = this.b;
        if (nativeBannerAd == null) {
            return;
        }
        nativeBannerAd.unregisterView();
        this.b.setListener(null);
        this.b = null;
    }

    @Override // com.my.target.mediation.MediationNativeBannerAdAdapter
    public View getIconView(Context context) {
        return null;
    }

    @Override // com.my.target.mediation.AdChoicesClickHandler
    public void handleAdChoicesClick(Context context) {
        NativeBannerAd nativeBannerAd = this.b;
        if (nativeBannerAd == null) {
            return;
        }
        nativeBannerAd.handleAdChoicesClick(context);
    }

    @Override // com.my.target.mediation.MediationNativeBannerAdAdapter
    public void load(MediationNativeBannerAdConfig mediationNativeBannerAdConfig, MediationNativeBannerAdAdapter.MediationNativeBannerAdListener mediationNativeBannerAdListener, Context context) {
        String placementId = mediationNativeBannerAdConfig.getPlacementId();
        try {
            int i = Integer.parseInt(placementId);
            NativeBannerAd nativeBannerAd = new NativeBannerAd(i, mediationNativeBannerAdConfig.getMenuFactory(), context);
            this.b = nativeBannerAd;
            nativeBannerAd.setMediationEnabled(false);
            this.b.setCachePolicy(mediationNativeBannerAdConfig.getCachePolicy());
            a aVar = new a(mediationNativeBannerAdListener);
            this.b.setListener(aVar);
            this.b.setAdChoicesListener(aVar);
            this.b.setAdChoicesOptionListener(aVar);
            CustomParams customParams = this.b.getCustomParams();
            customParams.setAge(mediationNativeBannerAdConfig.getAge());
            customParams.setGender(mediationNativeBannerAdConfig.getGender());
            for (Map.Entry<String, String> entry : mediationNativeBannerAdConfig.getServerParams().entrySet()) {
                customParams.setCustomParam(entry.getKey(), entry.getValue());
            }
            String payload = mediationNativeBannerAdConfig.getPayload();
            if (this.f4713a != null) {
                gb.a("MyTargetNativeBannerAdAdapter: Got banner from mediation response");
                this.b.a(this.f4713a);
                return;
            }
            if (TextUtils.isEmpty(payload)) {
                gb.a("MyTargetNativeBannerAdAdapter: Load id " + i);
                this.b.load();
                return;
            }
            gb.a("MyTargetNativeBannerAdAdapter: Load id " + i + " from BID " + payload);
            this.b.loadFromBid(payload);
        } catch (Throwable unused) {
            gb.b("MyTargetNativeBannerAdAdapter: Error - " + ("failed to request ad, unable to convert slotId " + placementId + " to int"));
            mediationNativeBannerAdListener.onNoAd(m.o, this);
        }
    }

    @Override // com.my.target.mediation.MediationNativeBannerAdAdapter
    @Deprecated
    public void registerView(View view, List<View> list, int i) {
        NativeBannerAd nativeBannerAd = this.b;
        if (nativeBannerAd == null) {
            return;
        }
        nativeBannerAd.setAdChoicesPlacement(i);
        this.b.registerView(view, list);
    }

    @Override // com.my.target.mediation.MediationNativeBannerAdAdapter
    public void unregisterView() {
        NativeBannerAd nativeBannerAd = this.b;
        if (nativeBannerAd == null) {
            return;
        }
        nativeBannerAd.unregisterView();
    }

    @Override // com.my.target.mediation.MediationNativeBannerAdAdapter
    public void registerView(NativeBannerAdViewBinder nativeBannerAdViewBinder, List<View> list, int i) {
        NativeBannerAd nativeBannerAd = this.b;
        if (nativeBannerAd == null) {
            return;
        }
        nativeBannerAd.setAdChoicesPlacement(i);
        this.b.registerView(nativeBannerAdViewBinder, list);
    }
}
