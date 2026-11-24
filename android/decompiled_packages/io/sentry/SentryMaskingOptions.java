package io.sentry;

import java.util.Set;
import java.util.concurrent.CopyOnWriteArraySet;

/* JADX INFO: loaded from: classes7.dex */
public abstract class SentryMaskingOptions {
    public static final String ANDROIDX_MEDIA_VIEW_CLASS_NAME = "androidx.media3.ui.PlayerView";
    public static final String CAMERAX_PREVIEW_VIEW_CLASS_NAME = "androidx.camera.view.PreviewView";
    public static final String EXOPLAYER_CLASS_NAME = "com.google.android.exoplayer2.ui.PlayerView";
    public static final String EXOPLAYER_STYLED_CLASS_NAME = "com.google.android.exoplayer2.ui.StyledPlayerView";
    public static final String IMAGE_VIEW_CLASS_NAME = "android.widget.ImageView";
    public static final String TEXT_VIEW_CLASS_NAME = "android.widget.TextView";
    public static final String VIDEO_VIEW_CLASS_NAME = "android.widget.VideoView";
    public static final String WEB_VIEW_CLASS_NAME = "android.webkit.WebView";
    protected Set<String> maskViewClasses = new CopyOnWriteArraySet();
    protected Set<String> unmaskViewClasses = new CopyOnWriteArraySet();
    protected String maskViewContainerClass = null;
    protected String unmaskViewContainerClass = null;

    public abstract void trackCustomMasking();

    public void setMaskAllText(boolean z) {
        if (z) {
            this.maskViewClasses.add("android.widget.TextView");
            this.unmaskViewClasses.remove("android.widget.TextView");
        } else {
            this.unmaskViewClasses.add("android.widget.TextView");
            this.maskViewClasses.remove("android.widget.TextView");
        }
    }

    public void setMaskAllImages(boolean z) {
        if (z) {
            this.maskViewClasses.add(IMAGE_VIEW_CLASS_NAME);
            this.unmaskViewClasses.remove(IMAGE_VIEW_CLASS_NAME);
        } else {
            this.unmaskViewClasses.add(IMAGE_VIEW_CLASS_NAME);
            this.maskViewClasses.remove(IMAGE_VIEW_CLASS_NAME);
        }
    }

    public Set<String> getMaskViewClasses() {
        return this.maskViewClasses;
    }

    public void addMaskViewClass(String str) {
        this.maskViewClasses.add(str);
        this.unmaskViewClasses.remove(str);
    }

    public Set<String> getUnmaskViewClasses() {
        return this.unmaskViewClasses;
    }

    public void addUnmaskViewClass(String str) {
        this.unmaskViewClasses.add(str);
        this.maskViewClasses.remove(str);
    }

    public String getMaskViewContainerClass() {
        return this.maskViewContainerClass;
    }

    public void setMaskViewContainerClass(String str) {
        this.maskViewClasses.add(str);
        this.maskViewContainerClass = str;
    }

    public String getUnmaskViewContainerClass() {
        return this.unmaskViewContainerClass;
    }

    public void setUnmaskViewContainerClass(String str) {
        this.unmaskViewContainerClass = str;
    }
}
