package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.m9, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2295m9 extends MessageNano {
    public static final int d = 0;
    public static final int e = 1;
    public static final int f = 2;
    public static volatile C2295m9[] g;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C2370p9 f6206a;
    public String b;
    public int c;

    public C2295m9() {
        a();
    }

    public static C2295m9[] b() {
        if (g == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (g == null) {
                    g = new C2295m9[0];
                }
            }
        }
        return g;
    }

    public final C2295m9 a() {
        this.f6206a = null;
        this.b = "";
        this.c = 0;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        C2370p9 c2370p9 = this.f6206a;
        if (c2370p9 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(1, c2370p9);
        }
        int iComputeStringSize = CodedOutputByteBufferNano.computeStringSize(2, this.b) + iComputeSerializedSize;
        int i = this.c;
        return i != 0 ? CodedOutputByteBufferNano.computeInt32Size(5, i) + iComputeStringSize : iComputeStringSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        C2370p9 c2370p9 = this.f6206a;
        if (c2370p9 != null) {
            codedOutputByteBufferNano.writeMessage(1, c2370p9);
        }
        codedOutputByteBufferNano.writeString(2, this.b);
        int i = this.c;
        if (i != 0) {
            codedOutputByteBufferNano.writeInt32(5, i);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2295m9 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                if (this.f6206a == null) {
                    this.f6206a = new C2370p9();
                }
                codedInputByteBufferNano.readMessage(this.f6206a);
            } else if (tag == 18) {
                this.b = codedInputByteBufferNano.readString();
            } else if (tag != 40) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                int int32 = codedInputByteBufferNano.readInt32();
                if (int32 == 0 || int32 == 1 || int32 == 2) {
                    this.c = int32;
                }
            }
        }
        return this;
    }

    public static C2295m9 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2295m9().mergeFrom(codedInputByteBufferNano);
    }

    public static C2295m9 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2295m9) MessageNano.mergeFrom(new C2295m9(), bArr);
    }
}
