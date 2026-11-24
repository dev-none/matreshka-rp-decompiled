package com.my.target;

import android.content.Context;
import android.media.AudioManager;
import android.os.Looper;
import com.my.target.common.models.VideoData;

/* JADX INFO: loaded from: classes6.dex */
public class y4 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final s5 f4868a;
    public final a b;
    public final i5 c;
    public final cc d;
    public final q8 e;
    public final f5.c f;
    public final f5.b g;
    public float h;
    public boolean i;
    public boolean j;
    public boolean k;
    public boolean l;
    public boolean m = true;

    public class a implements g9.a {
        public a() {
        }

        public void a() {
            y4 y4Var = y4.this;
            if (y4Var.i) {
                y4Var.i();
                y4.this.e.b(true);
                y4.this.i = false;
            } else {
                y4Var.c();
                y4.this.e.b(false);
                y4.this.i = true;
            }
        }

        @Override // com.my.target.y.a
        public void b() {
            y4 y4Var = y4.this;
            if (y4Var.l) {
                return;
            }
            y4Var.l = true;
            gb.a("InterstitialMediaPresenter$MyMediaViewListener: Video playing complete");
            y4.this.e.e();
            y4.this.h();
            y4 y4Var2 = y4.this;
            y4Var2.f.a(y4Var2.c.getView().getContext());
            y4.this.c.c();
            y4.this.c.d();
            y4.this.e.c();
        }

        @Override // com.my.target.g9.a
        public void c() {
            y4 y4Var = y4.this;
            y4Var.a(y4Var.c.getView().getContext());
            y4.this.e.f();
            y4.this.c.pause();
        }

        @Override // com.my.target.y.a
        public void d() {
        }

        @Override // com.my.target.y.a
        public void e() {
        }

        @Override // com.my.target.y.a
        public void f() {
        }

        @Override // com.my.target.g9.a
        public void i() {
            y4.this.e.i();
            y4.this.c.resume();
            y4 y4Var = y4.this;
            if (y4Var.i) {
                y4Var.c();
            } else {
                y4Var.i();
            }
        }

        @Override // com.my.target.g9.a
        public void k() {
            y4.this.f();
        }

        @Override // com.my.target.y.a
        public void l() {
        }

        @Override // com.my.target.y.a
        public void n() {
            y4.this.e.h();
            y4.this.a();
            gb.a("InterstitialMediaPresenter$MyMediaViewListener: Video playing timeout");
            y4.this.g.a();
        }

        @Override // com.my.target.g9.a
        public void o() {
            y4 y4Var = y4.this;
            if (!y4Var.i) {
                y4Var.b(y4Var.c.getView().getContext());
            }
            y4.this.f();
        }

        @Override // com.my.target.y.a
        public void p() {
            y4 y4Var = y4.this;
            if (y4Var.j && y4Var.f4868a.M() == 0.0f) {
                y4.this.c.c();
            }
            y4.this.c.a();
        }

        @Override // android.media.AudioManager.OnAudioFocusChangeListener
        public void onAudioFocusChange(final int i) {
            if (Looper.getMainLooper().isCurrentThread()) {
                y4.this.a(i);
            } else {
                f0.f(new Runnable() { // from class: com.my.target.y4$a$$ExternalSyntheticLambda0
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.a(i);
                    }
                });
            }
        }

        @Override // com.my.target.y.a
        public void a(float f) {
            y4.this.c.b(f <= 0.0f);
        }

        @Override // com.my.target.y.a
        public void a(float f, float f2) {
            y4.this.c.setTimeChanged(f);
            y4 y4Var = y4.this;
            y4Var.l = false;
            if (!y4Var.k) {
                y4Var.k = true;
            }
            if (y4Var.j && y4Var.f4868a.h0() && y4.this.f4868a.M() <= f) {
                y4.this.c.c();
            }
            y4 y4Var2 = y4.this;
            float f3 = y4Var2.h;
            if (f <= f3) {
                y4Var2.a(f, f2);
                if (f == y4.this.h) {
                    b();
                    return;
                }
                return;
            }
            a(f3, f3);
        }

        @Override // com.my.target.y.a
        public void a(String str) {
            gb.a("InterstitialMediaPresenter$MyMediaViewListener: Video playing error: " + str);
            y4.this.e.g();
            y4 y4Var = y4.this;
            if (y4Var.m) {
                gb.a("InterstitialMediaPresenter$MyMediaViewListener: Try to play video stream from URL");
                y4 y4Var2 = y4.this;
                y4Var2.m = false;
                y4Var2.f();
                return;
            }
            y4Var.a();
            y4.this.g.a();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public /* synthetic */ void a(int i) {
            y4.this.a(i);
        }
    }

    public y4(e9 e9Var, s5 s5Var, i5 i5Var, f5.c cVar, f5.b bVar) {
        this.f4868a = s5Var;
        this.f = cVar;
        this.g = bVar;
        a aVar = new a();
        this.b = aVar;
        this.c = i5Var;
        i5Var.setMediaListener(aVar);
        cc ccVarA = cc.a(s5Var.x());
        this.d = ccVarA;
        ccVarA.a(i5Var.getPromoMediaView());
        this.e = e9Var.a(s5Var);
    }

    public static y4 a(e9 e9Var, s5 s5Var, i5 i5Var, f5.c cVar, f5.b bVar) {
        return new y4(e9Var, s5Var, i5Var, cVar, bVar);
    }

    public final void b() {
        this.c.a(1);
    }

    public final void c() {
        a(this.c.getView().getContext());
        this.c.a(0);
    }

    public void d() {
        this.c.a(true);
        a(this.c.getView().getContext());
        if (this.k) {
            this.e.d();
        }
    }

    public void e() {
        this.c.pause();
        a(this.c.getView().getContext());
        if (!this.c.isPlaying() || this.c.b()) {
            return;
        }
        this.e.f();
    }

    public final void f() {
        this.c.c(this.m);
    }

    public void g() {
        a(this.c.getView().getContext());
    }

    public final void h() {
        this.c.c();
        a(this.c.getView().getContext());
        this.c.a(this.f4868a.c0());
    }

    public final void i() {
        if (this.c.isPlaying()) {
            b(this.c.getView().getContext());
        }
        this.c.a(2);
    }

    public void a(s5 s5Var, Context context) {
        VideoData videoData = (VideoData) s5Var.k0();
        if (videoData != null && videoData.a() == null) {
            this.m = false;
        }
        boolean zA0 = s5Var.a0();
        this.j = zA0;
        if (zA0 && s5Var.M() == 0.0f && s5Var.h0()) {
            gb.a("InterstitialMediaPresenter: Banner is allowed to close");
            this.c.c();
        }
        this.h = s5Var.o();
        boolean zG0 = s5Var.g0();
        this.i = zG0;
        if (zG0) {
            this.c.a(0);
            return;
        }
        if (s5Var.h0()) {
            b(context);
        }
        this.c.a(2);
    }

    public final void b(Context context) {
        AudioManager audioManager = (AudioManager) context.getApplicationContext().getSystemService("audio");
        if (audioManager != null) {
            audioManager.requestAudioFocus(this.b, 3, 2);
        }
    }

    public void a(o4 o4Var) {
        this.c.c();
        this.c.a(o4Var);
    }

    public void a() {
        a(this.c.getView().getContext());
        this.c.destroy();
    }

    public final void a(Context context) {
        AudioManager audioManager = (AudioManager) context.getApplicationContext().getSystemService("audio");
        if (audioManager != null) {
            audioManager.abandonAudioFocus(this.b);
        }
    }

    public final void a(float f, float f2) {
        this.d.a(f, f2);
        this.e.a(f, f2);
    }

    public final void a(int i) {
        if (i == -3) {
            gb.a("InterstitialMediaPresenter: Audiofocus loss can duck, set volume to 0.3");
            if (this.i) {
                return;
            }
            b();
            return;
        }
        if (i == -2 || i == -1) {
            e();
            gb.a("InterstitialMediaPresenter: Audiofocus loss, pausing");
        } else if (i == 1 || i == 2 || i == 4) {
            gb.a("InterstitialMediaPresenter: Audiofocus gain, unmuting");
            if (this.i) {
                return;
            }
            i();
        }
    }
}
