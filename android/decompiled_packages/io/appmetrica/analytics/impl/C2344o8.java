package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.o8, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2344o8 extends MessageNano {
    public static volatile C2344o8[] c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f6237a;
    public C2243k8 b;

    public C2344o8() {
        a();
    }

    public static C2344o8[] b() {
        if (c == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (c == null) {
                    c = new C2344o8[0];
                }
            }
        }
        return c;
    }

    public final C2344o8 a() {
        this.f6237a = 0;
        this.b = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        int i = this.f6237a;
        if (i != 0) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeUInt32Size(1, i);
        }
        C2243k8 c2243k8 = this.b;
        return c2243k8 != null ? CodedOutputByteBufferNano.computeMessageSize(2, c2243k8) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        int i = this.f6237a;
        if (i != 0) {
            codedOutputByteBufferNano.writeUInt32(1, i);
        }
        C2243k8 c2243k8 = this.b;
        if (c2243k8 != null) {
            codedOutputByteBufferNano.writeMessage(2, c2243k8);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2344o8 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 8) {
                this.f6237a = codedInputByteBufferNano.readUInt32();
            } else if (tag != 18) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                if (this.b == null) {
                    this.b = new C2243k8();
                }
                codedInputByteBufferNano.readMessage(this.b);
            }
        }
        return this;
    }

    public static C2344o8 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2344o8().mergeFrom(codedInputByteBufferNano);
    }

    public static C2344o8 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2344o8) MessageNano.mergeFrom(new C2344o8(), bArr);
    }
}
