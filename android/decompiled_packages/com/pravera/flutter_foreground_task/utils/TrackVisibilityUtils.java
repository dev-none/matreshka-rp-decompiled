package com.pravera.flutter_foreground_task.utils;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import androidx.media3.common.MimeTypes;
import androidx.media3.exoplayer.upstream.CmcdData;
import java.util.HashSet;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: TrackVisibilityUtils.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0003\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u001c\u0010\r\u001a\u00020\f2\u0006\u0010\u000e\u001a\u00020\u000f2\f\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\f0\u000bJ\u0010\u0010\u0011\u001a\u00020\f2\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\u0010\u0010\u0014\u001a\u00020\f2\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\u0010\u0010\u0015\u001a\u00020\f2\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\u0010\u0010\u0016\u001a\u00020\f2\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\u001a\u0010\u0017\u001a\u00020\f2\u0006\u0010\u0018\u001a\u00020\u00132\b\u0010\u0019\u001a\u0004\u0018\u00010\u001aH\u0016J\u0018\u0010\u001b\u001a\u00020\f2\u0006\u0010\u0018\u001a\u00020\u00132\u0006\u0010\u0019\u001a\u00020\u001aH\u0016J\u0010\u0010\u001c\u001a\u00020\f2\u0006\u0010\u0018\u001a\u00020\u0013H\u0016R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u001e\u0010\u0006\u001a\u0012\u0012\u0004\u0012\u00020\b0\u0007j\b\u0012\u0004\u0012\u00020\b`\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\n\u001a\n\u0012\u0004\u0012\u00020\f\u0018\u00010\u000bX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u001d"}, d2 = {"Lcom/pravera/flutter_foreground_task/utils/TrackVisibilityUtils;", "Landroid/app/Application$ActivityLifecycleCallbacks;", "<init>", "()V", "installed", "", "resumed", "Ljava/util/HashSet;", "", "Lkotlin/collections/HashSet;", "onAllGone", "Lkotlin/Function0;", "", "install", MimeTypes.BASE_TYPE_APPLICATION, "Landroid/app/Application;", "callback", "onActivityResumed", "activity", "Landroid/app/Activity;", "onActivityPaused", "onActivityStarted", "onActivityStopped", "onActivityCreated", CmcdData.OBJECT_TYPE_AUDIO_ONLY, "b", "Landroid/os/Bundle;", "onActivitySaveInstanceState", "onActivityDestroyed", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class TrackVisibilityUtils implements Application.ActivityLifecycleCallbacks {
    private static boolean installed;
    private static Function0<Unit> onAllGone;
    public static final TrackVisibilityUtils INSTANCE = new TrackVisibilityUtils();
    private static final HashSet<Integer> resumed = new HashSet<>();

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityCreated(Activity a2, Bundle b) {
        Intrinsics.checkNotNullParameter(a2, "a");
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityDestroyed(Activity a2) {
        Intrinsics.checkNotNullParameter(a2, "a");
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivitySaveInstanceState(Activity a2, Bundle b) {
        Intrinsics.checkNotNullParameter(a2, "a");
        Intrinsics.checkNotNullParameter(b, "b");
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStarted(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStopped(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
    }

    private TrackVisibilityUtils() {
    }

    public final void install(Application application, Function0<Unit> callback) {
        Intrinsics.checkNotNullParameter(application, "application");
        Intrinsics.checkNotNullParameter(callback, "callback");
        onAllGone = callback;
        if (installed) {
            return;
        }
        installed = true;
        application.registerActivityLifecycleCallbacks(this);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityResumed(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        resumed.add(Integer.valueOf(System.identityHashCode(activity)));
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityPaused(Activity activity) {
        Function0<Unit> function0;
        Intrinsics.checkNotNullParameter(activity, "activity");
        HashSet<Integer> hashSet = resumed;
        hashSet.remove(Integer.valueOf(System.identityHashCode(activity)));
        if (!hashSet.isEmpty() || (function0 = onAllGone) == null) {
            return;
        }
        function0.invoke();
    }
}
