package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.h9, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2167h9 extends MessageNano {
    public static volatile C2167h9[] c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f6108a;
    public long b;

    public C2167h9() {
        a();
    }

    public static C2167h9[] b() {
        if (c == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (c == null) {
                    c = new C2167h9[0];
                }
            }
        }
        return c;
    }

    public final C2167h9 a() {
        this.f6108a = "";
        this.b = 0L;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        return CodedOutputByteBufferNano.computeUInt64Size(2, this.b) + CodedOutputByteBufferNano.computeStringSize(1, this.f6108a) + super.computeSerializedSize();
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        codedOutputByteBufferNano.writeString(1, this.f6108a);
        codedOutputByteBufferNano.writeUInt64(2, this.b);
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2167h9 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                this.f6108a = codedInputByteBufferNano.readString();
            } else if (tag != 16) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                this.b = codedInputByteBufferNano.readUInt64();
            }
        }
        return this;
    }

    public static C2167h9 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2167h9().mergeFrom(codedInputByteBufferNano);
    }

    public static C2167h9 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2167h9) MessageNano.mergeFrom(new C2167h9(), bArr);
    }
}
