package io.appmetrica.analytics.profile;

import io.appmetrica.analytics.impl.A6;
import io.appmetrica.analytics.impl.C2050cl;
import io.appmetrica.analytics.impl.C2109f3;
import io.appmetrica.analytics.impl.C2614z4;
import io.appmetrica.analytics.impl.Gi;
import io.appmetrica.analytics.impl.InterfaceC2156go;
import io.appmetrica.analytics.impl.InterfaceC2437s2;
import io.appmetrica.analytics.impl.uo;

/* JADX INFO: loaded from: classes7.dex */
public class BooleanAttribute {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final A6 f6517a;

    BooleanAttribute(String str, uo uoVar, InterfaceC2437s2 interfaceC2437s2) {
        this.f6517a = new A6(str, uoVar, interfaceC2437s2);
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withValue(boolean z) {
        A6 a6 = this.f6517a;
        return new UserProfileUpdate<>(new C2109f3(a6.c, z, a6.f5591a, new C2614z4(a6.b)));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withValueIfUndefined(boolean z) {
        A6 a6 = this.f6517a;
        return new UserProfileUpdate<>(new C2109f3(a6.c, z, a6.f5591a, new C2050cl(a6.b)));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withValueReset() {
        A6 a6 = this.f6517a;
        return new UserProfileUpdate<>(new Gi(3, a6.c, a6.f5591a, a6.b));
    }
}
