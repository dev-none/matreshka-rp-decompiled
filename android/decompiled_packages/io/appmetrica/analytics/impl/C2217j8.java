package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.j8, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2217j8 extends MessageNano {
    public static volatile C2217j8[] b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C2243k8 f6148a;

    public C2217j8() {
        a();
    }

    public static C2217j8[] b() {
        if (b == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (b == null) {
                    b = new C2217j8[0];
                }
            }
        }
        return b;
    }

    public final C2217j8 a() {
        this.f6148a = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        C2243k8 c2243k8 = this.f6148a;
        return c2243k8 != null ? CodedOutputByteBufferNano.computeMessageSize(1, c2243k8) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        C2243k8 c2243k8 = this.f6148a;
        if (c2243k8 != null) {
            codedOutputByteBufferNano.writeMessage(1, c2243k8);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2217j8 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag != 10) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                if (this.f6148a == null) {
                    this.f6148a = new C2243k8();
                }
                codedInputByteBufferNano.readMessage(this.f6148a);
            }
        }
        return this;
    }

    public static C2217j8 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2217j8().mergeFrom(codedInputByteBufferNano);
    }

    public static C2217j8 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2217j8) MessageNano.mergeFrom(new C2217j8(), bArr);
    }
}
