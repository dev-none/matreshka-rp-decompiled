package io.appmetrica.analytics.impl;

import java.util.HashMap;

/* JADX INFO: loaded from: classes7.dex */
public final class Nb implements InterfaceC2437s2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2464t4 f5804a;

    public Nb(C2464t4 c2464t4) {
        this.f5804a = c2464t4;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2437s2
    public final C2182ho a(C2130fo c2130fo, C2182ho c2182ho) {
        int i = c2130fo.b;
        int i2 = this.f5804a.f6325a;
        if (i == i2) {
            if (((C2182ho) ((HashMap) c2130fo.f6082a.get(c2182ho.b)).get(new String(c2182ho.f6119a))) != null) {
                ((HashMap) c2130fo.f6082a.get(c2182ho.b)).put(new String(c2182ho.f6119a), c2182ho);
                return c2182ho;
            }
        } else if (i < i2) {
            ((HashMap) c2130fo.f6082a.get(c2182ho.b)).put(new String(c2182ho.f6119a), c2182ho);
            c2130fo.b++;
        }
        return c2182ho;
    }
}
