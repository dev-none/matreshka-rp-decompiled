package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.s8, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2443s8 extends MessageNano {
    public static volatile C2443s8[] c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C2192i8 f6309a;
    public C2192i8[] b;

    public C2443s8() {
        a();
    }

    public static C2443s8[] b() {
        if (c == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (c == null) {
                    c = new C2443s8[0];
                }
            }
        }
        return c;
    }

    public final C2443s8 a() {
        this.f6309a = null;
        this.b = C2192i8.b();
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        C2192i8 c2192i8 = this.f6309a;
        if (c2192i8 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(1, c2192i8);
        }
        C2192i8[] c2192i8Arr = this.b;
        if (c2192i8Arr != null && c2192i8Arr.length > 0) {
            int i = 0;
            while (true) {
                C2192i8[] c2192i8Arr2 = this.b;
                if (i >= c2192i8Arr2.length) {
                    break;
                }
                C2192i8 c2192i9 = c2192i8Arr2[i];
                if (c2192i9 != null) {
                    iComputeSerializedSize = CodedOutputByteBufferNano.computeMessageSize(2, c2192i9) + iComputeSerializedSize;
                }
                i++;
            }
        }
        return iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        C2192i8 c2192i8 = this.f6309a;
        if (c2192i8 != null) {
            codedOutputByteBufferNano.writeMessage(1, c2192i8);
        }
        C2192i8[] c2192i8Arr = this.b;
        if (c2192i8Arr != null && c2192i8Arr.length > 0) {
            int i = 0;
            while (true) {
                C2192i8[] c2192i8Arr2 = this.b;
                if (i >= c2192i8Arr2.length) {
                    break;
                }
                C2192i8 c2192i9 = c2192i8Arr2[i];
                if (c2192i9 != null) {
                    codedOutputByteBufferNano.writeMessage(2, c2192i9);
                }
                i++;
            }
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2443s8 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                if (this.f6309a == null) {
                    this.f6309a = new C2192i8();
                }
                codedInputByteBufferNano.readMessage(this.f6309a);
            } else if (tag != 18) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                int repeatedFieldArrayLength = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 18);
                C2192i8[] c2192i8Arr = this.b;
                int length = c2192i8Arr == null ? 0 : c2192i8Arr.length;
                int i = repeatedFieldArrayLength + length;
                C2192i8[] c2192i8Arr2 = new C2192i8[i];
                if (length != 0) {
                    System.arraycopy(c2192i8Arr, 0, c2192i8Arr2, 0, length);
                }
                while (length < i - 1) {
                    C2192i8 c2192i8 = new C2192i8();
                    c2192i8Arr2[length] = c2192i8;
                    codedInputByteBufferNano.readMessage(c2192i8);
                    codedInputByteBufferNano.readTag();
                    length++;
                }
                C2192i8 c2192i9 = new C2192i8();
                c2192i8Arr2[length] = c2192i9;
                codedInputByteBufferNano.readMessage(c2192i9);
                this.b = c2192i8Arr2;
            }
        }
        return this;
    }

    public static C2443s8 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2443s8().mergeFrom(codedInputByteBufferNano);
    }

    public static C2443s8 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2443s8) MessageNano.mergeFrom(new C2443s8(), bArr);
    }
}
