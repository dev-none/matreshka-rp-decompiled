package com.my.target;

import android.view.ViewGroup;
import com.my.target.instreamads.postview.InstreamAdPostViewPlayer;
import com.my.target.instreamads.postview.models.PostViewData;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes6.dex */
public final class e3 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final c f4603a;
    public InstreamAdPostViewPlayer b;
    public int c = 0;
    public boolean d = false;
    public b e = null;
    public boolean f = true;
    public boolean g = false;
    public boolean h = false;
    public WeakReference i = new WeakReference(null);

    public class a implements b.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ u8 f4604a;
        public final /* synthetic */ int b;

        public a(u8 u8Var, int i) {
            this.f4604a = u8Var;
            this.b = i;
        }

        @Override // com.my.target.e3.b.a
        public void a(int i) {
            e3.this.a(i, this.b);
        }

        @Override // com.my.target.e3.b.a
        public void b() {
            e3.this.h = true;
        }

        @Override // com.my.target.e3.b.a
        public void c() {
            e3.this.a(this.f4604a);
        }

        @Override // com.my.target.e3.b.a
        public void a() {
            e3.this.i();
        }
    }

    public interface c {
        void a();

        void b();

        void onPostViewStart();
    }

    public e3(c cVar) {
        this.f4603a = cVar;
    }

    public void a(InstreamAdPostViewPlayer instreamAdPostViewPlayer) {
        this.b = instreamAdPostViewPlayer;
    }

    public InstreamAdPostViewPlayer b() {
        return this.b;
    }

    public boolean c() {
        return this.c == 2;
    }

    public boolean d() {
        return this.c == 1;
    }

    public boolean e() {
        return d() || c();
    }

    public boolean f() {
        return b() != null && this.c == 0;
    }

    public final /* synthetic */ void g() {
        dc dcVar = (dc) this.i.get();
        if (dcVar != null) {
            this.i.clear();
            dcVar.setStateChangedListener(null);
            ViewGroup viewGroup = (ViewGroup) dcVar.getParent();
            if (viewGroup != null) {
                viewGroup.removeView(dcVar);
                gb.b("InstreamAdPostViewCtrl", "Viewability view is removed");
            } else {
                gb.b("InstreamAdPostViewCtrl", "Viewability view doesn't have any parent. Skip removing");
            }
        }
        InstreamAdPostViewPlayer instreamAdPostViewPlayer = this.b;
        if (instreamAdPostViewPlayer != null) {
            instreamAdPostViewPlayer.hide();
            gb.b("InstreamAdPostViewCtrl", "Player is hidden");
        }
        if (this.h) {
            this.f4603a.a();
            gb.b("InstreamAdPostViewCtrl", "PostView is canceled");
        } else {
            this.f4603a.b();
            gb.b("InstreamAdPostViewCtrl", "PostView is completed");
        }
        this.h = false;
        this.g = false;
        this.c = 0;
    }

    public void h() {
        b bVar;
        if (!d() || !this.d || (bVar = this.e) == null || this.b == null) {
            return;
        }
        bVar.e();
        this.b.pause();
        this.c = 2;
        gb.b("InstreamAdPostViewCtrl", "Player is paused");
    }

    public void i() {
        if (this.f) {
            InstreamAdPostViewPlayer instreamAdPostViewPlayer = this.b;
            if (instreamAdPostViewPlayer == null) {
                gb.b("InstreamAdPostViewCtrl", "PostView couldn't complete because player is null");
                return;
            }
            instreamAdPostViewPlayer.getView().post(new Runnable() { // from class: com.my.target.e3$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.g();
                }
            });
        }
        this.g = true;
    }

    public void j() {
        b bVar;
        if (!c() || (bVar = this.e) == null || this.b == null || !bVar.c()) {
            return;
        }
        this.e.f();
        this.b.resume();
        this.c = 1;
        gb.b("InstreamAdPostViewCtrl", "Player is resumed");
    }

    public void a() {
        if (this.e != null && e()) {
            this.e.a();
            this.e = null;
            gb.b("InstreamAdPostViewCtrl", "Player is cancelled");
        }
    }

    public void b(u8 u8Var) {
        if (f()) {
            this.d = u8Var.d();
            int iB = (int) (u8Var.b() * 1000.0d);
            if (iB == 0) {
                gb.b("InstreamAdPostViewCtrl", "Duration of PostViewInfo is 0. Skip playing.");
                return;
            }
            if (e()) {
                gb.b("InstreamAdPostViewCtrl", "Show was called while player is still playing");
                a();
            }
            this.f = true;
            b bVar = new b(new a(u8Var, iB));
            this.e = bVar;
            bVar.a(iB);
        }
    }

    public static final class b {
        public final a b;
        public Runnable g;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final u9 f4605a = u9.a(100);
        public int c = 0;
        public int d = 0;
        public boolean e = false;
        public boolean f = false;

        public interface a {
            void a();

            void a(int i);

            void b();

            void c();
        }

        public b(a aVar) {
            this.b = aVar;
        }

        public void a(int i) {
            this.d = i;
            this.e = false;
            this.f = false;
            this.b.c();
            g();
        }

        public void b() {
            this.c = 0;
            this.d = 0;
            h();
            this.b.a();
        }

        public boolean c() {
            return this.e;
        }

        public final /* synthetic */ void d() {
            if (this.e || this.f) {
                return;
            }
            int i = this.c;
            int i2 = this.d;
            if (i >= i2) {
                this.b.a(i2);
                b();
            } else {
                this.b.a(i);
                this.c += 100;
            }
        }

        public void e() {
            this.e = true;
            h();
        }

        public void f() {
            if (this.e) {
                this.e = false;
                g();
            }
        }

        public final void g() {
            h();
            Runnable runnable = new Runnable() { // from class: com.my.target.e3$b$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.d();
                }
            };
            this.g = runnable;
            this.f4605a.a(runnable);
        }

        public final void h() {
            Runnable runnable = this.g;
            if (runnable != null) {
                this.f4605a.b(runnable);
            }
            this.g = null;
        }

        public void a() {
            this.f = true;
            this.b.b();
            b();
        }
    }

    public void a(u8 u8Var) {
        InstreamAdPostViewPlayer instreamAdPostViewPlayer = this.b;
        if (instreamAdPostViewPlayer != null) {
            instreamAdPostViewPlayer.show(PostViewData.a(u8Var.a(), u8Var.e(), u8Var.b(), u8Var.c()));
            gb.b("InstreamAdPostViewCtrl", "Player is shown");
            dc dcVar = new dc(this.b.getView().getContext());
            this.i.clear();
            this.i = new WeakReference(dcVar);
            kb.b(dcVar, "viewability_view");
            dcVar.setStateChangedListener(new dc.a() { // from class: com.my.target.e3$$ExternalSyntheticLambda1
                @Override // com.my.target.dc.a
                public final void a(boolean z) {
                    this.f$0.a(z);
                }
            });
            this.b.getView().addView(dcVar);
            gb.b("InstreamAdPostViewCtrl", "ViewbilityView added");
        }
        this.f4603a.onPostViewStart();
        this.c = 1;
    }

    public void a(int i, int i2) {
        InstreamAdPostViewPlayer instreamAdPostViewPlayer = this.b;
        if (instreamAdPostViewPlayer != null) {
            instreamAdPostViewPlayer.updateProgress(i, i2);
        }
    }

    public final void a(boolean z) {
        this.f = z;
        if (this.d) {
            if (z) {
                j();
                return;
            } else {
                h();
                return;
            }
        }
        if (this.g && z) {
            i();
        }
    }
}
