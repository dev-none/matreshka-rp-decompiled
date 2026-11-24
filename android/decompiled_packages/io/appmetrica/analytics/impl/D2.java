package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;

/* JADX INFO: loaded from: classes7.dex */
public final class D2 implements ProtobufConverter {
    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2082e2 fromModel(F2 f2) {
        C2082e2 c2082e2 = new C2082e2();
        E2 e2 = f2.f5670a;
        if (e2 != null) {
            int iOrdinal = e2.ordinal();
            if (iOrdinal == 1) {
                c2082e2.f6055a = 1;
            } else if (iOrdinal == 2) {
                c2082e2.f6055a = 2;
            } else if (iOrdinal == 3) {
                c2082e2.f6055a = 3;
            } else if (iOrdinal == 4) {
                c2082e2.f6055a = 4;
            } else if (iOrdinal == 5) {
                c2082e2.f6055a = 5;
            }
        }
        Boolean bool = f2.b;
        if (bool != null) {
            if (bool.booleanValue()) {
                c2082e2.b = 1;
                return c2082e2;
            }
            c2082e2.b = 0;
        }
        return c2082e2;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final F2 toModel(C2082e2 c2082e2) {
        E2 e2;
        int i = c2082e2.f6055a;
        Boolean bool = null;
        if (i == 1) {
            e2 = E2.ACTIVE;
        } else if (i == 2) {
            e2 = E2.WORKING_SET;
        } else if (i == 3) {
            e2 = E2.FREQUENT;
        } else if (i != 4) {
            e2 = i != 5 ? null : E2.RESTRICTED;
        } else {
            e2 = E2.RARE;
        }
        int i2 = c2082e2.b;
        if (i2 == 0) {
            bool = Boolean.FALSE;
        } else if (i2 == 1) {
            bool = Boolean.TRUE;
        }
        return new F2(e2, bool);
    }
}
