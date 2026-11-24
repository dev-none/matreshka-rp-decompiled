package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.r8, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2418r8 extends MessageNano {
    public static volatile C2418r8[] c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C2394q8[] f6290a;
    public int b;

    public C2418r8() {
        a();
    }

    public static C2418r8[] b() {
        if (c == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (c == null) {
                    c = new C2418r8[0];
                }
            }
        }
        return c;
    }

    public final C2418r8 a() {
        this.f6290a = C2394q8.b();
        this.b = 0;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        C2394q8[] c2394q8Arr = this.f6290a;
        if (c2394q8Arr != null && c2394q8Arr.length > 0) {
            int i = 0;
            while (true) {
                C2394q8[] c2394q8Arr2 = this.f6290a;
                if (i >= c2394q8Arr2.length) {
                    break;
                }
                C2394q8 c2394q8 = c2394q8Arr2[i];
                if (c2394q8 != null) {
                    iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(1, c2394q8);
                }
                i++;
            }
        }
        int i2 = this.b;
        return i2 != 0 ? CodedOutputByteBufferNano.computeUInt32Size(2, i2) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        C2394q8[] c2394q8Arr = this.f6290a;
        if (c2394q8Arr != null && c2394q8Arr.length > 0) {
            int i = 0;
            while (true) {
                C2394q8[] c2394q8Arr2 = this.f6290a;
                if (i >= c2394q8Arr2.length) {
                    break;
                }
                C2394q8 c2394q8 = c2394q8Arr2[i];
                if (c2394q8 != null) {
                    codedOutputByteBufferNano.writeMessage(1, c2394q8);
                }
                i++;
            }
        }
        int i2 = this.b;
        if (i2 != 0) {
            codedOutputByteBufferNano.writeUInt32(2, i2);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2418r8 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                int repeatedFieldArrayLength = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 10);
                C2394q8[] c2394q8Arr = this.f6290a;
                int length = c2394q8Arr == null ? 0 : c2394q8Arr.length;
                int i = repeatedFieldArrayLength + length;
                C2394q8[] c2394q8Arr2 = new C2394q8[i];
                if (length != 0) {
                    System.arraycopy(c2394q8Arr, 0, c2394q8Arr2, 0, length);
                }
                while (length < i - 1) {
                    C2394q8 c2394q8 = new C2394q8();
                    c2394q8Arr2[length] = c2394q8;
                    codedInputByteBufferNano.readMessage(c2394q8);
                    codedInputByteBufferNano.readTag();
                    length++;
                }
                C2394q8 c2394q9 = new C2394q8();
                c2394q8Arr2[length] = c2394q9;
                codedInputByteBufferNano.readMessage(c2394q9);
                this.f6290a = c2394q8Arr2;
            } else if (tag != 16) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                this.b = codedInputByteBufferNano.readUInt32();
            }
        }
        return this;
    }

    public static C2418r8 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2418r8().mergeFrom(codedInputByteBufferNano);
    }

    public static C2418r8 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2418r8) MessageNano.mergeFrom(new C2418r8(), bArr);
    }
}
