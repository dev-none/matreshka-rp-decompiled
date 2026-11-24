package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.data.BaseProtobufStateSerializer;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import java.io.IOException;

/* JADX INFO: loaded from: classes7.dex */
public final class Bm extends BaseProtobufStateSerializer {
    @Override // io.appmetrica.analytics.coreutils.internal.data.BaseProtobufStateSerializer, io.appmetrica.analytics.coreapi.internal.data.StateSerializer
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Am defaultValue() {
        Am am = new Am();
        am.i = new C2532vm();
        return am;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.StateSerializer
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Am toState(byte[] bArr) throws IOException {
        return (Am) MessageNano.mergeFrom(new Am(), bArr);
    }
}
