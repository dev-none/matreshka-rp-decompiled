package io.appmetrica.analytics.impl;

import android.util.SparseArray;
import java.util.HashMap;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.fo, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2130fo {
    public static final int[] c = {0, 1, 2, 3};

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final SparseArray f6082a = new SparseArray();
    public int b = 0;

    public C2130fo(int[] iArr) {
        for (int i : iArr) {
            this.f6082a.put(i, new HashMap());
        }
    }
}
