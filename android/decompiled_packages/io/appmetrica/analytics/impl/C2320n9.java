package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.n9, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2320n9 extends MessageNano {
    public static final int d = 0;
    public static final int e = 1;
    public static final int f = 2;
    public static final int g = 3;
    public static final int h = 4;
    public static final int i = 5;
    public static final int j = 6;
    public static final int k = 7;
    public static final int l = 8;
    public static final int m = 9;
    public static final int n = 10;
    public static final int o = 11;
    public static final int p = 12;
    public static volatile C2320n9[] q;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public long f6223a;
    public C2295m9 b;
    public C2270l9[] c;

    public C2320n9() {
        a();
    }

    public static C2320n9[] b() {
        if (q == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (q == null) {
                    q = new C2320n9[0];
                }
            }
        }
        return q;
    }

    public final C2320n9 a() {
        this.f6223a = 0L;
        this.b = null;
        this.c = C2270l9.b();
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeUInt64Size = CodedOutputByteBufferNano.computeUInt64Size(1, this.f6223a) + super.computeSerializedSize();
        C2295m9 c2295m9 = this.b;
        if (c2295m9 != null) {
            iComputeUInt64Size += CodedOutputByteBufferNano.computeMessageSize(2, c2295m9);
        }
        C2270l9[] c2270l9Arr = this.c;
        if (c2270l9Arr != null && c2270l9Arr.length > 0) {
            int i2 = 0;
            while (true) {
                C2270l9[] c2270l9Arr2 = this.c;
                if (i2 >= c2270l9Arr2.length) {
                    break;
                }
                C2270l9 c2270l9 = c2270l9Arr2[i2];
                if (c2270l9 != null) {
                    iComputeUInt64Size = CodedOutputByteBufferNano.computeMessageSize(3, c2270l9) + iComputeUInt64Size;
                }
                i2++;
            }
        }
        return iComputeUInt64Size;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        codedOutputByteBufferNano.writeUInt64(1, this.f6223a);
        C2295m9 c2295m9 = this.b;
        if (c2295m9 != null) {
            codedOutputByteBufferNano.writeMessage(2, c2295m9);
        }
        C2270l9[] c2270l9Arr = this.c;
        if (c2270l9Arr != null && c2270l9Arr.length > 0) {
            int i2 = 0;
            while (true) {
                C2270l9[] c2270l9Arr2 = this.c;
                if (i2 >= c2270l9Arr2.length) {
                    break;
                }
                C2270l9 c2270l9 = c2270l9Arr2[i2];
                if (c2270l9 != null) {
                    codedOutputByteBufferNano.writeMessage(3, c2270l9);
                }
                i2++;
            }
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2320n9 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 8) {
                this.f6223a = codedInputByteBufferNano.readUInt64();
            } else if (tag == 18) {
                if (this.b == null) {
                    this.b = new C2295m9();
                }
                codedInputByteBufferNano.readMessage(this.b);
            } else if (tag != 26) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                int repeatedFieldArrayLength = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 26);
                C2270l9[] c2270l9Arr = this.c;
                int length = c2270l9Arr == null ? 0 : c2270l9Arr.length;
                int i2 = repeatedFieldArrayLength + length;
                C2270l9[] c2270l9Arr2 = new C2270l9[i2];
                if (length != 0) {
                    System.arraycopy(c2270l9Arr, 0, c2270l9Arr2, 0, length);
                }
                while (length < i2 - 1) {
                    C2270l9 c2270l9 = new C2270l9();
                    c2270l9Arr2[length] = c2270l9;
                    codedInputByteBufferNano.readMessage(c2270l9);
                    codedInputByteBufferNano.readTag();
                    length++;
                }
                C2270l9 c2270l10 = new C2270l9();
                c2270l9Arr2[length] = c2270l10;
                codedInputByteBufferNano.readMessage(c2270l10);
                this.c = c2270l9Arr2;
            }
        }
        return this;
    }

    public static C2320n9 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2320n9().mergeFrom(codedInputByteBufferNano);
    }

    public static C2320n9 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2320n9) MessageNano.mergeFrom(new C2320n9(), bArr);
    }
}
