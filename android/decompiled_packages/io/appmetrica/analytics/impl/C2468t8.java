package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;
import java.util.Arrays;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.t8, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2468t8 extends MessageNano {
    public static volatile C2468t8[] h;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public byte[] f6329a;
    public byte[] b;
    public C2269l8 c;
    public C2418r8 d;
    public C2443s8 e;
    public C2443s8 f;
    public C2493u8[] g;

    public C2468t8() {
        a();
    }

    public static C2468t8[] b() {
        if (h == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (h == null) {
                    h = new C2468t8[0];
                }
            }
        }
        return h;
    }

    public final C2468t8 a() {
        byte[] bArr = WireFormatNano.EMPTY_BYTES;
        this.f6329a = bArr;
        this.b = bArr;
        this.c = null;
        this.d = null;
        this.e = null;
        this.f = null;
        this.g = C2493u8.b();
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        byte[] bArr = this.f6329a;
        byte[] bArr2 = WireFormatNano.EMPTY_BYTES;
        if (!Arrays.equals(bArr, bArr2)) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeBytesSize(1, this.f6329a);
        }
        if (!Arrays.equals(this.b, bArr2)) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeBytesSize(2, this.b);
        }
        C2269l8 c2269l8 = this.c;
        if (c2269l8 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(3, c2269l8);
        }
        C2418r8 c2418r8 = this.d;
        if (c2418r8 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(4, c2418r8);
        }
        C2443s8 c2443s8 = this.e;
        if (c2443s8 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(5, c2443s8);
        }
        C2443s8 c2443s9 = this.f;
        if (c2443s9 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(6, c2443s9);
        }
        C2493u8[] c2493u8Arr = this.g;
        if (c2493u8Arr != null && c2493u8Arr.length > 0) {
            int i = 0;
            while (true) {
                C2493u8[] c2493u8Arr2 = this.g;
                if (i >= c2493u8Arr2.length) {
                    break;
                }
                C2493u8 c2493u8 = c2493u8Arr2[i];
                if (c2493u8 != null) {
                    iComputeSerializedSize = CodedOutputByteBufferNano.computeMessageSize(7, c2493u8) + iComputeSerializedSize;
                }
                i++;
            }
        }
        return iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        byte[] bArr = this.f6329a;
        byte[] bArr2 = WireFormatNano.EMPTY_BYTES;
        if (!Arrays.equals(bArr, bArr2)) {
            codedOutputByteBufferNano.writeBytes(1, this.f6329a);
        }
        if (!Arrays.equals(this.b, bArr2)) {
            codedOutputByteBufferNano.writeBytes(2, this.b);
        }
        C2269l8 c2269l8 = this.c;
        if (c2269l8 != null) {
            codedOutputByteBufferNano.writeMessage(3, c2269l8);
        }
        C2418r8 c2418r8 = this.d;
        if (c2418r8 != null) {
            codedOutputByteBufferNano.writeMessage(4, c2418r8);
        }
        C2443s8 c2443s8 = this.e;
        if (c2443s8 != null) {
            codedOutputByteBufferNano.writeMessage(5, c2443s8);
        }
        C2443s8 c2443s9 = this.f;
        if (c2443s9 != null) {
            codedOutputByteBufferNano.writeMessage(6, c2443s9);
        }
        C2493u8[] c2493u8Arr = this.g;
        if (c2493u8Arr != null && c2493u8Arr.length > 0) {
            int i = 0;
            while (true) {
                C2493u8[] c2493u8Arr2 = this.g;
                if (i >= c2493u8Arr2.length) {
                    break;
                }
                C2493u8 c2493u8 = c2493u8Arr2[i];
                if (c2493u8 != null) {
                    codedOutputByteBufferNano.writeMessage(7, c2493u8);
                }
                i++;
            }
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2468t8 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                this.f6329a = codedInputByteBufferNano.readBytes();
            } else if (tag == 18) {
                this.b = codedInputByteBufferNano.readBytes();
            } else if (tag == 26) {
                if (this.c == null) {
                    this.c = new C2269l8();
                }
                codedInputByteBufferNano.readMessage(this.c);
            } else if (tag == 34) {
                if (this.d == null) {
                    this.d = new C2418r8();
                }
                codedInputByteBufferNano.readMessage(this.d);
            } else if (tag == 42) {
                if (this.e == null) {
                    this.e = new C2443s8();
                }
                codedInputByteBufferNano.readMessage(this.e);
            } else if (tag == 50) {
                if (this.f == null) {
                    this.f = new C2443s8();
                }
                codedInputByteBufferNano.readMessage(this.f);
            } else if (tag != 58) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                int repeatedFieldArrayLength = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 58);
                C2493u8[] c2493u8Arr = this.g;
                int length = c2493u8Arr == null ? 0 : c2493u8Arr.length;
                int i = repeatedFieldArrayLength + length;
                C2493u8[] c2493u8Arr2 = new C2493u8[i];
                if (length != 0) {
                    System.arraycopy(c2493u8Arr, 0, c2493u8Arr2, 0, length);
                }
                while (length < i - 1) {
                    C2493u8 c2493u8 = new C2493u8();
                    c2493u8Arr2[length] = c2493u8;
                    codedInputByteBufferNano.readMessage(c2493u8);
                    codedInputByteBufferNano.readTag();
                    length++;
                }
                C2493u8 c2493u9 = new C2493u8();
                c2493u8Arr2[length] = c2493u9;
                codedInputByteBufferNano.readMessage(c2493u9);
                this.g = c2493u8Arr2;
            }
        }
        return this;
    }

    public static C2468t8 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2468t8().mergeFrom(codedInputByteBufferNano);
    }

    public static C2468t8 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2468t8) MessageNano.mergeFrom(new C2468t8(), bArr);
    }
}
