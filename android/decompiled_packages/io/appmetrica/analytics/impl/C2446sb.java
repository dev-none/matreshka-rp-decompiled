package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import io.appmetrica.analytics.protobuf.nano.MessageNano;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.sb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2446sb implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Tc f6311a;

    public C2446sb() {
        this(new Tc(new Tn()));
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final byte[] fromModel(Sn sn) {
        return MessageNano.toByteArray((MessageNano) this.f6311a.f5904a.fromModel(sn));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public C2446sb(Tc tc) {
        this.f6311a = tc;
    }

    public final Sn a(byte[] bArr) {
        throw new UnsupportedOperationException();
    }
}
