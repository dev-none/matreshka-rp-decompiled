package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.widget.RelativeLayout;
import com.my.target.ads.MyTargetView;
import com.my.target.common.MyTargetPrivacy;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.mediation.MediationAdapter;
import com.my.target.mediation.MediationStandardAdAdapter;
import com.my.target.mediation.MyTargetStandardAdAdapter;

/* JADX INFO: loaded from: classes6.dex */
public class g6 extends z5 implements v2 {
    public final MyTargetView k;
    public v2.a l;

    public class a implements MediationStandardAdAdapter.MediationStandardAdListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final y5 f4633a;

        public a(y5 y5Var) {
            this.f4633a = y5Var;
        }

        @Override // com.my.target.mediation.MediationStandardAdAdapter.MediationStandardAdListener
        public void onClick(MediationStandardAdAdapter mediationStandardAdAdapter) {
            g6 g6Var = g6.this;
            if (g6Var.d != mediationStandardAdAdapter) {
                return;
            }
            Context contextG = g6Var.g();
            if (contextG != null) {
                bb.b(this.f4633a.h(), "click", 2, contextG);
            }
            v2.a aVar = g6.this.l;
            if (aVar != null) {
                aVar.c();
            }
        }

        @Override // com.my.target.mediation.MediationStandardAdAdapter.MediationStandardAdListener
        public void onLoad(View view, MediationStandardAdAdapter mediationStandardAdAdapter) {
            if (g6.this.d != mediationStandardAdAdapter) {
                return;
            }
            gb.a("MediationStandardAdEngine: Data from " + this.f4633a.b() + " ad network loaded successfully");
            g6.this.a(this.f4633a, true);
            g6.this.a(view);
            v2.a aVar = g6.this.l;
            if (aVar != null) {
                aVar.a();
            }
        }

        @Override // com.my.target.mediation.MediationStandardAdAdapter.MediationStandardAdListener
        public void onNoAd(IAdLoadingError iAdLoadingError, MediationStandardAdAdapter mediationStandardAdAdapter) {
            if (g6.this.d != mediationStandardAdAdapter) {
                return;
            }
            gb.a("MediationStandardAdEngine: No data from " + this.f4633a.b() + " ad network - " + iAdLoadingError);
            g6.this.a(this.f4633a, false);
        }

        @Override // com.my.target.mediation.MediationStandardAdAdapter.MediationStandardAdListener
        public void onShow(MediationStandardAdAdapter mediationStandardAdAdapter) {
            g6 g6Var = g6.this;
            if (g6Var.d != mediationStandardAdAdapter) {
                return;
            }
            Context contextG = g6Var.g();
            if (contextG != null) {
                bb.b(this.f4633a.h(), "show", 1, contextG);
            }
            v2.a aVar = g6.this.l;
            if (aVar != null) {
                aVar.f();
            }
        }
    }

    public g6(MyTargetView myTargetView, x5 x5Var, j jVar, h6.a aVar) {
        super(x5Var, jVar, aVar);
        this.k = myTargetView;
    }

    @Override // com.my.target.v2
    public void a(MyTargetView.AdSize adSize) {
    }

    @Override // com.my.target.v2
    public void destroy() {
        if (this.d == null) {
            gb.b("MediationStandardAdEngine: Error - can't destroy ad, adapter is not set");
            return;
        }
        this.k.removeAllViews();
        try {
            ((MediationStandardAdAdapter) this.d).destroy();
        } catch (Throwable th) {
            gb.b("MediationStandardAdEngine: Error - " + th);
        }
        this.d = null;
    }

    @Override // com.my.target.z5
    public void e() {
        v2.a aVar = this.l;
        if (aVar != null) {
            aVar.a(m.u);
        }
    }

    @Override // com.my.target.z5
    /* JADX INFO: renamed from: i, reason: merged with bridge method [inline-methods] */
    public MediationStandardAdAdapter f() {
        return new MyTargetStandardAdAdapter();
    }

    @Override // com.my.target.v2
    public void pause() {
    }

    @Override // com.my.target.v2
    public void prepare() {
        super.b(this.k.getContext());
    }

    @Override // com.my.target.v2
    public void resume() {
    }

    @Override // com.my.target.v2
    public void start() {
    }

    @Override // com.my.target.v2
    public void stop() {
    }

    public static g6 a(MyTargetView myTargetView, x5 x5Var, j jVar, h6.a aVar) {
        return new g6(myTargetView, x5Var, jVar, aVar);
    }

    @Override // com.my.target.v2
    public void a(v2.a aVar) {
        this.l = aVar;
    }

    @Override // com.my.target.z5
    public void a(MediationStandardAdAdapter mediationStandardAdAdapter, y5 y5Var, Context context) {
        z5.a aVarA = z5.a.a(y5Var.e(), y5Var.d(), y5Var.c(), this.f4885a.g().getAge(), this.f4885a.g().getGender(), MyTargetPrivacy.currentPrivacy(), TextUtils.isEmpty(this.h) ? null : this.f4885a.a(this.h));
        if (mediationStandardAdAdapter instanceof MyTargetStandardAdAdapter) {
            t tVarG = y5Var.g();
            if (tVarG instanceof ua) {
                ((MyTargetStandardAdAdapter) mediationStandardAdAdapter).a((ua) tVarG);
            }
        }
        try {
            mediationStandardAdAdapter.load(aVarA, this.k.getSize(), new a(y5Var), context);
        } catch (Throwable th) {
            gb.b("MediationStandardAdEngine: Error - " + th);
        }
    }

    @Override // com.my.target.z5
    public boolean a(MediationAdapter mediationAdapter) {
        return mediationAdapter instanceof MediationStandardAdAdapter;
    }

    public void a(View view) {
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -2);
        layoutParams.addRule(13);
        view.setLayoutParams(layoutParams);
        this.k.removeAllViews();
        this.k.addView(view);
    }
}
