package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;
import java.util.Arrays;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.b6, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2009b6 extends MessageNano {
    public static volatile C2009b6[] c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public byte[] f6013a;
    public C2112f6 b;

    public C2009b6() {
        a();
    }

    public static C2009b6[] b() {
        if (c == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (c == null) {
                    c = new C2009b6[0];
                }
            }
        }
        return c;
    }

    public final C2009b6 a() {
        this.f6013a = WireFormatNano.EMPTY_BYTES;
        this.b = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        if (!Arrays.equals(this.f6013a, WireFormatNano.EMPTY_BYTES)) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeBytesSize(1, this.f6013a);
        }
        C2112f6 c2112f6 = this.b;
        return c2112f6 != null ? CodedOutputByteBufferNano.computeMessageSize(2, c2112f6) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        if (!Arrays.equals(this.f6013a, WireFormatNano.EMPTY_BYTES)) {
            codedOutputByteBufferNano.writeBytes(1, this.f6013a);
        }
        C2112f6 c2112f6 = this.b;
        if (c2112f6 != null) {
            codedOutputByteBufferNano.writeMessage(2, c2112f6);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2009b6 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                this.f6013a = codedInputByteBufferNano.readBytes();
            } else if (tag != 18) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                if (this.b == null) {
                    this.b = new C2112f6();
                }
                codedInputByteBufferNano.readMessage(this.b);
            }
        }
        return this;
    }

    public static C2009b6 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2009b6().mergeFrom(codedInputByteBufferNano);
    }

    public static C2009b6 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2009b6) MessageNano.mergeFrom(new C2009b6(), bArr);
    }
}
