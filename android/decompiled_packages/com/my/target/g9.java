package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.media.AudioManager;
import android.net.Uri;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.ProgressBar;
import com.my.target.common.models.ImageData;
import com.my.target.common.models.VideoData;

/* JADX INFO: loaded from: classes6.dex */
public class g9 extends ViewGroup implements z.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ma f4637a;
    public final kb b;
    public final y2 c;
    public final b d;
    public final z e;
    public final FrameLayout f;
    public final ProgressBar g;
    public final boolean h;
    public final boolean i;
    public a j;
    public y k;
    public VideoData l;
    public Bitmap m;
    public int n;
    public int o;
    public boolean p;

    public interface a extends AudioManager.OnAudioFocusChangeListener, y.a {
        void c();

        void i();

        void k();

        void o();
    }

    public class b implements View.OnClickListener {
        public b() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            g9 g9Var = g9.this;
            if (g9Var.j == null) {
                return;
            }
            if (!g9Var.e() && !g9.this.d()) {
                g9.this.j.o();
            } else if (g9.this.d()) {
                g9.this.j.i();
            } else {
                g9.this.j.c();
            }
        }
    }

    public g9(Context context, kb kbVar, boolean z, boolean z2) {
        super(context);
        this.p = true;
        this.b = kbVar;
        this.h = z;
        this.i = z2;
        this.f4637a = new ma(context);
        this.c = new y2(context);
        this.g = new ProgressBar(context, null, android.R.attr.progressBarStyleLarge);
        this.f = new FrameLayout(context);
        z zVar = new z(context);
        this.e = zVar;
        zVar.setAdVideoViewListener(this);
        this.d = new b();
    }

    public void a() {
        y yVar = this.k;
        if (yVar != null) {
            yVar.destroy();
        }
        this.k = null;
    }

    public void b(o4 o4Var) {
        a();
        a(o4Var);
    }

    public void c() {
        kb.b(this.c, "play_button");
        kb.b(this.f4637a, "media_image");
        kb.b(this.e, "video_texture");
        kb.b(this.f, "clickable_layout");
        this.f4637a.setScaleType(ImageView.ScaleType.CENTER_INSIDE);
        this.f4637a.setAdjustViewBounds(true);
        addView(this.e);
        this.g.setVisibility(8);
        addView(this.f4637a);
        addView(this.g);
        addView(this.f);
        addView(this.c);
    }

    public boolean d() {
        y yVar = this.k;
        return yVar != null && yVar.b();
    }

    public boolean e() {
        y yVar = this.k;
        return yVar != null && yVar.isPlaying();
    }

    public void f() {
        y yVar = this.k;
        if (yVar == null) {
            return;
        }
        yVar.pause();
        this.f4637a.setVisibility(0);
        Bitmap screenShot = this.e.getScreenShot();
        if (screenShot != null && this.k.e()) {
            this.f4637a.setImageBitmap(screenShot);
        }
        if (this.p) {
            this.c.setVisibility(0);
        }
    }

    public void g() {
        this.c.setVisibility(8);
        y yVar = this.k;
        if (yVar == null || this.l == null) {
            return;
        }
        yVar.resume();
        this.f4637a.setVisibility(8);
    }

    public FrameLayout getClickableLayout() {
        return this.f;
    }

    public ma getImageView() {
        return this.f4637a;
    }

    public y getVideoPlayer() {
        return this.k;
    }

    public void h() {
        this.c.setOnClickListener(this.d);
    }

    public void i() {
        this.f4637a.setVisibility(8);
        this.g.setVisibility(8);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            View childAt = getChildAt(i5);
            if (childAt.getVisibility() != 8) {
                int measuredWidth = childAt.getMeasuredWidth();
                int measuredHeight = childAt.getMeasuredHeight();
                int i6 = ((i3 - i) - measuredWidth) / 2;
                int i7 = ((i4 - i2) - measuredHeight) / 2;
                childAt.layout(i6, i7, measuredWidth + i6, measuredHeight + i7);
            }
        }
    }

    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        int i3;
        int mode = View.MeasureSpec.getMode(i);
        int size = View.MeasureSpec.getSize(i);
        int mode2 = View.MeasureSpec.getMode(i2);
        int size2 = View.MeasureSpec.getSize(i2);
        int i4 = this.n;
        if (i4 == 0 || (i3 = this.o) == 0) {
            super.onMeasure(View.MeasureSpec.makeMeasureSpec(0, 1073741824), View.MeasureSpec.makeMeasureSpec(0, 1073741824));
            return;
        }
        if (mode2 == 0 && size2 == 0) {
            size2 = i4;
            size = i3;
            mode = Integer.MIN_VALUE;
            mode2 = Integer.MIN_VALUE;
        }
        if (size2 == 0 || mode2 == 0) {
            size2 = (int) ((size / i3) * i4);
        }
        if (size == 0 || mode == 0) {
            size = (int) ((size2 / i4) * i3);
        }
        float f = i3 / i4;
        float f2 = size / f;
        float f3 = size2;
        if (f2 > f3) {
            size = (int) (f * f3);
        } else {
            size2 = (int) f2;
        }
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            View childAt = getChildAt(i5);
            if (childAt.getVisibility() != 8) {
                int i6 = (childAt == this.f4637a || childAt == this.f || childAt == this.e) ? 1073741824 : Integer.MIN_VALUE;
                childAt.measure(View.MeasureSpec.makeMeasureSpec(size, i6), View.MeasureSpec.makeMeasureSpec(size2, i6));
            }
        }
        setMeasuredDimension(size, size2);
    }

    @Override // com.my.target.z.a
    public void q() {
        a aVar;
        if (!(this.k instanceof b2)) {
            a aVar2 = this.j;
            if (aVar2 != null) {
                aVar2.a("Playback within no hardware accelerated view is available only with ExoPlayer");
                return;
            }
            return;
        }
        this.e.setViewMode(1);
        VideoData videoData = this.l;
        if (videoData != null) {
            this.e.a(videoData.getWidth(), this.l.getHeight());
        }
        this.k.a(this.e);
        if (!this.k.isPlaying() || (aVar = this.j) == null) {
            return;
        }
        aVar.k();
    }

    public void setInterstitialPromoViewListener(a aVar) {
        this.j = aVar;
        y yVar = this.k;
        if (yVar != null) {
            yVar.a(aVar);
        }
    }

    public void b() {
        getClickableLayout().setOnClickListener(this.d);
    }

    public void b(o4 o4Var, int i) {
        if (o4Var.V() != null) {
            a(o4Var, i);
        } else {
            a(o4Var);
        }
    }

    public void a(int i) {
        y yVar = this.k;
        if (yVar != null) {
            if (i == 0) {
                yVar.d();
            } else if (i != 1) {
                yVar.h();
            } else {
                yVar.c();
            }
        }
    }

    public void b(boolean z) {
        y yVar = this.k;
        if (yVar != null) {
            yVar.stop();
        }
        this.g.setVisibility(8);
        this.f4637a.setVisibility(0);
        this.f4637a.setImageBitmap(this.m);
        this.p = z;
        if (z) {
            this.c.setVisibility(0);
            return;
        }
        this.f4637a.setOnClickListener(null);
        this.c.setOnClickListener(null);
        setOnClickListener(null);
    }

    public void a(boolean z) {
        y yVar;
        this.c.setVisibility(8);
        this.g.setVisibility(0);
        if (this.l == null || (yVar = this.k) == null) {
            return;
        }
        yVar.a(this.j);
        this.k.a(this.e);
        this.e.a(this.l.getWidth(), this.l.getHeight());
        String str = (String) this.l.a();
        if (z && str != null) {
            this.k.a(Uri.parse(str), this.e.getContext());
        } else {
            this.k.a(Uri.parse(this.l.getUrl()), this.e.getContext());
        }
    }

    public final void a(o4 o4Var, int i) {
        int iB;
        s5 s5VarV = o4Var.V();
        if (s5VarV == null) {
            return;
        }
        VideoData videoData = (VideoData) s5VarV.k0();
        this.l = videoData;
        if (videoData == null) {
            return;
        }
        y yVarA = w5.a(this.i, getContext());
        this.k = yVarA;
        yVarA.a(this.j);
        if (s5VarV.g0()) {
            this.k.setVolume(0.0f);
        }
        this.o = this.l.getWidth();
        this.n = this.l.getHeight();
        ImageData imageDataV = s5VarV.V();
        if (imageDataV != null) {
            this.m = imageDataV.getData();
            if (this.o <= 0 || this.n <= 0) {
                this.o = imageDataV.getWidth();
                this.n = imageDataV.getHeight();
            }
            this.f4637a.setImageBitmap(this.m);
        } else {
            ImageData imageDataS = o4Var.s();
            if (imageDataS != null) {
                if (this.o <= 0 || this.n <= 0) {
                    this.o = imageDataS.getWidth();
                    this.n = imageDataS.getHeight();
                }
                Bitmap data = imageDataS.getData();
                this.m = data;
                this.f4637a.setImageBitmap(data);
            }
        }
        if (i != 1) {
            if (this.h) {
                iB = this.b.b(140);
            } else {
                iB = this.b.b(96);
            }
            this.c.a(q4.a(iB), false);
        }
    }

    public final void a(o4 o4Var) {
        this.f.setVisibility(8);
        this.c.setVisibility(8);
        this.g.setVisibility(8);
        this.e.setVisibility(8);
        this.f4637a.setVisibility(0);
        ImageData imageDataS = o4Var.s();
        if (imageDataS == null || imageDataS.getData() == null) {
            return;
        }
        this.o = imageDataS.getWidth();
        int height = imageDataS.getHeight();
        this.n = height;
        if (this.o == 0 || height == 0) {
            this.o = imageDataS.getData().getWidth();
            this.n = imageDataS.getData().getHeight();
        }
        this.f4637a.setImageBitmap(imageDataS.getData());
        this.f4637a.setClickable(false);
    }
}
