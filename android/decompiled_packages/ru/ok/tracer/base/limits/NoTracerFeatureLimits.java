package ru.ok.tracer.base.limits;

import kotlin.Metadata;

/* JADX INFO: compiled from: TracerFeatureLimits.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0004\bÂ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u001c\u0010\u0003\u001a\u00020\u00042\b\u0010\u0005\u001a\u0004\u0018\u00010\u00062\b\u0010\u0007\u001a\u0004\u0018\u00010\u0006H\u0016J?\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u000b2\b\u0010\u0005\u001a\u0004\u0018\u00010\u00062\b\u0010\f\u001a\u0004\u0018\u00010\u000b2\b\u0010\u0007\u001a\u0004\u0018\u00010\u00062\b\u0010\r\u001a\u0004\u0018\u00010\u000bH\u0016¢\u0006\u0002\u0010\u000e¨\u0006\u000f"}, d2 = {"Lru/ok/tracer/base/limits/NoTracerFeatureLimits;", "Lru/ok/tracer/base/limits/TracerFeatureLimits;", "()V", "isLimited", "", "featureName", "", "tag", "setShutdownMs", "", "globalShutdownMs", "", "featureShutdownMs", "tagShutdownMs", "(Ljava/lang/Long;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/Long;)V", "tracer-base_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
final class NoTracerFeatureLimits implements TracerFeatureLimits {
    public static final NoTracerFeatureLimits INSTANCE = new NoTracerFeatureLimits();

    @Override // ru.ok.tracer.base.limits.TracerFeatureLimits
    public boolean isLimited(String featureName, String tag) {
        return false;
    }

    @Override // ru.ok.tracer.base.limits.TracerFeatureLimits
    public void setShutdownMs(Long globalShutdownMs, String featureName, Long featureShutdownMs, String tag, Long tagShutdownMs) {
    }

    private NoTracerFeatureLimits() {
    }
}
