package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: loaded from: classes7.dex */
public final class Y5 extends MessageNano {
    public static volatile Y5[] d;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C2164h6 f5966a;
    public C2164h6[] b;
    public String c;

    public Y5() {
        a();
    }

    public static Y5[] b() {
        if (d == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (d == null) {
                    d = new Y5[0];
                }
            }
        }
        return d;
    }

    public final Y5 a() {
        this.f5966a = null;
        this.b = C2164h6.b();
        this.c = "";
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        C2164h6 c2164h6 = this.f5966a;
        if (c2164h6 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(1, c2164h6);
        }
        C2164h6[] c2164h6Arr = this.b;
        if (c2164h6Arr != null && c2164h6Arr.length > 0) {
            int i = 0;
            while (true) {
                C2164h6[] c2164h6Arr2 = this.b;
                if (i >= c2164h6Arr2.length) {
                    break;
                }
                C2164h6 c2164h7 = c2164h6Arr2[i];
                if (c2164h7 != null) {
                    iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(2, c2164h7);
                }
                i++;
            }
        }
        return !this.c.equals("") ? CodedOutputByteBufferNano.computeStringSize(3, this.c) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        C2164h6 c2164h6 = this.f5966a;
        if (c2164h6 != null) {
            codedOutputByteBufferNano.writeMessage(1, c2164h6);
        }
        C2164h6[] c2164h6Arr = this.b;
        if (c2164h6Arr != null && c2164h6Arr.length > 0) {
            int i = 0;
            while (true) {
                C2164h6[] c2164h6Arr2 = this.b;
                if (i >= c2164h6Arr2.length) {
                    break;
                }
                C2164h6 c2164h7 = c2164h6Arr2[i];
                if (c2164h7 != null) {
                    codedOutputByteBufferNano.writeMessage(2, c2164h7);
                }
                i++;
            }
        }
        if (!this.c.equals("")) {
            codedOutputByteBufferNano.writeString(3, this.c);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Y5 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                if (this.f5966a == null) {
                    this.f5966a = new C2164h6();
                }
                codedInputByteBufferNano.readMessage(this.f5966a);
            } else if (tag == 18) {
                int repeatedFieldArrayLength = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 18);
                C2164h6[] c2164h6Arr = this.b;
                int length = c2164h6Arr == null ? 0 : c2164h6Arr.length;
                int i = repeatedFieldArrayLength + length;
                C2164h6[] c2164h6Arr2 = new C2164h6[i];
                if (length != 0) {
                    System.arraycopy(c2164h6Arr, 0, c2164h6Arr2, 0, length);
                }
                while (length < i - 1) {
                    C2164h6 c2164h6 = new C2164h6();
                    c2164h6Arr2[length] = c2164h6;
                    codedInputByteBufferNano.readMessage(c2164h6);
                    codedInputByteBufferNano.readTag();
                    length++;
                }
                C2164h6 c2164h7 = new C2164h6();
                c2164h6Arr2[length] = c2164h7;
                codedInputByteBufferNano.readMessage(c2164h7);
                this.b = c2164h6Arr2;
            } else if (tag != 26) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                this.c = codedInputByteBufferNano.readString();
            }
        }
        return this;
    }

    public static Y5 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new Y5().mergeFrom(codedInputByteBufferNano);
    }

    public static Y5 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (Y5) MessageNano.mergeFrom(new Y5(), bArr);
    }
}
