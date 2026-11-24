package com.my.target;

import android.content.Context;
import android.net.Uri;
import com.my.target.common.models.AudioData;
import com.my.target.instreamads.InstreamAudioAdPlayer;
import com.unity3d.ads.core.domain.AndroidInitializeBoldSDK;
import java.util.Stack;

/* JADX INFO: loaded from: classes6.dex */
public class b3 {
    public InstreamAudioAdPlayer g;
    public b h;
    public s5 i;
    public int j;
    public float k;
    public boolean m;
    public float f = 1.0f;
    public int l = 10;
    public int n = 0;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final a f4551a = new a();
    public final u9 b = u9.a(200);
    public final c c = new c();
    public final Stack d = new Stack();
    public final q8 e = q8.b();

    public class a implements InstreamAudioAdPlayer.AdPlayerListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public float f4552a = 1.0f;

        public a() {
        }

        @Override // com.my.target.instreamads.InstreamAudioAdPlayer.AdPlayerListener
        public void onAdAudioCompleted() {
            b3 b3Var = b3.this;
            if (b3Var.n != 2) {
                if (b3Var.i != null && b3Var.h != null) {
                    b3Var.a();
                    b3 b3Var2 = b3.this;
                    s5 s5Var = b3Var2.i;
                    b3Var2.i = null;
                    if (s5Var != null) {
                        float fO = s5Var.o();
                        b3.this.e.a(fO, fO);
                        b3.this.e.e();
                        b3.this.h.a(s5Var);
                    }
                }
                b3.this.n = 2;
            }
            b3 b3Var3 = b3.this;
            b3Var3.b.b(b3Var3.c);
        }

        @Override // com.my.target.instreamads.InstreamAudioAdPlayer.AdPlayerListener
        public void onAdAudioError(String str) {
            b bVar;
            InstreamAudioAdPlayer instreamAudioAdPlayer = b3.this.g;
            if (instreamAudioAdPlayer != null) {
                instreamAudioAdPlayer.stopAdAudio();
            }
            b3 b3Var = b3.this;
            s5 s5Var = b3Var.i;
            if (s5Var != null && (bVar = b3Var.h) != null) {
                bVar.a(str, s5Var);
            }
            b3.this.e.g();
            b3 b3Var2 = b3.this;
            b3Var2.b.b(b3Var2.c);
        }

        @Override // com.my.target.instreamads.InstreamAudioAdPlayer.AdPlayerListener
        public void onAdAudioPaused() {
            Context contextD = b3.this.d();
            b3 b3Var = b3.this;
            if (b3Var.i != null && contextD != null) {
                b3Var.e.f();
            }
            b3 b3Var2 = b3.this;
            b3Var2.b.b(b3Var2.c);
        }

        @Override // com.my.target.instreamads.InstreamAudioAdPlayer.AdPlayerListener
        public void onAdAudioResumed() {
            Context contextD = b3.this.d();
            b3 b3Var = b3.this;
            if (b3Var.i != null && contextD != null) {
                b3Var.e.i();
            }
            b3 b3Var2 = b3.this;
            b3Var2.b.a(b3Var2.c);
        }

        @Override // com.my.target.instreamads.InstreamAudioAdPlayer.AdPlayerListener
        public void onAdAudioStarted() {
            InstreamAudioAdPlayer instreamAudioAdPlayer;
            b3 b3Var = b3.this;
            b3Var.n = 1;
            if (!b3Var.m && (instreamAudioAdPlayer = b3Var.g) != null) {
                b3Var.b(instreamAudioAdPlayer.getAdAudioDuration());
            }
            b3 b3Var2 = b3.this;
            b3Var2.b.a(b3Var2.c);
        }

        @Override // com.my.target.instreamads.InstreamAudioAdPlayer.AdPlayerListener
        public void onAdAudioStopped() {
            b3 b3Var = b3.this;
            if (b3Var.n == 1) {
                if (b3Var.i != null && b3Var.h != null) {
                    b3Var.e.j();
                    b3 b3Var2 = b3.this;
                    b3Var2.h.b(b3Var2.i);
                }
                b3.this.n = 0;
            }
            b3 b3Var3 = b3.this;
            b3Var3.b.b(b3Var3.c);
        }

        @Override // com.my.target.instreamads.InstreamAudioAdPlayer.AdPlayerListener
        public void onVolumeChanged(float f) {
            float f2 = this.f4552a;
            if (f == f2) {
                return;
            }
            if (f2 > 0.0f && f <= 0.0f) {
                if (b3.this.d() != null) {
                    b3 b3Var = b3.this;
                    if (b3Var.i != null) {
                        b3Var.e.b(false);
                        this.f4552a = f;
                        b3.this.f = f;
                        return;
                    }
                    return;
                }
                return;
            }
            if (f2 != 0.0f || f <= 0.0f || b3.this.d() == null) {
                return;
            }
            b3 b3Var2 = b3.this;
            if (b3Var2.i != null) {
                b3Var2.e.b(true);
                this.f4552a = f;
                b3.this.f = f;
            }
        }
    }

    public interface b {
        void a(float f, float f2, s5 s5Var);

        void a(s5 s5Var);

        void a(String str, s5 s5Var);

        void b(s5 s5Var);

        void c(s5 s5Var);
    }

    public class c implements Runnable {
        public c() {
        }

        @Override // java.lang.Runnable
        public void run() {
            b3.this.a();
        }
    }

    public static b3 h() {
        return new b3();
    }

    public void a(InstreamAudioAdPlayer instreamAudioAdPlayer) {
        InstreamAudioAdPlayer instreamAudioAdPlayer2 = this.g;
        if (instreamAudioAdPlayer2 != null) {
            instreamAudioAdPlayer2.setAdPlayerListener(null);
        }
        this.g = instreamAudioAdPlayer;
        if (instreamAudioAdPlayer == null) {
            this.e.a((Context) null);
        } else {
            instreamAudioAdPlayer.setAdPlayerListener(this.f4551a);
            this.e.a(instreamAudioAdPlayer.getCurrentContext());
        }
    }

    public final void b(float f) {
        s5 s5Var;
        b bVar;
        s5 s5Var2 = this.i;
        if (s5Var2 != null && (bVar = this.h) != null) {
            bVar.c(s5Var2);
        }
        b bVar2 = this.h;
        if (bVar2 != null && (s5Var = this.i) != null) {
            bVar2.a(0.0f, f, s5Var);
        }
        this.e.a(0.0f, f);
        this.m = true;
    }

    public void c() {
        this.b.close();
        InstreamAudioAdPlayer instreamAudioAdPlayer = this.g;
        if (instreamAudioAdPlayer != null) {
            instreamAudioAdPlayer.destroy();
        }
        this.g = null;
    }

    public Context d() {
        InstreamAudioAdPlayer instreamAudioAdPlayer = this.g;
        if (instreamAudioAdPlayer == null) {
            return null;
        }
        return instreamAudioAdPlayer.getCurrentContext();
    }

    public InstreamAudioAdPlayer e() {
        return this.g;
    }

    public float f() {
        return this.f;
    }

    public final void g() {
        s5 s5Var;
        gb.a("InstreamAdAudioController: Video freeze more then " + this.l + " seconds, stopping");
        InstreamAudioAdPlayer instreamAudioAdPlayer = this.g;
        if (instreamAudioAdPlayer != null) {
            instreamAudioAdPlayer.stopAdAudio();
        }
        this.b.b(this.c);
        this.e.h();
        b bVar = this.h;
        if (bVar == null || (s5Var = this.i) == null) {
            return;
        }
        bVar.a(AndroidInitializeBoldSDK.MSG_TIMEOUT, s5Var);
    }

    public void i() {
        InstreamAudioAdPlayer instreamAudioAdPlayer = this.g;
        if (instreamAudioAdPlayer != null) {
            instreamAudioAdPlayer.pauseAdAudio();
        }
    }

    public void j() {
        InstreamAudioAdPlayer instreamAudioAdPlayer = this.g;
        if (instreamAudioAdPlayer != null) {
            instreamAudioAdPlayer.resumeAdAudio();
        }
    }

    public void k() {
        if (this.n == 1) {
            if (this.i != null && this.h != null) {
                this.e.j();
                this.h.b(this.i);
            }
            this.n = 0;
        }
        InstreamAudioAdPlayer instreamAudioAdPlayer = this.g;
        if (instreamAudioAdPlayer != null) {
            instreamAudioAdPlayer.stopAdAudio();
        }
    }

    public void c(float f) {
        InstreamAudioAdPlayer instreamAudioAdPlayer = this.g;
        if (instreamAudioAdPlayer != null) {
            instreamAudioAdPlayer.setVolume(f);
        }
        this.f = f;
    }

    public final void b() {
        this.b.b(this.c);
        if (this.n != 2) {
            this.n = 2;
            InstreamAudioAdPlayer instreamAudioAdPlayer = this.g;
            if (instreamAudioAdPlayer != null) {
                instreamAudioAdPlayer.stopAdAudio();
            }
            if (this.i == null || this.h == null) {
                return;
            }
            this.e.e();
            s5 s5Var = this.i;
            this.i = null;
            this.h.a(s5Var);
        }
    }

    public void a(b bVar) {
        this.h = bVar;
    }

    public void a(s5 s5Var) {
        this.i = s5Var;
        this.e.a(s5Var);
        this.m = false;
        s5Var.x().b(this.d);
        AudioData audioData = (AudioData) s5Var.k0();
        if (audioData == null) {
            return;
        }
        Uri uri = Uri.parse(audioData.getUrl());
        InstreamAudioAdPlayer instreamAudioAdPlayer = this.g;
        if (instreamAudioAdPlayer != null) {
            instreamAudioAdPlayer.setVolume(this.f);
            this.g.playAdAudio(uri);
        }
    }

    public void a(int i) {
        this.l = i;
    }

    public void a() {
        float adAudioDuration;
        float adAudioPosition;
        float f;
        InstreamAudioAdPlayer instreamAudioAdPlayer;
        s5 s5Var = this.i;
        float fO = s5Var != null ? s5Var.o() : 0.0f;
        if (this.i == null) {
            this.b.b(this.c);
            return;
        }
        if (this.n != 1 || (instreamAudioAdPlayer = this.g) == null) {
            adAudioDuration = 0.0f;
            adAudioPosition = 0.0f;
            f = 0.0f;
        } else {
            adAudioDuration = instreamAudioAdPlayer.getAdAudioDuration();
            adAudioPosition = this.g.getAdAudioPosition();
            f = fO - adAudioPosition;
        }
        if (this.n == 1 && this.k != adAudioPosition && adAudioDuration > 0.0f) {
            a(f, adAudioPosition, fO);
        } else {
            this.j++;
        }
        if (this.j >= (this.l * 1000) / 200) {
            g();
        }
    }

    public final void a(float f, float f2, float f3) {
        s5 s5Var;
        this.j = 0;
        this.k = f2;
        if (f2 < f3) {
            this.e.a(f2, f3);
            b bVar = this.h;
            if (bVar == null || (s5Var = this.i) == null) {
                return;
            }
            bVar.a(f, f3, s5Var);
            return;
        }
        a(f3);
    }

    public final void a(float f) {
        s5 s5Var;
        this.e.a(f, f);
        b bVar = this.h;
        if (bVar != null && (s5Var = this.i) != null) {
            bVar.a(0.0f, f, s5Var);
        }
        b();
    }
}
