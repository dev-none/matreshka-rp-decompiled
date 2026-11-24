package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.z8, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2618z8 extends MessageNano {
    public static volatile C2618z8[] b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C2543w8 f6427a;

    public C2618z8() {
        a();
    }

    public static C2618z8[] b() {
        if (b == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (b == null) {
                    b = new C2618z8[0];
                }
            }
        }
        return b;
    }

    public final C2618z8 a() {
        this.f6427a = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        C2543w8 c2543w8 = this.f6427a;
        return c2543w8 != null ? CodedOutputByteBufferNano.computeMessageSize(1, c2543w8) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        C2543w8 c2543w8 = this.f6427a;
        if (c2543w8 != null) {
            codedOutputByteBufferNano.writeMessage(1, c2543w8);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2618z8 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
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
                if (this.f6427a == null) {
                    this.f6427a = new C2543w8();
                }
                codedInputByteBufferNano.readMessage(this.f6427a);
            }
        }
        return this;
    }

    public static C2618z8 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2618z8().mergeFrom(codedInputByteBufferNano);
    }

    public static C2618z8 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2618z8) MessageNano.mergeFrom(new C2618z8(), bArr);
    }
}
