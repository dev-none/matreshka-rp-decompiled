package com.matreshkarp.core;

import android.content.Context;
import android.content.SharedPreferences;
import android.opengl.EGL14;
import android.opengl.EGLConfig;
import android.opengl.EGLContext;
import android.opengl.EGLDisplay;
import android.opengl.EGLSurface;
import android.opengl.GLES20;
import android.util.Log;
import com.google.firebase.messaging.Constants;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: FlutterRendererGate.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\t\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u0011J\u0016\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0014\u001a\u00020\u0005J\u0016\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\u00050\u00162\u0006\u0010\u0010\u001a\u00020\u0011H\u0002J\n\u0010\u0017\u001a\u0004\u0018\u00010\u0005H\u0002J\n\u0010\u0018\u001a\u0004\u0018\u00010\u0005H\u0002J\u0012\u0010\u0019\u001a\u0004\u0018\u00010\u001a2\u0006\u0010\u001b\u001a\u00020\u001cH\u0002J \u0010\u001d\u001a\u00020\u00132\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u0010\u001a\u00020\u001e2\u0006\u0010\u001f\u001a\u00020 H\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u001b\u0010\t\u001a\u00020\u00058FX\u0086\u0084\u0002¢\u0006\f\n\u0004\b\f\u0010\r\u001a\u0004\b\n\u0010\u000b¨\u0006!"}, d2 = {"Lcom/matreshkarp/core/FlutterRendererGate;", "", "<init>", "()V", "TAG", "", "PREFS_NAME", "KEY_SKIA_GPUS", "DEFAULT_SKIA_GPUS", "renderer", "getRenderer", "()Ljava/lang/String;", "renderer$delegate", "Lkotlin/Lazy;", "shouldUseSkia", "", "context", "Landroid/content/Context;", "saveSkiaGpus", "", "gpus", "loadSkiaGpus", "", "readRendererSafe", "readRenderer", "chooseConfig", "Landroid/opengl/EGLConfig;", Constants.ScionAnalytics.MessageType.DISPLAY_NOTIFICATION, "Landroid/opengl/EGLDisplay;", "release", "Landroid/opengl/EGLContext;", "surface", "Landroid/opengl/EGLSurface;", "app_matreshkaProdRelease"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class FlutterRendererGate {
    private static final String DEFAULT_SKIA_GPUS = "Rogue GM";
    private static final String KEY_SKIA_GPUS = "skia_gpus";
    private static final String PREFS_NAME = "flutter_renderer_prefs";
    private static final String TAG = "FlutterRendererGate";
    public static final FlutterRendererGate INSTANCE = new FlutterRendererGate();

    /* JADX INFO: renamed from: renderer$delegate, reason: from kotlin metadata */
    private static final Lazy renderer = LazyKt.lazy(new Function0() { // from class: com.matreshkarp.core.FlutterRendererGate$$ExternalSyntheticLambda0
        @Override // kotlin.jvm.functions.Function0
        public final Object invoke() {
            return FlutterRendererGate.renderer_delegate$lambda$0();
        }
    });

    private FlutterRendererGate() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final String renderer_delegate$lambda$0() {
        String rendererSafe = INSTANCE.readRendererSafe();
        return rendererSafe == null ? "unknown" : rendererSafe;
    }

    public final String getRenderer() {
        return (String) renderer.getValue();
    }

    public final boolean shouldUseSkia(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        List<String> listLoadSkiaGpus = loadSkiaGpus(context);
        List<String> list = listLoadSkiaGpus;
        boolean z = false;
        if (!(list instanceof Collection) || !list.isEmpty()) {
            Iterator<T> it = list.iterator();
            while (it.hasNext()) {
                if (StringsKt.contains((CharSequence) INSTANCE.getRenderer(), (CharSequence) it.next(), true)) {
                    z = true;
                    break;
                }
            }
        }
        Log.i(TAG, "GL_RENDERER=" + getRenderer() + ", skia_gpus=" + listLoadSkiaGpus + ", skia=" + z);
        return z;
    }

    public final void saveSkiaGpus(Context context, String gpus) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(gpus, "gpus");
        SharedPreferences sharedPreferences = context.getSharedPreferences(PREFS_NAME, 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        editorEdit.putString(KEY_SKIA_GPUS, gpus);
        editorEdit.apply();
    }

    private final List<String> loadSkiaGpus(Context context) {
        String string = context.getSharedPreferences(PREFS_NAME, 0).getString(KEY_SKIA_GPUS, null);
        if (string == null) {
            string = DEFAULT_SKIA_GPUS;
        }
        List listSplit$default = StringsKt.split$default((CharSequence) string, new char[]{','}, false, 0, 6, (Object) null);
        ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(listSplit$default, 10));
        Iterator it = listSplit$default.iterator();
        while (it.hasNext()) {
            arrayList.add(StringsKt.trim((CharSequence) it.next()).toString());
        }
        ArrayList arrayList2 = new ArrayList();
        for (Object obj : arrayList) {
            if (((String) obj).length() > 0) {
                arrayList2.add(obj);
            }
        }
        return arrayList2;
    }

    private final String readRendererSafe() {
        try {
            return readRenderer();
        } catch (Throwable th) {
            Log.w(TAG, "GL_RENDERER probe failed", th);
            return null;
        }
    }

    private final String readRenderer() {
        EGLDisplay eGLDisplayEglGetDisplay = EGL14.eglGetDisplay(0);
        if (Intrinsics.areEqual(eGLDisplayEglGetDisplay, EGL14.EGL_NO_DISPLAY)) {
            return null;
        }
        int[] iArr = new int[2];
        if (!EGL14.eglInitialize(eGLDisplayEglGetDisplay, iArr, 0, iArr, 1)) {
            return null;
        }
        Intrinsics.checkNotNull(eGLDisplayEglGetDisplay);
        EGLConfig eGLConfigChooseConfig = chooseConfig(eGLDisplayEglGetDisplay);
        if (eGLConfigChooseConfig == null) {
            return null;
        }
        EGLContext eGLContextEglCreateContext = EGL14.eglCreateContext(eGLDisplayEglGetDisplay, eGLConfigChooseConfig, EGL14.EGL_NO_CONTEXT, new int[]{12440, 2, 12344}, 0);
        EGLSurface eGLSurfaceEglCreatePbufferSurface = EGL14.eglCreatePbufferSurface(eGLDisplayEglGetDisplay, eGLConfigChooseConfig, new int[]{12375, 1, 12374, 1, 12344}, 0);
        try {
            return EGL14.eglMakeCurrent(eGLDisplayEglGetDisplay, eGLSurfaceEglCreatePbufferSurface, eGLSurfaceEglCreatePbufferSurface, eGLContextEglCreateContext) ? GLES20.glGetString(7937) : null;
        } finally {
            Intrinsics.checkNotNull(eGLContextEglCreateContext);
            Intrinsics.checkNotNull(eGLSurfaceEglCreatePbufferSurface);
            release(eGLDisplayEglGetDisplay, eGLContextEglCreateContext, eGLSurfaceEglCreatePbufferSurface);
        }
    }

    private final EGLConfig chooseConfig(EGLDisplay display) {
        EGLConfig[] eGLConfigArr = new EGLConfig[1];
        int[] iArr = new int[1];
        if (EGL14.eglChooseConfig(display, new int[]{12352, 4, 12339, 1, 12344}, 0, eGLConfigArr, 0, 1, iArr, 0) && iArr[0] > 0) {
            return eGLConfigArr[0];
        }
        return null;
    }

    private final void release(EGLDisplay display, EGLContext context, EGLSurface surface) {
        EGL14.eglMakeCurrent(display, EGL14.EGL_NO_SURFACE, EGL14.EGL_NO_SURFACE, EGL14.EGL_NO_CONTEXT);
        if (!Intrinsics.areEqual(surface, EGL14.EGL_NO_SURFACE)) {
            EGL14.eglDestroySurface(display, surface);
        }
        if (Intrinsics.areEqual(context, EGL14.EGL_NO_CONTEXT)) {
            return;
        }
        EGL14.eglDestroyContext(display, context);
    }
}
