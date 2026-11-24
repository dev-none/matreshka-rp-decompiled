package com.my.target.mediation;

import android.content.Context;
import android.text.TextUtils;
import com.my.target.ads.InterstitialAd;
import com.my.target.common.CustomParams;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.gb;
import com.my.target.m;
import com.my.target.t4;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class MyTargetInterstitialAdAdapter implements MediationInterstitialAdAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public t4 f4709a;
    public InterstitialAd b;

    public class a implements InterstitialAd.InterstitialAdListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final MediationInterstitialAdAdapter.MediationInterstitialAdListener f4710a;

        public a(MediationInterstitialAdAdapter.MediationInterstitialAdListener mediationInterstitialAdListener) {
            this.f4710a = mediationInterstitialAdListener;
        }

        @Override // com.my.target.ads.InterstitialAd.InterstitialAdListener
        public void onClick(InterstitialAd interstitialAd) {
            gb.a("MyTargetInterstitialAdAdapter: Ad clicked");
            this.f4710a.onClick(MyTargetInterstitialAdAdapter.this);
        }

        @Override // com.my.target.ads.InterstitialAd.InterstitialAdListener
        public void onDismiss(InterstitialAd interstitialAd) {
            gb.a("MyTargetInterstitialAdAdapter: Ad dismissed");
            this.f4710a.onDismiss(MyTargetInterstitialAdAdapter.this);
        }

        @Override // com.my.target.ads.InterstitialAd.InterstitialAdListener
        public void onDisplay(InterstitialAd interstitialAd) {
            gb.a("MyTargetInterstitialAdAdapter: Ad displayed");
            this.f4710a.onDisplay(MyTargetInterstitialAdAdapter.this);
        }

        @Override // com.my.target.ads.InterstitialAd.InterstitialAdListener
        public void onFailedToShow(InterstitialAd interstitialAd) {
            gb.a("MyTargetInterstitialAdAdapter: On failed to show");
            this.f4710a.onFailedToShow(MyTargetInterstitialAdAdapter.this);
        }

        @Override // com.my.target.ads.InterstitialAd.InterstitialAdListener
        public void onLoad(InterstitialAd interstitialAd) {
            gb.a("MyTargetInterstitialAdAdapter: Ad loaded");
            this.f4710a.onLoad(MyTargetInterstitialAdAdapter.this);
        }

        @Override // com.my.target.ads.InterstitialAd.InterstitialAdListener
        public void onNoAd(IAdLoadingError iAdLoadingError, InterstitialAd interstitialAd) {
            gb.a("MyTargetInterstitialAdAdapter: No ad (" + iAdLoadingError.getMessage() + ")");
            this.f4710a.onNoAd(iAdLoadingError, MyTargetInterstitialAdAdapter.this);
        }

        @Override // com.my.target.ads.InterstitialAd.InterstitialAdListener
        public void onVideoCompleted(InterstitialAd interstitialAd) {
            gb.a("MyTargetInterstitialAdAdapter: Video completed");
            this.f4710a.onVideoCompleted(MyTargetInterstitialAdAdapter.this);
        }
    }

    public void a(t4 t4Var) {
        this.f4709a = t4Var;
    }

    @Override // com.my.target.mediation.MediationAdapter
    public void destroy() {
        InterstitialAd interstitialAd = this.b;
        if (interstitialAd == null) {
            return;
        }
        interstitialAd.setListener(null);
        this.b.destroy();
        this.b = null;
    }

    @Override // com.my.target.mediation.MediationInterstitialAdAdapter
    public void dismiss() {
        InterstitialAd interstitialAd = this.b;
        if (interstitialAd == null) {
            return;
        }
        interstitialAd.dismiss();
    }

    @Override // com.my.target.mediation.MediationInterstitialAdAdapter
    public void load(MediationAdConfig mediationAdConfig, MediationInterstitialAdAdapter.MediationInterstitialAdListener mediationInterstitialAdListener, Context context) {
        String placementId = mediationAdConfig.getPlacementId();
        try {
            int i = Integer.parseInt(placementId);
            InterstitialAd interstitialAd = new InterstitialAd(i, context);
            this.b = interstitialAd;
            interstitialAd.setMediationEnabled(false);
            this.b.setListener(new a(mediationInterstitialAdListener));
            CustomParams customParams = this.b.getCustomParams();
            customParams.setAge(mediationAdConfig.getAge());
            customParams.setGender(mediationAdConfig.getGender());
            for (Map.Entry<String, String> entry : mediationAdConfig.getServerParams().entrySet()) {
                customParams.setCustomParam(entry.getKey(), entry.getValue());
            }
            String payload = mediationAdConfig.getPayload();
            if (this.f4709a != null) {
                gb.a("MyTargetInterstitialAdAdapter: Got banner from mediation response");
                this.b.a(this.f4709a);
                return;
            }
            if (TextUtils.isEmpty(payload)) {
                gb.a("MyTargetInterstitialAdAdapter: Load id " + i);
                this.b.load();
                return;
            }
            gb.a("MyTargetInterstitialAdAdapter: Load id " + i + " from BID " + payload);
            this.b.loadFromBid(payload);
        } catch (Throwable unused) {
            gb.b("MyTargetInterstitialAdAdapter: Error - failed to request ad, unable to convert slotId " + placementId + " to int");
            mediationInterstitialAdListener.onNoAd(m.o, this);
        }
    }

    @Override // com.my.target.mediation.MediationInterstitialAdAdapter
    public void show(Context context) {
        InterstitialAd interstitialAd = this.b;
        if (interstitialAd == null) {
            return;
        }
        interstitialAd.show();
    }
}
