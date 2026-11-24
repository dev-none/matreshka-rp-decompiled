package io.appmetrica.analytics.impl;

import android.content.Context;
import kotlin.jvm.functions.Function1;

/* JADX INFO: loaded from: classes7.dex */
public final class Pd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Function1 f5835a;

    public Pd(Ud ud) {
        this.f5835a = ud;
    }

    public final Qd a(Context context, Xg xg) {
        return new Qd(context, xg, this.f5835a, new Yd() { // from class: io.appmetrica.analytics.impl.Pd$$ExternalSyntheticLambda0
            @Override // io.appmetrica.analytics.impl.Yd
            public final InterfaceC2101el a(E0 e0) {
                return Pd.a(e0);
            }
        }, EnumC2195ib.EVENT_TYPE_CURRENT_SESSION_NATIVE_CRASH_PROTOBUF, "actual");
    }

    public final Qd b(Context context, Xg xg) {
        return new Qd(context, xg, this.f5835a, new Yd() { // from class: io.appmetrica.analytics.impl.Pd$$ExternalSyntheticLambda1
            @Override // io.appmetrica.analytics.impl.Yd
            public final InterfaceC2101el a(E0 e0) {
                return Pd.b(e0);
            }
        }, EnumC2195ib.EVENT_TYPE_PREV_SESSION_NATIVE_CRASH_PROTOBUF, "prev session");
    }

    public static final InterfaceC2101el a(E0 e0) {
        return new Nd(e0.f.d);
    }

    public static final InterfaceC2101el b(E0 e0) {
        return new X();
    }
}
