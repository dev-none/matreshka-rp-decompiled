package ru.ok.tracer.lite.limits;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Looper;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import ru.ok.tracer.base.limits.TracerFeatureLimits;
import ru.ok.tracer.lite.TracerLite;

/* JADX INFO: compiled from: TracerLiteLimits.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0005\u0018\u0000 \u00172\u00020\u0001:\u0001\u0017B\u0017\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\u001c\u0010\r\u001a\u00020\f2\b\u0010\u000e\u001a\u0004\u0018\u00010\u00052\b\u0010\u000f\u001a\u0004\u0018\u00010\u0005H\u0016J?\u0010\u0010\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u00132\b\u0010\u000e\u001a\u0004\u0018\u00010\u00052\b\u0010\u0014\u001a\u0004\u0018\u00010\u00132\b\u0010\u000f\u001a\u0004\u0018\u00010\u00052\b\u0010\u0015\u001a\u0004\u0018\u00010\u0013H\u0016¢\u0006\u0002\u0010\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0007\u001a\u00020\b8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\t\u0010\nR\u000e\u0010\u000b\u001a\u00020\fX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0018"}, d2 = {"Lru/ok/tracer/lite/limits/TracerLiteLimits;", "Lru/ok/tracer/base/limits/TracerFeatureLimits;", "context", "Landroid/content/Context;", "libraryPackageName", "", "(Landroid/content/Context;Ljava/lang/String;)V", "prefs", "Landroid/content/SharedPreferences;", "getPrefs", "()Landroid/content/SharedPreferences;", "prefsRead", "", "isLimited", "featureName", "tag", "setShutdownMs", "", "globalShutdownMs", "", "featureShutdownMs", "tagShutdownMs", "(Ljava/lang/Long;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/Long;)V", "Companion", "tracer-lite-commons_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class TracerLiteLimits implements TracerFeatureLimits {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final Context context;
    private final String libraryPackageName;
    private boolean prefsRead;

    public TracerLiteLimits(Context context, String libraryPackageName) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(libraryPackageName, "libraryPackageName");
        this.context = context;
        this.libraryPackageName = libraryPackageName;
    }

    private final SharedPreferences getPrefs() {
        this.prefsRead = true;
        SharedPreferences sharedPreferences = this.context.getSharedPreferences("tracer-" + this.libraryPackageName, 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "context.getSharedPrefere…e\", Context.MODE_PRIVATE)");
        return sharedPreferences;
    }

    @Override // ru.ok.tracer.base.limits.TracerFeatureLimits
    public void setShutdownMs(Long globalShutdownMs, String featureName, Long featureShutdownMs, String tag, Long tagShutdownMs) {
        boolean z;
        SharedPreferences.Editor editorEdit = getPrefs().edit();
        boolean z2 = true;
        if (globalShutdownMs == null || globalShutdownMs.longValue() <= 0) {
            z = false;
        } else {
            editorEdit.putLong("system.shutdown.until.ts", System.currentTimeMillis() + globalShutdownMs.longValue());
            z = true;
        }
        if (featureName == null || featureShutdownMs == null || featureShutdownMs.longValue() <= 0) {
            z2 = z;
        } else {
            editorEdit.putLong("system." + featureName + ".shutdown.until.ts", System.currentTimeMillis() + featureShutdownMs.longValue());
        }
        if (z2) {
            editorEdit.apply();
        }
    }

    @Override // ru.ok.tracer.base.limits.TracerFeatureLimits
    public boolean isLimited(String featureName, String tag) {
        if (!this.prefsRead && Intrinsics.areEqual(Looper.myLooper(), Looper.getMainLooper())) {
            return false;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (jCurrentTimeMillis < getPrefs().getLong("system.shutdown.until.ts", Long.MIN_VALUE)) {
            return true;
        }
        if (featureName != null) {
            if (jCurrentTimeMillis < getPrefs().getLong("system." + featureName + ".shutdown.until.ts", Long.MIN_VALUE)) {
                return true;
            }
        }
        return false;
    }

    /* JADX INFO: compiled from: TracerLiteLimits.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u000e\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006¨\u0006\u0007"}, d2 = {"Lru/ok/tracer/lite/limits/TracerLiteLimits$Companion;", "", "()V", "get", "Lru/ok/tracer/lite/limits/TracerLiteLimits;", "tracer", "Lru/ok/tracer/lite/TracerLite;", "tracer-lite-commons_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final TracerLiteLimits get(TracerLite tracer) {
            Intrinsics.checkNotNullParameter(tracer, "tracer");
            return tracer.getLimits();
        }
    }
}
