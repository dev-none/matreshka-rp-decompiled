package com.mhz.savegallery.saver_gallery;

import android.content.Context;
import io.flutter.plugin.common.MethodChannel;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SaverDelegate.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\u0012\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010 \n\u0002\u0010$\n\u0002\b\u0002\b&\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\b\u001a\u00020\tH\u0016J@\u0010\n\u001a\u00020\t2\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u00102\u0006\u0010\u0012\u001a\u00020\u00102\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u0016H&J0\u0010\u0017\u001a\u00020\t2\u0006\u0010\u0018\u001a\u00020\u00102\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0012\u001a\u00020\u00102\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u0016H&J2\u0010\u0019\u001a\u00020\t2\u0018\u0010\u001a\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u0010\u0012\u0004\u0012\u00020\u00100\u001c0\u001b2\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u0016H&J\b\u0010\u001d\u001a\u00020\tH\u0016R\u0014\u0010\u0002\u001a\u00020\u0003X\u0084\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u001e"}, d2 = {"Lcom/mhz/savegallery/saver_gallery/SaverDelegate;", "", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "getContext", "()Landroid/content/Context;", "onReady", "", "saveImageToGallery", "image", "", "quality", "", "fileName", "", "extension", "relativePath", "skipIfExists", "", "result", "Lio/flutter/plugin/common/MethodChannel$Result;", "saveFileToGallery", "filePath", "saveFilesToGallery", "files", "", "", "onClose", "saver_gallery_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public abstract class SaverDelegate {
    private final Context context;

    public void onClose() {
    }

    public void onReady() {
    }

    public abstract void saveFileToGallery(String filePath, String fileName, String relativePath, boolean skipIfExists, MethodChannel.Result result);

    public abstract void saveFilesToGallery(List<? extends Map<String, String>> files, boolean skipIfExists, MethodChannel.Result result);

    public abstract void saveImageToGallery(byte[] image, int quality, String fileName, String extension, String relativePath, boolean skipIfExists, MethodChannel.Result result);

    public SaverDelegate(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
    }

    protected final Context getContext() {
        return this.context;
    }
}
