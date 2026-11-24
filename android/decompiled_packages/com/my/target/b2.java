package com.my.target;

import android.content.Context;
import android.net.Uri;
import androidx.media3.common.PlaybackException;
import androidx.media3.common.Player;
import androidx.media3.exoplayer.ExoPlayer;
import androidx.media3.exoplayer.source.MediaSource;

/* JADX INFO: loaded from: classes6.dex */
public final class b2 implements Player.Listener, y {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final u9 f4549a = u9.a(200);
    public final ExoPlayer b;
    public final a c;
    public y.a d;
    public MediaSource e;
    public Uri f;
    public boolean g;
    public boolean h;

    public static final class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f4550a;
        public final ExoPlayer b;
        public y.a c;
        public int d;
        public float e;

        public a(int i, ExoPlayer exoPlayer) {
            this.f4550a = i;
            this.b = exoPlayer;
        }

        public void a(y.a aVar) {
            this.c = aVar;
        }

        @Override // java.lang.Runnable
        public void run() {
            try {
                float currentPosition = this.b.getCurrentPosition() / 1000.0f;
                float duration = this.b.getDuration() / 1000.0f;
                if (this.e == currentPosition) {
                    this.d++;
                } else {
                    y.a aVar = this.c;
                    if (aVar != null) {
                        aVar.a(currentPosition, duration);
                    }
                    this.e = currentPosition;
                    if (this.d > 0) {
                        this.d = 0;
                    }
                }
                if (this.d > this.f4550a) {
                    y.a aVar2 = this.c;
                    if (aVar2 != null) {
                        aVar2.n();
                    }
                    this.d = 0;
                }
            } catch (Throwable th) {
                String str = "ExoVideoPlayer: Error - " + th.getMessage();
                gb.a(str);
                y.a aVar3 = this.c;
                if (aVar3 != null) {
                    aVar3.a(str);
                }
            }
        }
    }

    public b2(Context context) {
        ExoPlayer exoPlayerBuild = new ExoPlayer.Builder(context).build();
        this.b = exoPlayerBuild;
        exoPlayerBuild.addListener(this);
        this.c = new a(50, exoPlayerBuild);
    }

    public static b2 a(Context context) {
        return new b2(context);
    }

    @Override // com.my.target.y
    public boolean b() {
        return this.g && this.h;
    }

    @Override // com.my.target.y
    public void c() {
        try {
            this.b.setVolume(0.2f);
        } catch (Throwable th) {
            gb.a("ExoVideoPlayer: Error - " + th.getMessage());
        }
    }

    @Override // com.my.target.y
    public void d() {
        try {
            this.b.setVolume(0.0f);
        } catch (Throwable th) {
            gb.a("ExoVideoPlayer: Error - " + th.getMessage());
        }
        y.a aVar = this.d;
        if (aVar != null) {
            aVar.a(0.0f);
        }
    }

    @Override // com.my.target.y
    public void destroy() {
        this.f = null;
        this.g = false;
        this.h = false;
        this.d = null;
        this.f4549a.b(this.c);
        try {
            this.b.setVideoTextureView(null);
            this.b.stop();
            this.b.release();
            this.b.removeListener(this);
        } catch (Throwable unused) {
        }
    }

    @Override // com.my.target.y
    public boolean e() {
        return this.g;
    }

    @Override // com.my.target.y
    public void f() {
        try {
            this.b.seekTo(0L);
            this.b.setPlayWhenReady(true);
        } catch (Throwable th) {
            a(th);
        }
    }

    @Override // com.my.target.y
    public boolean g() {
        try {
            return this.b.getVolume() == 0.0f;
        } catch (Throwable th) {
            gb.a("ExoVideoPlayer: Error - " + th.getMessage());
            return false;
        }
    }

    @Override // com.my.target.y
    public float getDuration() {
        try {
            return this.b.getDuration() / 1000.0f;
        } catch (Throwable th) {
            gb.a("ExoVideoPlayer: Error - " + th.getMessage());
            return 0.0f;
        }
    }

    @Override // com.my.target.y
    public Uri getUri() {
        return this.f;
    }

    @Override // com.my.target.y
    public void h() {
        try {
            this.b.setVolume(1.0f);
        } catch (Throwable th) {
            gb.a("ExoVideoPlayer: Error - " + th.getMessage());
        }
        y.a aVar = this.d;
        if (aVar != null) {
            aVar.a(1.0f);
        }
    }

    @Override // com.my.target.y
    public long i() {
        try {
            return this.b.getCurrentPosition();
        } catch (Throwable th) {
            gb.a("ExoVideoPlayer: Error - " + th.getMessage());
            return 0L;
        }
    }

    @Override // com.my.target.y
    public boolean isPlaying() {
        return this.g && !this.h;
    }

    @Override // androidx.media3.common.Player.Listener
    public void onPlayerError(PlaybackException playbackException) {
        this.h = false;
        this.g = false;
        if (this.d != null) {
            StringBuilder sb = new StringBuilder("ExoVideoPlayer: Error - ");
            sb.append(playbackException != null ? playbackException.getMessage() : "unknown video error");
            this.d.a(sb.toString());
        }
    }

    @Override // androidx.media3.common.Player.Listener
    public void onPlayerStateChanged(boolean z, int i) {
        if (i == 1) {
            gb.a("ExoVideoPlayer: Player state is changed to IDLE");
            if (this.g) {
                this.g = false;
                y.a aVar = this.d;
                if (aVar != null) {
                    aVar.l();
                }
            }
            this.f4549a.b(this.c);
            return;
        }
        if (i == 2) {
            gb.a("ExoVideoPlayer: Player state is changed to BUFFERING");
            if (!z || this.g) {
                return;
            }
            this.f4549a.a(this.c);
            return;
        }
        if (i != 3) {
            if (i != 4) {
                return;
            }
            gb.a("ExoVideoPlayer: Player state is changed to ENDED");
            this.h = false;
            this.g = false;
            float duration = getDuration();
            y.a aVar2 = this.d;
            if (aVar2 != null) {
                aVar2.a(duration, duration);
            }
            y.a aVar3 = this.d;
            if (aVar3 != null) {
                aVar3.b();
            }
            this.f4549a.b(this.c);
            return;
        }
        gb.a("ExoVideoPlayer: Player state is changed to READY");
        if (!z) {
            if (!this.h) {
                this.h = true;
                y.a aVar4 = this.d;
                if (aVar4 != null) {
                    aVar4.d();
                }
            }
            this.f4549a.b(this.c);
            return;
        }
        y.a aVar5 = this.d;
        if (aVar5 != null) {
            aVar5.p();
        }
        if (!this.g) {
            this.g = true;
        } else if (this.h) {
            this.h = false;
            y.a aVar6 = this.d;
            if (aVar6 != null) {
                aVar6.f();
            }
        }
        this.f4549a.a(this.c);
    }

    @Override // com.my.target.y
    public void pause() {
        if (!this.g || this.h) {
            return;
        }
        try {
            this.b.setPlayWhenReady(false);
        } catch (Throwable th) {
            a(th);
        }
    }

    @Override // com.my.target.y
    public void resume() {
        try {
            if (this.g) {
                this.b.setPlayWhenReady(true);
                return;
            }
            MediaSource mediaSource = this.e;
            if (mediaSource != null) {
                this.b.setMediaSource(mediaSource, true);
                this.b.prepare();
            }
        } catch (Throwable th) {
            a(th);
        }
    }

    @Override // com.my.target.y
    public void seekTo(long j) {
        try {
            this.b.seekTo(j);
        } catch (Throwable th) {
            gb.a("ExoVideoPlayer: Error - " + th.getMessage());
        }
    }

    @Override // com.my.target.y
    public void setVolume(float f) {
        try {
            this.b.setVolume(f);
        } catch (Throwable th) {
            gb.a("ExoVideoPlayer: Error - " + th.getMessage());
        }
        y.a aVar = this.d;
        if (aVar != null) {
            aVar.a(f);
        }
    }

    @Override // com.my.target.y
    public void stop() {
        try {
            this.b.stop();
            this.b.clearMediaItems();
        } catch (Throwable th) {
            a(th);
        }
    }

    @Override // com.my.target.y
    public void a(y.a aVar) {
        this.d = aVar;
        this.c.a(aVar);
    }

    @Override // com.my.target.y
    public void a(z zVar) {
        try {
            if (zVar != null) {
                zVar.setExoPlayer(this.b);
            } else {
                this.b.setVideoTextureView(null);
            }
        } catch (Throwable th) {
            a(th);
        }
    }

    @Override // com.my.target.y
    public void a(Uri uri, z zVar) {
        a(zVar);
        a(uri, zVar.getContext());
    }

    @Override // com.my.target.y
    public void a(Uri uri, Context context) {
        gb.a("ExoVideoPlayer: prepare to play video in ExoPlayer");
        this.f = uri;
        this.h = false;
        y.a aVar = this.d;
        if (aVar != null) {
            aVar.e();
        }
        try {
            this.f4549a.a(this.c);
            this.b.setPlayWhenReady(true);
            if (!this.g) {
                MediaSource mediaSourceA = x6.a(uri, context);
                this.e = mediaSourceA;
                this.b.setMediaSource(mediaSourceA);
                this.b.prepare();
                gb.a("ExoVideoPlayer: Play new video in ExoPlayer");
                return;
            }
            gb.b("ExoVideoPlayer: New source url not set! Will play previous video! started = true");
        } catch (Throwable th) {
            String str = "ExoVideoPlayer: Error - " + th.getMessage();
            gb.a(str);
            y.a aVar2 = this.d;
            if (aVar2 != null) {
                aVar2.a(str);
            }
        }
    }

    @Override // com.my.target.y
    public void a() {
        try {
            setVolume(((double) this.b.getVolume()) == 1.0d ? 0.0f : 1.0f);
        } catch (Throwable th) {
            gb.a("ExoVideoPlayer: error - " + th.getMessage());
        }
    }

    public final void a(Throwable th) {
        String str = "ExoVideoPlayer: Error - " + th.getMessage();
        gb.a(str);
        y.a aVar = this.d;
        if (aVar != null) {
            aVar.a(str);
        }
    }
}
