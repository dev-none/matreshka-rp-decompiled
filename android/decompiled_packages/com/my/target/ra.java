package com.my.target;

import android.app.Activity;
import com.my.target.ads.MyTargetView;
import com.my.target.common.models.IAdLoadingError;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes6.dex */
public class ra {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final MyTargetView f4806a;
    public final j b;
    public final b c;
    public final c d;
    public final h6.a e;
    public v2 f;
    public boolean g;
    public boolean h;
    public int i;
    public long j;
    public long k;
    public int l;

    public static class a implements v2.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final ra f4807a;

        public a(ra raVar) {
            this.f4807a = raVar;
        }

        @Override // com.my.target.v2.a
        public void a() {
            this.f4807a.i();
        }

        @Override // com.my.target.v2.a
        public void b() {
            this.f4807a.h();
        }

        @Override // com.my.target.v2.a
        public void c() {
            this.f4807a.e();
        }

        @Override // com.my.target.v2.a
        public void d() {
            this.f4807a.f();
        }

        @Override // com.my.target.v2.a
        public void e() {
            this.f4807a.g();
        }

        @Override // com.my.target.v2.a
        public void f() {
            this.f4807a.j();
        }

        @Override // com.my.target.v2.a
        public void a(IAdLoadingError iAdLoadingError) {
            this.f4807a.a(iAdLoadingError);
        }

        @Override // com.my.target.v2.a
        public void a(q5 q5Var) {
            this.f4807a.a(q5Var);
        }
    }

    public static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public boolean f4808a;
        public boolean b;
        public boolean c;
        public boolean d;
        public boolean e;
        public boolean f;
        public boolean g;

        public boolean a() {
            if (this.b || !this.f4808a) {
                return false;
            }
            return this.g || !this.e;
        }

        public boolean b() {
            if (this.c && this.f4808a) {
                return (this.g || this.e) && !this.f && this.b;
            }
            return false;
        }

        public boolean c() {
            if (this.d && this.c) {
                return (this.g || this.e) && !this.f4808a;
            }
            return false;
        }

        public void d(boolean z) {
            this.e = z;
        }

        public boolean e() {
            return this.b;
        }

        public void f() {
            this.f = false;
            this.c = false;
        }

        public void g(boolean z) {
            this.f4808a = z;
            this.b = false;
        }

        public void a(boolean z) {
            this.d = z;
        }

        public void b(boolean z) {
            this.f = z;
        }

        public void c(boolean z) {
            this.g = z;
        }

        public boolean d() {
            return this.f4808a;
        }

        public void e(boolean z) {
            this.c = z;
        }

        public void f(boolean z) {
            this.b = z;
        }
    }

    public static class c implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final WeakReference f4809a;

        public c(ra raVar) {
            this.f4809a = new WeakReference(raVar);
        }

        @Override // java.lang.Runnable
        public void run() {
            ra raVar = (ra) this.f4809a.get();
            if (raVar != null) {
                raVar.l();
            }
        }
    }

    public ra(MyTargetView myTargetView, j jVar, h6.a aVar) {
        b bVar = new b();
        this.c = bVar;
        this.g = true;
        this.i = -1;
        this.l = 0;
        this.f4806a = myTargetView;
        this.b = jVar;
        this.e = aVar;
        this.d = new c(this);
        if (myTargetView.getContext() instanceof Activity) {
            bVar.c(false);
        } else {
            gb.a("StandardAdMasterEngine: MyTargetView was created with non-activity focus, so system cannot automatically handle lifecycle");
            bVar.c(true);
        }
    }

    public static ra a(MyTargetView myTargetView, j jVar, h6.a aVar) {
        return new ra(myTargetView, jVar, aVar);
    }

    public void b(ua uaVar) {
        if (this.c.d()) {
            q();
        }
        m();
        a(uaVar);
        v2 v2Var = this.f;
        if (v2Var == null) {
            return;
        }
        v2Var.a(new a(this));
        this.j = System.currentTimeMillis() + ((long) this.i);
        this.k = 0L;
        if (this.h && this.c.e()) {
            this.k = this.i;
        }
        this.f.prepare();
    }

    public float c() {
        v2 v2Var = this.f;
        if (v2Var != null) {
            return v2Var.b();
        }
        return 0.0f;
    }

    public final void d() {
        r();
        m();
    }

    public final void e() {
        MyTargetView.MyTargetViewListener listener = this.f4806a.getListener();
        if (listener != null) {
            listener.onClick(this.f4806a);
        }
    }

    public void f() {
        this.c.b(false);
        if (this.c.b()) {
            n();
        }
    }

    public void g() {
        m();
    }

    public void h() {
        if (this.c.a()) {
            k();
        }
        this.c.b(true);
    }

    public void i() {
        if (this.g) {
            this.c.e(true);
            MyTargetView.MyTargetViewListener listener = this.f4806a.getListener();
            if (listener != null) {
                listener.onLoad(this.f4806a);
            }
            this.g = false;
        }
        if (this.c.c()) {
            p();
        }
    }

    public final void j() {
        MyTargetView.MyTargetViewListener listener = this.f4806a.getListener();
        if (listener != null) {
            listener.onShow(this.f4806a);
        }
    }

    public void k() {
        r();
        if (this.h) {
            this.k = this.j - System.currentTimeMillis();
        }
        v2 v2Var = this.f;
        if (v2Var != null) {
            v2Var.pause();
        }
        this.c.f(true);
    }

    public void l() {
        gb.a("StandardAdMasterEngine: Load new standard ad");
        qa.a(this.b, this.e).a(new l.b() { // from class: com.my.target.ra$$ExternalSyntheticLambda0
            @Override // com.my.target.l.b
            public final void a(t tVar, m mVar) {
                this.f$0.a((ua) tVar, mVar);
            }
        }).a(this.e.a(), this.f4806a.getContext());
    }

    public void m() {
        v2 v2Var = this.f;
        if (v2Var != null) {
            v2Var.destroy();
            this.f.a((v2.a) null);
            this.f = null;
        }
        this.f4806a.removeAllViews();
    }

    public void n() {
        if (this.k > 0 && this.h) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            long j = this.k;
            this.j = jCurrentTimeMillis + j;
            this.f4806a.postDelayed(this.d, j);
            this.k = 0L;
        }
        v2 v2Var = this.f;
        if (v2Var != null) {
            v2Var.resume();
        }
        this.c.f(false);
    }

    public void o() {
        if (!this.h || this.i <= 0) {
            return;
        }
        r();
        this.f4806a.postDelayed(this.d, this.i);
    }

    public void p() {
        int i = this.i;
        if (i > 0 && this.h) {
            this.f4806a.postDelayed(this.d, i);
        }
        v2 v2Var = this.f;
        if (v2Var != null) {
            v2Var.start();
        }
        this.c.g(true);
    }

    public void q() {
        this.c.g(false);
        r();
        v2 v2Var = this.f;
        if (v2Var != null) {
            v2Var.stop();
        }
    }

    public void r() {
        this.f4806a.removeCallbacks(this.d);
    }

    public void a(boolean z) {
        this.c.a(z);
        this.c.d(this.f4806a.hasWindowFocus());
        if (this.c.c()) {
            p();
        } else {
            if (z || !this.c.d()) {
                return;
            }
            q();
        }
    }

    public void a() {
        if (this.c.d()) {
            q();
        }
        this.c.f();
        m();
    }

    public void a(MyTargetView.AdSize adSize) {
        v2 v2Var = this.f;
        if (v2Var != null) {
            v2Var.a(adSize);
        }
    }

    public final /* synthetic */ void a(ua uaVar, m mVar) {
        if (uaVar != null) {
            b(uaVar);
        } else {
            gb.a("StandardAdMasterEngine: No new ad");
            o();
        }
    }

    public void a(IAdLoadingError iAdLoadingError) {
        if (this.g) {
            this.c.e(false);
            MyTargetView.MyTargetViewListener listener = this.f4806a.getListener();
            if (listener != null) {
                listener.onNoAd(iAdLoadingError, this.f4806a);
            }
            this.g = false;
            return;
        }
        m();
        o();
    }

    public void b(boolean z) {
        this.c.d(z);
        if (this.c.c()) {
            p();
        } else if (this.c.b()) {
            n();
        } else if (this.c.a()) {
            k();
        }
    }

    public String b() {
        v2 v2Var = this.f;
        if (v2Var != null) {
            return v2Var.a();
        }
        return null;
    }

    public final void a(ua uaVar) {
        this.h = uaVar.d() && this.b.l() && !this.b.h().equals("standard_300x250");
        na naVarC = uaVar.c();
        if (naVarC == null) {
            x5 x5VarB = uaVar.b();
            if (x5VarB == null) {
                MyTargetView.MyTargetViewListener listener = this.f4806a.getListener();
                if (listener != null) {
                    listener.onNoAd(m.u, this.f4806a);
                    return;
                }
                return;
            }
            this.f = g6.a(this.f4806a, x5VarB, this.b, this.e);
            if (this.h) {
                int iA = x5VarB.a() * 1000;
                this.i = iA;
                this.h = iA > 0;
                return;
            }
            return;
        }
        this.f = pa.a(this.f4806a, naVarC, this.e);
        this.i = naVarC.N() * 1000;
    }

    public void a(q5 q5Var) {
        if (q5Var != null) {
            q5Var.a(this.b.i()).b(this.f4806a.getContext());
        }
        this.l++;
        gb.b("WebView crashed " + this.l + " times");
        if (this.l > 2) {
            gb.a("No more try to reload ad, notify user...");
            d();
            MyTargetView.MyTargetViewRenderCrashListener renderCrashListener = this.f4806a.getRenderCrashListener();
            if (renderCrashListener != null) {
                renderCrashListener.onViewRenderCrash(this.f4806a);
                return;
            }
            return;
        }
        gb.a("Try reload ad without notifying user");
        l();
    }
}
