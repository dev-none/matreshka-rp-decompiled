package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.q9, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2395q9 extends MessageNano {
    public static final int g = -1;
    public static final int h = 0;
    public static final int i = 1;
    public static volatile C2395q9[] j;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C2320n9[] f6270a;
    public C2193i9 b;
    public C2115f9[] c;
    public C2345o9[] d;
    public String[] e;
    public byte[][] f;

    public C2395q9() {
        a();
    }

    public static C2395q9[] b() {
        if (j == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (j == null) {
                    j = new C2395q9[0];
                }
            }
        }
        return j;
    }

    public final C2395q9 a() {
        this.f6270a = C2320n9.b();
        this.b = null;
        this.c = C2115f9.b();
        this.d = C2345o9.b();
        this.e = WireFormatNano.EMPTY_STRING_ARRAY;
        this.f = WireFormatNano.EMPTY_BYTES_ARRAY;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        C2320n9[] c2320n9Arr = this.f6270a;
        int i2 = 0;
        if (c2320n9Arr != null && c2320n9Arr.length > 0) {
            int i3 = 0;
            while (true) {
                C2320n9[] c2320n9Arr2 = this.f6270a;
                if (i3 >= c2320n9Arr2.length) {
                    break;
                }
                C2320n9 c2320n9 = c2320n9Arr2[i3];
                if (c2320n9 != null) {
                    iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(3, c2320n9);
                }
                i3++;
            }
        }
        C2193i9 c2193i9 = this.b;
        if (c2193i9 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(4, c2193i9);
        }
        C2115f9[] c2115f9Arr = this.c;
        if (c2115f9Arr != null && c2115f9Arr.length > 0) {
            int i4 = 0;
            while (true) {
                C2115f9[] c2115f9Arr2 = this.c;
                if (i4 >= c2115f9Arr2.length) {
                    break;
                }
                C2115f9 c2115f9 = c2115f9Arr2[i4];
                if (c2115f9 != null) {
                    iComputeSerializedSize = CodedOutputByteBufferNano.computeMessageSize(7, c2115f9) + iComputeSerializedSize;
                }
                i4++;
            }
        }
        C2345o9[] c2345o9Arr = this.d;
        if (c2345o9Arr != null && c2345o9Arr.length > 0) {
            int i5 = 0;
            while (true) {
                C2345o9[] c2345o9Arr2 = this.d;
                if (i5 >= c2345o9Arr2.length) {
                    break;
                }
                C2345o9 c2345o9 = c2345o9Arr2[i5];
                if (c2345o9 != null) {
                    iComputeSerializedSize = CodedOutputByteBufferNano.computeMessageSize(10, c2345o9) + iComputeSerializedSize;
                }
                i5++;
            }
        }
        String[] strArr = this.e;
        if (strArr != null && strArr.length > 0) {
            int i6 = 0;
            int iComputeStringSizeNoTag = 0;
            int i7 = 0;
            while (true) {
                String[] strArr2 = this.e;
                if (i6 >= strArr2.length) {
                    break;
                }
                String str = strArr2[i6];
                if (str != null) {
                    i7++;
                    iComputeStringSizeNoTag += CodedOutputByteBufferNano.computeStringSizeNoTag(str);
                }
                i6++;
            }
            iComputeSerializedSize = iComputeSerializedSize + iComputeStringSizeNoTag + i7;
        }
        byte[][] bArr = this.f;
        if (bArr == null || bArr.length <= 0) {
            return iComputeSerializedSize;
        }
        int iComputeBytesSizeNoTag = 0;
        int i8 = 0;
        while (true) {
            byte[][] bArr2 = this.f;
            if (i2 >= bArr2.length) {
                return iComputeSerializedSize + iComputeBytesSizeNoTag + i8;
            }
            byte[] bArr3 = bArr2[i2];
            if (bArr3 != null) {
                i8++;
                iComputeBytesSizeNoTag = CodedOutputByteBufferNano.computeBytesSizeNoTag(bArr3) + iComputeBytesSizeNoTag;
            }
            i2++;
        }
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        C2320n9[] c2320n9Arr = this.f6270a;
        int i2 = 0;
        if (c2320n9Arr != null && c2320n9Arr.length > 0) {
            int i3 = 0;
            while (true) {
                C2320n9[] c2320n9Arr2 = this.f6270a;
                if (i3 >= c2320n9Arr2.length) {
                    break;
                }
                C2320n9 c2320n9 = c2320n9Arr2[i3];
                if (c2320n9 != null) {
                    codedOutputByteBufferNano.writeMessage(3, c2320n9);
                }
                i3++;
            }
        }
        C2193i9 c2193i9 = this.b;
        if (c2193i9 != null) {
            codedOutputByteBufferNano.writeMessage(4, c2193i9);
        }
        C2115f9[] c2115f9Arr = this.c;
        if (c2115f9Arr != null && c2115f9Arr.length > 0) {
            int i4 = 0;
            while (true) {
                C2115f9[] c2115f9Arr2 = this.c;
                if (i4 >= c2115f9Arr2.length) {
                    break;
                }
                C2115f9 c2115f9 = c2115f9Arr2[i4];
                if (c2115f9 != null) {
                    codedOutputByteBufferNano.writeMessage(7, c2115f9);
                }
                i4++;
            }
        }
        C2345o9[] c2345o9Arr = this.d;
        if (c2345o9Arr != null && c2345o9Arr.length > 0) {
            int i5 = 0;
            while (true) {
                C2345o9[] c2345o9Arr2 = this.d;
                if (i5 >= c2345o9Arr2.length) {
                    break;
                }
                C2345o9 c2345o9 = c2345o9Arr2[i5];
                if (c2345o9 != null) {
                    codedOutputByteBufferNano.writeMessage(10, c2345o9);
                }
                i5++;
            }
        }
        String[] strArr = this.e;
        if (strArr != null && strArr.length > 0) {
            int i6 = 0;
            while (true) {
                String[] strArr2 = this.e;
                if (i6 >= strArr2.length) {
                    break;
                }
                String str = strArr2[i6];
                if (str != null) {
                    codedOutputByteBufferNano.writeString(11, str);
                }
                i6++;
            }
        }
        byte[][] bArr = this.f;
        if (bArr != null && bArr.length > 0) {
            while (true) {
                byte[][] bArr2 = this.f;
                if (i2 >= bArr2.length) {
                    break;
                }
                byte[] bArr3 = bArr2[i2];
                if (bArr3 != null) {
                    codedOutputByteBufferNano.writeBytes(12, bArr3);
                }
                i2++;
            }
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2395q9 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 26) {
                int repeatedFieldArrayLength = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 26);
                C2320n9[] c2320n9Arr = this.f6270a;
                int length = c2320n9Arr == null ? 0 : c2320n9Arr.length;
                int i2 = repeatedFieldArrayLength + length;
                C2320n9[] c2320n9Arr2 = new C2320n9[i2];
                if (length != 0) {
                    System.arraycopy(c2320n9Arr, 0, c2320n9Arr2, 0, length);
                }
                while (length < i2 - 1) {
                    C2320n9 c2320n9 = new C2320n9();
                    c2320n9Arr2[length] = c2320n9;
                    codedInputByteBufferNano.readMessage(c2320n9);
                    codedInputByteBufferNano.readTag();
                    length++;
                }
                C2320n9 c2320n10 = new C2320n9();
                c2320n9Arr2[length] = c2320n10;
                codedInputByteBufferNano.readMessage(c2320n10);
                this.f6270a = c2320n9Arr2;
            } else if (tag == 34) {
                if (this.b == null) {
                    this.b = new C2193i9();
                }
                codedInputByteBufferNano.readMessage(this.b);
            } else if (tag == 58) {
                int repeatedFieldArrayLength2 = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 58);
                C2115f9[] c2115f9Arr = this.c;
                int length2 = c2115f9Arr == null ? 0 : c2115f9Arr.length;
                int i3 = repeatedFieldArrayLength2 + length2;
                C2115f9[] c2115f9Arr2 = new C2115f9[i3];
                if (length2 != 0) {
                    System.arraycopy(c2115f9Arr, 0, c2115f9Arr2, 0, length2);
                }
                while (length2 < i3 - 1) {
                    C2115f9 c2115f9 = new C2115f9();
                    c2115f9Arr2[length2] = c2115f9;
                    codedInputByteBufferNano.readMessage(c2115f9);
                    codedInputByteBufferNano.readTag();
                    length2++;
                }
                C2115f9 c2115f10 = new C2115f9();
                c2115f9Arr2[length2] = c2115f10;
                codedInputByteBufferNano.readMessage(c2115f10);
                this.c = c2115f9Arr2;
            } else if (tag == 82) {
                int repeatedFieldArrayLength3 = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 82);
                C2345o9[] c2345o9Arr = this.d;
                int length3 = c2345o9Arr == null ? 0 : c2345o9Arr.length;
                int i4 = repeatedFieldArrayLength3 + length3;
                C2345o9[] c2345o9Arr2 = new C2345o9[i4];
                if (length3 != 0) {
                    System.arraycopy(c2345o9Arr, 0, c2345o9Arr2, 0, length3);
                }
                while (length3 < i4 - 1) {
                    C2345o9 c2345o9 = new C2345o9();
                    c2345o9Arr2[length3] = c2345o9;
                    codedInputByteBufferNano.readMessage(c2345o9);
                    codedInputByteBufferNano.readTag();
                    length3++;
                }
                C2345o9 c2345o10 = new C2345o9();
                c2345o9Arr2[length3] = c2345o10;
                codedInputByteBufferNano.readMessage(c2345o10);
                this.d = c2345o9Arr2;
            } else if (tag == 90) {
                int repeatedFieldArrayLength4 = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 90);
                String[] strArr = this.e;
                int length4 = strArr == null ? 0 : strArr.length;
                int i5 = repeatedFieldArrayLength4 + length4;
                String[] strArr2 = new String[i5];
                if (length4 != 0) {
                    System.arraycopy(strArr, 0, strArr2, 0, length4);
                }
                while (length4 < i5 - 1) {
                    strArr2[length4] = codedInputByteBufferNano.readString();
                    codedInputByteBufferNano.readTag();
                    length4++;
                }
                strArr2[length4] = codedInputByteBufferNano.readString();
                this.e = strArr2;
            } else if (tag != 98) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                int repeatedFieldArrayLength5 = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 98);
                byte[][] bArr = this.f;
                int length5 = bArr == null ? 0 : bArr.length;
                int i6 = repeatedFieldArrayLength5 + length5;
                byte[][] bArr2 = new byte[i6][];
                if (length5 != 0) {
                    System.arraycopy(bArr, 0, bArr2, 0, length5);
                }
                while (length5 < i6 - 1) {
                    bArr2[length5] = codedInputByteBufferNano.readBytes();
                    codedInputByteBufferNano.readTag();
                    length5++;
                }
                bArr2[length5] = codedInputByteBufferNano.readBytes();
                this.f = bArr2;
            }
        }
        return this;
    }

    public static C2395q9 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2395q9().mergeFrom(codedInputByteBufferNano);
    }

    public static C2395q9 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2395q9) MessageNano.mergeFrom(new C2395q9(), bArr);
    }
}
