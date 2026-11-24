package com.pushwoosh.inapp.ui;

import android.graphics.SurfaceTexture;
import android.media.MediaPlayer;
import android.view.Surface;
import android.view.TextureView;
import com.pushwoosh.internal.utils.PWLog;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class m1 implements TextureView.SurfaceTextureListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ n1 f5144a;

    public m1(n1 n1Var) {
        this.f5144a = n1Var;
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public final void onSurfaceTextureAvailable(SurfaceTexture st, int i, int i2) {
        Intrinsics.checkNotNullParameter(st, "st");
        n1 n1Var = this.f5144a;
        Surface surface = new Surface(st);
        n1Var.j = surface;
        MediaPlayer mediaPlayer = n1Var.i;
        if (mediaPlayer == null) {
            n1Var.d();
            return;
        }
        try {
            mediaPlayer.setSurface(surface);
        } catch (IllegalStateException e) {
            PWLog.warn("InAppVideoPlayerView", "video: surface re-attach refused (" + e + ')');
        }
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public final boolean onSurfaceTextureDestroyed(SurfaceTexture st) {
        Intrinsics.checkNotNullParameter(st, "st");
        n1.a(this.f5144a);
        return true;
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public final void onSurfaceTextureSizeChanged(SurfaceTexture st, int i, int i2) {
        Intrinsics.checkNotNullParameter(st, "st");
        this.f5144a.b();
    }

    @Override // android.view.TextureView.SurfaceTextureListener
    public final void onSurfaceTextureUpdated(SurfaceTexture st) {
        Intrinsics.checkNotNullParameter(st, "st");
    }
}
