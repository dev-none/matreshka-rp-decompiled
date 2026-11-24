package com.google.android.play.core.assetpacks;

import java.util.HashMap;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.play:asset-delivery@@2.3.0 */
/* JADX INFO: loaded from: classes5.dex */
final class dd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Map f4280a = new HashMap();

    dd() {
    }

    final synchronized double a(String str) {
        Double d = (Double) this.f4280a.get(str);
        if (d == null) {
            return 0.0d;
        }
        return d.doubleValue();
    }

    final synchronized double b(String str, dv dvVar) {
        double d;
        co coVar = (co) dvVar;
        d = (((double) coVar.f) + 1.0d) / ((double) coVar.g);
        this.f4280a.put(str, Double.valueOf(d));
        return d;
    }

    final synchronized void c(String str) {
        this.f4280a.put(str, Double.valueOf(0.0d));
    }
}
