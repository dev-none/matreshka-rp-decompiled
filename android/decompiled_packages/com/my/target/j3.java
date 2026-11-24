package com.my.target;

import android.content.Context;
import android.net.Uri;
import android.view.View;
import com.my.target.common.models.VideoData;
import com.my.target.instreamads.InstreamAdPlayer;
import com.unity3d.ads.core.domain.AndroidInitializeBoldSDK;

/* JADX INFO: loaded from: classes6.dex */
public final class j3 implements InstreamAdPlayer.AdPlayerListener {
    public cc e;
    public l8 f;
    public InstreamAdPlayer g;
    public a h;
    public s5 i;
    public int n;
    public float o;
    public bc d = null;
    public int j = 0;
    public int k = 10;
    public float l = 1.0f;
    public float m = 1.0f;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final u9 f4670a = u9.a(200);
    public final q8 b = q8.b();
    public final Runnable c = new Runnable() { // from class: com.my.target.j3$$ExternalSyntheticLambda0
        @Override // java.lang.Runnable
        public final void run() {
            this.f$0.a();
        }
    };

    public interface a {
        void a(float f, float f2, s5 s5Var);

        void a(s5 s5Var);

        void a(String str, s5 s5Var);

        void b(s5 s5Var);

        void c(s5 s5Var);

        void d(s5 s5Var);

        void e(s5 s5Var);
    }

    public static j3 i() {
        return new j3();
    }

    public void a(InstreamAdPlayer instreamAdPlayer) {
        InstreamAdPlayer instreamAdPlayer2 = this.g;
        if (instreamAdPlayer2 != null) {
            instreamAdPlayer2.setAdPlayerListener(null);
        }
        this.g = instreamAdPlayer;
        if (instreamAdPlayer == null) {
            cc ccVar = this.e;
            if (ccVar != null) {
                ccVar.a((View) null);
            }
            bc bcVar = this.d;
            if (bcVar != null) {
                bcVar.e();
            }
            this.b.a((Context) null);
            return;
        }
        View view = instreamAdPlayer.getView();
        cc ccVar2 = this.e;
        if (ccVar2 != null) {
            ccVar2.a(view);
        }
        bc bcVar2 = this.d;
        if (bcVar2 != null) {
            bcVar2.b(view);
        }
        instreamAdPlayer.setAdPlayerListener(this);
        this.b.a(view.getContext());
        l8 l8Var = this.f;
        if (l8Var != null) {
            l8Var.a(instreamAdPlayer.getView());
        }
    }

    public void b(InstreamAdPlayer instreamAdPlayer) {
        VideoData videoData;
        InstreamAdPlayer instreamAdPlayer2 = this.g;
        if (instreamAdPlayer2 != null) {
            instreamAdPlayer2.setAdPlayerListener(null);
            this.g.stopAdVideo();
        }
        this.g = instreamAdPlayer;
        if (instreamAdPlayer != null) {
            cc ccVar = this.e;
            if (ccVar != null) {
                ccVar.a(instreamAdPlayer.getView());
            }
            bc bcVar = this.d;
            if (bcVar != null) {
                bcVar.b(instreamAdPlayer.getView());
            }
            instreamAdPlayer.setAdPlayerListener(this);
            this.b.a(instreamAdPlayer.getView().getContext());
            l8 l8Var = this.f;
            if (l8Var != null) {
                l8Var.a(instreamAdPlayer.getView());
            }
        } else {
            cc ccVar2 = this.e;
            if (ccVar2 != null) {
                ccVar2.a((View) null);
            }
            bc bcVar2 = this.d;
            if (bcVar2 != null) {
                bcVar2.e();
            }
            this.b.a((Context) null);
        }
        s5 s5Var = this.i;
        if (s5Var == null || (videoData = (VideoData) s5Var.k0()) == null || instreamAdPlayer == null) {
            return;
        }
        Uri uri = Uri.parse(videoData.getUrl());
        instreamAdPlayer.setVolume(this.l);
        instreamAdPlayer.playAdVideo(uri, videoData.getWidth(), videoData.getHeight(), this.o);
    }

    public void c() {
        this.f4670a.close();
        InstreamAdPlayer instreamAdPlayer = this.g;
        if (instreamAdPlayer != null) {
            instreamAdPlayer.destroy();
            this.g = null;
        }
        b();
    }

    public Context d() {
        InstreamAdPlayer instreamAdPlayer = this.g;
        if (instreamAdPlayer == null) {
            return null;
        }
        return instreamAdPlayer.getView().getContext();
    }

    public InstreamAdPlayer e() {
        return this.g;
    }

    public float f() {
        return this.l;
    }

    public void g() {
        s5 s5Var;
        gb.a("InstreamAdVideoController: Video freeze more then " + this.k + " seconds, stopping");
        InstreamAdPlayer instreamAdPlayer = this.g;
        if (instreamAdPlayer != null) {
            instreamAdPlayer.stopAdVideo();
        }
        this.f4670a.b(this.c);
        this.b.h();
        a aVar = this.h;
        if (aVar != null && (s5Var = this.i) != null) {
            aVar.a(AndroidInitializeBoldSDK.MSG_TIMEOUT, s5Var);
        }
        b();
    }

    public final /* synthetic */ void h() {
        l8 l8Var;
        InstreamAdPlayer instreamAdPlayer = this.g;
        if (instreamAdPlayer == null || (l8Var = this.f) == null) {
            return;
        }
        l8Var.a(instreamAdPlayer.getView(), new l8.b[0]);
        this.f.c();
    }

    public void j() {
        InstreamAdPlayer instreamAdPlayer = this.g;
        if (instreamAdPlayer != null) {
            instreamAdPlayer.pauseAdVideo();
        }
    }

    public void k() {
        InstreamAdPlayer instreamAdPlayer = this.g;
        if (instreamAdPlayer != null) {
            instreamAdPlayer.resumeAdVideo();
        }
    }

    public void l() {
        InstreamAdPlayer instreamAdPlayer = this.g;
        if (instreamAdPlayer != null) {
            instreamAdPlayer.stopAdVideo();
        }
        onAdVideoStopped();
    }

    public void m() {
        l8 l8Var = this.f;
        if (l8Var != null) {
            l8Var.a(2);
        }
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer.AdPlayerListener
    public void onAdVideoCompleted() {
        if (a(4)) {
            a();
            this.f4670a.b(this.c);
            bc bcVar = this.d;
            if (bcVar != null) {
                bcVar.e();
            }
            s5 s5VarB = b();
            if (s5VarB != null) {
                float fO = s5VarB.o();
                this.b.a(fO, fO);
                cc ccVar = this.e;
                if (ccVar != null) {
                    ccVar.a(fO, fO);
                }
                if (this.h != null) {
                    this.b.e();
                    this.h.d(s5VarB);
                }
            }
        }
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer.AdPlayerListener
    public void onAdVideoError(String str) {
        a aVar;
        if (a(6)) {
            InstreamAdPlayer instreamAdPlayer = this.g;
            if (instreamAdPlayer != null) {
                instreamAdPlayer.stopAdVideo();
            }
            this.b.g();
            bc bcVar = this.d;
            if (bcVar != null) {
                bcVar.e();
            }
            this.f4670a.b(this.c);
            s5 s5VarB = b();
            if (s5VarB == null || (aVar = this.h) == null) {
                return;
            }
            aVar.a(str, s5VarB);
        }
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer.AdPlayerListener
    public void onAdVideoPaused() {
        a aVar;
        if (a(3)) {
            this.b.f();
            this.f4670a.b(this.c);
            s5 s5Var = this.i;
            if (s5Var == null || (aVar = this.h) == null) {
                return;
            }
            aVar.b(s5Var);
        }
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer.AdPlayerListener
    public void onAdVideoResumed() {
        a aVar;
        if (a(2)) {
            this.b.i();
            this.f4670a.a(this.c);
            s5 s5Var = this.i;
            if (s5Var == null || (aVar = this.h) == null) {
                return;
            }
            aVar.a(s5Var);
        }
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer.AdPlayerListener
    public void onAdVideoStarted() {
        if (a(2)) {
            this.f4670a.a(this.c);
            s5 s5Var = this.i;
            if (s5Var == null) {
                return;
            }
            a aVar = this.h;
            if (aVar != null) {
                aVar.c(s5Var);
            }
            if (this.g == null) {
                return;
            }
            bc bcVar = this.d;
            if (bcVar != null && !bcVar.c()) {
                this.d.c(this.g.getView());
            }
            s5 s5Var2 = this.i;
            if (s5Var2 != null) {
                float fO = s5Var2.o();
                a(fO, 0.0f, fO);
            }
        }
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer.AdPlayerListener
    public void onAdVideoStopped() {
        a aVar;
        if (a(5)) {
            this.b.j();
            bc bcVar = this.d;
            if (bcVar != null) {
                bcVar.e();
            }
            this.f4670a.b(this.c);
            s5 s5VarB = b();
            if (s5VarB == null || (aVar = this.h) == null) {
                return;
            }
            aVar.e(s5VarB);
        }
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer.AdPlayerListener
    public void onVolumeChanged(float f) {
        this.b.b(this.m, f);
        this.m = f;
    }

    public void a(a aVar) {
        this.h = aVar;
    }

    public void a(s5 s5Var, boolean z) {
        InstreamAdPlayer instreamAdPlayer;
        if (a(1)) {
            this.o = 0.0f;
            this.i = s5Var;
            this.b.a(s5Var);
            this.e = cc.a(s5Var.x());
            l8 l8Var = this.f;
            if (l8Var != null) {
                l8Var.a();
            }
            bc bcVar = this.d;
            if (bcVar != null) {
                bcVar.e();
                this.d = null;
            }
            InstreamAdPlayer instreamAdPlayer2 = this.g;
            if (instreamAdPlayer2 != null) {
                View view = instreamAdPlayer2.getView();
                this.e.a(view);
                if (!z) {
                    this.f = l8.a(s5Var, 3, this.i, view.getContext());
                    this.d = bc.b(s5Var.E(), s5Var.x());
                }
            }
            this.b.a(this.f);
            this.b.a(new q8.a() { // from class: com.my.target.j3$$ExternalSyntheticLambda1
                @Override // com.my.target.q8.a
                public final void a() {
                    this.f$0.h();
                }
            });
            VideoData videoData = (VideoData) s5Var.k0();
            if (videoData == null || (instreamAdPlayer = this.g) == null) {
                return;
            }
            instreamAdPlayer.setVolume(this.l);
            this.g.playAdVideo(Uri.parse(videoData.getUrl()), videoData.getWidth(), videoData.getHeight());
        }
    }

    public void b(int i) {
        this.k = i;
    }

    public void b(float f) {
        InstreamAdPlayer instreamAdPlayer = this.g;
        if (instreamAdPlayer != null) {
            instreamAdPlayer.setVolume(f);
        }
        this.l = f;
    }

    public s5 b() {
        s5 s5Var = this.i;
        this.i = null;
        cc ccVar = this.e;
        if (ccVar != null) {
            ccVar.a();
            this.e = null;
        }
        bc bcVar = this.d;
        if (bcVar != null) {
            bcVar.e();
            this.d = null;
        }
        l8 l8Var = this.f;
        if (l8Var != null) {
            l8Var.a();
        }
        return s5Var;
    }

    public void a(s5 s5Var) {
        a(s5Var, false);
    }

    public void a() {
        float adVideoDuration;
        float adVideoPosition;
        float f;
        InstreamAdPlayer instreamAdPlayer;
        s5 s5Var = this.i;
        if (s5Var == null) {
            this.f4670a.b(this.c);
            return;
        }
        float fO = s5Var.o();
        boolean z = this.j == 2;
        if (!z || (instreamAdPlayer = this.g) == null) {
            adVideoDuration = 0.0f;
            adVideoPosition = 0.0f;
            f = 0.0f;
        } else {
            adVideoDuration = instreamAdPlayer.getAdVideoDuration();
            adVideoPosition = this.g.getAdVideoPosition();
            f = fO - adVideoPosition;
        }
        if (z && this.o != adVideoPosition && adVideoDuration > 0.0f) {
            a(f, adVideoPosition, fO);
        } else {
            this.n++;
        }
        if (this.n >= (this.k * 1000) / 200) {
            g();
        }
    }

    public void a(float f, float f2, float f3) {
        s5 s5Var;
        this.n = 0;
        this.o = f2;
        if (f2 >= f3) {
            a(f3);
            return;
        }
        this.b.a(f2, f3);
        cc ccVar = this.e;
        if (ccVar != null) {
            ccVar.a(f2, f3);
        }
        a aVar = this.h;
        if (aVar == null || (s5Var = this.i) == null) {
            return;
        }
        aVar.a(f, f3, s5Var);
    }

    public void a(float f) {
        if (a(4)) {
            this.b.a(f, f);
            this.o = f;
            this.f4670a.b(this.c);
            cc ccVar = this.e;
            if (ccVar != null) {
                ccVar.a(f, f);
            }
            s5 s5VarB = b();
            if (s5VarB == null) {
                return;
            }
            a aVar = this.h;
            if (aVar != null) {
                aVar.a(0.0f, f, s5VarB);
            }
            if (this.h != null) {
                this.b.e();
                this.h.d(s5VarB);
            }
        }
    }

    public boolean a(int i) {
        int i2 = this.j;
        boolean z = false;
        if (i != i2) {
            switch (i) {
                case 1:
                case 6:
                    z = true;
                    break;
                case 2:
                    if (i2 == 1 || i2 == 3) {
                        z = true;
                    }
                    break;
                case 3:
                    if (i2 == 1 || i2 == 2) {
                        z = true;
                    }
                    break;
                case 4:
                    if (i2 == 1 || i2 == 2 || i2 == 5) {
                        z = true;
                    }
                    break;
                case 5:
                    if (i2 == 1 || i2 == 2 || i2 == 3) {
                        z = true;
                    }
                    break;
            }
        }
        if (z) {
            gb.a("InstreamAdVideoController: state has been changed from " + this.j + " to " + i);
            this.j = i;
            return z;
        }
        gb.a("InstreamAdVideoController: wrong state transition from " + this.j + " to " + i);
        return z;
    }
}
