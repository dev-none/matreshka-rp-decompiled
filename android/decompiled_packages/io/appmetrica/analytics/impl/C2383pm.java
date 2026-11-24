package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.pm, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2383pm extends MessageNano {
    public static volatile C2383pm[] b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f6259a;

    public C2383pm() {
        a();
    }

    public static C2383pm[] b() {
        if (b == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (b == null) {
                    b = new C2383pm[0];
                }
            }
        }
        return b;
    }

    public final C2383pm a() {
        this.f6259a = "";
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        return !this.f6259a.equals("") ? CodedOutputByteBufferNano.computeStringSize(1, this.f6259a) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        if (!this.f6259a.equals("")) {
            codedOutputByteBufferNano.writeString(1, this.f6259a);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2383pm mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
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
                this.f6259a = codedInputByteBufferNano.readString();
            }
        }
        return this;
    }

    public static C2383pm b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2383pm().mergeFrom(codedInputByteBufferNano);
    }

    public static C2383pm a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2383pm) MessageNano.mergeFrom(new C2383pm(), bArr);
    }
}
