package io.appmetrica.analytics.screenshot.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: loaded from: classes7.dex */
public final class K implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final M f6540a;

    /* JADX WARN: Multi-variable type inference failed */
    public K() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    public final byte[] a(J j) {
        return MessageNano.toByteArray(this.f6540a.fromModel(j));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object fromModel(Object obj) {
        return MessageNano.toByteArray(this.f6540a.fromModel((J) obj));
    }

    public K(M m) {
        this.f6540a = m;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final J toModel(byte[] bArr) {
        S s;
        try {
            s = (S) MessageNano.mergeFrom(new S(), bArr);
        } catch (Throwable unused) {
            s = new S();
        }
        return this.f6540a.toModel(s);
    }

    public /* synthetic */ K(M m, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? new M(null, 1, null) : m);
    }
}
