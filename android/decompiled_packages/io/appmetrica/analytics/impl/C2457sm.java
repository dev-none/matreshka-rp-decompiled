package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.sm, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2457sm extends MessageNano {
    public static volatile C2457sm[] b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public long f6319a;

    public C2457sm() {
        a();
    }

    public static C2457sm[] b() {
        if (b == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (b == null) {
                    b = new C2457sm[0];
                }
            }
        }
        return b;
    }

    public final C2457sm a() {
        this.f6319a = 10000L;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        long j = this.f6319a;
        return j != 10000 ? CodedOutputByteBufferNano.computeInt64Size(1, j) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        long j = this.f6319a;
        if (j != 10000) {
            codedOutputByteBufferNano.writeInt64(1, j);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2457sm mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
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
                this.f6319a = codedInputByteBufferNano.readInt64();
            }
        }
        return this;
    }

    public static C2457sm b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2457sm().mergeFrom(codedInputByteBufferNano);
    }

    public static C2457sm a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2457sm) MessageNano.mergeFrom(new C2457sm(), bArr);
    }
}
