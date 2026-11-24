package ru.ok.tracer.base.limits;

import kotlin.Metadata;
import kotlin.jvm.JvmStatic;

/* JADX INFO: compiled from: TracerFeatureLimits.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0005\bf\u0018\u0000 \u000e2\u00020\u0001:\u0001\u000eJ\u001c\u0010\u0002\u001a\u00020\u00032\b\u0010\u0004\u001a\u0004\u0018\u00010\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0005H&J?\u0010\u0007\u001a\u00020\b2\b\u0010\t\u001a\u0004\u0018\u00010\n2\b\u0010\u0004\u001a\u0004\u0018\u00010\u00052\b\u0010\u000b\u001a\u0004\u0018\u00010\n2\b\u0010\u0006\u001a\u0004\u0018\u00010\u00052\b\u0010\f\u001a\u0004\u0018\u00010\nH&¢\u0006\u0002\u0010\r¨\u0006\u000f"}, d2 = {"Lru/ok/tracer/base/limits/TracerFeatureLimits;", "", "isLimited", "", "featureName", "", "tag", "setShutdownMs", "", "globalShutdownMs", "", "featureShutdownMs", "tagShutdownMs", "(Ljava/lang/Long;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/Long;)V", "Companion", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public interface TracerFeatureLimits {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = Companion.$$INSTANCE;

    @JvmStatic
    static TracerFeatureLimits unlimited() {
        return INSTANCE.unlimited();
    }

    boolean isLimited(String featureName, String tag);

    void setShutdownMs(Long globalShutdownMs, String featureName, Long featureShutdownMs, String tag, Long tagShutdownMs);

    /* JADX INFO: compiled from: TracerFeatureLimits.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\b\u0010\u0003\u001a\u00020\u0004H\u0007¨\u0006\u0005"}, d2 = {"Lru/ok/tracer/base/limits/TracerFeatureLimits$Companion;", "", "()V", "unlimited", "Lru/ok/tracer/base/limits/TracerFeatureLimits;", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    public static final class Companion {
        static final /* synthetic */ Companion $$INSTANCE = new Companion();

        private Companion() {
        }

        @JvmStatic
        public final TracerFeatureLimits unlimited() {
            return NoTracerFeatureLimits.INSTANCE;
        }
    }
}
