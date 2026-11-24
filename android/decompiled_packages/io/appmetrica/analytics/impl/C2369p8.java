package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.p8, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2369p8 extends MessageNano {
    public static volatile C2369p8[] b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C2319n8 f6253a;

    public C2369p8() {
        a();
    }

    public static C2369p8[] b() {
        if (b == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (b == null) {
                    b = new C2369p8[0];
                }
            }
        }
        return b;
    }

    public final C2369p8 a() {
        this.f6253a = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        C2319n8 c2319n8 = this.f6253a;
        return c2319n8 != null ? CodedOutputByteBufferNano.computeMessageSize(1, c2319n8) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        C2319n8 c2319n8 = this.f6253a;
        if (c2319n8 != null) {
            codedOutputByteBufferNano.writeMessage(1, c2319n8);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2369p8 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
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
                if (this.f6253a == null) {
                    this.f6253a = new C2319n8();
                }
                codedInputByteBufferNano.readMessage(this.f6253a);
            }
        }
        return this;
    }

    public static C2369p8 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2369p8().mergeFrom(codedInputByteBufferNano);
    }

    public static C2369p8 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2369p8) MessageNano.mergeFrom(new C2369p8(), bArr);
    }
}
