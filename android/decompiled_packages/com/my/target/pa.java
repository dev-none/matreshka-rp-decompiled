package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.webkit.WebView;
import android.widget.FrameLayout;
import com.my.target.ads.MyTargetView;
import com.my.target.common.models.IAdLoadingError;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public final class pa implements v2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final l8 f4773a;
    public final MyTargetView b;
    public final na c;
    public final Context d;
    public final wa.a e = new c(this);
    public final ab f;
    public final bc g;
    public final yb h;
    public final com.my.target.d i;
    public final h6.a j;
    public wa k;
    public v2.a l;
    public boolean m;
    public h6 n;

    public class a extends bc.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ com.my.target.b f4774a;

        public a(com.my.target.b bVar) {
            this.f4774a = bVar;
        }

        @Override // com.my.target.bc.a
        public void a() {
            gb.a("StandardAdEngine: Ad shown, banner Id = " + this.f4774a.r());
            h6 h6Var = pa.this.n;
            if (h6Var != null) {
                h6Var.b();
                pa paVar = pa.this;
                paVar.n.b(paVar.d);
            }
            v2.a aVar = pa.this.l;
            if (aVar != null) {
                aVar.f();
            }
        }
    }

    public class b implements com.my.target.d.a {
        public b() {
        }

        @Override // com.my.target.d.a
        public void a(Context context) {
            pa.this.c();
        }
    }

    public static class c implements wa.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final pa f4776a;

        public c(pa paVar) {
            this.f4776a = paVar;
        }

        @Override // com.my.target.wa.a
        public void a(com.my.target.b bVar, String str) {
            this.f4776a.a(bVar, str);
        }

        @Override // com.my.target.wa.a
        public void a(com.my.target.b bVar) {
            this.f4776a.a(bVar);
        }

        @Override // com.my.target.wa.a
        public void a(WebView webView) {
            this.f4776a.a(webView);
        }

        @Override // com.my.target.wa.a
        public void a(q5 q5Var) {
            this.f4776a.a(q5Var);
        }
    }

    public static class d implements xa.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final pa f4777a;

        public d(pa paVar) {
            this.f4777a = paVar;
        }

        @Override // com.my.target.xa.a
        public void a() {
            this.f4777a.f();
        }

        @Override // com.my.target.xa.a
        public void a(IAdLoadingError iAdLoadingError) {
            this.f4777a.a(iAdLoadingError);
        }
    }

    public static class e implements q6.c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final pa f4778a;

        public e(pa paVar) {
            this.f4778a = paVar;
        }

        @Override // com.my.target.q6.c
        public void a() {
            this.f4778a.f();
        }

        @Override // com.my.target.q6.c
        public void b() {
            this.f4778a.e();
        }

        @Override // com.my.target.q6.c
        public void d() {
            this.f4778a.d();
        }

        @Override // com.my.target.q6.c
        public void a(IAdLoadingError iAdLoadingError) {
            this.f4778a.a(iAdLoadingError);
        }

        @Override // com.my.target.q6.c
        public void a(String str, na naVar, Context context) {
            this.f4778a.a(str, naVar, context);
        }

        @Override // com.my.target.q6.c
        public void a(float f, float f2, na naVar, Context context) {
            this.f4778a.a(f, f2, context);
        }
    }

    public pa(MyTargetView myTargetView, na naVar, h6.a aVar) {
        this.b = myTargetView;
        this.c = naVar;
        this.d = myTargetView.getContext();
        this.j = aVar;
        this.f = naVar.x().b();
        this.g = bc.b(naVar.E(), naVar.x());
        this.h = yb.a(naVar.x());
        this.i = com.my.target.d.a(naVar.a());
        this.f4773a = l8.a(naVar, 1, null, myTargetView.getContext());
    }

    public static pa a(MyTargetView myTargetView, na naVar, h6.a aVar) {
        return new pa(myTargetView, naVar, aVar);
    }

    @Override // com.my.target.v2
    public float b() {
        return 0.0f;
    }

    public void c() {
        bb.b(this.c.x(), "closedByUser", -1, this.d);
        v2.a aVar = this.l;
        if (aVar == null) {
            return;
        }
        aVar.e();
    }

    public void d() {
        v2.a aVar = this.l;
        if (aVar != null) {
            aVar.d();
        }
    }

    @Override // com.my.target.v2
    public void destroy() {
        this.g.e();
        this.h.c();
        this.i.a();
        l8 l8Var = this.f4773a;
        if (l8Var != null) {
            l8Var.a();
        }
        wa waVar = this.k;
        if (waVar != null) {
            waVar.a(this.f4773a != null ? 7000 : 0);
            this.k = null;
        }
    }

    public void e() {
        v2.a aVar = this.l;
        if (aVar != null) {
            aVar.b();
        }
    }

    public void f() {
        v2.a aVar = this.l;
        if (aVar != null) {
            aVar.a();
        }
    }

    public final void g() {
        q6 q6VarA;
        wa waVar = this.k;
        if (waVar instanceof q6) {
            q6VarA = (q6) waVar;
        } else {
            if (waVar != null) {
                waVar.a((wa.a) null);
                this.k.a(this.f4773a != null ? 7000 : 0);
            }
            q6VarA = q6.a(this.b);
            q6VarA.a(this.e);
            this.k = q6VarA;
            a(q6VarA.getView());
        }
        q6VarA.a(new e(this));
        q6VarA.a(this.c);
    }

    public final void h() {
        xa xaVarA;
        wa waVar = this.k;
        if (waVar instanceof hc) {
            xaVarA = (xa) waVar;
        } else {
            if (waVar != null) {
                waVar.a((wa.a) null);
                this.k.a(this.f4773a != null ? 7000 : 0);
            }
            xaVarA = hc.a(this.d);
            xaVarA.a(this.e);
            this.k = xaVarA;
            a(xaVarA.getView());
        }
        xaVarA.a(new d(this));
        xaVarA.a(this.c);
    }

    @Override // com.my.target.v2
    public void pause() {
        wa waVar = this.k;
        if (waVar != null) {
            waVar.pause();
        }
        this.m = false;
        this.g.e();
        this.h.a((View) null);
    }

    @Override // com.my.target.v2
    public void prepare() {
        this.n = this.j.b();
        if ("mraid".equals(this.c.C())) {
            g();
        } else {
            h();
        }
    }

    @Override // com.my.target.v2
    public void resume() {
        wa waVar = this.k;
        if (waVar != null) {
            waVar.resume();
        }
        this.m = true;
        this.g.c(this.b);
        this.h.a(this.b);
        this.h.b();
    }

    @Override // com.my.target.v2
    public void start() {
        this.m = true;
        wa waVar = this.k;
        if (waVar != null) {
            waVar.start();
        }
        this.h.a(this.b);
        this.h.b();
    }

    @Override // com.my.target.v2
    public void stop() {
        wa waVar = this.k;
        if (waVar != null) {
            waVar.a(this.f4773a == null);
        }
        this.h.a((View) null);
    }

    @Override // com.my.target.v2
    public void a(v2.a aVar) {
        this.l = aVar;
    }

    @Override // com.my.target.v2
    public String a() {
        return "myTarget";
    }

    @Override // com.my.target.v2
    public void a(MyTargetView.AdSize adSize) {
        wa waVar = this.k;
        if (waVar == null) {
            return;
        }
        waVar.getView().a(adSize.getWidthPixels(), adSize.getHeightPixels());
    }

    public void a(float f, float f2, Context context) {
        if (this.f.f4536a.isEmpty()) {
            return;
        }
        float f3 = f2 - f;
        ab abVarA = ab.a(new ArrayList(), this.f.b);
        Iterator it = this.f.f4536a.iterator();
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

    public void a(String str, na naVar, Context context) {
        bb.b(naVar.x(), str, -1, context);
    }

    public void a(IAdLoadingError iAdLoadingError) {
        v2.a aVar = this.l;
        if (aVar != null) {
            aVar.a(iAdLoadingError);
        }
    }

    public void a(com.my.target.b bVar, String str) {
        v2.a aVar = this.l;
        if (aVar != null) {
            aVar.c();
        }
        e1 e1VarA = e1.a();
        if (TextUtils.isEmpty(str)) {
            e1VarA.a(bVar, 1, this.b.getContext());
        } else {
            e1VarA.a(bVar, str, 1, this.b.getContext());
        }
    }

    public void a(com.my.target.b bVar) {
        this.g.e();
        this.g.a(new a(bVar));
        if (this.m) {
            this.g.c(this.b);
        }
    }

    public void a(WebView webView) {
        wa waVar;
        if (this.f4773a == null || (waVar = this.k) == null) {
            return;
        }
        this.f4773a.a(webView, new l8.b(waVar.getView().getAdChoicesView(), 3));
        this.f4773a.c();
    }

    public void a(q5 q5Var) {
        bb.b(this.c.x(), "error", 1, this.b.getContext());
        v2.a aVar = this.l;
        if (aVar == null) {
            return;
        }
        aVar.a(q5Var);
    }

    public final void a(m1 m1Var) {
        if (this.k != null) {
            MyTargetView.AdSize size = this.b.getSize();
            this.k.getView().a(size.getWidthPixels(), size.getHeightPixels());
        }
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-2, -2);
        layoutParams.gravity = 17;
        m1Var.setLayoutParams(layoutParams);
        this.b.removeAllViews();
        this.b.addView(m1Var);
        if (this.c.a() == null) {
            return;
        }
        this.i.a(m1Var.getAdChoicesView(), new b());
    }
}
