package com.my.target.mediation;

import android.content.Context;
import android.text.TextUtils;
import com.my.target.ads.Reward;
import com.my.target.ads.RewardedAd;
import com.my.target.common.CustomParams;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.gb;
import com.my.target.m;
import com.my.target.t4;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class MyTargetRewardedAdAdapter implements MediationRewardedAdAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public t4 f4715a;
    public RewardedAd b;

    public class a implements RewardedAd.RewardedAdListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final MediationRewardedAdAdapter.MediationRewardedAdListener f4716a;

        public a(MediationRewardedAdAdapter.MediationRewardedAdListener mediationRewardedAdListener) {
            this.f4716a = mediationRewardedAdListener;
        }

        @Override // com.my.target.ads.RewardedAd.RewardedAdListener
        public void onClick(RewardedAd rewardedAd) {
            gb.a("MyTargetRewardedAdAdapter$AdListener: Ad clicked");
            this.f4716a.onClick(MyTargetRewardedAdAdapter.this);
        }

        @Override // com.my.target.ads.RewardedAd.RewardedAdListener
        public void onDismiss(RewardedAd rewardedAd) {
            gb.a("MyTargetRewardedAdAdapter$AdListener: Ad dismissed");
            this.f4716a.onDismiss(MyTargetRewardedAdAdapter.this);
        }

        @Override // com.my.target.ads.RewardedAd.RewardedAdListener
        public void onDisplay(RewardedAd rewardedAd) {
            gb.a("MyTargetRewardedAdAdapter$AdListener: Ad displayed");
            this.f4716a.onDisplay(MyTargetRewardedAdAdapter.this);
        }

        @Override // com.my.target.ads.RewardedAd.RewardedAdListener
        public void onFailedToShow(RewardedAd rewardedAd) {
            gb.a("MyTargetRewardedAdAdapter$AdListener: Ad failed to show");
            this.f4716a.onFailedToShow(MyTargetRewardedAdAdapter.this);
        }

        @Override // com.my.target.ads.RewardedAd.RewardedAdListener
        public void onLoad(RewardedAd rewardedAd) {
            gb.a("MyTargetRewardedAdAdapter$AdListener: Ad loaded");
            this.f4716a.onLoad(MyTargetRewardedAdAdapter.this);
        }

        @Override // com.my.target.ads.RewardedAd.RewardedAdListener
        public void onNoAd(IAdLoadingError iAdLoadingError, RewardedAd rewardedAd) {
            gb.a("MyTargetRewardedAdAdapter$AdListener: No ad (" + iAdLoadingError.getMessage() + ")");
            this.f4716a.onNoAd(iAdLoadingError, MyTargetRewardedAdAdapter.this);
        }

        @Override // com.my.target.ads.RewardedAd.RewardedAdListener
        public void onReward(Reward reward, RewardedAd rewardedAd) {
            gb.a("MyTargetRewardedAdAdapter$AdListener: onReward - " + reward.type);
            this.f4716a.onReward(reward, MyTargetRewardedAdAdapter.this);
        }
    }

    public void a(t4 t4Var) {
        this.f4715a = t4Var;
    }

    @Override // com.my.target.mediation.MediationAdapter
    public void destroy() {
        RewardedAd rewardedAd = this.b;
        if (rewardedAd == null) {
            return;
        }
        rewardedAd.setListener(null);
        this.b.destroy();
        this.b = null;
    }

    @Override // com.my.target.mediation.MediationRewardedAdAdapter
    public void dismiss() {
        RewardedAd rewardedAd = this.b;
        if (rewardedAd == null) {
            return;
        }
        rewardedAd.dismiss();
    }

    @Override // com.my.target.mediation.MediationRewardedAdAdapter
    public void load(MediationAdConfig mediationAdConfig, MediationRewardedAdAdapter.MediationRewardedAdListener mediationRewardedAdListener, Context context) {
        String placementId = mediationAdConfig.getPlacementId();
        try {
            int i = Integer.parseInt(placementId);
            RewardedAd rewardedAd = new RewardedAd(i, context);
            this.b = rewardedAd;
            rewardedAd.setMediationEnabled(false);
            this.b.setListener(new a(mediationRewardedAdListener));
            CustomParams customParams = this.b.getCustomParams();
            customParams.setAge(mediationAdConfig.getAge());
            customParams.setGender(mediationAdConfig.getGender());
            for (Map.Entry<String, String> entry : mediationAdConfig.getServerParams().entrySet()) {
                customParams.setCustomParam(entry.getKey(), entry.getValue());
            }
            String payload = mediationAdConfig.getPayload();
            if (this.f4715a != null) {
                gb.a("MyTargetRewardedAdAdapter: Got banner from mediation response");
                this.b.a(this.f4715a);
                return;
            }
            if (TextUtils.isEmpty(payload)) {
                gb.a("MyTargetRewardedAdAdapter: Load id " + i);
                this.b.load();
                return;
            }
            gb.a("MyTargetRewardedAdAdapter: Load id " + i + " from BID " + payload);
            this.b.loadFromBid(payload);
        } catch (Throwable unused) {
            gb.b("MyTargetRewardedAdAdapter: Error - failed to request ad, unable to convert slotId " + placementId + " to int");
            mediationRewardedAdListener.onNoAd(m.o, this);
        }
    }

    @Override // com.my.target.mediation.MediationRewardedAdAdapter
    public void show(Context context) {
        RewardedAd rewardedAd = this.b;
        if (rewardedAd == null) {
            return;
        }
        rewardedAd.show();
    }
}
