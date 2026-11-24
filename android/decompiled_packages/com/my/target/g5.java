package com.my.target;

import android.content.Context;
import android.graphics.Color;
import android.os.Handler;
import android.text.TextUtils;
import android.view.View;
import com.my.target.common.models.ImageData;
import io.sentry.android.core.anr.AnrProfilingIntegration;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class g5 implements b5, n9.a, e5.a, h9.a, k5.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final o4 f4630a;
    public final d1 b;
    public final b c;
    public final n9 d;
    public final c e;
    public final j9 f;
    public final Handler g;
    public boolean h;
    public z4 j;
    public f k;
    public long m;
    public long n;
    public boolean o;
    public boolean p;
    public a l = a.DISABLED;
    public final Runnable i = new Runnable() { // from class: com.my.target.g5$$ExternalSyntheticLambda0
        @Override // java.lang.Runnable
        public final void run() {
            this.f$0.q();
        }
    };

    public enum a {
        DISABLED,
        RULED_BY_POST,
        RULED_BY_VIDEO
    }

    public interface b extends b5.a {
        void a(Context context);
    }

    public static class c implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final g5 f4632a;

        public c(g5 g5Var) {
            this.f4632a = g5Var;
        }

        @Override // java.lang.Runnable
        public void run() {
            if (this.f4632a.p()) {
                this.f4632a.r();
            } else {
                this.f4632a.t();
            }
        }
    }

    public g5(f9 f9Var, o4 o4Var, b bVar) {
        g5 g5Var;
        o4 o4Var2;
        this.f4630a = o4Var;
        d1 d1VarG = o4Var.g();
        this.b = d1VarG;
        this.c = bVar;
        this.g = f9Var.d();
        j9 j9VarE = f9Var.e();
        this.f = j9VarE;
        j9VarE.setColor(o4Var.T().h());
        h9 h9VarA = f9Var.a(this);
        h9VarA.setBanner(o4Var);
        s5 s5VarV = o4Var.V();
        List listS = o4Var.S();
        if (listS.isEmpty()) {
            g5Var = this;
            o4Var2 = o4Var;
            if (s5VarV != null) {
                g5Var.h = d1VarG.n || d1VarG.m;
                z zVarB = f9Var.b();
                n9 n9VarA = f9Var.a(o4Var2, h9VarA.a(), j9VarE.a(), zVarB, this);
                o4Var2 = o4Var2;
                g5Var = this;
                g5Var.d = n9VarA;
                zVarB.a(s5VarV.G(), s5VarV.p());
                g5Var.j = f9Var.a(s5VarV, zVarB, this);
                j9VarE.setMaxTime(s5VarV.o());
                ImageData imageDataV = s5VarV.V();
                n9VarA.setBackgroundImage(imageDataV == null ? o4Var2.s() : imageDataV);
            } else {
                n9 n9VarA2 = f9Var.a(o4Var2, h9VarA.a(), j9VarE.a(), null, g5Var);
                g5Var.d = n9VarA2;
                n9VarA2.d();
                n9VarA2.setBackgroundImage(o4Var2.s());
            }
        } else {
            b9 b9VarC = f9Var.c();
            f9Var.a(b9VarC, listS, this);
            o4Var2 = o4Var;
            g5Var = this;
            g5Var.d = f9Var.a(o4Var2, h9VarA.a(), j9VarE.a(), b9VarC, this);
        }
        g5Var.d.setBanner(o4Var2);
        g5Var.e = new c(this);
        a(o4Var2);
        bVar.a(o4Var2, g5Var.d.a());
        a(o4Var2.a());
    }

    public static g5 a(f9 f9Var, o4 o4Var, b bVar) {
        return new g5(f9Var, o4Var, bVar);
    }

    @Override // com.my.target.k5.a
    public void b(com.my.target.b bVar) {
        bb.b(bVar.x(), "render", 1, this.d.a().getContext());
    }

    @Override // com.my.target.n9.a
    public void c() {
        com.my.target.c cVarA = this.f4630a.a();
        if (cVarA == null) {
            return;
        }
        u();
        f fVar = this.k;
        if (fVar == null || !fVar.b()) {
            Context context = this.d.a().getContext();
            f fVar2 = this.k;
            if (fVar2 == null) {
                y3.a(cVarA.b(), context);
            } else {
                fVar2.a(context);
            }
        }
    }

    @Override // com.my.target.e5.a
    public void d() {
        this.d.c(true);
        this.d.a(0, (String) null);
        this.d.b(false);
    }

    @Override // com.my.target.b5
    public void destroy() {
        z4 z4Var = this.j;
        if (z4Var != null) {
            z4Var.destroy();
        }
        u();
    }

    @Override // com.my.target.e5.a
    public void e() {
        this.d.c(true);
        this.d.d();
        this.d.a(false);
        this.d.b(true);
        this.f.setVisible(true);
    }

    @Override // com.my.target.e5.a
    public void f() {
        this.d.c(false);
        this.d.a(false);
        this.d.d();
        this.d.b(false);
    }

    @Override // com.my.target.n9.a
    public void g() {
        z4 z4Var = this.j;
        if (z4Var != null) {
            z4Var.a();
        }
    }

    @Override // com.my.target.b5
    public View getCloseButton() {
        return this.d.getCloseButton();
    }

    @Override // com.my.target.e5.a
    public void h() {
        this.d.c(true);
        this.d.a(0, (String) null);
        this.d.b(false);
        this.f.setVisible(false);
    }

    @Override // com.my.target.n9.a
    public void i() {
        if (this.h) {
            a(this.f4630a, 1);
        } else if (this.o) {
            q();
        }
    }

    @Override // com.my.target.b5
    public View j() {
        return this.d.a();
    }

    @Override // com.my.target.e5.a
    public void k() {
        this.d.c(false);
        this.d.a(false);
        this.d.d();
        this.d.b(false);
        this.f.setVisible(true);
    }

    @Override // com.my.target.n9.a
    public void l() {
        z4 z4Var = this.j;
        if (z4Var != null) {
            z4Var.j();
        }
        u();
        this.c.b(this.f4630a, j().getContext());
    }

    @Override // com.my.target.n9.a
    public void m() {
        u();
        String strQ = this.f4630a.Q();
        if (strQ == null) {
            return;
        }
        y3.a(strQ, this.d.a().getContext());
    }

    @Override // com.my.target.n9.a
    public void n() {
        if (this.h) {
            a(this.f4630a, 1);
            return;
        }
        if (this.p) {
            if (this.b.d) {
                a((com.my.target.b) null, 1);
            }
        } else {
            this.d.c(true);
            this.d.a(1, (String) null);
            this.d.b(false);
            u();
            this.g.postDelayed(this.i, AnrProfilingIntegration.THRESHOLD_ANR_MS);
            this.o = true;
        }
    }

    public void o() {
        z4 z4Var = this.j;
        if (z4Var != null) {
            z4Var.destroy();
        }
        u();
        this.c.a(this.f4630a, j().getContext());
    }

    @Override // com.my.target.e5.a
    public void onVolumeChanged(float f) {
        this.d.setSoundState(f != 0.0f);
    }

    public boolean p() {
        a aVar = this.l;
        if (aVar == a.DISABLED) {
            return true;
        }
        if (aVar == a.RULED_BY_POST) {
            this.m -= 200;
        }
        return this.m <= 0;
    }

    @Override // com.my.target.b5
    public void pause() {
        z4 z4Var = this.j;
        if (z4Var != null) {
            z4Var.g();
        }
        this.g.removeCallbacks(this.e);
        u();
    }

    public final void q() {
        if (this.o) {
            u();
            this.d.c(false);
            this.d.d();
            this.o = false;
        }
    }

    public void r() {
        this.d.b();
        this.g.removeCallbacks(this.e);
        this.l = a.DISABLED;
    }

    @Override // com.my.target.b5
    public void resume() {
        if (this.l != a.DISABLED && this.m > 0) {
            t();
        }
        u();
    }

    public void s() {
        z4 z4Var = this.j;
        if (z4Var != null) {
            z4Var.h();
        }
    }

    @Override // com.my.target.b5
    public void stop() {
        z4 z4Var = this.j;
        if (z4Var != null) {
            z4Var.g();
        }
        u();
    }

    public void t() {
        this.g.removeCallbacks(this.e);
        this.g.postDelayed(this.e, 200L);
        float f = this.n;
        long j = this.m;
        this.d.a((int) ((j / 1000) + 1), (f - j) / f);
    }

    public final void u() {
        this.o = false;
        this.g.removeCallbacks(this.i);
    }

    @Override // com.my.target.k5.a
    public void a(com.my.target.b bVar) {
        Context context = this.d.a().getContext();
        String strD = kb.d(context);
        if (strD != null) {
            bb.a(bVar.x(), strD, 1, context);
        }
        bb.b(bVar.x(), "show", 1, context);
    }

    @Override // com.my.target.n9.a
    public void b(int i) {
        z4 z4Var = this.j;
        if (z4Var != null) {
            z4Var.m();
        }
        u();
    }

    @Override // com.my.target.n9.a, com.my.target.h9.a, com.my.target.k5.a
    public void a(com.my.target.b bVar, int i) {
        if (bVar != null) {
            this.c.a(bVar, null, i, j().getContext());
        } else {
            this.c.a(this.f4630a, null, i, j().getContext());
        }
    }

    @Override // com.my.target.e5.a
    public void b() {
        s5 s5VarV = this.f4630a.V();
        if (s5VarV != null) {
            if (s5VarV.c0()) {
                this.d.a(2, !TextUtils.isEmpty(s5VarV.W()) ? s5VarV.W() : null);
                this.d.c(true);
            } else {
                this.p = true;
            }
        }
        this.d.a(true);
        this.d.b(false);
        this.f.setVisible(false);
        this.f.setTimeChanged(0.0f);
        this.c.a(this.d.a().getContext());
        r();
    }

    @Override // com.my.target.n9.a
    public void a(boolean z) {
        m9 m9VarT = this.f4630a.T();
        int iB = m9VarT.b();
        int iArgb = Color.argb((int) (m9VarT.c() * 255.0f), Color.red(iB), Color.green(iB), Color.blue(iB));
        n9 n9Var = this.d;
        if (z) {
            iB = iArgb;
        }
        n9Var.setPanelColor(iB);
    }

    @Override // com.my.target.e5.a
    public void a(float f, float f2) {
        if (this.l == a.RULED_BY_VIDEO) {
            this.m = (long) (this.n - (1000.0f * f));
        }
        this.f.setTimeChanged(f);
    }

    @Override // com.my.target.e5.a
    public void a() {
        this.d.c(false);
        this.d.a(true);
        this.d.d();
        this.d.b(false);
        this.d.e();
        this.f.setVisible(false);
        r();
    }

    public final void a(com.my.target.c cVar) {
        List listA;
        if (cVar == null || (listA = cVar.a()) == null) {
            return;
        }
        f fVarA = f.a(listA, new q1());
        this.k = fVarA;
        fVarA.a(new d.a() { // from class: com.my.target.g5$$ExternalSyntheticLambda1
            @Override // com.my.target.d.a
            public final void a(Context context) {
                this.f$0.a(context);
            }
        });
    }

    public final /* synthetic */ void a(Context context) {
        o();
    }

    public final void a(o4 o4Var) {
        s5 s5VarV = o4Var.V();
        if (s5VarV != null && s5VarV.h0()) {
            if (s5VarV.a0()) {
                long jM = (long) (s5VarV.M() * 1000.0f);
                this.n = jM;
                this.m = jM;
                if (jM > 0) {
                    this.l = a.RULED_BY_VIDEO;
                    t();
                    return;
                } else {
                    r();
                    return;
                }
            }
            this.d.c();
            return;
        }
        if (o4Var.O()) {
            long jL = (long) (o4Var.L() * 1000.0f);
            this.n = jL;
            this.m = jL;
            if (jL > 0) {
                gb.a("InterstitialPromoPresenterS2: Banner will be allowed to close in " + this.m + " millis");
                this.l = a.RULED_BY_POST;
                t();
                return;
            }
            gb.a("InterstitialPromoPresenterS2: Banner is allowed to close");
            r();
            return;
        }
        this.l = a.DISABLED;
        this.d.c();
    }
}
