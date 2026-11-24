package com.my.target;

import android.content.Context;
import android.graphics.SurfaceTexture;
import android.media.MediaPlayer;
import android.net.Uri;
import android.util.Log;
import android.view.Surface;
import android.view.TextureView;

/* JADX INFO: loaded from: classes6.dex */
public class r1 implements y, MediaPlayer.OnCompletionListener, MediaPlayer.OnErrorListener, MediaPlayer.OnPreparedListener, TextureView.SurfaceTextureListener, MediaPlayer.OnInfoListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final u9 f4796a;
    public final a b;
    public final MediaPlayer c;
    public y.a d;
    public Surface e;
    public int f;
    public float g;
    public int h;
    public long i;
    public z j;
    public Uri k;

    public static class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f4797a;
        public r1 b;
        public y.a c;
        public int d;
        public float e;

        public a(int i) {
            this.f4797a = i;
        }

        public void a(y.a aVar) {
            this.c = aVar;
        }

        @Override // java.lang.Runnable
        public void run() {
            r1 r1Var = this.b;
            if (r1Var == null) {
                return;
            }
            float fI = r1Var.i() / 1000.0f;
            float duration = this.b.getDuration();
            if (this.e == fI) {
                this.d++;
            } else {
                y.a aVar = this.c;
                if (aVar != null) {
                    aVar.a(fI, duration);
                }
                this.e = fI;
                if (this.d > 0) {
                    this.d = 0;
                }
            }
            if (this.d > this.f4797a) {
                y.a aVar2 = this.c;
                if (aVar2 != null) {
                    aVar2.n();
                }
                this.d = 0;
            }
        }

        public void a(r1 r1Var) {
            this.b = r1Var;
        }
    }

    public r1(MediaPlayer mediaPlayer, a aVar) {
        this.f4796a = u9.a(200);
        this.f = 0;
        this.g = 1.0f;
        this.i = 0L;
        this.c = mediaPlayer;
        this.b = aVar;
        aVar.a(this);
    }

    public static y j() {
        return new r1();
    }

    @Override // com.my.target.y
    public void a(y.a aVar) {
        this.d = aVar;
        this.b.a(aVar);
    }

    @Override // com.my.target.y
    public boolean b() {
        return this.f == 2;
    }

    @Override // com.my.target.y
    public void c() {
        setVolume(0.2f);
    }

    @Override // com.my.target.y
    public void d() {
        setVolume(0.0f);
    }

    @Override // com.my.target.y
    public void destroy() {
        this.d = null;
        this.f = 5;
        this.f4796a.b(this.b);
        k();
        if (l()) {
            try {
                this.c.stop();
            } catch (Throwable th) {
                gb.a("DefaultVideoPlayer: Media player's stop method called in wrong state, " + th.getMessage());
            }
        }
        try {
            this.c.release();
        } catch (Throwable th2) {
            gb.a("DefaultVideoPlayer: Media player's release method called in wrong state, " + th2.getMessage());
        }
        this.j = null;
    }

    @Override // com.my.target.y
    public boolean e() {
        int i = this.f;
        return i >= 1 && i < 3;
    }

    @Override // com.my.target.y
    public void f() {
        try {
            this.c.start();
            this.f = 1;
        } catch (Throwable th) {
            gb.a("DefaultVideoPlayer: Media player's start method called in wrong state, " + th.getMessage());
        }
        seekTo(0L);
    }

    @Override // com.my.target.y
    public boolean g() {
        return this.g == 0.0f;
    }

    @Override // com.my.target.y
    public float getDuration() {
        if (!l()) {
            return 0.0f;
        }
        try {
            return this.c.getDuration() / 1000.0f;
        } catch (Throwable th) {
            gb.a("DefaultVideoPlayer: Media player's get duration method called in wrong state, " + th.getMessage());
            return 0.0f;
        }
    }

    @Override // com.my.target.y
    public Uri getUri() {
        return this.k;
    }

    @Override // com.my.target.y
    public void h() {
        setVolume(1.0f);
    }

    @Override // com.my.target.y
    public long i() {
        if (!l() || this.f == 3) {
            return 0L;
        }
        try {
            return this.c.getCurrentPosition();
        } catch (Throwable th) {
            gb.a("DefaultVideoPlayer: media player's get current position method called in wrong state, " + th.getMessage());
            return 0L;
        }
    }

    @Override // com.my.target.y
    public boolean isPlaying() {
        return this.f == 1;
    }

    public final void k() {
        z zVar = this.j;
        TextureView textureView = zVar != null ? zVar.getTextureView() : null;
        if (textureView != null) {
            if (textureView.getSurfaceTextureListener() != this) {
                Log.w("DefaultVideoPlayer", "SurfaceTextureListener already unset or replaced.");
            } else {
                textureView.setSurfaceTextureListener(null);
            }
        }
    }

    public final boolean l() {
        int i = this.f;
        return i >= 1 && i <= 4;
    }

    @Override // android.media.MediaPlayer.OnCompletionListener
    public void onCompletion(MediaPlayer mediaPlayer) {
        y.a aVar;
        float duration = getDuration();
        this.f = 4;
        if (duration > 0.0f && (aVar = this.d) != null) {
            aVar.a(duration, duration);
        }
        y.a aVar2 = this.d;
        if (aVar2 != null) {
            aVar2.b();
        }
    }

    @Override // android.media.MediaPlayer.OnErrorListener
    public boolean onError(MediaPlayer mediaPlayer, int i, int i2) {
        String str;
        this.f4796a.b(this.b);
        k();
        a((Surface) null);
        String str2 = i == 100 ? "Server died" : "Unknown error";
        if (i2 == -1004) {
            str = "IO error";
        } else if (i2 == -1007) {
            str = "Malformed error";
        } else if (i2 == -1010) {
            str = "Unsupported error";
        } else if (i2 == -110) {
            str = "Timed out error";
        } else {
            str = i2 == Integer.MIN_VALUE ? "Low-level system error" : "Unknown";
        }
        String str3 = str2 + " (reason: " + str + ")";
        gb.a("DefaultVideoPlayer: Video error - " + str3);
        y.a aVar = this.d;
        if (aVar != null) {
            aVar.a(str3);
        }
        if (this.f > 0) {
            try {
                this.c.reset();
            } catch (Throwable th) {
                gb.a("DefaultVideoPlayer: Media player's reset method called in wrong state, " + th.getMessage());
            }
        }
        this.f = 0;
        return true;
    }

    @Override // android.media.MediaPlayer.OnInfoListener
    public boolean onInfo(MediaPlayer mediaPlayer, int i, int i2) {
        if (i != 3) {
            return false;
        }
        y.a aVar = this.d;
        if (aVar == null) {
            return true;
        }
        aVar.p();
        return true;
    }

    @Override // android.media.MediaPlayer.OnPreparedListener
    public void onPrepared(MediaPlayer mediaPlayer) {
        try {
            float f = this.g;
            mediaPlayer.setVolume(f, f);
            this.f = 1;
            mediaPlayer.start();
            long j = this.i;
            if (j > 0) {
                seekTo(j);
            }
        } catch (Throwable th) {
            gb.a("DefaultVideoPlayer: Media player's start method called in wrong state, " + th.getMessage());
        }
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public void onSurfaceTextureAvailable(SurfaceTexture surfaceTexture, int i, int i2) {
        a(new Surface(surfaceTexture));
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public boolean onSurfaceTextureDestroyed(SurfaceTexture surfaceTexture) {
        a((Surface) null);
        return true;
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public void onSurfaceTextureSizeChanged(SurfaceTexture surfaceTexture, int i, int i2) {
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public void onSurfaceTextureUpdated(SurfaceTexture surfaceTexture) {
    }

    @Override // com.my.target.y
    public void pause() {
        if (this.f == 1) {
            this.f4796a.b(this.b);
            try {
                this.h = this.c.getCurrentPosition();
                this.c.pause();
            } catch (Throwable th) {
                gb.a("DefaultVideoPlayer: Media player's pause or get current position method called in wrong state, " + th.getMessage());
            }
            this.f = 2;
            y.a aVar = this.d;
            if (aVar != null) {
                aVar.d();
            }
        }
    }

    @Override // com.my.target.y
    public void resume() {
        if (this.f == 2) {
            this.f4796a.a(this.b);
            try {
                this.c.start();
            } catch (Throwable unused) {
                gb.a("DefaultVideoPlayer: Media player's start method called in wrong state");
            }
            int i = this.h;
            if (i > 0) {
                try {
                    this.c.seekTo(i);
                } catch (Throwable unused2) {
                    gb.a("DefaultVideoPlayer: Media player's seek to method called in wrong state");
                }
                this.h = 0;
            }
            this.f = 1;
            y.a aVar = this.d;
            if (aVar != null) {
                aVar.f();
            }
        }
    }

    @Override // com.my.target.y
    public void seekTo(long j) {
        this.i = j;
        if (l()) {
            try {
                this.c.seekTo((int) j);
                this.i = 0L;
            } catch (Throwable th) {
                gb.a("DefaultVideoPlayer: media player's seek to method called in wrong state, " + th.getMessage());
            }
        }
    }

    @Override // com.my.target.y
    public void setVolume(float f) {
        this.g = f;
        if (l()) {
            try {
                this.c.setVolume(f, f);
            } catch (Throwable th) {
                gb.a("DefaultVideoPlayer: Media player's set volume method called in wrong state, " + th.getMessage());
            }
        }
        y.a aVar = this.d;
        if (aVar != null) {
            aVar.a(f);
        }
    }

    @Override // com.my.target.y
    public void stop() {
        this.f4796a.b(this.b);
        try {
            this.c.stop();
        } catch (Throwable th) {
            gb.a("DefaultVideoPlayer: Media player's stop method called in wrong state, " + th.getMessage());
        }
        y.a aVar = this.d;
        if (aVar != null) {
            aVar.l();
        }
        this.f = 3;
    }

    @Override // com.my.target.y
    public void a(z zVar) {
        k();
        if (!(zVar instanceof z)) {
            this.j = null;
            a((Surface) null);
            return;
        }
        this.j = zVar;
        TextureView textureView = zVar.getTextureView();
        if (textureView.getSurfaceTextureListener() != null) {
            Log.w("DefaultVideoPlayer", "Replacing existing SurfaceTextureListener");
        }
        textureView.setSurfaceTextureListener(this);
        SurfaceTexture surfaceTexture = textureView.isAvailable() ? textureView.getSurfaceTexture() : null;
        a(surfaceTexture != null ? new Surface(surfaceTexture) : null);
    }

    @Override // com.my.target.y
    public void a(Uri uri, z zVar) {
        a(zVar);
        a(uri, zVar.getContext());
    }

    public r1() {
        this(new MediaPlayer(), new a(50));
    }

    @Override // com.my.target.y
    public void a(Uri uri, Context context) {
        this.k = uri;
        gb.a("DefaultVideoPlayer: Play video in Android MediaPlayer - " + uri);
        if (this.f != 0) {
            try {
                this.c.reset();
            } catch (Throwable unused) {
                gb.a("DefaultVideoPlayer: Media player's reset method called in wrong state");
            }
            this.f = 0;
        }
        this.c.setOnCompletionListener(this);
        this.c.setOnErrorListener(this);
        this.c.setOnPreparedListener(this);
        this.c.setOnInfoListener(this);
        try {
            this.c.setDataSource(context, uri);
            y.a aVar = this.d;
            if (aVar != null) {
                aVar.e();
            }
            try {
                this.c.prepareAsync();
            } catch (Throwable th) {
                gb.a("DefaultVideoPlayer: Media player's prepare async method called in wrong state, " + th.getMessage());
            }
            this.f4796a.a(this.b);
        } catch (Throwable th2) {
            if (this.d != null) {
                this.d.a("DefaultVideoPlayer data source error: " + th2.getMessage());
            }
            gb.a("DefaultVideoPlayer: Unable to parse video source, " + th2.getMessage());
            this.f = 5;
            th2.printStackTrace();
        }
    }

    @Override // com.my.target.y
    public void a() {
        if (this.g == 1.0f) {
            setVolume(0.0f);
        } else {
            setVolume(1.0f);
        }
    }

    public final void a(Surface surface) {
        try {
            this.c.setSurface(surface);
        } catch (Throwable th) {
            gb.a("DefaultVideoPlayer: Media player's set surface method called in wrong state, " + th.getMessage());
        }
        Surface surface2 = this.e;
        if (surface2 != null && surface2 != surface) {
            surface2.release();
        }
        this.e = surface;
    }
}
