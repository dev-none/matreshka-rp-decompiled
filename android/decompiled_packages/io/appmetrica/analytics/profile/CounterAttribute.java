package io.appmetrica.analytics.profile;

import io.appmetrica.analytics.impl.A6;
import io.appmetrica.analytics.impl.C2571xb;
import io.appmetrica.analytics.impl.InterfaceC2156go;
import io.appmetrica.analytics.impl.Nb;
import io.appmetrica.analytics.impl.X5;

/* JADX INFO: loaded from: classes7.dex */
public final class CounterAttribute {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final A6 f6518a;

    CounterAttribute(String str, C2571xb c2571xb, Nb nb) {
        this.f6518a = new A6(str, c2571xb, nb);
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withDelta(double d) {
        return new UserProfileUpdate<>(new X5(this.f6518a.c, d));
    }
}
