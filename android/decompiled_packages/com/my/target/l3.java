package com.my.target;

import android.content.Context;
import com.my.target.common.menu.MenuFactory;
import com.my.target.instreamads.InstreamAudioAd;
import com.my.target.instreamads.InstreamAudioAdPlayer;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class l3 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final InstreamAudioAd f4686a;
    public final MenuFactory b;
    public final p3 c;
    public final j d;
    public final h6.a e;
    public final b3 f;
    public final e1 g;
    public f h;
    public String i;
    public v5 j;
    public s5 k;
    public InstreamAudioAd.InstreamAudioAdBanner l;
    public List n;
    public List o;
    public float q;
    public int r;
    public int s;
    public int t;
    public final d.a m = new a();
    public float[] p = new float[0];

    public class a implements d.a {
        public a() {
        }

        @Override // com.my.target.d.a
        public void a(Context context) {
            InstreamAudioAd.InstreamAudioAdListener listener = l3.this.f4686a.getListener();
            if (listener != null) {
                l3 l3Var = l3.this;
                listener.onBannerShouldClose(l3Var.f4686a, l3Var.l);
                gb.a("InstreamAudioAdEngine: onBannerShouldClose called by adChoicesOption");
            }
        }
    }

    public l3(InstreamAudioAd instreamAudioAd, p3 p3Var, j jVar, h6.a aVar, MenuFactory menuFactory) {
        this.f4686a = instreamAudioAd;
        this.c = p3Var;
        this.d = jVar;
        this.e = aVar;
        b3 b3VarH = b3.h();
        this.f = b3VarH;
        b3VarH.a(new b());
        this.g = e1.a();
        this.b = menuFactory;
    }

    public static l3 a(InstreamAudioAd instreamAudioAd, p3 p3Var, j jVar, h6.a aVar, MenuFactory menuFactory) {
        return new l3(instreamAudioAd, p3Var, jVar, aVar, menuFactory);
    }

    public void b(float f) {
        k();
        for (float f2 : this.p) {
            if (Float.compare(f2, f) == 0) {
                v5 v5VarA = this.c.a("midroll");
                this.j = v5VarA;
                if (v5VarA != null) {
                    this.f.a(v5VarA.e());
                    this.t = this.j.f();
                    this.s = -1;
                    this.q = f;
                    b(this.j, f);
                    return;
                }
                return;
            }
        }
        gb.a("InstreamAudioAdEngine: Attempt to start wrong midpoint, use one of InstreamAd.getMidPoints()");
    }

    public InstreamAudioAdPlayer c() {
        return this.f.e();
    }

    public float d() {
        return this.f.f();
    }

    public void e() {
        if (this.k == null) {
            gb.a("InstreamAudioAdEngine: can't handle click - no playing banner");
            return;
        }
        Context contextD = this.f.d();
        if (contextD == null) {
            gb.a("InstreamAudioAdEngine: can't handle click - context is null");
        } else {
            this.g.a(this.k, 1, contextD);
        }
    }

    public void f() {
        if (this.j != null) {
            this.f.i();
        }
    }

    public void g() {
        List list;
        List listA;
        v5 v5Var = this.j;
        if (v5Var == null) {
            return;
        }
        if (this.t == 0 || (list = this.o) == null) {
            a(v5Var, this.q);
            return;
        }
        int i = this.s + 1;
        if (i >= list.size()) {
            a(this.j, this.q);
            return;
        }
        this.s = i;
        s5 s5Var = (s5) this.o.get(i);
        if ("statistics".equals(s5Var.C())) {
            a(s5Var, "playbackStarted");
            g();
            return;
        }
        int i2 = this.t;
        if (i2 > 0) {
            this.t = i2 - 1;
        }
        this.k = s5Var;
        this.l = InstreamAudioAd.InstreamAudioAdBanner.a(s5Var);
        this.n = new ArrayList(this.l.companionBanners);
        c cVarA = this.k.a();
        if (cVarA != null) {
            this.i = cVarA.b();
            listA = cVarA.a();
        } else {
            listA = null;
        }
        if (listA != null) {
            this.h = f.a(listA, this.b);
        }
        this.f.a(s5Var);
    }

    public void h() {
        if (this.j != null) {
            this.f.j();
        }
    }

    public void i() {
        a(this.k, "closedByUser");
        k();
    }

    public void j() {
        a(this.k, "closedByUser");
        this.f.k();
        g();
    }

    public void k() {
        if (this.j != null) {
            this.f.k();
            a(this.j);
        }
    }

    public void a(InstreamAudioAdPlayer instreamAudioAdPlayer) {
        this.f.a(instreamAudioAdPlayer);
    }

    public void c(InstreamAudioAd.InstreamAdCompanionBanner instreamAdCompanionBanner) {
        Context contextD = this.f.d();
        if (contextD == null) {
            gb.a("InstreamAudioAdEngine: Can't handle show - context is null");
            return;
        }
        k1 k1VarA = a(instreamAdCompanionBanner);
        if (k1VarA == null) {
            gb.a("InstreamAudioAdEngine: Can't handle show - companion banner not found");
        } else {
            bb.b(k1VarA.x(), "playbackStarted", 1, contextD);
        }
    }

    public void a(float[] fArr) {
        this.p = fArr;
    }

    public void a(int i) {
        this.r = i;
    }

    public void a(String str) {
        k();
        v5 v5VarA = this.c.a(str);
        this.j = v5VarA;
        if (v5VarA != null) {
            this.f.a(v5VarA.e());
            this.t = this.j.f();
            this.s = -1;
            this.o = this.j.d();
            g();
            return;
        }
        gb.a("InstreamAudioAdEngine: No section with name " + str);
    }

    public class b implements b3.b {
        public b() {
        }

        @Override // com.my.target.b3.b
        public void a(s5 s5Var) {
            l3 l3Var = l3.this;
            if (l3Var.j == null || l3Var.k != s5Var || l3Var.l == null) {
                return;
            }
            InstreamAudioAd.InstreamAudioAdListener listener = l3Var.f4686a.getListener();
            if (listener != null) {
                l3 l3Var2 = l3.this;
                listener.onBannerComplete(l3Var2.f4686a, l3Var2.l);
            }
            l3.this.g();
        }

        @Override // com.my.target.b3.b
        public void b(s5 s5Var) {
            InstreamAudioAd.InstreamAudioAdListener listener;
            l3 l3Var = l3.this;
            if (l3Var.j == null || l3Var.k != s5Var || l3Var.l == null || (listener = l3Var.f4686a.getListener()) == null) {
                return;
            }
            l3 l3Var2 = l3.this;
            listener.onBannerComplete(l3Var2.f4686a, l3Var2.l);
        }

        @Override // com.my.target.b3.b
        public void c(s5 s5Var) {
            l3 l3Var = l3.this;
            if (l3Var.j == null || l3Var.k != s5Var || l3Var.l == null) {
                return;
            }
            gb.a("InstreamAudioAdEngine: Ad shown, banner Id = " + s5Var.r());
            InstreamAudioAd.InstreamAudioAdListener listener = l3.this.f4686a.getListener();
            if (listener != null) {
                l3 l3Var2 = l3.this;
                listener.onBannerStart(l3Var2.f4686a, l3Var2.l);
            }
        }

        @Override // com.my.target.b3.b
        public void a(float f, float f2, s5 s5Var) {
            InstreamAudioAd.InstreamAudioAdListener listener;
            l3 l3Var = l3.this;
            if (l3Var.j == null || l3Var.k != s5Var || l3Var.l == null || (listener = l3Var.f4686a.getListener()) == null) {
                return;
            }
            listener.onBannerTimeLeftChange(f, f2, l3.this.f4686a);
        }

        @Override // com.my.target.b3.b
        public void a(String str, s5 s5Var) {
            l3 l3Var = l3.this;
            if (l3Var.j == null || l3Var.k != s5Var) {
                return;
            }
            InstreamAudioAd.InstreamAudioAdListener listener = l3Var.f4686a.getListener();
            if (listener != null) {
                listener.onError(str, l3.this.f4686a);
            }
            l3.this.g();
        }
    }

    public void a(InstreamAudioAd.InstreamAdCompanionBanner instreamAdCompanionBanner, Context context) {
        k1 k1VarA = a(instreamAdCompanionBanner);
        if (k1VarA == null) {
            gb.a("InstreamAudioAdEngine: Can't handle click - companion banner not found");
        } else {
            this.g.a(k1VarA, 1, context);
        }
    }

    public void a() {
        this.f.c();
    }

    public void a(float f) {
        this.f.c(f);
    }

    public void b(InstreamAudioAd.InstreamAdCompanionBanner instreamAdCompanionBanner) {
        Context contextD = this.f.d();
        if (contextD == null) {
            gb.a("InstreamAudioAdEngine: Can't handle click - context is null");
            return;
        }
        k1 k1VarA = a(instreamAdCompanionBanner);
        if (k1VarA == null) {
            gb.a("InstreamAudioAdEngine: Can't handle click - companion banner not found");
        } else {
            this.g.a(k1VarA, 1, contextD);
        }
    }

    public void a(Context context) {
        gb.a("InstreamAudioAdEngine: handleAdChoicesClick called");
        f fVar = this.h;
        if (fVar == null) {
            gb.a("InstreamAudioAdEngine: hasn't adChoicesOptions");
            if (this.i != null) {
                gb.a("InstreamAudioAdEngine: open adChoicesClickLink");
                y3.a(this.i, context);
                return;
            }
            return;
        }
        if (fVar.b()) {
            return;
        }
        this.h.a(context);
        this.h.a(this.m);
    }

    public InstreamAudioAd.InstreamAudioAdBanner b() {
        return this.l;
    }

    public final void b(v5 v5Var, float f) {
        ArrayList arrayList = new ArrayList();
        for (s5 s5Var : v5Var.d()) {
            if (s5Var.S() == f) {
                arrayList.add(s5Var);
            }
        }
        int size = arrayList.size();
        if (size > 0 && this.s < size - 1) {
            this.o = arrayList;
            g();
            return;
        }
        ArrayList arrayListA = v5Var.a(f);
        if (arrayListA.size() > 0) {
            a(arrayListA, v5Var, f);
            return;
        }
        gb.a("InstreamAudioAdEngine: There is no one midpoint service for point - " + f);
        a(v5Var, f);
    }

    public final void a(v5 v5Var, float f) {
        u uVarJ = v5Var.j();
        if (uVarJ != null) {
            if ("midroll".equals(v5Var.h())) {
                uVarJ.c(true);
                uVarJ.b(f);
                ArrayList arrayList = new ArrayList();
                arrayList.add(uVarJ);
                gb.a("InstreamAudioAdEngine: Using doAfter service for point - " + f);
                a(arrayList, v5Var, f);
                return;
            }
            a(uVarJ, v5Var);
            return;
        }
        a(v5Var);
    }

    public final void a(v5 v5Var) {
        if (v5Var == this.j) {
            if ("midroll".equals(v5Var.h())) {
                this.j.b(this.t);
            }
            this.j = null;
            this.k = null;
            this.l = null;
            this.s = -1;
            InstreamAudioAd.InstreamAudioAdListener listener = this.f4686a.getListener();
            if (listener != null) {
                listener.onComplete(v5Var.h(), this.f4686a);
            }
        }
    }

    public final void a(u uVar, final v5 v5Var) {
        Context contextD = this.f.d();
        if (contextD == null) {
            gb.a("InstreamAudioAdEngine: Can't load doAfter service - context is null");
            return;
        }
        gb.a("InstreamAudioAdEngine: Loading doAfter service - " + uVar.b);
        m3.a(uVar, this.d, this.e, this.r).a(new l.b() { // from class: com.my.target.l3$$ExternalSyntheticLambda0
            @Override // com.my.target.l.b
            public final void a(t tVar, m mVar) {
                this.f$0.b(v5Var, (p3) tVar, mVar);
            }
        }).a(this.e.a(), contextD);
    }

    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final void b(v5 v5Var, p3 p3Var, m mVar) {
        if (p3Var == null) {
            if (mVar != null) {
                gb.a("InstreamAudioAdEngine: Loading doAfter service failed - " + mVar.b);
            }
            if (v5Var == this.j) {
                a(v5Var, this.q);
                return;
            }
            return;
        }
        v5 v5VarA = p3Var.a(v5Var.h());
        if (v5VarA != null) {
            v5Var.a(v5VarA);
        }
        if (v5Var == this.j) {
            this.o = v5Var.d();
            g();
        }
    }

    public final void a(ArrayList arrayList, final v5 v5Var, final float f) {
        Context contextD = this.f.d();
        if (contextD == null) {
            gb.a("InstreamAudioAdEngine: Can't load midpoint services - context is null");
            return;
        }
        gb.a("InstreamAudioAdEngine: Loading midpoint services for point - " + f);
        m3.a(arrayList, this.d, this.e, this.r).a(new l.b() { // from class: com.my.target.l3$$ExternalSyntheticLambda1
            @Override // com.my.target.l.b
            public final void a(t tVar, m mVar) {
                this.f$0.a(v5Var, f, (p3) tVar, mVar);
            }
        }).a(this.e.a(), contextD);
    }

    public final void a(v5 v5Var, p3 p3Var, m mVar, float f) {
        if (p3Var == null) {
            if (mVar != null) {
                gb.a("InstreamAudioAdEngine: Loading midpoint services failed - " + mVar.b);
            }
            if (v5Var == this.j && f == this.q) {
                a(v5Var, f);
                return;
            }
            return;
        }
        v5 v5VarA = p3Var.a(v5Var.h());
        if (v5VarA != null) {
            v5Var.a(v5VarA);
        }
        if (v5Var == this.j && f == this.q) {
            b(v5Var, f);
        }
    }

    public final void a(s5 s5Var, String str) {
        if (s5Var == null) {
            gb.a("InstreamAudioAdEngine: Can't send stat: banner is null");
            return;
        }
        Context contextD = this.f.d();
        if (contextD == null) {
            gb.a("InstreamAudioAdEngine: Can't send stat: context is null");
        } else {
            bb.b(s5Var.x(), str, -1, contextD);
        }
    }

    public final k1 a(InstreamAudioAd.InstreamAdCompanionBanner instreamAdCompanionBanner) {
        s5 s5Var;
        if (this.n != null && this.l != null && (s5Var = this.k) != null) {
            ArrayList arrayListP = s5Var.P();
            int iIndexOf = this.n.indexOf(instreamAdCompanionBanner);
            if (iIndexOf >= 0 && iIndexOf < arrayListP.size()) {
                return (k1) arrayListP.get(iIndexOf);
            }
            gb.a("InstreamAudioAdEngine: Can't find companion banner - provided instreamAdCompanionBanner not found in current playing banner");
            return null;
        }
        gb.a("InstreamAudioAdEngine: Can't find companion banner - no playing banner");
        return null;
    }
}
