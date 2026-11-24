package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.e2, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2082e2 extends MessageNano {
    public static final int c = 0;
    public static final int d = 1;
    public static final int e = 2;
    public static final int f = 3;
    public static final int g = 4;
    public static final int h = 5;
    public static final int i = -1;
    public static final int j = 0;
    public static final int k = 1;
    public static volatile C2082e2[] l;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f6055a;
    public int b;

    public C2082e2() {
        a();
    }

    public static C2082e2[] b() {
        if (l == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (l == null) {
                    l = new C2082e2[0];
                }
            }
        }
        return l;
    }

    public final C2082e2 a() {
        this.f6055a = 0;
        this.b = -1;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        return CodedOutputByteBufferNano.computeInt32Size(3, this.b) + CodedOutputByteBufferNano.computeInt32Size(2, this.f6055a) + super.computeSerializedSize();
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        codedOutputByteBufferNano.writeInt32(2, this.f6055a);
        codedOutputByteBufferNano.writeInt32(3, this.b);
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2082e2 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 16) {
                int int32 = codedInputByteBufferNano.readInt32();
                if (int32 == 0 || int32 == 1 || int32 == 2 || int32 == 3 || int32 == 4 || int32 == 5) {
                    this.f6055a = int32;
                }
            } else if (tag != 24) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                int int33 = codedInputByteBufferNano.readInt32();
                if (int33 == -1 || int33 == 0 || int33 == 1) {
                    this.b = int33;
                }
            }
        }
        return this;
    }

    public static C2082e2 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2082e2().mergeFrom(codedInputByteBufferNano);
    }

    public static C2082e2 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2082e2) MessageNano.mergeFrom(new C2082e2(), bArr);
    }
}
