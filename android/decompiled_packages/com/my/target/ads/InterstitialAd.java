package com.my.target.ads;

import android.content.Context;
import com.my.target.a6;
import com.my.target.common.MyTargetVersion;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.e4;
import com.my.target.gb;
import com.my.target.h4;
import com.my.target.m;
import com.my.target.s2;
import com.my.target.t4;
import com.my.target.x5;

/* JADX INFO: loaded from: classes6.dex */
public final class InterstitialAd extends BaseInterstitialAd {
    protected InterstitialAdListener listener;

    public interface InterstitialAdListener {
        void onClick(InterstitialAd interstitialAd);

        void onDismiss(InterstitialAd interstitialAd);

        void onDisplay(InterstitialAd interstitialAd);

        void onFailedToShow(InterstitialAd interstitialAd);

        void onLoad(InterstitialAd interstitialAd);

        void onNoAd(IAdLoadingError iAdLoadingError, InterstitialAd interstitialAd);

        void onVideoCompleted(InterstitialAd interstitialAd);
    }

    public InterstitialAd(int i, Context context) {
        super(i, "fullscreen", context);
        gb.c("Interstitial ad created. Version - " + MyTargetVersion.VERSION);
    }

    @Override // com.my.target.ads.BaseInterstitialAd
    public void a(t4 t4Var, IAdLoadingError iAdLoadingError) {
        InterstitialAdListener interstitialAdListener = this.listener;
        if (interstitialAdListener == null) {
            return;
        }
        if (t4Var == null) {
            if (iAdLoadingError == null) {
                iAdLoadingError = m.o;
            }
            interstitialAdListener.onNoAd(iAdLoadingError, this);
            return;
        }
        e4 e4VarC = t4Var.c();
        x5 x5VarB = t4Var.b();
        if (e4VarC != null) {
            h4 h4VarA = h4.a(e4VarC, t4Var, this.g, new a());
            this.f = h4VarA;
            if (h4VarA != null) {
                this.listener.onLoad(this);
                return;
            } else {
                this.listener.onNoAd(m.o, this);
                return;
            }
        }
        if (x5VarB != null) {
            a6 a6VarA = a6.a(x5VarB, this.f4578a, this.b, new a());
            this.f = a6VarA;
            a6VarA.b(this.e);
        } else {
            InterstitialAdListener interstitialAdListener2 = this.listener;
            if (iAdLoadingError == null) {
                iAdLoadingError = m.u;
            }
            interstitialAdListener2.onNoAd(iAdLoadingError, this);
        }
    }

    @Override // com.my.target.ads.BaseInterstitialAd
    public void destroy() {
        super.destroy();
        this.listener = null;
    }

    public InterstitialAdListener getListener() {
        return this.listener;
    }

    public void setListener(InterstitialAdListener interstitialAdListener) {
        this.listener = interstitialAdListener;
    }

    public class a implements s2.a {
        public a() {
        }

        @Override // com.my.target.s2.a
        public void a() {
            InterstitialAd interstitialAd = InterstitialAd.this;
            InterstitialAdListener interstitialAdListener = interstitialAd.listener;
            if (interstitialAdListener != null) {
                interstitialAdListener.onLoad(interstitialAd);
            }
        }

        @Override // com.my.target.s2.a
        public void b() {
            InterstitialAd interstitialAd = InterstitialAd.this;
            InterstitialAdListener interstitialAdListener = interstitialAd.listener;
            if (interstitialAdListener != null) {
                interstitialAdListener.onVideoCompleted(interstitialAd);
            }
        }

        @Override // com.my.target.s2.a
        public void c() {
            InterstitialAd interstitialAd = InterstitialAd.this;
            InterstitialAdListener interstitialAdListener = interstitialAd.listener;
            if (interstitialAdListener != null) {
                interstitialAdListener.onClick(interstitialAd);
            }
        }

        @Override // com.my.target.s2.a
        public void d() {
            InterstitialAd.this.b();
        }

        @Override // com.my.target.s2.a
        public void e() {
            InterstitialAd interstitialAd = InterstitialAd.this;
            InterstitialAdListener interstitialAdListener = interstitialAd.listener;
            if (interstitialAdListener != null) {
                interstitialAdListener.onFailedToShow(interstitialAd);
            }
        }

        @Override // com.my.target.s2.a
        public void f() {
            InterstitialAd interstitialAd = InterstitialAd.this;
            InterstitialAdListener interstitialAdListener = interstitialAd.listener;
            if (interstitialAdListener != null) {
                interstitialAdListener.onDismiss(interstitialAd);
            }
        }

        @Override // com.my.target.s2.a
        public void g() {
            InterstitialAd.this.a();
            InterstitialAd interstitialAd = InterstitialAd.this;
            InterstitialAdListener interstitialAdListener = interstitialAd.listener;
            if (interstitialAdListener != null) {
                interstitialAdListener.onDisplay(interstitialAd);
            }
        }

        @Override // com.my.target.s2.a
        public void a(IAdLoadingError iAdLoadingError) {
            InterstitialAd interstitialAd = InterstitialAd.this;
            InterstitialAdListener interstitialAdListener = interstitialAd.listener;
            if (interstitialAdListener != null) {
                interstitialAdListener.onNoAd(iAdLoadingError, interstitialAd);
            }
        }
    }
}
