package io.appmetrica.analytics.impl;

import java.util.Comparator;
import kotlin.comparisons.ComparisonsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.kd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2248kd implements Comparator {
    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        return ComparisonsKt.compareValues(((C2197id) obj).f6133a, ((C2197id) obj2).f6133a);
    }
}
