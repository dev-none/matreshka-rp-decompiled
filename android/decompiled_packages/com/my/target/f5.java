package com.my.target;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.view.View;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class f5 implements b5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final o4 f4618a;
    public final e b;
    public final j5 c;
    public final Handler d = new Handler(Looper.getMainLooper());
    public final c e;
    public f f;
    public i5 g;
    public c1 h;
    public u4 i;
    public y4 j;
    public long k;
    public long l;

    public static class a implements View.OnClickListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final f5 f4619a;

        public a(f5 f5Var) {
            this.f4619a = f5Var;
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            y4 y4VarC = this.f4619a.c();
            if (y4VarC != null) {
                y4VarC.d();
            }
            this.f4619a.d().b(this.f4619a.b(), view.getContext());
        }
    }

    public interface b {
        void a();
    }

    public interface c extends b5.a {
        void a(Context context);
    }

    public static class e implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final j5 f4621a;

        public e(j5 j5Var) {
            this.f4621a = j5Var;
        }

        @Override // java.lang.Runnable
        public void run() {
            gb.a("InterstitialPromoPresenter$ShowCloseButtonRunnable: Banner became just closeable");
            this.f4621a.c();
        }
    }

    public f5(e9 e9Var, o4 o4Var, c cVar, Context context) {
        c1 c1Var;
        this.f4618a = o4Var;
        this.e = cVar;
        d dVar = new d(this);
        s5 s5VarV = o4Var.V();
        if (!o4Var.S().isEmpty()) {
            c1 c1VarA = e9Var.a();
            this.h = c1VarA;
            this.c = c1VarA;
        } else if (s5VarV == null || o4Var.U() != 1) {
            i5 i5VarB = e9Var.b();
            this.g = i5VarB;
            this.c = i5VarB;
        } else {
            i5 i5VarC = e9Var.c();
            this.g = i5VarC;
            this.c = i5VarC;
        }
        this.b = new e(this.c);
        this.c.setInterstitialPromoViewListener(dVar);
        this.c.getCloseButton().setOnClickListener(new a(this));
        i5 i5Var = this.g;
        if (i5Var != null && s5VarV != null) {
            y4 y4VarA = y4.a(e9Var, s5VarV, i5Var, cVar, new b() { // from class: com.my.target.f5$$ExternalSyntheticLambda0
                @Override // com.my.target.f5.b
                public final void a() {
                    this.f$0.a();
                }
            });
            this.j = y4VarA;
            y4VarA.a(s5VarV, context);
            if (s5VarV.h0()) {
                this.l = 0L;
            }
        }
        this.c.setBanner(o4Var);
        this.c.setClickArea(o4Var.g());
        if (s5VarV == null || !s5VarV.h0()) {
            long jL = (long) (o4Var.L() * 1000.0f);
            this.k = jL;
            if (jL > 0) {
                gb.a("InterstitialPromoPresenter: Banner will be allowed to close in " + this.k + " millis");
                a(this.k);
            } else {
                gb.a("InterstitialPromoPresenter: Banner is allowed to close");
                this.c.c();
            }
        }
        List listS = o4Var.S();
        if (!listS.isEmpty() && (c1Var = this.h) != null) {
            this.i = u4.a(listS, c1Var);
        }
        u4 u4Var = this.i;
        if (u4Var != null) {
            u4Var.a(cVar);
        }
        com.my.target.c cVarA = o4Var.a();
        if (cVarA != null) {
            a(dVar, cVarA);
        }
        cVar.a(o4Var, this.c.getView());
    }

    public static f5 a(e9 e9Var, o4 o4Var, c cVar, Context context) {
        return new f5(e9Var, o4Var, cVar, context);
    }

    public o4 b() {
        return this.f4618a;
    }

    public y4 c() {
        return this.j;
    }

    public c d() {
        return this.e;
    }

    @Override // com.my.target.b5
    public void destroy() {
        this.d.removeCallbacks(this.b);
        y4 y4Var = this.j;
        if (y4Var != null) {
            y4Var.a();
        }
    }

    @Override // com.my.target.b5
    public View getCloseButton() {
        return this.c.getCloseButton();
    }

    @Override // com.my.target.b5
    public View j() {
        return this.c.getView();
    }

    @Override // com.my.target.b5
    public void pause() {
        y4 y4Var = this.j;
        if (y4Var != null) {
            y4Var.e();
        }
        this.d.removeCallbacks(this.b);
        if (this.l > 0) {
            long jCurrentTimeMillis = System.currentTimeMillis() - this.l;
            if (jCurrentTimeMillis > 0) {
                long j = this.k;
                if (jCurrentTimeMillis < j) {
                    this.k = j - jCurrentTimeMillis;
                    return;
                }
            }
            this.k = 0L;
        }
    }

    @Override // com.my.target.b5
    public void resume() {
        if (this.j == null) {
            long j = this.k;
            if (j > 0) {
                a(j);
            }
        }
    }

    @Override // com.my.target.b5
    public void stop() {
        y4 y4Var = this.j;
        if (y4Var != null) {
            y4Var.g();
        }
    }

    public static class d implements j5.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final f5 f4620a;

        public d(f5 f5Var) {
            this.f4620a = f5Var;
        }

        @Override // com.my.target.j5.a
        public void a(int i) {
            this.f4620a.d().a(this.f4620a.b(), null, i, this.f4620a.j().getContext());
        }

        @Override // com.my.target.j5.a
        public void c() {
            a();
        }

        @Override // com.my.target.d.a
        public void a(Context context) {
            y4 y4VarC = this.f4620a.c();
            if (y4VarC != null) {
                y4VarC.a();
            }
            this.f4620a.d().a(this.f4620a.b(), context);
        }

        public final void a() {
            Context context = this.f4620a.j().getContext();
            com.my.target.c cVarA = this.f4620a.b().a();
            if (cVarA == null) {
                return;
            }
            f fVar = this.f4620a.f;
            if (fVar == null || !fVar.b()) {
                if (fVar == null) {
                    y3.a(cVarA.b(), context);
                } else {
                    fVar.a(context);
                }
            }
        }
    }

    public void a() {
        y4 y4Var = this.j;
        if (y4Var != null) {
            y4Var.a(this.f4618a);
            this.j.a();
            this.j = null;
        }
    }

    public final void a(j5.a aVar, com.my.target.c cVar) {
        List listA = cVar.a();
        if (listA != null) {
            f fVarA = f.a(listA, new q1());
            this.f = fVarA;
            fVarA.a(aVar);
        }
    }

    private void a(long j) {
        this.d.removeCallbacks(this.b);
        this.l = System.currentTimeMillis();
        this.d.postDelayed(this.b, j);
    }
}
