package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.i6, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2190i6 extends MessageNano {
    public static volatile C2190i6[] f;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f6126a;
    public String b;
    public C2138g6[] c;
    public C2190i6 d;
    public C2190i6[] e;

    public C2190i6() {
        a();
    }

    public static C2190i6[] b() {
        if (f == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (f == null) {
                    f = new C2190i6[0];
                }
            }
        }
        return f;
    }

    public final C2190i6 a() {
        this.f6126a = "";
        this.b = "";
        this.c = C2138g6.b();
        this.d = null;
        this.e = b();
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeStringSize = CodedOutputByteBufferNano.computeStringSize(1, this.f6126a) + super.computeSerializedSize();
        if (!this.b.equals("")) {
            iComputeStringSize += CodedOutputByteBufferNano.computeStringSize(2, this.b);
        }
        C2138g6[] c2138g6Arr = this.c;
        int i = 0;
        if (c2138g6Arr != null && c2138g6Arr.length > 0) {
            int i2 = 0;
            while (true) {
                C2138g6[] c2138g6Arr2 = this.c;
                if (i2 >= c2138g6Arr2.length) {
                    break;
                }
                C2138g6 c2138g6 = c2138g6Arr2[i2];
                if (c2138g6 != null) {
                    iComputeStringSize += CodedOutputByteBufferNano.computeMessageSize(3, c2138g6);
                }
                i2++;
            }
        }
        C2190i6 c2190i6 = this.d;
        if (c2190i6 != null) {
            iComputeStringSize += CodedOutputByteBufferNano.computeMessageSize(4, c2190i6);
        }
        C2190i6[] c2190i6Arr = this.e;
        if (c2190i6Arr != null && c2190i6Arr.length > 0) {
            while (true) {
                C2190i6[] c2190i6Arr2 = this.e;
                if (i >= c2190i6Arr2.length) {
                    break;
                }
                C2190i6 c2190i7 = c2190i6Arr2[i];
                if (c2190i7 != null) {
                    iComputeStringSize = CodedOutputByteBufferNano.computeMessageSize(5, c2190i7) + iComputeStringSize;
                }
                i++;
            }
        }
        return iComputeStringSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        codedOutputByteBufferNano.writeString(1, this.f6126a);
        if (!this.b.equals("")) {
            codedOutputByteBufferNano.writeString(2, this.b);
        }
        C2138g6[] c2138g6Arr = this.c;
        int i = 0;
        if (c2138g6Arr != null && c2138g6Arr.length > 0) {
            int i2 = 0;
            while (true) {
                C2138g6[] c2138g6Arr2 = this.c;
                if (i2 >= c2138g6Arr2.length) {
                    break;
                }
                C2138g6 c2138g6 = c2138g6Arr2[i2];
                if (c2138g6 != null) {
                    codedOutputByteBufferNano.writeMessage(3, c2138g6);
                }
                i2++;
            }
        }
        C2190i6 c2190i6 = this.d;
        if (c2190i6 != null) {
            codedOutputByteBufferNano.writeMessage(4, c2190i6);
        }
        C2190i6[] c2190i6Arr = this.e;
        if (c2190i6Arr != null && c2190i6Arr.length > 0) {
            while (true) {
                C2190i6[] c2190i6Arr2 = this.e;
                if (i >= c2190i6Arr2.length) {
                    break;
                }
                C2190i6 c2190i7 = c2190i6Arr2[i];
                if (c2190i7 != null) {
                    codedOutputByteBufferNano.writeMessage(5, c2190i7);
                }
                i++;
            }
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2190i6 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                this.f6126a = codedInputByteBufferNano.readString();
            } else if (tag == 18) {
                this.b = codedInputByteBufferNano.readString();
            } else if (tag == 26) {
                int repeatedFieldArrayLength = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 26);
                C2138g6[] c2138g6Arr = this.c;
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
                this.c = c2138g6Arr2;
            } else if (tag == 34) {
                if (this.d == null) {
                    this.d = new C2190i6();
                }
                codedInputByteBufferNano.readMessage(this.d);
            } else if (tag != 42) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                int repeatedFieldArrayLength2 = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 42);
                C2190i6[] c2190i6Arr = this.e;
                int length2 = c2190i6Arr == null ? 0 : c2190i6Arr.length;
                int i2 = repeatedFieldArrayLength2 + length2;
                C2190i6[] c2190i6Arr2 = new C2190i6[i2];
                if (length2 != 0) {
                    System.arraycopy(c2190i6Arr, 0, c2190i6Arr2, 0, length2);
                }
                while (length2 < i2 - 1) {
                    C2190i6 c2190i6 = new C2190i6();
                    c2190i6Arr2[length2] = c2190i6;
                    codedInputByteBufferNano.readMessage(c2190i6);
                    codedInputByteBufferNano.readTag();
                    length2++;
                }
                C2190i6 c2190i7 = new C2190i6();
                c2190i6Arr2[length2] = c2190i7;
                codedInputByteBufferNano.readMessage(c2190i7);
                this.e = c2190i6Arr2;
            }
        }
        return this;
    }

    public static C2190i6 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2190i6().mergeFrom(codedInputByteBufferNano);
    }

    public static C2190i6 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2190i6) MessageNano.mergeFrom(new C2190i6(), bArr);
    }
}
