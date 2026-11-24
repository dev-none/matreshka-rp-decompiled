package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.h6, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2164h6 extends MessageNano {
    public static volatile C2164h6[] g;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f6106a;
    public int b;
    public long c;
    public String d;
    public int e;
    public C2138g6[] f;

    public C2164h6() {
        a();
    }

    public static C2164h6[] b() {
        if (g == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (g == null) {
                    g = new C2164h6[0];
                }
            }
        }
        return g;
    }

    public final C2164h6 a() {
        this.f6106a = "";
        this.b = 0;
        this.c = 0L;
        this.d = "";
        this.e = 0;
        this.f = C2138g6.b();
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSInt64Size = CodedOutputByteBufferNano.computeSInt64Size(3, this.c) + CodedOutputByteBufferNano.computeSInt32Size(2, this.b) + CodedOutputByteBufferNano.computeStringSize(1, this.f6106a) + super.computeSerializedSize();
        if (!this.d.equals("")) {
            iComputeSInt64Size += CodedOutputByteBufferNano.computeStringSize(4, this.d);
        }
        int i = this.e;
        if (i != 0) {
            iComputeSInt64Size += CodedOutputByteBufferNano.computeUInt32Size(5, i);
        }
        C2138g6[] c2138g6Arr = this.f;
        if (c2138g6Arr != null && c2138g6Arr.length > 0) {
            int i2 = 0;
            while (true) {
                C2138g6[] c2138g6Arr2 = this.f;
                if (i2 >= c2138g6Arr2.length) {
                    break;
                }
                C2138g6 c2138g6 = c2138g6Arr2[i2];
                if (c2138g6 != null) {
                    iComputeSInt64Size = CodedOutputByteBufferNano.computeMessageSize(6, c2138g6) + iComputeSInt64Size;
                }
                i2++;
            }
        }
        return iComputeSInt64Size;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        codedOutputByteBufferNano.writeString(1, this.f6106a);
        codedOutputByteBufferNano.writeSInt32(2, this.b);
        codedOutputByteBufferNano.writeSInt64(3, this.c);
        if (!this.d.equals("")) {
            codedOutputByteBufferNano.writeString(4, this.d);
        }
        int i = this.e;
        if (i != 0) {
            codedOutputByteBufferNano.writeUInt32(5, i);
        }
        C2138g6[] c2138g6Arr = this.f;
        if (c2138g6Arr != null && c2138g6Arr.length > 0) {
            int i2 = 0;
            while (true) {
                C2138g6[] c2138g6Arr2 = this.f;
                if (i2 >= c2138g6Arr2.length) {
                    break;
                }
                C2138g6 c2138g6 = c2138g6Arr2[i2];
                if (c2138g6 != null) {
                    codedOutputByteBufferNano.writeMessage(6, c2138g6);
                }
                i2++;
            }
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2164h6 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                this.f6106a = codedInputByteBufferNano.readString();
            } else if (tag == 16) {
                this.b = codedInputByteBufferNano.readSInt32();
            } else if (tag == 24) {
                this.c = codedInputByteBufferNano.readSInt64();
            } else if (tag == 34) {
                this.d = codedInputByteBufferNano.readString();
            } else if (tag == 40) {
                this.e = codedInputByteBufferNano.readUInt32();
            } else if (tag != 50) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                int repeatedFieldArrayLength = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 50);
                C2138g6[] c2138g6Arr = this.f;
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
                this.f = c2138g6Arr2;
            }
        }
        return this;
    }

    public static C2164h6 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2164h6().mergeFrom(codedInputByteBufferNano);
    }

    public static C2164h6 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2164h6) MessageNano.mergeFrom(new C2164h6(), bArr);
    }
}
