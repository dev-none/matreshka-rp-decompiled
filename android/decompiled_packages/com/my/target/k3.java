package com.my.target;

import android.content.Context;
import android.net.Uri;
import android.util.AttributeSet;
import android.view.View;
import android.widget.FrameLayout;
import com.my.target.instreamads.InstreamAdPlayer;

/* JADX INFO: loaded from: classes6.dex */
public class k3 extends FrameLayout implements InstreamAdPlayer, y.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final z f4677a;
    public boolean b;
    public InstreamAdPlayer.AdPlayerListener c;
    public int d;
    public int e;
    public boolean f;
    public boolean g;
    public y h;

    public k3(Context context, AttributeSet attributeSet, int i) {
        this(context, attributeSet, i, new z(context));
    }

    @Override // com.my.target.y.a
    public void a(float f) {
        InstreamAdPlayer.AdPlayerListener adPlayerListener = this.c;
        if (adPlayerListener != null) {
            adPlayerListener.onVolumeChanged(f);
        }
    }

    @Override // com.my.target.y.a
    public void a(float f, float f2) {
    }

    @Override // com.my.target.y.a
    public void b() {
        InstreamAdPlayer.AdPlayerListener adPlayerListener = this.c;
        if (adPlayerListener != null) {
            adPlayerListener.onAdVideoCompleted();
        }
    }

    @Override // com.my.target.y.a
    public void d() {
        this.g = true;
        InstreamAdPlayer.AdPlayerListener adPlayerListener = this.c;
        if (adPlayerListener != null) {
            adPlayerListener.onAdVideoPaused();
        }
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer
    public void destroy() {
        y yVar = this.h;
        if (yVar != null) {
            yVar.destroy();
        }
    }

    @Override // com.my.target.y.a
    public void e() {
    }

    @Override // com.my.target.y.a
    public void f() {
        if (this.g) {
            InstreamAdPlayer.AdPlayerListener adPlayerListener = this.c;
            if (adPlayerListener != null) {
                adPlayerListener.onAdVideoResumed();
            }
            this.g = false;
        }
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer
    public InstreamAdPlayer.AdPlayerListener getAdPlayerListener() {
        return this.c;
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer
    public float getAdVideoDuration() {
        y yVar = this.h;
        if (yVar != null) {
            return yVar.getDuration();
        }
        return 0.0f;
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer
    public float getAdVideoPosition() {
        y yVar = this.h;
        if (yVar != null) {
            return yVar.i() / 1000.0f;
        }
        return 0.0f;
    }

    public int getPlaceholderHeight() {
        return this.e;
    }

    public int getPlaceholderWidth() {
        return this.d;
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer
    public View getView() {
        return this;
    }

    @Override // com.my.target.y.a
    public void l() {
        InstreamAdPlayer.AdPlayerListener adPlayerListener = this.c;
        if (adPlayerListener != null) {
            adPlayerListener.onAdVideoStopped();
        }
    }

    @Override // com.my.target.y.a
    public void n() {
    }

    /* JADX WARN: Code duplicated, block: B:32:0x005d A[PHI: r0
  0x005d: PHI (r0v10 int) = (r0v4 int), (r0v4 int), (r0v15 int), (r0v15 int) binds: [B:43:0x0080, B:44:0x0082, B:29:0x0052, B:30:0x0054] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:39:0x0074 A[PHI: r0
  0x0074: PHI (r0v11 int) = (r0v7 int), (r0v7 int), (r0v18 int), (r0v18 int) binds: [B:36:0x0069, B:37:0x006b, B:25:0x0041, B:26:0x0043] A[DONT_GENERATE, DONT_INLINE]] */
    @Override // android.widget.FrameLayout, android.view.View
    public void onMeasure(int i, int i2) {
        int i3;
        int iRound;
        int iRound2;
        int mode = View.MeasureSpec.getMode(i);
        int mode2 = View.MeasureSpec.getMode(i2);
        int size = View.MeasureSpec.getSize(i2);
        if (mode == 0) {
            mode = Integer.MIN_VALUE;
        }
        if (mode2 == 0) {
            mode2 = Integer.MIN_VALUE;
        }
        int i4 = this.e;
        if (i4 == 0 || (i3 = this.d) == 0) {
            super.onMeasure(i, i2);
            return;
        }
        float f = i3 / i4;
        int size2 = View.MeasureSpec.getSize(i);
        float f2 = size != 0 ? size2 / size : 0.0f;
        if (mode != 1073741824 || mode2 != 1073741824) {
            if (mode == Integer.MIN_VALUE && mode2 == Integer.MIN_VALUE) {
                if (f < f2) {
                    iRound2 = Math.round(size * f);
                    if (size2 <= 0 || iRound2 <= size2) {
                        size2 = iRound2;
                    } else {
                        size = Math.round(size2 / f);
                    }
                } else {
                    iRound = Math.round(size2 / f);
                    if (size <= 0 || iRound <= size) {
                        size = iRound;
                    } else {
                        size2 = Math.round(size * f);
                    }
                }
            } else if (mode == Integer.MIN_VALUE && mode2 == 1073741824) {
                iRound2 = Math.round(size * f);
                if (size2 <= 0 || iRound2 <= size2) {
                    size2 = iRound2;
                } else {
                    size = Math.round(size2 / f);
                }
            } else if (mode == 1073741824 && mode2 == Integer.MIN_VALUE) {
                iRound = Math.round(size2 / f);
                if (size <= 0 || iRound <= size) {
                    size = iRound;
                } else {
                    size2 = Math.round(size * f);
                }
            } else {
                size = 0;
                size2 = 0;
            }
        }
        super.onMeasure(View.MeasureSpec.makeMeasureSpec(size2, 1073741824), View.MeasureSpec.makeMeasureSpec(size, 1073741824));
    }

    @Override // com.my.target.y.a
    public void p() {
        InstreamAdPlayer.AdPlayerListener adPlayerListener;
        if (this.f || (adPlayerListener = this.c) == null) {
            return;
        }
        adPlayerListener.onAdVideoStarted();
        this.f = true;
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer
    public void pauseAdVideo() {
        y yVar = this.h;
        if (yVar != null) {
            yVar.pause();
        }
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer
    public void playAdVideo(Uri uri, int i, int i2) {
        this.d = i;
        this.e = i2;
        this.f = false;
        if (this.h == null) {
            y yVarA = w5.a(this.b, getContext());
            this.h = yVarA;
            yVarA.a(this);
        }
        this.f4677a.a(i, i2);
        this.h.a(uri, this.f4677a);
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer
    public void resumeAdVideo() {
        y yVar = this.h;
        if (yVar != null) {
            yVar.resume();
        }
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer
    public void setAdPlayerListener(InstreamAdPlayer.AdPlayerListener adPlayerListener) {
        this.c = adPlayerListener;
    }

    public void setUseExoPlayer(boolean z) {
        this.b = z;
    }

    public void setVideoPlayer(b2 b2Var) {
        this.h = b2Var;
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer
    public void setVolume(float f) {
        y yVar = this.h;
        if (yVar != null) {
            yVar.setVolume(f);
        }
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer
    public void stopAdVideo() {
        y yVar = this.h;
        if (yVar != null) {
            yVar.stop();
        }
    }

    public k3(Context context) {
        this(context, null);
    }

    public k3(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public k3(Context context, AttributeSet attributeSet, int i, z zVar) {
        super(context, attributeSet, i);
        this.b = true;
        this.f4677a = zVar;
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -2);
        layoutParams.gravity = 17;
        addView(zVar, layoutParams);
    }

    @Override // com.my.target.y.a
    public void a(String str) {
        InstreamAdPlayer.AdPlayerListener adPlayerListener = this.c;
        if (adPlayerListener != null) {
            adPlayerListener.onAdVideoError(str);
        }
    }

    @Override // com.my.target.instreamads.InstreamAdPlayer
    public void playAdVideo(Uri uri, int i, int i2, float f) {
        playAdVideo(uri, i, i2);
        y yVar = this.h;
        if (yVar != null) {
            yVar.seekTo((long) (f * 1000.0f));
        }
    }
}
