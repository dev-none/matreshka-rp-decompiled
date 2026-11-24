package io.appmetrica.analytics.profile;

import io.appmetrica.analytics.impl.A6;
import io.appmetrica.analytics.impl.C2000an;
import io.appmetrica.analytics.impl.C2026bn;
import io.appmetrica.analytics.impl.C2050cl;
import io.appmetrica.analytics.impl.C2614z4;
import io.appmetrica.analytics.impl.Gi;
import io.appmetrica.analytics.impl.InterfaceC2156go;
import io.appmetrica.analytics.impl.InterfaceC2437s2;
import io.appmetrica.analytics.impl.Nn;
import io.appmetrica.analytics.impl.uo;

/* JADX INFO: loaded from: classes7.dex */
public class StringAttribute {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Nn f6522a;
    private final A6 b;

    StringAttribute(String str, C2000an c2000an, uo uoVar, InterfaceC2437s2 interfaceC2437s2) {
        this.b = new A6(str, uoVar, interfaceC2437s2);
        this.f6522a = c2000an;
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withValue(String str) {
        A6 a6 = this.b;
        return new UserProfileUpdate<>(new C2026bn(a6.c, str, this.f6522a, a6.f5591a, new C2614z4(a6.b)));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withValueIfUndefined(String str) {
        A6 a6 = this.b;
        return new UserProfileUpdate<>(new C2026bn(a6.c, str, this.f6522a, a6.f5591a, new C2050cl(a6.b)));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withValueReset() {
        A6 a6 = this.b;
        return new UserProfileUpdate<>(new Gi(0, a6.c, a6.f5591a, a6.b));
    }
}
