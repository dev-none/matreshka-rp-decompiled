package com.my.target.ads;

import android.content.Context;
import com.my.target.common.MyTargetVersion;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.e4;
import com.my.target.f6;
import com.my.target.gb;
import com.my.target.h4;
import com.my.target.m;
import com.my.target.s2;
import com.my.target.t4;
import com.my.target.x5;
import com.my.tracker.ads.AdFormat;

/* JADX INFO: loaded from: classes6.dex */
public final class RewardedAd extends BaseInterstitialAd {
    protected RewardedAdListener listener;

    public interface RewardedAdListener {
        void onClick(RewardedAd rewardedAd);

        void onDismiss(RewardedAd rewardedAd);

        void onDisplay(RewardedAd rewardedAd);

        void onFailedToShow(RewardedAd rewardedAd);

        void onLoad(RewardedAd rewardedAd);

        void onNoAd(IAdLoadingError iAdLoadingError, RewardedAd rewardedAd);

        void onReward(Reward reward, RewardedAd rewardedAd);
    }

    public class b implements s2.b {
        public b() {
        }

        @Override // com.my.target.s2.b
        public void a(Reward reward) {
            RewardedAd rewardedAd = RewardedAd.this;
            RewardedAdListener rewardedAdListener = rewardedAd.listener;
            if (rewardedAdListener != null) {
                rewardedAdListener.onReward(reward, rewardedAd);
            }
        }
    }

    public RewardedAd(int i, Context context) {
        super(i, AdFormat.REWARDED, context);
        gb.c("Rewarded ad created. Version - " + MyTargetVersion.VERSION);
    }

    @Override // com.my.target.ads.BaseInterstitialAd
    public void a(t4 t4Var, IAdLoadingError iAdLoadingError) {
        RewardedAdListener rewardedAdListener = this.listener;
        if (rewardedAdListener == null) {
            return;
        }
        if (t4Var == null) {
            if (iAdLoadingError == null) {
                iAdLoadingError = m.o;
            }
            rewardedAdListener.onNoAd(iAdLoadingError, this);
            return;
        }
        e4 e4VarC = t4Var.c();
        x5 x5VarB = t4Var.b();
        if (e4VarC != null) {
            h4 h4VarA = h4.a(e4VarC, t4Var, this.g, new a());
            this.f = h4VarA;
            if (h4VarA == null) {
                this.listener.onNoAd(m.o, this);
                return;
            } else {
                h4VarA.a(new b());
                this.listener.onLoad(this);
                return;
            }
        }
        if (x5VarB != null) {
            f6 f6VarA = f6.a(x5VarB, this.f4578a, this.b, new a());
            f6VarA.a(new b());
            this.f = f6VarA;
            f6VarA.b(this.e);
            return;
        }
        RewardedAdListener rewardedAdListener2 = this.listener;
        if (iAdLoadingError == null) {
            iAdLoadingError = m.u;
        }
        rewardedAdListener2.onNoAd(iAdLoadingError, this);
    }

    @Override // com.my.target.ads.BaseInterstitialAd
    public void destroy() {
        super.destroy();
        this.listener = null;
    }

    public RewardedAdListener getListener() {
        return this.listener;
    }

    public void setListener(RewardedAdListener rewardedAdListener) {
        this.listener = rewardedAdListener;
    }

    public class a implements s2.a {
        public a() {
        }

        @Override // com.my.target.s2.a
        public void a() {
            RewardedAd rewardedAd = RewardedAd.this;
            RewardedAdListener rewardedAdListener = rewardedAd.listener;
            if (rewardedAdListener != null) {
                rewardedAdListener.onLoad(rewardedAd);
            }
        }

        @Override // com.my.target.s2.a
        public void b() {
        }

        @Override // com.my.target.s2.a
        public void c() {
            RewardedAd rewardedAd = RewardedAd.this;
            RewardedAdListener rewardedAdListener = rewardedAd.listener;
            if (rewardedAdListener != null) {
                rewardedAdListener.onClick(rewardedAd);
            }
        }

        @Override // com.my.target.s2.a
        public void d() {
            RewardedAd.this.b();
        }

        @Override // com.my.target.s2.a
        public void e() {
            RewardedAd rewardedAd = RewardedAd.this;
            RewardedAdListener rewardedAdListener = rewardedAd.listener;
            if (rewardedAdListener != null) {
                rewardedAdListener.onFailedToShow(rewardedAd);
            }
        }

        @Override // com.my.target.s2.a
        public void f() {
            RewardedAd rewardedAd = RewardedAd.this;
            RewardedAdListener rewardedAdListener = rewardedAd.listener;
            if (rewardedAdListener != null) {
                rewardedAdListener.onDismiss(rewardedAd);
            }
        }

        @Override // com.my.target.s2.a
        public void g() {
            RewardedAd.this.a();
            RewardedAd rewardedAd = RewardedAd.this;
            RewardedAdListener rewardedAdListener = rewardedAd.listener;
            if (rewardedAdListener != null) {
                rewardedAdListener.onDisplay(rewardedAd);
            }
        }

        @Override // com.my.target.s2.a
        public void a(IAdLoadingError iAdLoadingError) {
            RewardedAd rewardedAd = RewardedAd.this;
            RewardedAdListener rewardedAdListener = rewardedAd.listener;
            if (rewardedAdListener != null) {
                rewardedAdListener.onNoAd(iAdLoadingError, rewardedAd);
            }
        }
    }
}
