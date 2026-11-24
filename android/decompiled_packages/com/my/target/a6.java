package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import com.my.target.ads.Reward;
import com.my.target.common.MyTargetPrivacy;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.mediation.MediationAdapter;
import com.my.target.mediation.MediationInterstitialAdAdapter;
import com.my.target.mediation.MyTargetInterstitialAdAdapter;

/* JADX INFO: loaded from: classes6.dex */
public class a6 extends z5 implements s2 {
    public final s2.a k;
    public s2.b l;

    public class a implements MediationInterstitialAdAdapter.MediationInterstitialAdListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final y5 f4531a;

        public a(y5 y5Var) {
            this.f4531a = y5Var;
        }

        @Override // com.my.target.mediation.MediationInterstitialAdAdapter.MediationInterstitialAdListener
        public void onClick(MediationInterstitialAdAdapter mediationInterstitialAdAdapter) {
            a6 a6Var = a6.this;
            if (a6Var.d != mediationInterstitialAdAdapter) {
                return;
            }
            Context contextG = a6Var.g();
            if (contextG != null) {
                bb.b(this.f4531a.h(), "click", 2, contextG);
            }
            a6.this.k.c();
        }

        @Override // com.my.target.mediation.MediationInterstitialAdAdapter.MediationInterstitialAdListener
        public void onDismiss(MediationInterstitialAdAdapter mediationInterstitialAdAdapter) {
            a6 a6Var = a6.this;
            if (a6Var.d != mediationInterstitialAdAdapter) {
                return;
            }
            a6Var.k.f();
        }

        @Override // com.my.target.mediation.MediationInterstitialAdAdapter.MediationInterstitialAdListener
        public void onDisplay(MediationInterstitialAdAdapter mediationInterstitialAdAdapter) {
            a6 a6Var = a6.this;
            if (a6Var.d != mediationInterstitialAdAdapter) {
                return;
            }
            Context contextG = a6Var.g();
            if (contextG != null) {
                bb.b(this.f4531a.h(), "show", 1, contextG);
            }
            a6.this.k.g();
        }

        @Override // com.my.target.mediation.MediationInterstitialAdAdapter.MediationInterstitialAdListener
        public void onFailedToShow(MediationInterstitialAdAdapter mediationInterstitialAdAdapter) {
            a6 a6Var = a6.this;
            if (a6Var.d != mediationInterstitialAdAdapter) {
                return;
            }
            a6Var.k.e();
        }

        @Override // com.my.target.mediation.MediationInterstitialAdAdapter.MediationInterstitialAdListener
        public void onLoad(MediationInterstitialAdAdapter mediationInterstitialAdAdapter) {
            if (a6.this.d != mediationInterstitialAdAdapter) {
                return;
            }
            gb.a("MediationInterstitialAdEngine$AdapterListener: Data from " + this.f4531a.b() + " ad network loaded successfully");
            a6.this.a(this.f4531a, true);
            a6.this.k.a();
        }

        @Override // com.my.target.mediation.MediationInterstitialAdAdapter.MediationInterstitialAdListener
        public void onNoAd(IAdLoadingError iAdLoadingError, MediationInterstitialAdAdapter mediationInterstitialAdAdapter) {
            if (a6.this.d != mediationInterstitialAdAdapter) {
                return;
            }
            gb.a("MediationInterstitialAdEngine$AdapterListener: No data from " + this.f4531a.b() + " ad network - " + iAdLoadingError);
            a6.this.a(this.f4531a, false);
        }

        @Override // com.my.target.mediation.MediationInterstitialAdAdapter.MediationInterstitialAdListener
        public void onVideoCompleted(MediationInterstitialAdAdapter mediationInterstitialAdAdapter) {
            a6 a6Var = a6.this;
            if (a6Var.d != mediationInterstitialAdAdapter) {
                return;
            }
            a6Var.k.b();
            Context contextG = a6.this.g();
            if (contextG != null) {
                bb.b(this.f4531a.h(), "reward", -1, contextG);
            }
            s2.b bVarJ = a6.this.j();
            if (bVarJ != null) {
                bVarJ.a(Reward.getDefault());
            }
        }
    }

    public a6(x5 x5Var, j jVar, h6.a aVar, s2.a aVar2) {
        super(x5Var, jVar, aVar);
        this.k = aVar2;
    }

    @Override // com.my.target.s2
    public void destroy() {
        MediationAdapter mediationAdapter = this.d;
        if (mediationAdapter == null) {
            gb.b("MediationInterstitialAdEngine: Error - can't destroy ad, adapter is not set");
            return;
        }
        try {
            ((MediationInterstitialAdAdapter) mediationAdapter).destroy();
        } catch (Throwable th) {
            gb.b("MediationInterstitialAdEngine: Error - " + th);
        }
        this.d = null;
    }

    @Override // com.my.target.s2
    public void dismiss() {
        MediationAdapter mediationAdapter = this.d;
        if (mediationAdapter == null) {
            gb.b("MediationInterstitialAdEngine: Error - can't dismiss ad, adapter is not set");
            return;
        }
        try {
            ((MediationInterstitialAdAdapter) mediationAdapter).dismiss();
        } catch (Throwable th) {
            gb.b("MediationInterstitialAdEngine: Error - " + th);
        }
    }

    @Override // com.my.target.z5
    public void e() {
        this.k.a(m.u);
    }

    @Override // com.my.target.z5
    /* JADX INFO: renamed from: i, reason: merged with bridge method [inline-methods] */
    public MediationInterstitialAdAdapter f() {
        return new MyTargetInterstitialAdAdapter();
    }

    public s2.b j() {
        return this.l;
    }

    public static a6 a(x5 x5Var, j jVar, h6.a aVar, s2.a aVar2) {
        return new a6(x5Var, jVar, aVar, aVar2);
    }

    @Override // com.my.target.s2
    public void a(Context context) {
        MediationAdapter mediationAdapter = this.d;
        if (mediationAdapter == null) {
            this.k.e();
            gb.b("MediationInterstitialAdEngine: Error - can't show ad, adapter is not set");
            return;
        }
        try {
            ((MediationInterstitialAdAdapter) mediationAdapter).show(context);
        } catch (Throwable th) {
            this.k.e();
            gb.b("MediationInterstitialAdEngine: Error - " + th);
        }
    }

    @Override // com.my.target.s2
    public void a(s2.b bVar) {
        this.l = bVar;
    }

    @Override // com.my.target.z5
    public void a(MediationInterstitialAdAdapter mediationInterstitialAdAdapter, y5 y5Var, Context context) {
        z5.a aVarA = z5.a.a(y5Var.e(), y5Var.d(), y5Var.c(), this.f4885a.g().getAge(), this.f4885a.g().getGender(), MyTargetPrivacy.currentPrivacy(), TextUtils.isEmpty(this.h) ? null : this.f4885a.a(this.h));
        if (mediationInterstitialAdAdapter instanceof MyTargetInterstitialAdAdapter) {
            t tVarG = y5Var.g();
            if (tVarG instanceof t4) {
                ((MyTargetInterstitialAdAdapter) mediationInterstitialAdAdapter).a((t4) tVarG);
            }
        }
        try {
            mediationInterstitialAdAdapter.load(aVarA, new a(y5Var), context);
        } catch (Throwable th) {
            gb.b("MediationInterstitialAdEngine: Error - " + th);
        }
    }

    @Override // com.my.target.z5
    public boolean a(MediationAdapter mediationAdapter) {
        return mediationAdapter instanceof MediationInterstitialAdAdapter;
    }
}
