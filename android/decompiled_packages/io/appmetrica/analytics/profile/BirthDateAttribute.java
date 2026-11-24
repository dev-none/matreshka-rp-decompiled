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
import io.appmetrica.analytics.impl.R2;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.Locale;

/* JADX INFO: loaded from: classes7.dex */
public class BirthDateAttribute {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final A6 f6516a = new A6("appmetrica_birth_date", new C2140g8(), new Cl());

    BirthDateAttribute() {
    }

    final UserProfileUpdate a(Calendar calendar, String str, R2 r2) {
        return new UserProfileUpdate(new C2026bn(this.f6516a.c, new SimpleDateFormat(str).format(calendar.getTime()), new C2114f8(), new C2140g8(), r2));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withAge(int i) {
        int i2 = Calendar.getInstance(Locale.US).get(1) - i;
        GregorianCalendar gregorianCalendar = new GregorianCalendar();
        gregorianCalendar.set(1, i2);
        return a(gregorianCalendar, "yyyy", new C2614z4(this.f6516a.b));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withAgeIfUndefined(int i) {
        int i2 = Calendar.getInstance(Locale.US).get(1) - i;
        GregorianCalendar gregorianCalendar = new GregorianCalendar();
        gregorianCalendar.set(1, i2);
        return a(gregorianCalendar, "yyyy", new C2050cl(this.f6516a.b));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withBirthDate(Calendar calendar) {
        return a(calendar, "yyyy-MM-dd", new C2614z4(this.f6516a.b));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withBirthDateIfUndefined(Calendar calendar) {
        return a(calendar, "yyyy-MM-dd", new C2050cl(this.f6516a.b));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withValueReset() {
        return new UserProfileUpdate<>(new Gi(0, this.f6516a.c, new C2140g8(), new Cl()));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withBirthDate(int i) {
        GregorianCalendar gregorianCalendar = new GregorianCalendar();
        gregorianCalendar.set(1, i);
        return a(gregorianCalendar, "yyyy", new C2614z4(this.f6516a.b));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withBirthDateIfUndefined(int i) {
        GregorianCalendar gregorianCalendar = new GregorianCalendar();
        gregorianCalendar.set(1, i);
        return a(gregorianCalendar, "yyyy", new C2050cl(this.f6516a.b));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withBirthDate(int i, int i2) {
        GregorianCalendar gregorianCalendar = new GregorianCalendar();
        gregorianCalendar.set(1, i);
        gregorianCalendar.set(2, i2 - 1);
        gregorianCalendar.set(5, 1);
        return a(gregorianCalendar, "yyyy-MM", new C2614z4(this.f6516a.b));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withBirthDateIfUndefined(int i, int i2) {
        GregorianCalendar gregorianCalendar = new GregorianCalendar();
        gregorianCalendar.set(1, i);
        gregorianCalendar.set(2, i2 - 1);
        gregorianCalendar.set(5, 1);
        return a(gregorianCalendar, "yyyy-MM", new C2050cl(this.f6516a.b));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withBirthDate(int i, int i2, int i3) {
        GregorianCalendar gregorianCalendar = new GregorianCalendar();
        gregorianCalendar.set(1, i);
        gregorianCalendar.set(2, i2 - 1);
        gregorianCalendar.set(5, i3);
        return a(gregorianCalendar, "yyyy-MM-dd", new C2614z4(this.f6516a.b));
    }

    public UserProfileUpdate<? extends InterfaceC2156go> withBirthDateIfUndefined(int i, int i2, int i3) {
        GregorianCalendar gregorianCalendar = new GregorianCalendar();
        gregorianCalendar.set(1, i);
        gregorianCalendar.set(2, i2 - 1);
        gregorianCalendar.set(5, i3);
        return a(gregorianCalendar, "yyyy-MM-dd", new C2050cl(this.f6516a.b));
    }
}
