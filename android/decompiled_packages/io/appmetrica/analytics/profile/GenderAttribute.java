package io.appmetrica.analytics.profile;

import io.appmetrica.analytics.impl.A6;
import io.appmetrica.analytics.impl.C2026bn;
import io.appmetrica.analytics.impl.C2050cl;
import io.appmetrica.analytics.impl.C2114f8;
import io.appmetrica.analytics.impl.C2140g8;
import io.appmetrica.analytics.impl.C2614z4;
import io.appmetrica.analytics.impl.Cl;
import io.appmetrica.analytics.impl.Gi;
import io.appmetrica.analytics.impl.InterfaceC2156go;

/* JADX INFO: loaded from: classes7.dex */
public class GenderAttribute {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final A6 f6519a = new A6("appmetrica_gender", new C2140g8(), new Cl());

    public enum Gender {
        MALE("M"),
        FEMALE("F"),
        OTHER("O");


        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final String f6520a;

        Gender(String str) {
            this.f6520a = str;
        }

        public String getStringValue() {
            return this.f6520a;
        }
    }

    GenderAttribute() {
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withValue(Gender gender) {
        String str = this.f6519a.c;
        String stringValue = gender.getStringValue();
        C2114f8 c2114f8 = new C2114f8();
        A6 a6 = this.f6519a;
        return new UserProfileUpdate<>(new C2026bn(str, stringValue, c2114f8, a6.f5591a, new C2614z4(a6.b)));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withValueIfUndefined(Gender gender) {
        String str = this.f6519a.c;
        String stringValue = gender.getStringValue();
        C2114f8 c2114f8 = new C2114f8();
        A6 a6 = this.f6519a;
        return new UserProfileUpdate<>(new C2026bn(str, stringValue, c2114f8, a6.f5591a, new C2050cl(a6.b)));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withValueReset() {
        A6 a6 = this.f6519a;
        return new UserProfileUpdate<>(new Gi(0, a6.c, a6.f5591a, a6.b));
    }
}
