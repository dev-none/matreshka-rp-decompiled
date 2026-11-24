package com.my.target;

import android.content.Context;
import android.media.AudioManager;
import android.net.Uri;
import android.os.Looper;
import com.my.target.common.models.VideoData;

/* JADX INFO: loaded from: classes6.dex */
public class e5 implements z4, AudioManager.OnAudioFocusChangeListener, y.a, z.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final a f4606a;
    public final s5 b;
    public final y c;
    public final cc d;
    public final q8 e;
    public final float f;
    public final z g;
    public boolean h;

    public interface a {
        void a();

        void a(float f, float f2);

        void b();

        void d();

        void e();

        void f();

        void h();

        void k();

        void onVolumeChanged(float f);
    }

    public e5(s5 s5Var, z zVar, a aVar, f9 f9Var, y yVar) {
        this.f4606a = aVar;
        this.g = zVar;
        this.c = yVar;
        zVar.setAdVideoViewListener(this);
        this.b = s5Var;
        cc ccVarA = cc.a(s5Var.x());
        this.d = ccVarA;
        this.e = f9Var.a(s5Var);
        ccVarA.a(zVar);
        this.f = s5Var.o();
        yVar.a(this);
        if (s5Var.g0()) {
            yVar.setVolume(0.0f);
        } else {
            yVar.setVolume(1.0f);
        }
    }

    public static e5 a(s5 s5Var, z zVar, a aVar, f9 f9Var, y yVar) {
        return new e5(s5Var, zVar, aVar, f9Var, yVar);
    }

    @Override // com.my.target.y.a
    public void d() {
        this.f4606a.d();
    }

    @Override // com.my.target.z4
    public void destroy() {
        g();
        this.c.destroy();
        this.d.a();
    }

    @Override // com.my.target.y.a
    public void e() {
        this.f4606a.e();
    }

    @Override // com.my.target.y.a
    public void f() {
        this.f4606a.f();
    }

    @Override // com.my.target.z4
    public void g() {
        a(this.g.getContext());
        this.c.pause();
    }

    @Override // com.my.target.z4
    public void h() {
        if (!this.b.h0()) {
            this.f4606a.h();
        } else {
            this.f4606a.e();
            r();
        }
    }

    @Override // com.my.target.z4
    public void j() {
        this.e.d();
        destroy();
    }

    @Override // com.my.target.y.a
    public void l() {
    }

    @Override // com.my.target.z4
    public void m() {
        if (this.c.isPlaying()) {
            g();
            this.e.f();
        } else if (this.c.i() <= 0) {
            r();
        } else {
            s();
            this.e.i();
        }
    }

    @Override // com.my.target.y.a
    public void n() {
        gb.a("InterstitialPromoMediaPresenterS2: Video playing timeout");
        this.e.h();
        this.f4606a.a();
        this.c.stop();
        this.c.destroy();
    }

    @Override // com.my.target.y.a
    public void p() {
        this.f4606a.k();
    }

    @Override // com.my.target.z.a
    public void q() {
        if (!(this.c instanceof b2)) {
            a("Playback within no hardware accelerated view is available only with ExoPlayer");
            return;
        }
        this.g.setViewMode(1);
        this.c.a(this.g);
        VideoData videoData = (VideoData) this.b.k0();
        if (!this.c.isPlaying() || videoData == null) {
            return;
        }
        if (videoData.a() != null) {
            this.h = true;
        }
        a(videoData);
    }

    public void r() {
        VideoData videoData = (VideoData) this.b.k0();
        this.e.c();
        if (videoData != null) {
            if (!this.c.g()) {
                b(this.g.getContext());
            }
            this.c.a(this);
            this.c.a(this.g);
            a(videoData);
        }
    }

    public void s() {
        this.c.resume();
        if (this.c.g()) {
            a(this.g.getContext());
        } else if (this.c.isPlaying()) {
            b(this.g.getContext());
        }
    }

    @Override // com.my.target.z4
    public void a() {
        this.c.a();
        this.e.b(!this.c.g());
    }

    @Override // com.my.target.y.a
    public void b() {
        this.e.e();
        this.f4606a.b();
        this.c.stop();
    }

    @Override // android.media.AudioManager.OnAudioFocusChangeListener
    public void onAudioFocusChange(final int i) {
        if (Looper.getMainLooper().isCurrentThread()) {
            b(i);
        } else {
            f0.f(new Runnable() { // from class: com.my.target.e5$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.b(i);
                }
            });
        }
    }

    @Override // com.my.target.y.a
    public void a(float f) {
        this.f4606a.onVolumeChanged(f);
    }

    private void b(Context context) {
        AudioManager audioManager = (AudioManager) context.getApplicationContext().getSystemService("audio");
        if (audioManager != null) {
            audioManager.requestAudioFocus(this, 3, 2);
        }
    }

    @Override // com.my.target.y.a
    public void a(float f, float f2) {
        float f3 = this.f;
        if (f > f3) {
            a(f2, f3);
            return;
        }
        if (f != 0.0f) {
            this.f4606a.a(f, f2);
            this.e.a(f, f2);
            this.d.a(f, f2);
        }
        if (f == f2) {
            if (this.c.isPlaying()) {
                b();
            }
            this.c.stop();
        }
    }

    @Override // com.my.target.y.a
    public void a(String str) {
        gb.a("InterstitialPromoMediaPresenterS2: Video playing error - " + str);
        this.e.g();
        if (this.h) {
            gb.a("InterstitialPromoMediaPresenterS2: Try to play video stream from URL");
            this.h = false;
            VideoData videoData = (VideoData) this.b.k0();
            if (videoData != null) {
                this.c.a(Uri.parse(videoData.getUrl()), this.g.getContext());
                return;
            }
        }
        this.f4606a.a();
        this.c.stop();
        this.c.destroy();
    }

    public final void a(VideoData videoData) {
        String str = (String) videoData.a();
        this.g.a(videoData.getWidth(), videoData.getHeight());
        if (str != null) {
            this.h = true;
            this.c.a(Uri.parse(str), this.g.getContext());
        } else {
            this.h = false;
            this.c.a(Uri.parse(videoData.getUrl()), this.g.getContext());
        }
    }

    private void a(Context context) {
        AudioManager audioManager = (AudioManager) context.getApplicationContext().getSystemService("audio");
        if (audioManager != null) {
            audioManager.abandonAudioFocus(this);
        }
    }

    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final void b(int i) {
        if (i == -2 || i == -1) {
            g();
            gb.a("InterstitialPromoMediaPresenterS2: Audiofocus loss, pausing");
        }
    }
}
