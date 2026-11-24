package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;
import java.util.Arrays;

/* JADX INFO: loaded from: classes7.dex */
public final class Ni extends MessageNano {
    public static volatile Ni[] e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public long f5810a;
    public Oi b;
    public int c;
    public byte[] d;

    public Ni() {
        a();
    }

    public static Ni[] b() {
        if (e == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (e == null) {
                    e = new Ni[0];
                }
            }
        }
        return e;
    }

    public final Ni a() {
        this.f5810a = 0L;
        this.b = null;
        this.c = 0;
        this.d = WireFormatNano.EMPTY_BYTES;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        long j = this.f5810a;
        if (j != 0) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeInt64Size(1, j);
        }
        Oi oi = this.b;
        if (oi != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(2, oi);
        }
        int i = this.c;
        if (i != 0) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeUInt32Size(3, i);
        }
        return !Arrays.equals(this.d, WireFormatNano.EMPTY_BYTES) ? CodedOutputByteBufferNano.computeBytesSize(4, this.d) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        long j = this.f5810a;
        if (j != 0) {
            codedOutputByteBufferNano.writeInt64(1, j);
        }
        Oi oi = this.b;
        if (oi != null) {
            codedOutputByteBufferNano.writeMessage(2, oi);
        }
        int i = this.c;
        if (i != 0) {
            codedOutputByteBufferNano.writeUInt32(3, i);
        }
        if (!Arrays.equals(this.d, WireFormatNano.EMPTY_BYTES)) {
            codedOutputByteBufferNano.writeBytes(4, this.d);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Ni mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 8) {
                this.f5810a = codedInputByteBufferNano.readInt64();
            } else if (tag == 18) {
                if (this.b == null) {
                    this.b = new Oi();
                }
                codedInputByteBufferNano.readMessage(this.b);
            } else if (tag == 24) {
                this.c = codedInputByteBufferNano.readUInt32();
            } else if (tag != 34) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                this.d = codedInputByteBufferNano.readBytes();
            }
        }
        return this;
    }

    public static Ni b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new Ni().mergeFrom(codedInputByteBufferNano);
    }

    public static Ni a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (Ni) MessageNano.mergeFrom(new Ni(), bArr);
    }
}
