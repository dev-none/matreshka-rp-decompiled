package com.my.target;

import android.content.Context;
import android.media.AudioManager;
import android.net.Uri;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import com.my.target.common.models.ImageData;
import com.my.target.common.models.VideoData;
import com.my.target.nativeads.views.MediaAdView;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes6.dex */
public class q7 implements y.a, k.a, qb.d, z.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final e8 f4788a;
    public final s5 b;
    public final VideoData c;
    public final AudioManager.OnAudioFocusChangeListener d = new a();
    public final b7 e;
    public final cc f;
    public final q8 g;
    public WeakReference h;
    public WeakReference i;
    public WeakReference j;
    public y k;
    public boolean l;
    public boolean m;
    public boolean n;
    public boolean o;
    public boolean p;
    public int q;
    public Uri r;
    public m8 s;
    public WeakReference t;
    public b u;
    public long v;
    public boolean w;
    public boolean x;

    public final class a implements AudioManager.OnAudioFocusChangeListener {
        public a() {
        }

        @Override // android.media.AudioManager.OnAudioFocusChangeListener
        public void onAudioFocusChange(int i) {
            if (i == -3) {
                q7.this.t();
                return;
            }
            if (i == -2 || i == -1) {
                q7.this.x();
                gb.a("NativeAdVideoController$AfChangeListener: Audiofocus loss, pausing");
            } else if ((i == 1 || i == 2 || i == 4) && q7.this.n) {
                gb.a("NativeAdVideoController$AfChangeListener: Audiofocus gain, unmuting");
                q7.this.d(false);
            }
        }
    }

    public interface b {
        void a();

        void c();

        void d();

        void e();
    }

    public q7(b7 b7Var, s5 s5Var, VideoData videoData, e8 e8Var) {
        this.b = s5Var;
        this.e = b7Var;
        this.f4788a = e8Var;
        this.c = videoData;
        this.m = s5Var.h0();
        this.p = s5Var.g0();
        this.f = cc.a(s5Var.x());
        this.g = e8Var.a(s5Var);
        String str = (String) videoData.a();
        if (str != null) {
            this.r = Uri.parse(str);
        } else {
            this.r = Uri.parse(videoData.getUrl());
        }
    }

    public void a(MediaAdView mediaAdView, Context context) {
        z zVar;
        WeakReference weakReference;
        gb.a("NativeAdVideoController: Register video ad with view " + mediaAdView);
        if (this.n) {
            return;
        }
        WeakReference weakReference2 = this.h;
        if (weakReference2 != null && weakReference2.get() == mediaAdView && (weakReference = this.t) != null && weakReference.get() == context && (mediaAdView.getChildAt(1) instanceof z)) {
            zVar = (z) mediaAdView.getChildAt(1);
        } else {
            z();
            this.g.a(context);
            this.h = new WeakReference(mediaAdView);
            this.t = new WeakReference(context);
            z zVar2 = new z(mediaAdView.getContext().getApplicationContext());
            mediaAdView.addView(zVar2, 1);
            zVar = zVar2;
        }
        zVar.setAdVideoViewListener(this);
        this.f.a(zVar);
        if (this.m) {
            e();
        } else {
            l();
        }
    }

    @Override // com.my.target.y.a
    public void b() {
        MediaAdView mediaAdViewU = u();
        if (mediaAdViewU != null) {
            mediaAdViewU.getProgressBarView().setVisibility(8);
            if (!this.w) {
                mediaAdViewU.getPlayButtonView().setVisibility(0);
            }
        }
        this.v = 0L;
    }

    public void c(boolean z) {
        this.w = z;
    }

    @Override // com.my.target.y.a
    public void d() {
        Context context;
        MediaAdView mediaAdViewU = u();
        if (mediaAdViewU != null) {
            context = mediaAdViewU.getContext();
            if (!this.w) {
                mediaAdViewU.getPlayButtonView().setVisibility(0);
            }
            mediaAdViewU.getProgressBarView().setVisibility(8);
        } else {
            context = null;
        }
        x();
        if (mediaAdViewU != null) {
            a(context);
        }
        b bVar = this.u;
        if (bVar != null) {
            bVar.d();
        }
    }

    @Override // com.my.target.y.a
    public void e() {
        WeakReference weakReference;
        qb qbVar;
        this.q = 4;
        MediaAdView mediaAdViewU = u();
        if (mediaAdViewU != null) {
            if (!this.w) {
                mediaAdViewU.getProgressBarView().setVisibility(0);
            }
            mediaAdViewU.getPlayButtonView().setVisibility(8);
        }
        if (!this.n || (weakReference = this.j) == null || (qbVar = (qb) weakReference.get()) == null) {
            return;
        }
        qbVar.d();
    }

    @Override // com.my.target.y.a
    public void f() {
    }

    @Override // com.my.target.qb.d
    public void g() {
        if (this.q != 1) {
            return;
        }
        x();
        this.q = 2;
        WeakReference weakReference = this.i;
        if (weakReference == null || ((k) weakReference.get()) == null) {
            return;
        }
        this.g.f();
    }

    @Override // com.my.target.qb.d
    public void h() {
        WeakReference weakReference = this.i;
        if (weakReference != null && ((k) weakReference.get()) != null) {
            y();
            this.g.i();
        }
        b bVar = this.u;
        if (bVar != null) {
            bVar.e();
        }
    }

    @Override // com.my.target.qb.d
    public void j() {
        y yVar = this.k;
        if (yVar == null) {
            this.p = !this.p;
            return;
        }
        if (yVar.g()) {
            this.k.h();
            this.g.b(true);
            this.p = false;
        } else {
            this.k.d();
            this.g.b(false);
            this.p = true;
        }
    }

    @Override // com.my.target.y.a
    public void l() {
        Context context;
        WeakReference weakReference;
        qb qbVar;
        this.o = false;
        this.v = 0L;
        MediaAdView mediaAdViewU = u();
        if (mediaAdViewU != null) {
            ImageView imageView = mediaAdViewU.getImageView();
            ImageData imageDataS = this.b.s();
            if (imageDataS != null) {
                imageView.setImageBitmap(imageDataS.getBitmap());
            }
            imageView.setVisibility(0);
            if (!this.w) {
                mediaAdViewU.getPlayButtonView().setVisibility(0);
            }
            mediaAdViewU.getProgressBarView().setVisibility(8);
            context = mediaAdViewU.getContext();
        } else {
            context = null;
        }
        if (this.n && (weakReference = this.j) != null && (qbVar = (qb) weakReference.get()) != null) {
            qbVar.h();
            context = qbVar.getContext();
        }
        if (context != null) {
            a(context);
        }
    }

    @Override // com.my.target.qb.d
    public void m() {
        qb qbVar;
        y();
        WeakReference weakReference = this.j;
        if (weakReference != null && (qbVar = (qb) weakReference.get()) != null) {
            qbVar.g();
        }
        b bVar = this.u;
        if (bVar != null) {
            bVar.e();
        }
    }

    @Override // com.my.target.y.a
    public void n() {
        this.g.h();
        b bVar = this.u;
        if (bVar != null) {
            bVar.a();
        }
    }

    @Override // com.my.target.y.a
    public void p() {
        WeakReference weakReference;
        qb qbVar;
        if (this.q == 1) {
            return;
        }
        this.q = 1;
        MediaAdView mediaAdViewU = u();
        if (mediaAdViewU != null) {
            mediaAdViewU.getProgressBarView().setVisibility(8);
            mediaAdViewU.getPlayButtonView().setVisibility(8);
        }
        if (!this.n || (weakReference = this.j) == null || (qbVar = (qb) weakReference.get()) == null) {
            return;
        }
        if (this.k != null) {
            z adVideoView = qbVar.getAdVideoView();
            adVideoView.a(this.c.getWidth(), this.c.getHeight());
            this.k.a(adVideoView);
        }
        qbVar.f();
    }

    @Override // com.my.target.z.a
    public void q() {
        gb.a("NativeAdVideoController: Native Ad Views without hardware acceleration is not currently supported");
        b bVar = this.u;
        if (bVar != null) {
            bVar.a();
        }
    }

    @Override // com.my.target.k.a
    public void r() {
        gb.a("NativeAdVideoController: Dismiss dialog");
        this.i = null;
        this.n = false;
        d(true);
        MediaAdView mediaAdViewU = u();
        if (mediaAdViewU == null) {
            return;
        }
        a(mediaAdViewU.getContext());
        int i = this.q;
        if (i == 1) {
            this.q = 4;
            p();
            if (this.b.h0()) {
                this.m = true;
            }
            View childAt = mediaAdViewU.getChildAt(1);
            if (childAt instanceof z) {
                a((z) childAt, true);
            }
        } else if (i == 2 || i == 3) {
            this.m = false;
            l();
        } else if (i != 4) {
            this.m = false;
        } else {
            this.m = true;
            e();
            View childAt2 = mediaAdViewU.getChildAt(1);
            if (childAt2 instanceof z) {
                a((z) childAt2, true);
            }
        }
        this.g.a(false);
        this.j = null;
    }

    public final void s() {
        y yVar = this.k;
        if (yVar == null) {
            return;
        }
        yVar.a((y.a) null);
        this.k.destroy();
        this.k = null;
    }

    public void t() {
        y yVar = this.k;
        if (yVar == null || this.p) {
            return;
        }
        yVar.c();
    }

    public final MediaAdView u() {
        WeakReference weakReference = this.h;
        if (weakReference != null) {
            return (MediaAdView) weakReference.get();
        }
        return null;
    }

    public void v() {
        y yVar;
        if (!this.l || this.n) {
            return;
        }
        this.l = false;
        if (this.q == 1 && (yVar = this.k) != null) {
            yVar.pause();
            this.q = 2;
        }
        y yVar2 = this.k;
        if (yVar2 != null) {
            yVar2.a((y.a) null);
            this.k.a((z) null);
        }
    }

    public void w() {
        MediaAdView mediaAdViewU = u();
        if (mediaAdViewU == null) {
            gb.a("NativeAdVideoController: Trying to play video in unregistered view");
            s();
            return;
        }
        if (mediaAdViewU.getWindowVisibility() != 0) {
            if (this.q != 1) {
                s();
                return;
            }
            y yVar = this.k;
            if (yVar != null) {
                this.v = yVar.i();
            }
            s();
            this.q = 4;
            this.l = false;
            e();
            return;
        }
        if (this.l) {
            return;
        }
        WeakReference weakReference = this.t;
        Context context = weakReference != null ? (Context) weakReference.get() : null;
        if (context != null) {
            a(mediaAdViewU, context);
        }
        this.l = true;
        z zVar = mediaAdViewU.getChildAt(1) instanceof z ? (z) mediaAdViewU.getChildAt(1) : null;
        if (zVar == null) {
            s();
            return;
        }
        y yVar2 = this.k;
        if (yVar2 != null && !this.r.equals(yVar2.getUri())) {
            s();
        }
        if (!this.m) {
            if (!this.w) {
                mediaAdViewU.getPlayButtonView().setVisibility(0);
            }
            mediaAdViewU.getProgressBarView().setVisibility(8);
        }
        if (!this.m || this.n) {
            return;
        }
        y yVar3 = this.k;
        if (yVar3 == null || !yVar3.b()) {
            a(zVar, true);
        } else {
            this.k.a(zVar);
            zVar.a(this.c.getWidth(), this.c.getHeight());
            this.k.a(this);
            this.k.resume();
        }
        d(true);
    }

    public void x() {
        WeakReference weakReference;
        if (!this.n || (weakReference = this.j) == null) {
            return;
        }
        this.q = 2;
        qb qbVar = (qb) weakReference.get();
        if (qbVar == null) {
            return;
        }
        y yVar = this.k;
        if (yVar != null) {
            yVar.pause();
        }
        qbVar.e();
    }

    public final void y() {
        WeakReference weakReference;
        z adVideoView;
        WeakReference weakReference2;
        y yVar = this.k;
        if (yVar != null && yVar.b()) {
            MediaAdView mediaAdViewU = u();
            if (mediaAdViewU == null) {
                gb.a("NativeAdVideoController: Trying to play video in unregistered view");
                s();
                return;
            }
            if (!this.n || (weakReference2 = this.j) == null) {
                adVideoView = mediaAdViewU.getChildAt(1) instanceof z ? (z) mediaAdViewU.getChildAt(1) : null;
            } else {
                adVideoView = ((qb) weakReference2.get()).getAdVideoView();
            }
            if (adVideoView == null) {
                s();
                return;
            } else {
                adVideoView.a(this.c.getWidth(), this.c.getHeight());
                this.k.a(adVideoView);
                this.k.resume();
            }
        } else if (this.n && (weakReference = this.j) != null) {
            a(((qb) weakReference.get()).getAdVideoView(), this.p);
        }
        e();
    }

    public void z() {
        MediaAdView mediaAdView;
        v();
        this.f.a((View) null);
        this.g.a((Context) null);
        s();
        WeakReference weakReference = this.h;
        if (weakReference == null || (mediaAdView = (MediaAdView) weakReference.get()) == null || !(mediaAdView.getChildAt(1) instanceof z)) {
            return;
        }
        mediaAdView.removeViewAt(1);
    }

    @Override // com.my.target.k.a
    public void b(boolean z) {
        y yVar = this.k;
        if (yVar == null || z) {
            return;
        }
        this.v = yVar.i();
        s();
        d();
    }

    public void b(View view) {
        WeakReference weakReference = this.t;
        Context context = weakReference != null ? (Context) weakReference.get() : null;
        if (context == null) {
            context = view.getContext();
        }
        b(context);
        if (this.w) {
            return;
        }
        if (this.q == 1) {
            this.q = 4;
        }
        try {
            k.a(this, context).show();
            this.n = true;
        } catch (Throwable th) {
            th.printStackTrace();
            gb.b("Unable to start video dialog! Check myTarget MediaAdView, maybe it was created with non-Activity context");
            r();
        }
    }

    public void d(boolean z) {
        y yVar = this.k;
        if (yVar == null) {
            return;
        }
        if (z) {
            yVar.d();
        } else {
            yVar.h();
        }
    }

    @Override // com.my.target.y.a
    public void a(float f) {
        qb qbVar;
        WeakReference weakReference = this.j;
        if (weakReference == null || (qbVar = (qb) weakReference.get()) == null) {
            return;
        }
        qbVar.a(f <= 0.0f);
    }

    @Override // com.my.target.y.a
    public void a(float f, float f2) {
        qb qbVar;
        p();
        this.f.a(f, f2);
        this.g.a(f, f2);
        if (!this.o) {
            b bVar = this.u;
            if (bVar != null) {
                bVar.e();
            }
            this.o = true;
        }
        float fO = this.b.o();
        WeakReference weakReference = this.j;
        if (weakReference != null && (qbVar = (qb) weakReference.get()) != null) {
            qbVar.a(f, fO);
        }
        int iA = e2.a(f, fO);
        if (iA == 1) {
            a(fO, fO);
            return;
        }
        if (this.k == null) {
            return;
        }
        if (e2.a(f, 0.0f) == 1) {
            this.v = this.k.i();
        }
        if (iA == -1) {
            return;
        }
        if (this.x) {
            this.k.f();
            return;
        }
        l();
        this.q = 3;
        this.k.stop();
        this.m = false;
        if (this.u != null) {
            this.g.e();
            this.u.c();
        }
        this.g.c();
    }

    public final void b(Context context) {
        AudioManager audioManager = (AudioManager) context.getSystemService("audio");
        if (audioManager != null) {
            audioManager.requestAudioFocus(this.d, 3, 2);
        }
    }

    @Override // com.my.target.y.a
    public void a(String str) {
        this.g.g();
        VideoData videoData = (VideoData) this.b.k0();
        if (videoData != null && this.r.toString().equals(videoData.a())) {
            gb.a("NativeAdVideoController: Try to play video stream from URL");
            this.r = Uri.parse(videoData.getUrl());
            WeakReference weakReference = this.t;
            Context context = weakReference != null ? (Context) weakReference.get() : null;
            y yVar = this.k;
            if (yVar == null || context == null) {
                return;
            }
            yVar.a(this.r, context);
            return;
        }
        b bVar = this.u;
        if (bVar != null) {
            bVar.a();
        }
    }

    @Override // com.my.target.k.a
    public void a(k kVar, FrameLayout frameLayout) {
        a(kVar, frameLayout, new qb(frameLayout.getContext()));
    }

    @Override // com.my.target.qb.d
    public void a(View view) {
        if (this.q == 1) {
            y yVar = this.k;
            if (yVar != null) {
                yVar.pause();
            }
            d();
        }
        m8 m8Var = this.s;
        if (m8Var != null) {
            m8Var.a(view, 2);
        }
    }

    @Override // com.my.target.qb.d
    public void a() {
        WeakReference weakReference = this.i;
        k kVar = weakReference == null ? null : (k) weakReference.get();
        if (kVar == null || !kVar.isShowing()) {
            return;
        }
        kVar.dismiss();
    }

    public void a(m8 m8Var) {
        this.s = m8Var;
    }

    public void a(b bVar) {
        this.u = bVar;
    }

    public void a(boolean z) {
        this.x = z;
    }

    public void a(k kVar, FrameLayout frameLayout, qb qbVar) {
        this.q = 4;
        this.i = new WeakReference(kVar);
        qbVar.setLayoutParams(new LinearLayout.LayoutParams(-1, -1));
        frameLayout.addView(qbVar);
        this.j = new WeakReference(qbVar);
        qbVar.a(this.e, this.c);
        qbVar.setVideoDialogViewListener(this);
        qbVar.a(this.p);
        this.g.a(true);
        a(qbVar.getAdVideoView(), this.p);
    }

    public final void a(z zVar, boolean z) {
        if (this.k == null) {
            y yVarA = this.f4788a.a();
            this.k = yVarA;
            yVarA.a(this);
        }
        d(z);
        this.k.a(zVar);
        zVar.a(this.c.getWidth(), this.c.getHeight());
        if (!this.k.isPlaying()) {
            this.k.a(this.r, zVar.getContext());
            long j = this.v;
            if (j > 0) {
                this.k.seekTo(j);
                return;
            }
            return;
        }
        p();
    }

    public final void a(Context context) {
        AudioManager audioManager = (AudioManager) context.getSystemService("audio");
        if (audioManager != null) {
            audioManager.abandonAudioFocus(this.d);
        }
    }
}
