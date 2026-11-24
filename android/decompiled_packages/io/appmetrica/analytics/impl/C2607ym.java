package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ym, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2607ym extends MessageNano {
    public static volatile C2607ym[] b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f6418a;

    public C2607ym() {
        a();
    }

    public static C2607ym[] b() {
        if (b == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (b == null) {
                    b = new C2607ym[0];
                }
            }
        }
        return b;
    }

    public final C2607ym a() {
        this.f6418a = 86400;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        int i = this.f6418a;
        return i != 86400 ? CodedOutputByteBufferNano.computeUInt32Size(1, i) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        int i = this.f6418a;
        if (i != 86400) {
            codedOutputByteBufferNano.writeUInt32(1, i);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2607ym mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag != 8) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                this.f6418a = codedInputByteBufferNano.readUInt32();
            }
        }
        return this;
    }

    public static C2607ym b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2607ym().mergeFrom(codedInputByteBufferNano);
    }

    public static C2607ym a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2607ym) MessageNano.mergeFrom(new C2607ym(), bArr);
    }
}
