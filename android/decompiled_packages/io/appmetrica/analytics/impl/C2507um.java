package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.um, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2507um extends MessageNano {
    public static volatile C2507um[] b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public long f6357a;

    public C2507um() {
        a();
    }

    public static C2507um[] b() {
        if (b == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (b == null) {
                    b = new C2507um[0];
                }
            }
        }
        return b;
    }

    public final C2507um a() {
        this.f6357a = 864000000L;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        long j = this.f6357a;
        return j != 864000000 ? CodedOutputByteBufferNano.computeInt64Size(1, j) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        long j = this.f6357a;
        if (j != 864000000) {
            codedOutputByteBufferNano.writeInt64(1, j);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2507um mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag != 8) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                this.f6357a = codedInputByteBufferNano.readInt64();
            }
        }
        return this;
    }

    public static C2507um b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2507um().mergeFrom(codedInputByteBufferNano);
    }

    public static C2507um a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2507um) MessageNano.mergeFrom(new C2507um(), bArr);
    }
}
