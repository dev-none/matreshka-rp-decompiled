package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: loaded from: classes7.dex */
public final class C3 extends MessageNano {
    public static volatile C3[] c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public E3 f5620a;
    public int b;

    public C3() {
        a();
    }

    public static C3[] b() {
        if (c == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (c == null) {
                    c = new C3[0];
                }
            }
        }
        return c;
    }

    public final C3 a() {
        this.f5620a = null;
        this.b = 0;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        E3 e3 = this.f5620a;
        if (e3 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(1, e3);
        }
        int i = this.b;
        return i != 0 ? CodedOutputByteBufferNano.computeInt32Size(2, i) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        E3 e3 = this.f5620a;
        if (e3 != null) {
            codedOutputByteBufferNano.writeMessage(1, e3);
        }
        int i = this.b;
        if (i != 0) {
            codedOutputByteBufferNano.writeInt32(2, i);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C3 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                if (this.f5620a == null) {
                    this.f5620a = new E3();
                }
                codedInputByteBufferNano.readMessage(this.f5620a);
            } else if (tag != 16) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                int int32 = codedInputByteBufferNano.readInt32();
                if (int32 == 0 || int32 == 1 || int32 == 2 || int32 == 3) {
                    this.b = int32;
                }
            }
        }
        return this;
    }

    public static C3 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C3().mergeFrom(codedInputByteBufferNano);
    }

    public static C3 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C3) MessageNano.mergeFrom(new C3(), bArr);
    }
}
