package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.data.BaseProtobufStateSerializer;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.h2, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2160h2 extends BaseProtobufStateSerializer {
    public final C2134g2 a() {
        return new C2134g2();
    }

    @Override // io.appmetrica.analytics.coreutils.internal.data.BaseProtobufStateSerializer, io.appmetrica.analytics.coreapi.internal.data.StateSerializer
    public final MessageNano defaultValue() {
        return new C2134g2();
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.StateSerializer
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2134g2 toState(byte[] bArr) throws IOException {
        return (C2134g2) MessageNano.mergeFrom(new C2134g2(), bArr);
    }

    @Override // io.appmetrica.analytics.coreutils.internal.data.BaseProtobufStateSerializer, io.appmetrica.analytics.coreapi.internal.data.StateSerializer
    public final Object defaultValue() {
        return new C2134g2();
    }
}
