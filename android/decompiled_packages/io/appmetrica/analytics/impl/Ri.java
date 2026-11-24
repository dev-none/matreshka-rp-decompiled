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
public final class Ri extends MessageNano {
    public static final int l = 0;
    public static final int m = 1;
    public static final int n = 2;
    public static final int o = 1;
    public static final int p = 2;
    public static volatile Ri[] q;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f5869a;
    public byte[] b;
    public byte[] c;
    public byte[] d;
    public Mi e;
    public long f;
    public boolean g;
    public int h;
    public int i;
    public Qi j;
    public Pi k;

    public Ri() {
        a();
    }

    public static Ri[] b() {
        if (q == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (q == null) {
                    q = new Ri[0];
                }
            }
        }
        return q;
    }

    public final Ri a() {
        this.f5869a = 1;
        byte[] bArr = WireFormatNano.EMPTY_BYTES;
        this.b = bArr;
        this.c = bArr;
        this.d = bArr;
        this.e = null;
        this.f = 0L;
        this.g = false;
        this.h = 0;
        this.i = 1;
        this.j = null;
        this.k = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        int i = this.f5869a;
        if (i != 1) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeUInt32Size(1, i);
        }
        int iComputeBytesSize = CodedOutputByteBufferNano.computeBytesSize(3, this.b) + iComputeSerializedSize;
        byte[] bArr = this.c;
        byte[] bArr2 = WireFormatNano.EMPTY_BYTES;
        if (!Arrays.equals(bArr, bArr2)) {
            iComputeBytesSize += CodedOutputByteBufferNano.computeBytesSize(4, this.c);
        }
        if (!Arrays.equals(this.d, bArr2)) {
            iComputeBytesSize += CodedOutputByteBufferNano.computeBytesSize(5, this.d);
        }
        Mi mi = this.e;
        if (mi != null) {
            iComputeBytesSize += CodedOutputByteBufferNano.computeMessageSize(6, mi);
        }
        long j = this.f;
        if (j != 0) {
            iComputeBytesSize += CodedOutputByteBufferNano.computeInt64Size(7, j);
        }
        boolean z = this.g;
        if (z) {
            iComputeBytesSize += CodedOutputByteBufferNano.computeBoolSize(8, z);
        }
        int i2 = this.h;
        if (i2 != 0) {
            iComputeBytesSize += CodedOutputByteBufferNano.computeInt32Size(9, i2);
        }
        int i3 = this.i;
        if (i3 != 1) {
            iComputeBytesSize += CodedOutputByteBufferNano.computeInt32Size(10, i3);
        }
        Qi qi = this.j;
        if (qi != null) {
            iComputeBytesSize += CodedOutputByteBufferNano.computeMessageSize(11, qi);
        }
        Pi pi = this.k;
        return pi != null ? CodedOutputByteBufferNano.computeMessageSize(12, pi) + iComputeBytesSize : iComputeBytesSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        int i = this.f5869a;
        if (i != 1) {
            codedOutputByteBufferNano.writeUInt32(1, i);
        }
        codedOutputByteBufferNano.writeBytes(3, this.b);
        byte[] bArr = this.c;
        byte[] bArr2 = WireFormatNano.EMPTY_BYTES;
        if (!Arrays.equals(bArr, bArr2)) {
            codedOutputByteBufferNano.writeBytes(4, this.c);
        }
        if (!Arrays.equals(this.d, bArr2)) {
            codedOutputByteBufferNano.writeBytes(5, this.d);
        }
        Mi mi = this.e;
        if (mi != null) {
            codedOutputByteBufferNano.writeMessage(6, mi);
        }
        long j = this.f;
        if (j != 0) {
            codedOutputByteBufferNano.writeInt64(7, j);
        }
        boolean z = this.g;
        if (z) {
            codedOutputByteBufferNano.writeBool(8, z);
        }
        int i2 = this.h;
        if (i2 != 0) {
            codedOutputByteBufferNano.writeInt32(9, i2);
        }
        int i3 = this.i;
        if (i3 != 1) {
            codedOutputByteBufferNano.writeInt32(10, i3);
        }
        Qi qi = this.j;
        if (qi != null) {
            codedOutputByteBufferNano.writeMessage(11, qi);
        }
        Pi pi = this.k;
        if (pi != null) {
            codedOutputByteBufferNano.writeMessage(12, pi);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    public static Ri b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new Ri().mergeFrom(codedInputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Ri mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            switch (tag) {
                case 0:
                    break;
                case 8:
                    this.f5869a = codedInputByteBufferNano.readUInt32();
                    break;
                case 26:
                    this.b = codedInputByteBufferNano.readBytes();
                    break;
                case 34:
                    this.c = codedInputByteBufferNano.readBytes();
                    break;
                case 42:
                    this.d = codedInputByteBufferNano.readBytes();
                    break;
                case 50:
                    if (this.e == null) {
                        this.e = new Mi();
                    }
                    codedInputByteBufferNano.readMessage(this.e);
                    break;
                case 56:
                    this.f = codedInputByteBufferNano.readInt64();
                    break;
                case 64:
                    this.g = codedInputByteBufferNano.readBool();
                    break;
                case 72:
                    int int32 = codedInputByteBufferNano.readInt32();
                    if (int32 == 0 || int32 == 1 || int32 == 2) {
                        this.h = int32;
                    }
                    break;
                case 80:
                    int int33 = codedInputByteBufferNano.readInt32();
                    if (int33 == 1 || int33 == 2) {
                        this.i = int33;
                    }
                    break;
                case 90:
                    if (this.j == null) {
                        this.j = new Qi();
                    }
                    codedInputByteBufferNano.readMessage(this.j);
                    break;
                case 98:
                    if (this.k == null) {
                        this.k = new Pi();
                    }
                    codedInputByteBufferNano.readMessage(this.k);
                    break;
                default:
                    if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    }
                    break;
            }
        }
        return this;
    }

    public static Ri a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (Ri) MessageNano.mergeFrom(new Ri(), bArr);
    }
}
