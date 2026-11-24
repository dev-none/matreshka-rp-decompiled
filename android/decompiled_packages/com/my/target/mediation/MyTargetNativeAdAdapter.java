package com.my.target.mediation;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import com.my.target.common.CustomParams;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.common.models.ImageData;
import com.my.target.gb;
import com.my.target.m;
import com.my.target.nativeads.NativeAd;
import com.my.target.nativeads.NativeAdViewBinder;
import com.my.target.nativeads.banners.NativePromoBanner;
import com.my.target.o7;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class MyTargetNativeAdAdapter implements MediationNativeAdAdapter, AdChoicesClickHandler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public o7 f4711a;
    public NativeAd b;

    public class a implements NativeAd.NativeAdListener, NativeAd.NativeAdChoicesListener, NativeAd.NativeAdChoicesOptionListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final MediationNativeAdAdapter.MediationNativeAdListener f4712a;

        public a(MediationNativeAdAdapter.MediationNativeAdListener mediationNativeAdListener) {
            this.f4712a = mediationNativeAdListener;
        }

        @Override // com.my.target.nativeads.NativeAd.NativeAdChoicesOptionListener
        public void closeIfAutomaticallyDisabled(NativeAd nativeAd) {
            gb.a("MyTargetNativeAdAdapter: the ad [" + nativeAd + "] should close manually");
            this.f4712a.closeIfAutomaticallyDisabled(MyTargetNativeAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeAd.NativeAdChoicesListener
        public void onAdChoicesIconLoad(ImageData imageData, boolean z, NativeAd nativeAd) {
            gb.a("MyTargetNativeAdAdapter: AdChoices icon downloading successfully");
            this.f4712a.onAdChoicesIconLoad(imageData, z, MyTargetNativeAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeAd.NativeAdListener
        public void onClick(NativeAd nativeAd) {
            gb.a("MyTargetNativeAdAdapter: Ad clicked");
            this.f4712a.onClick(MyTargetNativeAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeAd.NativeAdChoicesOptionListener
        public void onCloseAutomatically(NativeAd nativeAd) {
            gb.a("MyTargetNativeAdAdapter: the ad [" + nativeAd + "] should close automatically");
            this.f4712a.onCloseAutomatically(MyTargetNativeAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeAd.NativeAdListener
        public void onLoad(NativePromoBanner nativePromoBanner, NativeAd nativeAd) {
            gb.a("MyTargetNativeAdAdapter: Ad loaded");
            this.f4712a.onLoad(nativePromoBanner, MyTargetNativeAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeAd.NativeAdListener
        public void onNoAd(IAdLoadingError iAdLoadingError, NativeAd nativeAd) {
            gb.a("MyTargetNativeAdAdapter: No ad (" + iAdLoadingError.getMessage() + ")");
            this.f4712a.onNoAd(iAdLoadingError, MyTargetNativeAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeAd.NativeAdListener
        public void onShow(NativeAd nativeAd) {
            gb.a("MyTargetNativeAdAdapter: Ad shown");
            this.f4712a.onShow(MyTargetNativeAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeAd.NativeAdListener
        public void onVideoComplete(NativeAd nativeAd) {
            gb.a("MyTargetNativeAdAdapter: Video completed");
            this.f4712a.onVideoComplete(MyTargetNativeAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeAd.NativeAdListener
        public void onVideoPause(NativeAd nativeAd) {
            gb.a("MyTargetNativeAdAdapter: Video paused");
            this.f4712a.onVideoPause(MyTargetNativeAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeAd.NativeAdListener
        public void onVideoPlay(NativeAd nativeAd) {
            gb.a("MyTargetNativeAdAdapter: Video playing");
            this.f4712a.onVideoPlay(MyTargetNativeAdAdapter.this);
        }

        @Override // com.my.target.nativeads.NativeAd.NativeAdChoicesOptionListener
        public boolean shouldCloseAutomatically() {
            gb.a("MyTargetNativeAdAdapter: call 'shouldCloseAutomatically' for the ad");
            return this.f4712a.shouldCloseAutomatically();
        }
    }

    public void a(o7 o7Var) {
        this.f4711a = o7Var;
    }

    @Override // com.my.target.mediation.MediationAdapter
    public void destroy() {
        NativeAd nativeAd = this.b;
        if (nativeAd == null) {
            return;
        }
        nativeAd.unregisterView();
        this.b.setListener(null);
        this.b = null;
    }

    @Override // com.my.target.mediation.MediationNativeAdAdapter
    public View getMediaView(Context context) {
        return null;
    }

    @Override // com.my.target.mediation.AdChoicesClickHandler
    public void handleAdChoicesClick(Context context) {
        NativeAd nativeAd = this.b;
        if (nativeAd == null) {
            return;
        }
        nativeAd.handleAdChoicesClick(context);
    }

    @Override // com.my.target.mediation.MediationNativeAdAdapter
    public void load(MediationNativeAdConfig mediationNativeAdConfig, MediationNativeAdAdapter.MediationNativeAdListener mediationNativeAdListener, Context context) {
        String placementId = mediationNativeAdConfig.getPlacementId();
        try {
            int i = Integer.parseInt(placementId);
            NativeAd nativeAd = new NativeAd(i, mediationNativeAdConfig.getMenuFactory(), context);
            this.b = nativeAd;
            nativeAd.setMediationEnabled(false);
            this.b.setCachePolicy(mediationNativeAdConfig.getCachePolicy());
            a aVar = new a(mediationNativeAdListener);
            this.b.setListener(aVar);
            this.b.setAdChoicesListener(aVar);
            this.b.setAdChoicesOptionListener(aVar);
            CustomParams customParams = this.b.getCustomParams();
            customParams.setAge(mediationNativeAdConfig.getAge());
            customParams.setGender(mediationNativeAdConfig.getGender());
            for (Map.Entry<String, String> entry : mediationNativeAdConfig.getServerParams().entrySet()) {
                customParams.setCustomParam(entry.getKey(), entry.getValue());
            }
            String payload = mediationNativeAdConfig.getPayload();
            if (this.f4711a != null) {
                gb.a("MyTargetNativeAdAdapter: Got banner from mediation response");
                this.b.a(this.f4711a);
                return;
            }
            if (TextUtils.isEmpty(payload)) {
                gb.a("MyTargetNativeAdAdapter: Load id " + i);
                this.b.load();
                return;
            }
            gb.a("MyTargetNativeAdAdapter: Load id " + i + " from BID " + payload);
            this.b.loadFromBid(payload);
        } catch (Throwable unused) {
            gb.b("MyTargetNativeAdAdapter error: " + ("failed to request ad, unable to convert slotId " + placementId + " to int"));
            mediationNativeAdListener.onNoAd(m.o, this);
        }
    }

    @Override // com.my.target.mediation.MediationNativeAdAdapter
    @Deprecated
    public void registerView(View view, List<View> list, int i) {
        NativeAd nativeAd = this.b;
        if (nativeAd == null) {
            return;
        }
        nativeAd.setAdChoicesPlacement(i);
        this.b.registerView(view, list);
    }

    @Override // com.my.target.mediation.MediationNativeAdAdapter
    public void unregisterView() {
        NativeAd nativeAd = this.b;
        if (nativeAd == null) {
            return;
        }
        nativeAd.unregisterView();
    }

    @Override // com.my.target.mediation.MediationNativeAdAdapter
    public void registerView(NativeAdViewBinder nativeAdViewBinder, List<View> list, int i) {
        NativeAd nativeAd = this.b;
        if (nativeAd == null) {
            return;
        }
        nativeAd.setAdChoicesPlacement(i);
        this.b.registerView(nativeAdViewBinder, list);
    }
}
