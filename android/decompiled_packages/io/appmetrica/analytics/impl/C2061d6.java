package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.d6, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2061d6 extends MessageNano {
    public static volatile C2061d6[] b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f6042a;

    public C2061d6() {
        a();
    }

    public static C2061d6[] b() {
        if (b == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (b == null) {
                    b = new C2061d6[0];
                }
            }
        }
        return b;
    }

    public final C2061d6 a() {
        this.f6042a = "";
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        return CodedOutputByteBufferNano.computeStringSize(1, this.f6042a) + super.computeSerializedSize();
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        codedOutputByteBufferNano.writeString(1, this.f6042a);
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2061d6 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag != 10) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                this.f6042a = codedInputByteBufferNano.readString();
            }
        }
        return this;
    }

    public static C2061d6 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2061d6().mergeFrom(codedInputByteBufferNano);
    }

    public static C2061d6 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2061d6) MessageNano.mergeFrom(new C2061d6(), bArr);
    }
}
