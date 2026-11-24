package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.k9, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2244k9 extends MessageNano {
    public static volatile C2244k9[] c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f6170a;
    public String b;

    public C2244k9() {
        a();
    }

    public static C2244k9[] b() {
        if (c == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (c == null) {
                    c = new C2244k9[0];
                }
            }
        }
        return c;
    }

    public final C2244k9 a() {
        this.f6170a = 2;
        this.b = "";
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        int i = this.f6170a;
        if (i != 2) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeInt32Size(3, i);
        }
        return !this.b.equals("") ? CodedOutputByteBufferNano.computeStringSize(4, this.b) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        int i = this.f6170a;
        if (i != 2) {
            codedOutputByteBufferNano.writeInt32(3, i);
        }
        if (!this.b.equals("")) {
            codedOutputByteBufferNano.writeString(4, this.b);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2244k9 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag != 0) {
                if (tag == 24) {
                    int int32 = codedInputByteBufferNano.readInt32();
                    switch (int32) {
                        case 0:
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                        case 6:
                        case 7:
                        case 8:
                        case 9:
                        case 10:
                        case 11:
                        case 12:
                            this.f6170a = int32;
                            break;
                    }
                } else if (tag != 34) {
                    if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    }
                } else {
                    this.b = codedInputByteBufferNano.readString();
                }
            }
        }
        return this;
    }

    public static C2244k9 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2244k9().mergeFrom(codedInputByteBufferNano);
    }

    public static C2244k9 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2244k9) MessageNano.mergeFrom(new C2244k9(), bArr);
    }
}
