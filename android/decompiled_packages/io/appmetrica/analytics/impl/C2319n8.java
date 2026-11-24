package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;
import java.util.Arrays;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.n8, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2319n8 extends MessageNano {
    public static volatile C2319n8[] f;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public byte[] f6222a;
    public byte[] b;
    public C2418r8 c;
    public C2344o8[] d;
    public int e;

    public C2319n8() {
        a();
    }

    public static C2319n8[] b() {
        if (f == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (f == null) {
                    f = new C2319n8[0];
                }
            }
        }
        return f;
    }

    public final C2319n8 a() {
        byte[] bArr = WireFormatNano.EMPTY_BYTES;
        this.f6222a = bArr;
        this.b = bArr;
        this.c = null;
        this.d = C2344o8.b();
        this.e = 0;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        byte[] bArr = this.f6222a;
        byte[] bArr2 = WireFormatNano.EMPTY_BYTES;
        if (!Arrays.equals(bArr, bArr2)) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeBytesSize(1, this.f6222a);
        }
        if (!Arrays.equals(this.b, bArr2)) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeBytesSize(2, this.b);
        }
        C2418r8 c2418r8 = this.c;
        if (c2418r8 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(3, c2418r8);
        }
        C2344o8[] c2344o8Arr = this.d;
        if (c2344o8Arr != null && c2344o8Arr.length > 0) {
            int i = 0;
            while (true) {
                C2344o8[] c2344o8Arr2 = this.d;
                if (i >= c2344o8Arr2.length) {
                    break;
                }
                C2344o8 c2344o8 = c2344o8Arr2[i];
                if (c2344o8 != null) {
                    iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(4, c2344o8);
                }
                i++;
            }
        }
        int i2 = this.e;
        return i2 != 0 ? CodedOutputByteBufferNano.computeUInt32Size(5, i2) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        byte[] bArr = this.f6222a;
        byte[] bArr2 = WireFormatNano.EMPTY_BYTES;
        if (!Arrays.equals(bArr, bArr2)) {
            codedOutputByteBufferNano.writeBytes(1, this.f6222a);
        }
        if (!Arrays.equals(this.b, bArr2)) {
            codedOutputByteBufferNano.writeBytes(2, this.b);
        }
        C2418r8 c2418r8 = this.c;
        if (c2418r8 != null) {
            codedOutputByteBufferNano.writeMessage(3, c2418r8);
        }
        C2344o8[] c2344o8Arr = this.d;
        if (c2344o8Arr != null && c2344o8Arr.length > 0) {
            int i = 0;
            while (true) {
                C2344o8[] c2344o8Arr2 = this.d;
                if (i >= c2344o8Arr2.length) {
                    break;
                }
                C2344o8 c2344o8 = c2344o8Arr2[i];
                if (c2344o8 != null) {
                    codedOutputByteBufferNano.writeMessage(4, c2344o8);
                }
                i++;
            }
        }
        int i2 = this.e;
        if (i2 != 0) {
            codedOutputByteBufferNano.writeUInt32(5, i2);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2319n8 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                this.f6222a = codedInputByteBufferNano.readBytes();
            } else if (tag == 18) {
                this.b = codedInputByteBufferNano.readBytes();
            } else if (tag == 26) {
                if (this.c == null) {
                    this.c = new C2418r8();
                }
                codedInputByteBufferNano.readMessage(this.c);
            } else if (tag == 34) {
                int repeatedFieldArrayLength = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 34);
                C2344o8[] c2344o8Arr = this.d;
                int length = c2344o8Arr == null ? 0 : c2344o8Arr.length;
                int i = repeatedFieldArrayLength + length;
                C2344o8[] c2344o8Arr2 = new C2344o8[i];
                if (length != 0) {
                    System.arraycopy(c2344o8Arr, 0, c2344o8Arr2, 0, length);
                }
                while (length < i - 1) {
                    C2344o8 c2344o8 = new C2344o8();
                    c2344o8Arr2[length] = c2344o8;
                    codedInputByteBufferNano.readMessage(c2344o8);
                    codedInputByteBufferNano.readTag();
                    length++;
                }
                C2344o8 c2344o9 = new C2344o8();
                c2344o8Arr2[length] = c2344o9;
                codedInputByteBufferNano.readMessage(c2344o9);
                this.d = c2344o8Arr2;
            } else if (tag != 40) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                this.e = codedInputByteBufferNano.readUInt32();
            }
        }
        return this;
    }

    public static C2319n8 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2319n8().mergeFrom(codedInputByteBufferNano);
    }

    public static C2319n8 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2319n8) MessageNano.mergeFrom(new C2319n8(), bArr);
    }
}
