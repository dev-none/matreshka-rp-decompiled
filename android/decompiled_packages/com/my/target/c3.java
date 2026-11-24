package com.my.target;

import android.content.Context;
import android.view.View;
import com.my.target.common.menu.MenuFactory;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.common.models.VideoData;
import com.my.target.instreamads.InstreamAd;
import com.my.target.instreamads.InstreamAdPlayer;
import com.my.target.instreamads.InstreamAdVideoMotionPlayer;
import com.my.target.instreamads.postview.InstreamAdPostViewPlayer;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class c3 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final InstreamAd f4565a;
    public final h3 b;
    public final j c;
    public final j3 d;
    public final x3 e;
    public final e1 f;
    public final h6.a g;
    public final MenuFactory h;
    public ca i;
    public w3 j;
    public k0 k;
    public InstreamAd.InstreamAdBanner l;
    public InstreamAd.InstreamAdVideoMotionBanner m;
    public List o;
    public List p;
    public f q;
    public String r;
    public float v;
    public int w;
    public int x;
    public int y;
    public final com.my.target.d.a n = new a();
    public final e3 s = new e3(new b());
    public float[] t = new float[0];
    public int u = 0;

    public class a implements com.my.target.d.a {
        public a() {
        }

        @Override // com.my.target.d.a
        public void a(Context context) {
            InstreamAd.InstreamAdListener listener = c3.this.f4565a.getListener();
            if (listener == null) {
                gb.a("InstreamAdEngine: can't call onBannerShouldClose callback, instreamAdListener is null");
                return;
            }
            if (c3.this.k.C().equals("video-motion")) {
                gb.a("InstreamAdEngine: onVideoMotionBannerShouldClose called by adChoicesOption");
                c3 c3Var = c3.this;
                listener.onVideoMotionBannerShouldClose(c3Var.f4565a, c3Var.m);
            } else if (c3.this.k.C().equals("video")) {
                gb.a("InstreamAdEngine: onBannerShouldClose called by adChoicesOption");
                listener.onBannerShouldClose();
            } else {
                gb.a("InstreamAdEngine: ignore " + c3.this.k.C() + " banner type for closing by adChoicesOption");
            }
        }
    }

    public class b implements e3.c {
        public b() {
        }

        @Override // com.my.target.e3.c
        public void a() {
            InstreamAd.InstreamAdListener listener;
            c3 c3Var = c3.this;
            if (c3Var.l == null || (listener = c3Var.f4565a.getListener()) == null) {
                return;
            }
            listener.onPostViewComplete();
            c3 c3Var2 = c3.this;
            listener.onBannerComplete(c3Var2.f4565a, c3Var2.l);
        }

        @Override // com.my.target.e3.c
        public void b() {
            c3 c3Var = c3.this;
            if (c3Var.l == null) {
                return;
            }
            InstreamAd.InstreamAdListener listener = c3Var.f4565a.getListener();
            if (listener != null) {
                listener.onPostViewComplete();
                c3 c3Var2 = c3.this;
                listener.onBannerComplete(c3Var2.f4565a, c3Var2.l);
            }
            c3.this.c();
        }

        @Override // com.my.target.e3.c
        public void onPostViewStart() {
            InstreamAd.InstreamAdListener listener = c3.this.f4565a.getListener();
            if (listener != null) {
                listener.onPostViewStart();
            }
        }
    }

    public static final class c implements ca.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final fa f4568a;
        public final e1 b;
        public final WeakReference c;

        public c(fa faVar, e1 e1Var, Context context) {
            this.f4568a = faVar;
            this.b = e1Var;
            this.c = new WeakReference(context.getApplicationContext());
        }

        @Override // com.my.target.ca.a
        public void a(String str) {
            Context context = (Context) this.c.get();
            if (context == null) {
                return;
            }
            q5.a("WebView error").f(str).d(this.f4568a.r()).b(context);
        }

        @Override // com.my.target.ca.a
        public void b(String str) {
            Context context = (Context) this.c.get();
            if (context == null) {
                return;
            }
            this.b.a(this.f4568a, str, 1, context);
        }
    }

    public class e implements x3.a {
        public e() {
        }

        @Override // com.my.target.x3.a
        public void a(tb tbVar) {
            c3 c3Var = c3.this;
            if (c3Var.j == null || c3Var.k != tbVar || c3Var.m == null) {
                return;
            }
            InstreamAdPlayer player = c3Var.f4565a.getPlayer();
            if (player != null) {
                player.stopAdVideo();
            }
            InstreamAd.InstreamAdListener listener = c3.this.f4565a.getListener();
            if (listener != null) {
                c3 c3Var2 = c3.this;
                listener.onVideoMotionBannerComplete(c3Var2.f4565a, c3Var2.m);
            }
            c3 c3Var3 = c3.this;
            if (c3Var3.u == 0) {
                c3Var3.i();
            }
        }

        @Override // com.my.target.x3.a
        public void b(tb tbVar) {
            InstreamAd.InstreamAdListener listener;
            c3 c3Var = c3.this;
            if (c3Var.j == null || c3Var.k != tbVar || c3Var.m == null || (listener = c3Var.f4565a.getListener()) == null) {
                return;
            }
            c3 c3Var2 = c3.this;
            listener.onVideoMotionBannerStart(c3Var2.f4565a, c3Var2.m);
        }
    }

    public c3(InstreamAd instreamAd, h3 h3Var, j jVar, h6.a aVar, MenuFactory menuFactory) {
        this.f4565a = instreamAd;
        this.b = h3Var;
        this.c = jVar;
        this.g = aVar;
        j3 j3VarI = j3.i();
        this.d = j3VarI;
        j3VarI.a(new d());
        e1 e1VarA = e1.a();
        this.f = e1VarA;
        x3 x3VarA = x3.a(e1VarA);
        this.e = x3VarA;
        x3VarA.a(new e());
        this.h = menuFactory;
    }

    public static c3 a(InstreamAd instreamAd, h3 h3Var, j jVar, h6.a aVar, MenuFactory menuFactory) {
        return new c3(instreamAd, h3Var, jVar, aVar, menuFactory);
    }

    public void b(Context context) {
        gb.a("InstreamAdEngine: handleAdChoicesClick called");
        f fVar = this.q;
        if (fVar != null) {
            if (fVar.b()) {
                return;
            }
            this.q.a(context);
            this.q.a(this.n);
            return;
        }
        gb.a("InstreamAdEngine: hasn't adChoicesOptions");
        if (this.r != null) {
            gb.a("InstreamAdEngine: open adChoicesClickLink");
            y3.a(this.r, context);
        }
    }

    public void c(String str) {
        m();
        w3 w3VarA = this.b.a(str);
        this.j = w3VarA;
        if (w3VarA == null) {
            gb.a("InstreamAdEngine: No section with name " + str);
        } else {
            this.d.b(w3VarA.e());
            this.y = this.j.f();
            this.x = -1;
            this.p = this.j.d();
            i();
        }
    }

    public InstreamAdPlayer d() {
        return this.d.e();
    }

    public float e() {
        return this.d.f();
    }

    public void f() {
        if (this.k == null) {
            gb.a("InstreamAdEngine: can't handle click - no playing banner");
            return;
        }
        Context contextD = this.d.d();
        if (contextD == null) {
            gb.a("InstreamAdEngine: can't handle click - context is null");
        } else {
            this.f.a(this.k, 2, contextD);
        }
    }

    public boolean g() {
        return this.u != 0;
    }

    public void h() {
        if (this.j == null || this.s.e()) {
            return;
        }
        this.d.j();
    }

    public void i() {
        List list;
        List listA;
        b();
        w3 w3Var = this.j;
        if (w3Var == null) {
            return;
        }
        if (this.y == 0 || (list = this.p) == null) {
            a(w3Var, this.v);
            return;
        }
        int i = this.x + 1;
        if (i >= list.size()) {
            a(this.j, this.v);
            return;
        }
        this.x = i;
        k0 k0Var = (k0) this.p.get(i);
        if ("statistics".equals(k0Var.C())) {
            a(k0Var, "playbackStarted");
            i();
            return;
        }
        int i2 = this.y;
        if (i2 > 0) {
            this.y = i2 - 1;
        }
        this.k = k0Var;
        com.my.target.c cVarA = k0Var.a();
        if (cVarA != null) {
            this.r = cVarA.b();
            listA = cVarA.a();
        } else {
            listA = null;
        }
        if (listA != null) {
            this.q = f.a(listA, this.h);
        }
        if (k0Var instanceof s5) {
            s5 s5Var = (s5) k0Var;
            if (s5Var.k0() instanceof VideoData) {
                this.l = InstreamAd.InstreamAdBanner.a(k0Var);
                this.o = new ArrayList(this.l.companionBanners);
                this.d.a(s5Var);
                return;
            }
            return;
        }
        if (!(k0Var instanceof tb)) {
            gb.a("InstreamAdEngine: failed play instreamAd banner, can't recognize type ");
            return;
        }
        tb tbVar = (tb) k0Var;
        InstreamAd.InstreamAdVideoMotionBanner instreamAdVideoMotionBannerA = InstreamAd.InstreamAdVideoMotionBanner.a(tbVar);
        this.m = instreamAdVideoMotionBannerA;
        if (instreamAdVideoMotionBannerA == null) {
            gb.a("InstreamAdEngine: can't create instreamAdVideoMotionBanner");
        } else {
            this.e.a(tbVar, instreamAdVideoMotionBannerA);
        }
    }

    public void j() {
        if (this.j == null || this.s.e()) {
            return;
        }
        this.d.k();
    }

    public void k() {
        a(this.k, "closedByUser");
        this.d.m();
        m();
    }

    public void l() {
        a(this.k, "closedByUser");
        this.d.m();
        this.d.l();
        if (this.s.e()) {
            this.s.a();
        }
        i();
    }

    public void m() {
        if (this.j != null) {
            if (this.s.e()) {
                this.s.a();
            } else {
                this.d.l();
            }
            a(this.j);
        }
    }

    public void a(InstreamAdPlayer instreamAdPlayer) {
        this.d.a(instreamAdPlayer);
    }

    public void a(InstreamAdVideoMotionPlayer instreamAdVideoMotionPlayer) {
        this.e.a(instreamAdVideoMotionPlayer);
    }

    public void a(float[] fArr) {
        this.t = fArr;
    }

    public void a(int i) {
        this.w = i;
    }

    public class d implements j3.a {
        public d() {
        }

        @Override // com.my.target.j3.a
        public void a(s5 s5Var) {
            InstreamAd.InstreamAdListener listener;
            c3 c3Var = c3.this;
            if (c3Var.j == null || c3Var.k != s5Var || c3Var.l == null || (listener = c3Var.f4565a.getListener()) == null) {
                return;
            }
            c3 c3Var2 = c3.this;
            listener.onBannerResume(c3Var2.f4565a, c3Var2.l);
        }

        @Override // com.my.target.j3.a
        public void b(s5 s5Var) {
            InstreamAd.InstreamAdListener listener;
            c3 c3Var = c3.this;
            if (c3Var.j == null || c3Var.k != s5Var || c3Var.l == null || (listener = c3Var.f4565a.getListener()) == null) {
                return;
            }
            c3 c3Var2 = c3.this;
            listener.onBannerPause(c3Var2.f4565a, c3Var2.l);
        }

        @Override // com.my.target.j3.a
        public void c(s5 s5Var) {
            c3 c3Var = c3.this;
            if (c3Var.j == null || c3Var.k != s5Var || c3Var.l == null || c3Var.u != 0) {
                return;
            }
            gb.a("InstreamAdEngine$VideoControllerListener: Ad shown, banner Id = " + s5Var.r());
            InstreamAd.InstreamAdListener listener = c3.this.f4565a.getListener();
            if (listener != null) {
                c3 c3Var2 = c3.this;
                listener.onBannerStart(c3Var2.f4565a, c3Var2.l);
            }
        }

        @Override // com.my.target.j3.a
        public void d(s5 s5Var) {
            c3 c3Var = c3.this;
            if (c3Var.j == null || c3Var.k != s5Var || c3Var.l == null) {
                return;
            }
            fa faVarZ = s5Var.Z();
            if (faVarZ != null && c3.this.g() && c3.this.i != null) {
                long jCurrentTimeMillis = System.currentTimeMillis();
                long jB = c3.this.i.b();
                long jL = faVarZ.L();
                gb.a("InstreamAdEngine$VideoControllerListener: cm=" + jCurrentTimeMillis + ", vi=" + jB + ", it=" + jL);
                if (jCurrentTimeMillis - jB < jL) {
                    c3.this.a(faVarZ, "shoppableReplay");
                    c3.this.d.a(s5Var, true);
                    return;
                } else {
                    c3.this.d.l();
                    c3.this.u = 2;
                }
            }
            InstreamAdPlayer player = c3.this.f4565a.getPlayer();
            if (player != null) {
                player.stopAdVideo();
            }
            u8 u8VarU = c3.this.k.U();
            if (u8VarU != null && c3.this.s.f()) {
                c3.this.s.b(u8VarU);
                return;
            }
            InstreamAd.InstreamAdListener listener = c3.this.f4565a.getListener();
            if (listener != null) {
                c3 c3Var2 = c3.this;
                listener.onBannerComplete(c3Var2.f4565a, c3Var2.l);
            }
            c3.this.c();
        }

        @Override // com.my.target.j3.a
        public void e(s5 s5Var) {
            InstreamAd.InstreamAdListener listener;
            c3 c3Var = c3.this;
            if (c3Var.j == null || c3Var.k != s5Var || c3Var.l == null || (listener = c3Var.f4565a.getListener()) == null) {
                return;
            }
            c3 c3Var2 = c3.this;
            listener.onBannerComplete(c3Var2.f4565a, c3Var2.l);
        }

        @Override // com.my.target.j3.a
        public void a(float f, float f2, s5 s5Var) {
            InstreamAd.InstreamAdListener listener;
            c3 c3Var = c3.this;
            if (c3Var.j == null || c3Var.k != s5Var || c3Var.l == null || (listener = c3Var.f4565a.getListener()) == null) {
                return;
            }
            listener.onBannerTimeLeftChange(f, f2, c3.this.f4565a);
        }

        @Override // com.my.target.j3.a
        public void a(String str, s5 s5Var) {
            c3 c3Var = c3.this;
            if (c3Var.j == null || c3Var.k != s5Var || c3Var.l == null) {
                return;
            }
            InstreamAd.InstreamAdListener listener = c3Var.f4565a.getListener();
            if (listener != null) {
                listener.onError(str, c3.this.f4565a);
            }
            c3.this.i();
        }
    }

    public void a(boolean z) {
        String str;
        if (!z) {
            str = "fullscreenOff";
        } else {
            str = "fullscreenOn";
        }
        a(this.k, str);
    }

    public void a(String str) {
        a(str, "shoppableAdsItemClick");
        a(str, "click");
    }

    public void a(InstreamAd.InstreamAdCompanionBanner instreamAdCompanionBanner, Context context) {
        k1 k1VarA = a(instreamAdCompanionBanner);
        if (k1VarA == null) {
            gb.a("InstreamAdEngine: can't handle click - companion banner is null");
        } else {
            this.f.a(k1VarA, 1, context);
        }
    }

    public void c(InstreamAd.InstreamAdCompanionBanner instreamAdCompanionBanner) {
        Context contextD = this.d.d();
        if (contextD == null) {
            gb.a("can't handle show: context is null");
            return;
        }
        k1 k1VarA = a(instreamAdCompanionBanner);
        if (k1VarA == null) {
            gb.a("can't handle show: companion banner not found");
        } else {
            bb.b(k1VarA.x(), "playbackStarted", 1, contextD);
        }
    }

    public void a() {
        this.d.c();
        b();
    }

    public void b(InstreamAdPlayer instreamAdPlayer) {
        this.d.b(instreamAdPlayer);
    }

    public void b(boolean z) {
        k0 k0Var = this.k;
        if (k0Var == null || k0Var.Z() == null) {
            return;
        }
        if (!z && this.u == 2) {
            i();
        }
        this.u = z ? 1 : 0;
        a(this.k, z ? "shoppableOn" : "shoppableOff");
    }

    public void a(float f) {
        this.d.b(f);
    }

    public void a(InstreamAdPostViewPlayer instreamAdPostViewPlayer) {
        this.s.a(instreamAdPostViewPlayer);
    }

    public View a(Context context) {
        ca caVar = this.i;
        if (caVar != null) {
            return caVar.c();
        }
        k0 k0Var = this.k;
        if (k0Var == null) {
            gb.a("InstreamAdEngine: no current banner");
            return null;
        }
        fa faVarZ = k0Var.Z();
        if (faVarZ == null) {
            gb.a("InstreamAdEngine: no shoppable banner");
            return null;
        }
        ca caVar2 = new ca(faVarZ, new ga(faVarZ, this.f, this.k.Y(), context), context);
        this.i = caVar2;
        caVar2.a(new c(faVarZ, this.f, context));
        return this.i.c();
    }

    public void c() {
        if (this.u == 0) {
            i();
        }
    }

    public void b(float f) {
        m();
        for (float f2 : this.t) {
            if (Float.compare(f2, f) == 0) {
                w3 w3VarA = this.b.a("midroll");
                this.j = w3VarA;
                if (w3VarA != null) {
                    this.d.b(w3VarA.e());
                    this.y = this.j.f();
                    this.x = -1;
                    this.v = f;
                    b(this.j, f);
                    return;
                }
                return;
            }
        }
        gb.a("InstreamAdEngine: Attempt to start wrong midpoint, use one of InstreamAd.getMidPoints()");
    }

    public void a(w3 w3Var, float f) {
        u uVarJ = w3Var.j();
        if (uVarJ != null) {
            if ("midroll".equals(w3Var.h())) {
                uVarJ.c(true);
                uVarJ.b(f);
                ArrayList arrayList = new ArrayList();
                arrayList.add(uVarJ);
                gb.a("InstreamAdEngine: Using doAfter service for point - " + f);
                a(arrayList, w3Var, f);
                return;
            }
            a(uVarJ, w3Var);
            return;
        }
        a(w3Var);
    }

    public void b(String str) {
        a(str, "shoppableAdsItemShow");
        a(str, "show");
    }

    public void b(InstreamAd.InstreamAdCompanionBanner instreamAdCompanionBanner) {
        Context contextD = this.d.d();
        if (contextD == null) {
            gb.a("InstreamAdEngine: can't handle click - context is null");
        } else {
            a(instreamAdCompanionBanner, contextD);
        }
    }

    public void b() {
        this.u = 0;
        ca caVar = this.i;
        if (caVar == null) {
            return;
        }
        caVar.a();
        this.i.a((ca.a) null);
        this.i = null;
    }

    public void a(w3 w3Var) {
        if (w3Var != this.j) {
            return;
        }
        b();
        if ("midroll".equals(w3Var.h())) {
            this.j.b(this.y);
        }
        this.j = null;
        this.k = null;
        this.l = null;
        this.m = null;
        this.x = -1;
        InstreamAd.InstreamAdListener listener = this.f4565a.getListener();
        if (listener != null) {
            listener.onComplete(w3Var.h(), this.f4565a);
        }
    }

    public void b(w3 w3Var, float f) {
        ArrayList arrayList = new ArrayList();
        for (k0 k0Var : w3Var.d()) {
            if (k0Var.S() == f) {
                arrayList.add(k0Var);
            }
        }
        int size = arrayList.size();
        if (size > 0 && this.x < size - 1) {
            this.p = arrayList;
            i();
            return;
        }
        ArrayList arrayListA = w3Var.a(f);
        if (arrayListA.size() > 0) {
            a(arrayListA, w3Var, f);
            return;
        }
        gb.a("InstreamAdEngine: There is no one midpoint service for point - " + f);
        a(w3Var, f);
    }

    public void a(u uVar, final w3 w3Var) {
        Context contextD = this.d.d();
        if (contextD == null) {
            gb.a("InstreamAdEngine: Can't load doAfter service: context is null");
            return;
        }
        gb.a("InstreamAdEngine: Loading doAfter service - " + uVar.b);
        d3.a(uVar, this.c, this.g, this.w).a(new l.b() { // from class: com.my.target.c3$$ExternalSyntheticLambda1
            @Override // com.my.target.l.b
            public final void a(t tVar, m mVar) {
                this.f$0.b(w3Var, (h3) tVar, mVar);
            }
        }).a(this.g.a(), contextD);
    }

    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public void b(w3 w3Var, h3 h3Var, m mVar) {
        if (h3Var == null) {
            if (mVar != null) {
                gb.a("InstreamAdEngine: Loading doAfter service failed - " + mVar.b);
            }
            if (w3Var == this.j) {
                a(w3Var, this.v);
                return;
            }
            return;
        }
        w3 w3VarA = h3Var.a(w3Var.h());
        if (w3VarA != null) {
            w3Var.a(w3VarA);
        }
        if (w3Var == this.j) {
            this.p = w3Var.d();
            i();
        }
    }

    public void a(ArrayList arrayList, final w3 w3Var, final float f) {
        Context contextD = this.d.d();
        if (contextD == null) {
            gb.a("InstreamAdEngine: can't load midpoint services - context is null");
            return;
        }
        gb.a("InstreamAdEngine: Loading midpoint services for point - " + f);
        d3.a(arrayList, this.c, this.g, this.w).a(new l.b() { // from class: com.my.target.c3$$ExternalSyntheticLambda0
            @Override // com.my.target.l.b
            public final void a(t tVar, m mVar) {
                this.f$0.a(w3Var, f, (h3) tVar, mVar);
            }
        }).a(this.g.a(), contextD);
    }

    public void a(w3 w3Var, h3 h3Var, IAdLoadingError iAdLoadingError, float f) {
        if (h3Var == null) {
            if (iAdLoadingError != null) {
                gb.a("InstreamAdEngine: loading midpoint services failed - " + iAdLoadingError);
            }
            if (w3Var == this.j && f == this.v) {
                a(w3Var, f);
                return;
            }
            return;
        }
        w3 w3VarA = h3Var.a(w3Var.h());
        if (w3VarA != null) {
            w3Var.a(w3VarA);
        }
        if (w3Var == this.j && f == this.v) {
            b(w3Var, f);
        }
    }

    public void a(String str, String str2) {
        Context contextD = this.d.d();
        if (contextD == null) {
            gb.a("InstreamAdEngine: Can't send stat - context is null");
            return;
        }
        k0 k0Var = this.k;
        if (k0Var == null) {
            gb.a("InstreamAdEngine: hasn't current banner");
            return;
        }
        da daVarY = k0Var.Y();
        if (daVarY == null) {
            gb.a("InstreamAdEngine: hasn't shoppableAdsData");
            return;
        }
        for (b4 b4Var : daVarY.a()) {
            if (str.equals(b4Var.id)) {
                bb.b(b4Var.f4554a, str2, -1, contextD);
                bb.b(daVarY.b(), str2, -1, contextD);
                return;
            }
        }
        gb.a("InstreamAdEngine: wrong shoppableAdsItemId");
    }

    public void a(com.my.target.b bVar, String str) {
        if (bVar == null) {
            gb.a("InstreamAdEngine: Can't send stat - banner is null");
            return;
        }
        Context contextD = this.d.d();
        if (contextD == null) {
            gb.a("InstreamAdEngine: Can't send stat - context is null");
        } else {
            bb.b(bVar.x(), str, 1, contextD);
        }
    }

    public k1 a(InstreamAd.InstreamAdCompanionBanner instreamAdCompanionBanner) {
        k0 k0Var;
        if (this.o != null && this.l != null && (k0Var = this.k) != null) {
            ArrayList arrayListP = k0Var.P();
            int iIndexOf = this.o.indexOf(instreamAdCompanionBanner);
            if (iIndexOf >= 0 && iIndexOf < arrayListP.size()) {
                return (k1) arrayListP.get(iIndexOf);
            }
            gb.a("InstreamAdEngine: can't find companion banner - provided instreamAdCompanionBanner not found in current playing banner");
            return null;
        }
        gb.a("InstreamAdEngine: can't find companion banner - no playing banner");
        return null;
    }
}
