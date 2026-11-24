package io.appmetrica.analytics.remotepermissions.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import io.appmetrica.analytics.protobuf.nano.MessageNano;

/* JADX INFO: loaded from: classes7.dex */
public final class b implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final c f6527a = new c();

    public final byte[] a(a aVar) {
        return MessageNano.toByteArray(this.f6527a.fromModel(aVar));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object fromModel(Object obj) {
        return MessageNano.toByteArray(this.f6527a.fromModel((a) obj));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final a toModel(byte[] bArr) {
        return this.f6527a.toModel((f) MessageNano.mergeFrom(new f(), bArr));
    }
}
