package com.my.target;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.FrameLayout;
import com.my.target.ads.Reward;
import com.my.target.common.MyTargetActivity;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public final class k4 extends h4 {
    public final j4 h;
    public final t4 i;
    public final ab j;
    public WeakReference k;
    public bc l;
    public final yb m;
    public l8 n;

    public k4(j4 j4Var, t4 t4Var, s2.a aVar) {
        super(aVar);
        this.h = j4Var;
        this.i = t4Var;
        this.m = yb.a(j4Var.x());
        this.j = j4Var.x().b();
    }

    public static k4 a(j4 j4Var, t4 t4Var, s2.a aVar) {
        return new k4(j4Var, t4Var, aVar);
    }

    public void b(Context context) {
        if (this.c) {
            return;
        }
        this.c = true;
        this.f4648a.b();
        bb.b(this.h.x(), "reward", -1, context);
        s2.b bVarC = c();
        if (bVarC != null) {
            bVarC.a(Reward.getDefault());
        }
    }

    @Override // com.my.target.h4
    public boolean d() {
        return this.h.N();
    }

    public l5 e() {
        WeakReference weakReference = this.k;
        if (weakReference != null) {
            return (l5) weakReference.get();
        }
        return null;
    }

    @Override // com.my.target.h4, com.my.target.common.MyTargetActivity.ActivityEngine
    public void onActivityCreate(MyTargetActivity myTargetActivity, Intent intent, FrameLayout frameLayout) {
        super.onActivityCreate(myTargetActivity, intent, frameLayout);
        a(frameLayout);
    }

    @Override // com.my.target.h4, com.my.target.common.MyTargetActivity.ActivityEngine
    public void onActivityDestroy() {
        l5 l5Var;
        super.onActivityDestroy();
        bc bcVar = this.l;
        if (bcVar != null) {
            bcVar.e();
            this.l = null;
        }
        l8 l8Var = this.n;
        if (l8Var != null) {
            l8Var.a();
        }
        WeakReference weakReference = this.k;
        if (weakReference != null && (l5Var = (l5) weakReference.get()) != null) {
            l5Var.a(this.n != null ? 7000 : 0);
        }
        this.k = null;
        this.m.a((View) null);
        this.m.c();
    }

    @Override // com.my.target.h4, com.my.target.common.MyTargetActivity.ActivityEngine
    public void onActivityPause() {
        l5 l5Var;
        super.onActivityPause();
        WeakReference weakReference = this.k;
        if (weakReference != null && (l5Var = (l5) weakReference.get()) != null) {
            l5Var.pause();
        }
        bc bcVar = this.l;
        if (bcVar != null) {
            bcVar.e();
        }
        this.m.a((View) null);
    }

    @Override // com.my.target.h4, com.my.target.common.MyTargetActivity.ActivityEngine
    public void onActivityResume() {
        l5 l5Var;
        super.onActivityResume();
        WeakReference weakReference = this.k;
        if (weakReference == null || (l5Var = (l5) weakReference.get()) == null) {
            return;
        }
        l5Var.resume();
        bc bcVar = this.l;
        if (bcVar != null) {
            bcVar.c(l5Var.j());
        }
        this.m.a(l5Var.j());
        this.m.b();
    }

    public void a(float f, float f2, Context context) {
        if (this.j.f4536a.isEmpty()) {
            return;
        }
        float f3 = f2 - f;
        ab abVarA = ab.a(new ArrayList(), this.j.b);
        Iterator it = this.j.f4536a.iterator();
        while (it.hasNext()) {
            w8 w8Var = (w8) it.next();
            float fE = w8Var.e();
            if (fE < 0.0f && w8Var.d() >= 0.0f) {
                fE = (f2 / 100.0f) * w8Var.d();
            }
            if (fE >= 0.0f && fE <= f3) {
                abVarA.f4536a.add(w8Var);
                it.remove();
            }
        }
        bb.a(abVarA, 1, context);
    }

    public static class a implements l5.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final k4 f4678a;
        public final j4 b;
        public final s2.a c;

        public a(k4 k4Var, j4 j4Var, s2.a aVar) {
            this.f4678a = k4Var;
            this.b = j4Var;
            this.c = aVar;
        }

        @Override // com.my.target.b5.a
        public void a(b bVar, String str, int i, Context context) {
            e1 e1VarA = e1.a();
            if (TextUtils.isEmpty(str)) {
                e1VarA.a(this.b, i, context);
            } else {
                e1VarA.a(this.b, str, i, context);
            }
            this.c.c();
        }

        @Override // com.my.target.b5.a
        public void b(b bVar, Context context) {
            bb.b(bVar.x(), "closedByUser", -1, context);
            this.f4678a.dismiss();
        }

        @Override // com.my.target.l5.a
        public void b(Context context) {
            this.f4678a.b(context);
        }

        public void a() {
            this.f4678a.dismiss();
        }

        @Override // com.my.target.b5.a
        public void a(b bVar, Context context) {
            this.f4678a.a(bVar, context);
        }

        @Override // com.my.target.b5.a
        public void a(b bVar, View view) {
            gb.a("InterstitialAdHtmlEngine$InterstitialWebViewPresenterListener: Ad shown, banner Id = " + this.b.r());
            this.f4678a.a(bVar, view);
        }

        @Override // com.my.target.l5.a
        public void a(String str) {
            this.f4678a.dismiss();
        }

        @Override // com.my.target.l5.a
        public void a(b bVar, String str, Context context) {
            this.f4678a.a(bVar, str, context);
        }

        @Override // com.my.target.l5.a
        public void a(b bVar, float f, float f2, Context context) {
            this.f4678a.a(f, f2, context);
        }

        @Override // com.my.target.l5.a
        public void a(WebView webView) {
            this.f4678a.a(webView);
        }

        @Override // com.my.target.l5.a
        public void a(q5 q5Var) {
            this.f4678a.a(this.b, q5Var);
            a();
        }
    }

    public void a(b bVar, String str, Context context) {
        bb.b(bVar.x(), str, -1, context);
    }

    public void a(b bVar, View view) {
        bc bcVar = this.l;
        if (bcVar != null) {
            bcVar.e();
        }
        bc bcVarB = bc.b(this.h.E(), this.h.x());
        this.l = bcVarB;
        if (this.b) {
            bcVarB.c(view);
        }
        gb.a("InterstitialAdHtmlEngine: Ad shown, banner Id = " + bVar.r());
    }

    public void a(WebView webView) {
        l5 l5VarE;
        if (this.n == null || (l5VarE = e()) == null) {
            return;
        }
        this.n.a(webView, new l8.b[0]);
        View closeButton = l5VarE.getCloseButton();
        if (closeButton != null) {
            this.n.a(new l8.b(closeButton, 0));
        }
        this.n.c();
    }

    public final void a(ViewGroup viewGroup) {
        l5 l5VarA;
        this.n = l8.a(this.h, 1, null, viewGroup.getContext());
        if ("mraid".equals(this.h.C())) {
            l5VarA = a5.a(viewGroup.getContext());
        } else {
            l5VarA = v4.a(viewGroup.getContext());
        }
        this.k = new WeakReference(l5VarA);
        l5VarA.a(new a(this, this.h, this.f4648a));
        l5VarA.a(this.i, this.h);
        viewGroup.addView(l5VarA.j(), new FrameLayout.LayoutParams(-1, -1));
    }
}
