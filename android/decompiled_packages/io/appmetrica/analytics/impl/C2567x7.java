package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.x7, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2567x7 implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2449se f6399a;

    /* JADX WARN: Multi-variable type inference failed */
    public C2567x7() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2542w7 fromModel(C2617z7 c2617z7) {
        C2542w7 c2542w7 = new C2542w7();
        Long l = c2617z7.f6426a;
        if (l != null) {
            c2542w7.f6381a = l.longValue();
        }
        Long l2 = c2617z7.b;
        if (l2 != null) {
            c2542w7.b = l2.longValue();
        }
        Boolean bool = c2617z7.c;
        if (bool != null) {
            bool.booleanValue();
            c2542w7.c = this.f6399a.fromModel(bool).intValue();
        }
        return c2542w7;
    }

    public C2567x7(C2449se c2449se) {
        this.f6399a = c2449se;
    }

    public /* synthetic */ C2567x7(C2449se c2449se, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? new C2449se() : c2449se);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2617z7 toModel(C2542w7 c2542w7) {
        C2542w7 c2542w8 = new C2542w7();
        Long lValueOf = Long.valueOf(c2542w7.f6381a);
        if (lValueOf.longValue() == c2542w8.f6381a) {
            lValueOf = null;
        }
        Long lValueOf2 = Long.valueOf(c2542w7.b);
        return new C2617z7(lValueOf, lValueOf2.longValue() != c2542w8.b ? lValueOf2 : null, this.f6399a.a(c2542w7.c));
    }
}
