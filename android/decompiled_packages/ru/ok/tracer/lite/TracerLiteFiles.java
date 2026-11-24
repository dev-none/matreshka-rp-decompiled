package ru.ok.tracer.lite;

import android.content.Context;
import java.io.File;
import kotlin.Metadata;
import kotlin.io.FilesKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: TracerLiteFiles.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\bÀ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u001d\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\bH\u0000¢\u0006\u0002\b\t¨\u0006\n"}, d2 = {"Lru/ok/tracer/lite/TracerLiteFiles;", "", "()V", "getTracerLiteDir", "Ljava/io/File;", "context", "Landroid/content/Context;", "libraryPackageName", "", "getTracerLiteDir$tracer_lite_commons_release", "tracer-lite-commons_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class TracerLiteFiles {
    public static final TracerLiteFiles INSTANCE = new TracerLiteFiles();

    private TracerLiteFiles() {
    }

    public final File getTracerLiteDir$tracer_lite_commons_release(Context context, String libraryPackageName) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(libraryPackageName, "libraryPackageName");
        File cacheDir = context.getCacheDir();
        Intrinsics.checkNotNullExpressionValue(cacheDir, "context.cacheDir");
        return FilesKt.resolve(cacheDir, "tracer-lite-" + libraryPackageName);
    }
}
