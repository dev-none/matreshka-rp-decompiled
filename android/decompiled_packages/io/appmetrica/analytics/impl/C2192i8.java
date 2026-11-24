package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;
import java.util.Arrays;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.i8, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2192i8 extends MessageNano {
    public static volatile C2192i8[] c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public byte[] f6128a;
    public C2294m8 b;

    public C2192i8() {
        a();
    }

    public static C2192i8[] b() {
        if (c == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (c == null) {
                    c = new C2192i8[0];
                }
            }
        }
        return c;
    }

    public final C2192i8 a() {
        this.f6128a = WireFormatNano.EMPTY_BYTES;
        this.b = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        if (!Arrays.equals(this.f6128a, WireFormatNano.EMPTY_BYTES)) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeBytesSize(1, this.f6128a);
        }
        C2294m8 c2294m8 = this.b;
        return c2294m8 != null ? CodedOutputByteBufferNano.computeMessageSize(2, c2294m8) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        if (!Arrays.equals(this.f6128a, WireFormatNano.EMPTY_BYTES)) {
            codedOutputByteBufferNano.writeBytes(1, this.f6128a);
        }
        C2294m8 c2294m8 = this.b;
        if (c2294m8 != null) {
            codedOutputByteBufferNano.writeMessage(2, c2294m8);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2192i8 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                this.f6128a = codedInputByteBufferNano.readBytes();
            } else if (tag != 18) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                if (this.b == null) {
                    this.b = new C2294m8();
                }
                codedInputByteBufferNano.readMessage(this.b);
            }
        }
        return this;
    }

    public static C2192i8 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2192i8().mergeFrom(codedInputByteBufferNano);
    }

    public static C2192i8 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2192i8) MessageNano.mergeFrom(new C2192i8(), bArr);
    }
}
