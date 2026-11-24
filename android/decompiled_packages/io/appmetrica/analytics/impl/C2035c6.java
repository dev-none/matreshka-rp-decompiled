package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;
import java.util.Arrays;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.c6, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2035c6 extends MessageNano {
    public static final int k = 0;
    public static final int l = 1;
    public static volatile C2035c6[] m;
    public static byte[] n;
    public static volatile boolean o;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C2190i6 f6025a;
    public Y5 b;
    public String c;
    public int d;
    public C2138g6[] e;
    public int f;
    public C2009b6 g;
    public byte[] h;
    public byte[] i;
    public C1983a6[] j;

    public C2035c6() {
        if (!o) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (!o) {
                    n = InternalNano.bytesDefaultValue("JVM");
                    o = true;
                }
            }
        }
        a();
    }

    public static C2035c6[] b() {
        if (m == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (m == null) {
                    m = new C2035c6[0];
                }
            }
        }
        return m;
    }

    public final C2035c6 a() {
        this.f6025a = null;
        this.b = null;
        this.c = "";
        this.d = -1;
        this.e = C2138g6.b();
        this.f = 0;
        this.g = null;
        this.h = (byte[]) n.clone();
        this.i = WireFormatNano.EMPTY_BYTES;
        this.j = C1983a6.b();
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        C2190i6 c2190i6 = this.f6025a;
        if (c2190i6 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(1, c2190i6);
        }
        Y5 y5 = this.b;
        if (y5 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(2, y5);
        }
        if (!this.c.equals("")) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeStringSize(3, this.c);
        }
        int i = this.d;
        if (i != -1) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeInt32Size(4, i);
        }
        C2138g6[] c2138g6Arr = this.e;
        int i2 = 0;
        if (c2138g6Arr != null && c2138g6Arr.length > 0) {
            int i3 = 0;
            while (true) {
                C2138g6[] c2138g6Arr2 = this.e;
                if (i3 >= c2138g6Arr2.length) {
                    break;
                }
                C2138g6 c2138g6 = c2138g6Arr2[i3];
                if (c2138g6 != null) {
                    iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(5, c2138g6);
                }
                i3++;
            }
        }
        int i4 = this.f;
        if (i4 != 0) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeInt32Size(6, i4);
        }
        C2009b6 c2009b6 = this.g;
        if (c2009b6 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(7, c2009b6);
        }
        if (!Arrays.equals(this.h, n)) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeBytesSize(8, this.h);
        }
        if (!Arrays.equals(this.i, WireFormatNano.EMPTY_BYTES)) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeBytesSize(9, this.i);
        }
        C1983a6[] c1983a6Arr = this.j;
        if (c1983a6Arr != null && c1983a6Arr.length > 0) {
            while (true) {
                C1983a6[] c1983a6Arr2 = this.j;
                if (i2 >= c1983a6Arr2.length) {
                    break;
                }
                C1983a6 c1983a6 = c1983a6Arr2[i2];
                if (c1983a6 != null) {
                    iComputeSerializedSize = CodedOutputByteBufferNano.computeMessageSize(10, c1983a6) + iComputeSerializedSize;
                }
                i2++;
            }
        }
        return iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        C2190i6 c2190i6 = this.f6025a;
        if (c2190i6 != null) {
            codedOutputByteBufferNano.writeMessage(1, c2190i6);
        }
        Y5 y5 = this.b;
        if (y5 != null) {
            codedOutputByteBufferNano.writeMessage(2, y5);
        }
        if (!this.c.equals("")) {
            codedOutputByteBufferNano.writeString(3, this.c);
        }
        int i = this.d;
        if (i != -1) {
            codedOutputByteBufferNano.writeInt32(4, i);
        }
        C2138g6[] c2138g6Arr = this.e;
        int i2 = 0;
        if (c2138g6Arr != null && c2138g6Arr.length > 0) {
            int i3 = 0;
            while (true) {
                C2138g6[] c2138g6Arr2 = this.e;
                if (i3 >= c2138g6Arr2.length) {
                    break;
                }
                C2138g6 c2138g6 = c2138g6Arr2[i3];
                if (c2138g6 != null) {
                    codedOutputByteBufferNano.writeMessage(5, c2138g6);
                }
                i3++;
            }
        }
        int i4 = this.f;
        if (i4 != 0) {
            codedOutputByteBufferNano.writeInt32(6, i4);
        }
        C2009b6 c2009b6 = this.g;
        if (c2009b6 != null) {
            codedOutputByteBufferNano.writeMessage(7, c2009b6);
        }
        if (!Arrays.equals(this.h, n)) {
            codedOutputByteBufferNano.writeBytes(8, this.h);
        }
        if (!Arrays.equals(this.i, WireFormatNano.EMPTY_BYTES)) {
            codedOutputByteBufferNano.writeBytes(9, this.i);
        }
        C1983a6[] c1983a6Arr = this.j;
        if (c1983a6Arr != null && c1983a6Arr.length > 0) {
            while (true) {
                C1983a6[] c1983a6Arr2 = this.j;
                if (i2 >= c1983a6Arr2.length) {
                    break;
                }
                C1983a6 c1983a6 = c1983a6Arr2[i2];
                if (c1983a6 != null) {
                    codedOutputByteBufferNano.writeMessage(10, c1983a6);
                }
                i2++;
            }
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    public static C2035c6 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2035c6().mergeFrom(codedInputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2035c6 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            switch (tag) {
                case 0:
                    break;
                case 10:
                    if (this.f6025a == null) {
                        this.f6025a = new C2190i6();
                    }
                    codedInputByteBufferNano.readMessage(this.f6025a);
                    break;
                case 18:
                    if (this.b == null) {
                        this.b = new Y5();
                    }
                    codedInputByteBufferNano.readMessage(this.b);
                    break;
                case 26:
                    this.c = codedInputByteBufferNano.readString();
                    break;
                case 32:
                    int int32 = codedInputByteBufferNano.readInt32();
                    if (int32 == -1 || int32 == 0 || int32 == 1) {
                        this.d = int32;
                    }
                    break;
                case 42:
                    int repeatedFieldArrayLength = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 42);
                    C2138g6[] c2138g6Arr = this.e;
                    int length = c2138g6Arr == null ? 0 : c2138g6Arr.length;
                    int i = repeatedFieldArrayLength + length;
                    C2138g6[] c2138g6Arr2 = new C2138g6[i];
                    if (length != 0) {
                        System.arraycopy(c2138g6Arr, 0, c2138g6Arr2, 0, length);
                    }
                    while (length < i - 1) {
                        C2138g6 c2138g6 = new C2138g6();
                        c2138g6Arr2[length] = c2138g6;
                        codedInputByteBufferNano.readMessage(c2138g6);
                        codedInputByteBufferNano.readTag();
                        length++;
                    }
                    C2138g6 c2138g7 = new C2138g6();
                    c2138g6Arr2[length] = c2138g7;
                    codedInputByteBufferNano.readMessage(c2138g7);
                    this.e = c2138g6Arr2;
                    break;
                case 48:
                    int int33 = codedInputByteBufferNano.readInt32();
                    if (int33 == 0 || int33 == 1) {
                        this.f = int33;
                    }
                    break;
                case 58:
                    if (this.g == null) {
                        this.g = new C2009b6();
                    }
                    codedInputByteBufferNano.readMessage(this.g);
                    break;
                case 66:
                    this.h = codedInputByteBufferNano.readBytes();
                    break;
                case 74:
                    this.i = codedInputByteBufferNano.readBytes();
                    break;
                case 82:
                    int repeatedFieldArrayLength2 = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 82);
                    C1983a6[] c1983a6Arr = this.j;
                    int length2 = c1983a6Arr == null ? 0 : c1983a6Arr.length;
                    int i2 = repeatedFieldArrayLength2 + length2;
                    C1983a6[] c1983a6Arr2 = new C1983a6[i2];
                    if (length2 != 0) {
                        System.arraycopy(c1983a6Arr, 0, c1983a6Arr2, 0, length2);
                    }
                    while (length2 < i2 - 1) {
                        C1983a6 c1983a6 = new C1983a6();
                        c1983a6Arr2[length2] = c1983a6;
                        codedInputByteBufferNano.readMessage(c1983a6);
                        codedInputByteBufferNano.readTag();
                        length2++;
                    }
                    C1983a6 c1983a7 = new C1983a6();
                    c1983a6Arr2[length2] = c1983a7;
                    codedInputByteBufferNano.readMessage(c1983a7);
                    this.j = c1983a6Arr2;
                    break;
                default:
                    if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    }
                    break;
            }
        }
        return this;
    }

    public static C2035c6 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2035c6) MessageNano.mergeFrom(new C2035c6(), bArr);
    }
}
