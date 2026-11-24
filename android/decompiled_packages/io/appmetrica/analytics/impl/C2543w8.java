package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;
import java.util.Arrays;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.w8, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2543w8 extends MessageNano {
    public static volatile C2543w8[] e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public byte[] f6382a;
    public C2269l8 b;
    public byte[] c;
    public C2418r8 d;

    public C2543w8() {
        a();
    }

    public static C2543w8[] b() {
        if (e == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (e == null) {
                    e = new C2543w8[0];
                }
            }
        }
        return e;
    }

    public final C2543w8 a() {
        byte[] bArr = WireFormatNano.EMPTY_BYTES;
        this.f6382a = bArr;
        this.b = null;
        this.c = bArr;
        this.d = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        byte[] bArr = this.f6382a;
        byte[] bArr2 = WireFormatNano.EMPTY_BYTES;
        if (!Arrays.equals(bArr, bArr2)) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeBytesSize(1, this.f6382a);
        }
        C2269l8 c2269l8 = this.b;
        if (c2269l8 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(2, c2269l8);
        }
        if (!Arrays.equals(this.c, bArr2)) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeBytesSize(3, this.c);
        }
        C2418r8 c2418r8 = this.d;
        return c2418r8 != null ? CodedOutputByteBufferNano.computeMessageSize(4, c2418r8) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        byte[] bArr = this.f6382a;
        byte[] bArr2 = WireFormatNano.EMPTY_BYTES;
        if (!Arrays.equals(bArr, bArr2)) {
            codedOutputByteBufferNano.writeBytes(1, this.f6382a);
        }
        C2269l8 c2269l8 = this.b;
        if (c2269l8 != null) {
            codedOutputByteBufferNano.writeMessage(2, c2269l8);
        }
        if (!Arrays.equals(this.c, bArr2)) {
            codedOutputByteBufferNano.writeBytes(3, this.c);
        }
        C2418r8 c2418r8 = this.d;
        if (c2418r8 != null) {
            codedOutputByteBufferNano.writeMessage(4, c2418r8);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2543w8 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                this.f6382a = codedInputByteBufferNano.readBytes();
            } else if (tag == 18) {
                if (this.b == null) {
                    this.b = new C2269l8();
                }
                codedInputByteBufferNano.readMessage(this.b);
            } else if (tag == 26) {
                this.c = codedInputByteBufferNano.readBytes();
            } else if (tag != 34) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                if (this.d == null) {
                    this.d = new C2418r8();
                }
                codedInputByteBufferNano.readMessage(this.d);
            }
        }
        return this;
    }

    public static C2543w8 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2543w8().mergeFrom(codedInputByteBufferNano);
    }

    public static C2543w8 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2543w8) MessageNano.mergeFrom(new C2543w8(), bArr);
    }
}
