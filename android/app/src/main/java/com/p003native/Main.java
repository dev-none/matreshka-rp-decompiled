package com.p003native;

import kotlin.Metadata;
import kotlin.jvm.JvmStatic;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: compiled from: Main.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0004\b\u0016\u0018\u0000 \u00042\u00020\u0001:\u0001\u0004B\u0007¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0005"}, d2 = {"Lcom/native/Main;", "", "<init>", "()V", "Companion", "app_matreshkaProdRelease"}, k = 1, mv = {2, 2, 0}, xi = 48)
public class Main {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);

    @JvmStatic
    public static final native void activityDestroyed();

    @JvmStatic
    public static final native void appEvent(int i);

    @JvmStatic
    public static final native void hasFlutter(boolean z);

    @JvmStatic
    public static final native void livePreviewSurface(long j, Object obj);

    @JvmStatic
    public static final native void load(Object obj, int i, int i2, String str);

    @JvmStatic
    public static final native void preInit(Object obj);

    @JvmStatic
    public static final native void setSinglePlayer();

    @JvmStatic
    public static final native void touchEvent(int i, int i2, int i3, int i4);

    @JvmStatic
    public static final native void windowSize(int i, int i2);

    /* JADX INFO: compiled from: Main.kt */
    @Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0002\b\u0007\n\u0002\u0010\t\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0011\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0001H\u0087 J)\u0010\u0007\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00012\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\t2\u0006\u0010\u000b\u001a\u00020\fH\u0087 J\u0011\u0010\r\u001a\u00020\u00052\u0006\u0010\u000e\u001a\u00020\tH\u0087 J\u0019\u0010\u000f\u001a\u00020\u00052\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\tH\u0087 J\t\u0010\u0010\u001a\u00020\u0005H\u0087 J\u0011\u0010\u0011\u001a\u00020\u00052\u0006\u0010\u0012\u001a\u00020\u0013H\u0087 J\t\u0010\u0014\u001a\u00020\u0005H\u0087 J)\u0010\u0015\u001a\u00020\u00052\u0006\u0010\u000e\u001a\u00020\t2\u0006\u0010\u0016\u001a\u00020\t2\u0006\u0010\u0017\u001a\u00020\t2\u0006\u0010\u0018\u001a\u00020\tH\u0087 J\u001b\u0010\u0019\u001a\u00020\u00052\u0006\u0010\u001a\u001a\u00020\u001b2\b\u0010\u001c\u001a\u0004\u0018\u00010\u0001H\u0087 ¨\u0006\u001d"}, d2 = {"Lcom/native/Main$Companion;", "", "<init>", "()V", "preInit", "", "Main", "load", "width", "", "height", "root_path", "", "appEvent", "type", "windowSize", "setSinglePlayer", "hasFlutter", "boolean", "", "activityDestroyed", "touchEvent", "trackNum", "posX", "posY", "livePreviewSurface", "textureId", "", "surface", "app_matreshkaProdRelease"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @JvmStatic
        public final void activityDestroyed() {
            Main.activityDestroyed();
        }

        @JvmStatic
        public final void appEvent(int type) {
            Main.appEvent(type);
        }

        @JvmStatic
        public final void hasFlutter(boolean z) {
            Main.hasFlutter(z);
        }

        @JvmStatic
        public final void livePreviewSurface(long textureId, Object surface) {
            Main.livePreviewSurface(textureId, surface);
        }

        @JvmStatic
        public final void load(Object Main, int width, int height, String root_path) {
            Main.load(Main, width, height, root_path);
        }

        @JvmStatic
        public final void preInit(Object Main) {
            Main.preInit(Main);
        }

        @JvmStatic
        public final void setSinglePlayer() {
            Main.setSinglePlayer();
        }

        @JvmStatic
        public final void touchEvent(int type, int trackNum, int posX, int posY) {
            Main.touchEvent(type, trackNum, posX, posY);
        }

        @JvmStatic
        public final void windowSize(int width, int height) {
            Main.windowSize(width, height);
        }

        private Companion() {
        }
    }
}
