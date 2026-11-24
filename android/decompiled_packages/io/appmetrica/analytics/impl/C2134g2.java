package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.g2, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2134g2 extends MessageNano {
    public static volatile C2134g2[] d;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C2108f2[] f6085a;
    public C2082e2 b;
    public String[] c;

    public C2134g2() {
        a();
    }

    public static C2134g2[] b() {
        if (d == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (d == null) {
                    d = new C2134g2[0];
                }
            }
        }
        return d;
    }

    public final C2134g2 a() {
        this.f6085a = C2108f2.b();
        this.b = null;
        this.c = WireFormatNano.EMPTY_STRING_ARRAY;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        C2108f2[] c2108f2Arr = this.f6085a;
        int i = 0;
        if (c2108f2Arr != null && c2108f2Arr.length > 0) {
            int i2 = 0;
            while (true) {
                C2108f2[] c2108f2Arr2 = this.f6085a;
                if (i2 >= c2108f2Arr2.length) {
                    break;
                }
                C2108f2 c2108f2 = c2108f2Arr2[i2];
                if (c2108f2 != null) {
                    iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(1, c2108f2);
                }
                i2++;
            }
        }
        C2082e2 c2082e2 = this.b;
        if (c2082e2 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(2, c2082e2);
        }
        String[] strArr = this.c;
        if (strArr == null || strArr.length <= 0) {
            return iComputeSerializedSize;
        }
        int iComputeStringSizeNoTag = 0;
        int i3 = 0;
        while (true) {
            String[] strArr2 = this.c;
            if (i >= strArr2.length) {
                return iComputeSerializedSize + iComputeStringSizeNoTag + i3;
            }
            String str = strArr2[i];
            if (str != null) {
                i3++;
                iComputeStringSizeNoTag = CodedOutputByteBufferNano.computeStringSizeNoTag(str) + iComputeStringSizeNoTag;
            }
            i++;
        }
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        C2108f2[] c2108f2Arr = this.f6085a;
        int i = 0;
        if (c2108f2Arr != null && c2108f2Arr.length > 0) {
            int i2 = 0;
            while (true) {
                C2108f2[] c2108f2Arr2 = this.f6085a;
                if (i2 >= c2108f2Arr2.length) {
                    break;
                }
                C2108f2 c2108f2 = c2108f2Arr2[i2];
                if (c2108f2 != null) {
                    codedOutputByteBufferNano.writeMessage(1, c2108f2);
                }
                i2++;
            }
        }
        C2082e2 c2082e2 = this.b;
        if (c2082e2 != null) {
            codedOutputByteBufferNano.writeMessage(2, c2082e2);
        }
        String[] strArr = this.c;
        if (strArr != null && strArr.length > 0) {
            while (true) {
                String[] strArr2 = this.c;
                if (i >= strArr2.length) {
                    break;
                }
                String str = strArr2[i];
                if (str != null) {
                    codedOutputByteBufferNano.writeString(3, str);
                }
                i++;
            }
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2134g2 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                int repeatedFieldArrayLength = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 10);
                C2108f2[] c2108f2Arr = this.f6085a;
                int length = c2108f2Arr == null ? 0 : c2108f2Arr.length;
                int i = repeatedFieldArrayLength + length;
                C2108f2[] c2108f2Arr2 = new C2108f2[i];
                if (length != 0) {
                    System.arraycopy(c2108f2Arr, 0, c2108f2Arr2, 0, length);
                }
                while (length < i - 1) {
                    C2108f2 c2108f2 = new C2108f2();
                    c2108f2Arr2[length] = c2108f2;
                    codedInputByteBufferNano.readMessage(c2108f2);
                    codedInputByteBufferNano.readTag();
                    length++;
                }
                C2108f2 c2108f3 = new C2108f2();
                c2108f2Arr2[length] = c2108f3;
                codedInputByteBufferNano.readMessage(c2108f3);
                this.f6085a = c2108f2Arr2;
            } else if (tag == 18) {
                if (this.b == null) {
                    this.b = new C2082e2();
                }
                codedInputByteBufferNano.readMessage(this.b);
            } else if (tag != 26) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                int repeatedFieldArrayLength2 = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 26);
                String[] strArr = this.c;
                int length2 = strArr == null ? 0 : strArr.length;
                int i2 = repeatedFieldArrayLength2 + length2;
                String[] strArr2 = new String[i2];
                if (length2 != 0) {
                    System.arraycopy(strArr, 0, strArr2, 0, length2);
                }
                while (length2 < i2 - 1) {
                    strArr2[length2] = codedInputByteBufferNano.readString();
                    codedInputByteBufferNano.readTag();
                    length2++;
                }
                strArr2[length2] = codedInputByteBufferNano.readString();
                this.c = strArr2;
            }
        }
        return this;
    }

    public static C2134g2 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2134g2().mergeFrom(codedInputByteBufferNano);
    }

    public static C2134g2 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2134g2) MessageNano.mergeFrom(new C2134g2(), bArr);
    }
}
