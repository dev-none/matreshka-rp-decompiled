package io.sentry.android.core;

import io.sentry.SentryMaskingOptions;

/* JADX INFO: loaded from: classes7.dex */
public final class SentryScreenshotOptions extends SentryMaskingOptions {
    @Override // io.sentry.SentryMaskingOptions
    public void trackCustomMasking() {
    }

    @Override // io.sentry.SentryMaskingOptions
    public void setMaskAllImages(boolean z) {
        super.setMaskAllImages(z);
        if (z) {
            addSensitiveViewClasses();
        } else {
            removeSensitiveViewClasses();
        }
    }

    private void addSensitiveViewClasses() {
        addMaskViewClass(SentryMaskingOptions.WEB_VIEW_CLASS_NAME);
        addMaskViewClass(SentryMaskingOptions.VIDEO_VIEW_CLASS_NAME);
        addMaskViewClass(SentryMaskingOptions.CAMERAX_PREVIEW_VIEW_CLASS_NAME);
        addMaskViewClass(SentryMaskingOptions.ANDROIDX_MEDIA_VIEW_CLASS_NAME);
        addMaskViewClass(SentryMaskingOptions.EXOPLAYER_CLASS_NAME);
        addMaskViewClass(SentryMaskingOptions.EXOPLAYER_STYLED_CLASS_NAME);
    }

    private void removeSensitiveViewClasses() {
        getMaskViewClasses().remove(SentryMaskingOptions.WEB_VIEW_CLASS_NAME);
        getMaskViewClasses().remove(SentryMaskingOptions.VIDEO_VIEW_CLASS_NAME);
        getMaskViewClasses().remove(SentryMaskingOptions.CAMERAX_PREVIEW_VIEW_CLASS_NAME);
        getMaskViewClasses().remove(SentryMaskingOptions.ANDROIDX_MEDIA_VIEW_CLASS_NAME);
        getMaskViewClasses().remove(SentryMaskingOptions.EXOPLAYER_CLASS_NAME);
        getMaskViewClasses().remove(SentryMaskingOptions.EXOPLAYER_STYLED_CLASS_NAME);
    }
}
