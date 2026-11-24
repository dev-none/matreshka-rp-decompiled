package com.pushwoosh.inapp.ui;

import android.content.res.ColorStateList;
import android.graphics.Color;
import android.graphics.Matrix;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.media.AudioAttributes;
import android.media.AudioManager;
import android.media.MediaPlayer;
import android.view.Surface;
import android.view.TextureView;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.ProgressBar;
import androidx.core.view.ViewCompat;
import com.bumptech.glide.Glide;
import com.pushwoosh.inapp.ui.activity.InAppOverlayActivity;
import com.pushwoosh.internal.utils.PWLog;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class n1 extends FrameLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Function0 f5148a;
    public Function0 b;
    public final TextureView c;
    public final ImageView d;
    public final ProgressBar e;
    public final AudioManager f;
    public final AudioManager.OnAudioFocusChangeListener g;
    public boolean h;
    public MediaPlayer i;
    public Surface j;
    public String k;
    public String l;
    public boolean m;
    public boolean n;
    public boolean o;
    public boolean p;
    public boolean q;
    public int r;
    public int s;
    public final Matrix t;
    public boolean u;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public n1(InAppOverlayActivity context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        TextureView textureView = new TextureView(context);
        this.c = textureView;
        ImageView imageView = new ImageView(context);
        this.d = imageView;
        ProgressBar progressBar = new ProgressBar(context);
        this.e = progressBar;
        Object systemService = context.getSystemService("audio");
        this.f = systemService instanceof AudioManager ? (AudioManager) systemService : null;
        this.g = new AudioManager.OnAudioFocusChangeListener() { // from class: com.pushwoosh.inapp.ui.n1$$ExternalSyntheticLambda5
            @Override // android.media.AudioManager.OnAudioFocusChangeListener
            public final void onAudioFocusChange(int i) {
                n1.a(this.f$0, i);
            }
        };
        this.t = new Matrix();
        this.u = true;
        setBackgroundColor(ViewCompat.MEASURED_STATE_MASK);
        setKeepScreenOn(true);
        addView(textureView, new FrameLayout.LayoutParams(-1, -1));
        imageView.setScaleType(ImageView.ScaleType.FIT_CENTER);
        imageView.setVisibility(8);
        addView(imageView, new FrameLayout.LayoutParams(-1, -1));
        progressBar.setIndeterminate(true);
        progressBar.setIndeterminateTintList(ColorStateList.valueOf(-1));
        progressBar.setVisibility(8);
        addView(progressBar, new FrameLayout.LayoutParams(-2, -2, 17));
        textureView.setSurfaceTextureListener(new m1(this));
    }

    public static final void a(n1 this$0, int i) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (i == -2 || i == -1) {
            this$0.setMuted(true);
        }
    }

    public static final boolean b(n1 this$0, MediaPlayer mediaPlayer, int i, int i2) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (!this$0.n) {
            if (i == 701) {
                this$0.e.setVisibility(0);
            } else if (i == 702) {
                this$0.e.setVisibility(8);
            }
        }
        return false;
    }

    public static final void c(n1 this$0, MediaPlayer mediaPlayer, int i, int i2) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.r = i;
        this$0.s = i2;
        this$0.b();
    }

    public final void d() {
        String str;
        Surface surface;
        if (this.n || this.o || this.i != null || (str = this.k) == null || (surface = this.j) == null) {
            return;
        }
        MediaPlayer mediaPlayer = new MediaPlayer();
        try {
            mediaPlayer.setSurface(surface);
            mediaPlayer.setAudioAttributes(new AudioAttributes.Builder().setUsage(1).setContentType(3).build());
            mediaPlayer.setLooping(this.m);
            float f = this.u ? 0.0f : 1.0f;
            try {
                mediaPlayer.setVolume(f, f);
            } catch (IllegalStateException e) {
                PWLog.warn("InAppVideoPlayerView", "video: volume refused (" + e + ')');
            }
            mediaPlayer.setOnPreparedListener(new MediaPlayer.OnPreparedListener() { // from class: com.pushwoosh.inapp.ui.n1$$ExternalSyntheticLambda0
                @Override // android.media.MediaPlayer.OnPreparedListener
                public final void onPrepared(MediaPlayer mediaPlayer2) {
                    n1.a(this.f$0, mediaPlayer2);
                }
            });
            mediaPlayer.setOnErrorListener(new MediaPlayer.OnErrorListener() { // from class: com.pushwoosh.inapp.ui.n1$$ExternalSyntheticLambda1
                @Override // android.media.MediaPlayer.OnErrorListener
                public final boolean onError(MediaPlayer mediaPlayer2, int i, int i2) {
                    return n1.a(this.f$0, mediaPlayer2, i, i2);
                }
            });
            mediaPlayer.setOnInfoListener(new MediaPlayer.OnInfoListener() { // from class: com.pushwoosh.inapp.ui.n1$$ExternalSyntheticLambda2
                @Override // android.media.MediaPlayer.OnInfoListener
                public final boolean onInfo(MediaPlayer mediaPlayer2, int i, int i2) {
                    return n1.b(this.f$0, mediaPlayer2, i, i2);
                }
            });
            mediaPlayer.setOnCompletionListener(new MediaPlayer.OnCompletionListener() { // from class: com.pushwoosh.inapp.ui.n1$$ExternalSyntheticLambda3
                @Override // android.media.MediaPlayer.OnCompletionListener
                public final void onCompletion(MediaPlayer mediaPlayer2) {
                    n1.b(this.f$0, mediaPlayer2);
                }
            });
            mediaPlayer.setOnVideoSizeChangedListener(new MediaPlayer.OnVideoSizeChangedListener() { // from class: com.pushwoosh.inapp.ui.n1$$ExternalSyntheticLambda4
                @Override // android.media.MediaPlayer.OnVideoSizeChangedListener
                public final void onVideoSizeChanged(MediaPlayer mediaPlayer2, int i, int i2) {
                    n1.c(this.f$0, mediaPlayer2, i, i2);
                }
            });
            mediaPlayer.setDataSource(str);
            mediaPlayer.prepareAsync();
            this.i = mediaPlayer;
        } catch (Exception e2) {
            mediaPlayer.release();
            PWLog.warn("InAppVideoPlayerView", "video: cannot open '" + str + "' (" + e2 + ')');
            c();
        }
    }

    public final void e() {
        if (this.n) {
            return;
        }
        this.n = true;
        a();
        setKeepScreenOn(false);
        MediaPlayer mediaPlayer = this.i;
        if (mediaPlayer != null) {
            this.i = null;
            mediaPlayer.setOnPreparedListener(null);
            mediaPlayer.setOnErrorListener(null);
            mediaPlayer.setOnInfoListener(null);
            mediaPlayer.setOnCompletionListener(null);
            mediaPlayer.setOnVideoSizeChangedListener(null);
            mediaPlayer.release();
        }
        Surface surface = this.j;
        if (surface != null) {
            surface.release();
        }
        this.j = null;
    }

    public final Function0<Unit> getOnFailed() {
        return this.f5148a;
    }

    public final Function0<Unit> getOnMuteStateChanged() {
        return this.b;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        e();
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
        if (z) {
            b();
        }
    }

    public final void setMuted(boolean z) {
        AudioManager audioManager;
        if (this.u == z) {
            return;
        }
        this.u = z;
        MediaPlayer mediaPlayer = this.i;
        if (mediaPlayer != null) {
            float f = z ? 0.0f : 1.0f;
            try {
                mediaPlayer.setVolume(f, f);
            } catch (IllegalStateException e) {
                PWLog.warn("InAppVideoPlayerView", "video: volume refused (" + e + ')');
            }
        }
        if (z) {
            a();
        } else {
            try {
                MediaPlayer mediaPlayer2 = this.i;
                if (mediaPlayer2 != null) {
                    if (mediaPlayer2.isPlaying() && !this.h && (audioManager = this.f) != null) {
                        this.h = audioManager.requestAudioFocus(this.g, 3, 3) == 1;
                    }
                }
            } catch (IllegalStateException unused) {
            }
        }
        Function0 function0 = this.b;
        if (function0 != null) {
            function0.invoke();
        }
    }

    public final void setOnFailed(Function0<Unit> function0) {
        this.f5148a = function0;
    }

    public final void setOnMuteStateChanged(Function0<Unit> function0) {
        this.b = function0;
    }

    public static final void a(n1 n1Var) {
        MediaPlayer mediaPlayer = n1Var.i;
        if (mediaPlayer != null) {
            try {
                mediaPlayer.setSurface(null);
            } catch (IllegalStateException e) {
                PWLog.warn("InAppVideoPlayerView", "video: surface detach refused (" + e + ')');
            }
        }
        Surface surface = n1Var.j;
        if (surface != null) {
            surface.release();
        }
        n1Var.j = null;
    }

    public final void c() {
        this.o = true;
        this.e.setVisibility(8);
        a();
        setKeepScreenOn(false);
        MediaPlayer mediaPlayer = this.i;
        if (mediaPlayer != null) {
            this.i = null;
            mediaPlayer.setOnPreparedListener(null);
            mediaPlayer.setOnErrorListener(null);
            mediaPlayer.setOnInfoListener(null);
            mediaPlayer.setOnCompletionListener(null);
            mediaPlayer.setOnVideoSizeChangedListener(null);
            mediaPlayer.release();
        }
        String str = this.l;
        if (str != null && str.length() != 0) {
            this.d.setScaleType(ImageView.ScaleType.CENTER_CROP);
            ImageView imageView = this.d;
            Intrinsics.checkNotNullParameter(imageView, "imageView");
            if (str.length() == 0) {
                imageView.setVisibility(8);
                return;
            }
            imageView.setVisibility(0);
            GradientDrawable gradientDrawable = new GradientDrawable();
            gradientDrawable.setColor(Color.parseColor("#E0E0E0"));
            Glide.with(imageView).load(str).placeholder(gradientDrawable).error((Drawable) gradientDrawable).into(imageView);
            return;
        }
        Function0 function0 = this.f5148a;
        if (function0 != null) {
            function0.invoke();
        }
    }

    public static final void b(n1 this$0, MediaPlayer mediaPlayer) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (this$0.n) {
            return;
        }
        this$0.a();
        this$0.setKeepScreenOn(false);
    }

    public final void b() {
        int i;
        int width = this.c.getWidth();
        int height = this.c.getHeight();
        int i2 = this.r;
        if (i2 <= 0 || (i = this.s) <= 0 || width <= 0 || height <= 0) {
            return;
        }
        float f = width;
        float f2 = height;
        float fMin = Math.min(f / i2, f2 / i);
        float f3 = this.r * fMin;
        float f4 = this.s * fMin;
        this.t.setScale(f3 / f, f4 / f2);
        this.t.postTranslate((f - f3) / 2.0f, (f2 - f4) / 2.0f);
        this.c.setTransform(this.t);
    }

    public static final void a(n1 this$0, MediaPlayer prepared) {
        AudioManager audioManager;
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullExpressionValue(prepared, "prepared");
        if (this$0.n) {
            return;
        }
        this$0.e.setVisibility(8);
        if (this$0.p) {
            this$0.q = true;
            return;
        }
        this$0.d.setVisibility(8);
        if (!this$0.u && !this$0.h && (audioManager = this$0.f) != null) {
            this$0.h = audioManager.requestAudioFocus(this$0.g, 3, 3) == 1;
        }
        try {
            prepared.start();
        } catch (IllegalStateException e) {
            PWLog.warn("InAppVideoPlayerView", "video: start refused (" + e + ')');
            this$0.c();
        }
    }

    public final void a(MediaPlayer mediaPlayer) {
        AudioManager audioManager;
        this.d.setVisibility(8);
        if (!this.u && !this.h && (audioManager = this.f) != null) {
            this.h = audioManager.requestAudioFocus(this.g, 3, 3) == 1;
        }
        try {
            mediaPlayer.start();
        } catch (IllegalStateException e) {
            PWLog.warn("InAppVideoPlayerView", "video: start refused (" + e + ')');
            c();
        }
    }

    public static final boolean a(n1 this$0, MediaPlayer mediaPlayer, int i, int i2) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (this$0.n) {
            return true;
        }
        PWLog.warn("InAppVideoPlayerView", "video: playback error what=" + i + " extra=" + i2);
        this$0.c();
        return true;
    }

    public final void a() {
        if (this.h) {
            this.h = false;
            AudioManager audioManager = this.f;
            if (audioManager != null) {
                audioManager.abandonAudioFocus(this.g);
            }
        }
    }
}
