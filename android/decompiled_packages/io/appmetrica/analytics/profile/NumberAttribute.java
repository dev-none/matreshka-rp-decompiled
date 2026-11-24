package io.appmetrica.analytics.profile;

import io.appmetrica.analytics.impl.A6;
import io.appmetrica.analytics.impl.C2050cl;
import io.appmetrica.analytics.impl.C2300me;
import io.appmetrica.analytics.impl.C2464t4;
import io.appmetrica.analytics.impl.C2571xb;
import io.appmetrica.analytics.impl.C2614z4;
import io.appmetrica.analytics.impl.Gi;
import io.appmetrica.analytics.impl.InterfaceC2156go;
import io.appmetrica.analytics.impl.Nb;

/* JADX INFO: loaded from: classes7.dex */
public final class NumberAttribute {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final A6 f6521a;

    NumberAttribute(String str, C2571xb c2571xb, Nb nb) {
        this.f6521a = new A6(str, c2571xb, nb);
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withValue(double d) {
        return new UserProfileUpdate<>(new C2300me(this.f6521a.c, d, new C2571xb(), new C2614z4(new Nb(new C2464t4(100)))));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withValueIfUndefined(double d) {
        return new UserProfileUpdate<>(new C2300me(this.f6521a.c, d, new C2571xb(), new C2050cl(new Nb(new C2464t4(100)))));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withValueReset() {
        return new UserProfileUpdate<>(new Gi(1, this.f6521a.c, new C2571xb(), new Nb(new C2464t4(100))));
    }
}
