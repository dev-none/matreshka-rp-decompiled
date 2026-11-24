package io.appmetrica.analytics.profile;

import io.appmetrica.analytics.impl.C2000an;
import io.appmetrica.analytics.impl.C2464t4;
import io.appmetrica.analytics.impl.C2571xb;
import io.appmetrica.analytics.impl.Nb;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;

/* JADX INFO: loaded from: classes7.dex */
public final class Attribute {
    public static BirthDateAttribute birthDate() {
        return new BirthDateAttribute();
    }

    public static BooleanAttribute customBoolean(String str) {
        return new BooleanAttribute(str, new C2571xb(), new Nb(new C2464t4(100)));
    }

    public static CounterAttribute customCounter(String str) {
        return new CounterAttribute(str, new C2571xb(), new Nb(new C2464t4(100)));
    }

    public static NumberAttribute customNumber(String str) {
        return new NumberAttribute(str, new C2571xb(), new Nb(new C2464t4(100)));
    }

    public static StringAttribute customString(String str) {
        return new StringAttribute(str, new C2000an(200, "String attribute \"" + str + "\"", PublicLogger.getAnonymousInstance()), new C2571xb(), new Nb(new C2464t4(100)));
    }

    public static GenderAttribute gender() {
        return new GenderAttribute();
    }

    public static NameAttribute name() {
        return new NameAttribute();
    }

    public static NotificationsEnabledAttribute notificationsEnabled() {
        return new NotificationsEnabledAttribute();
    }
}
