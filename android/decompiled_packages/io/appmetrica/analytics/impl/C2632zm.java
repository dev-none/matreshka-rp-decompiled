package io.appmetrica.analytics.impl;

import androidx.work.WorkRequest;
import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.zm, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2632zm extends MessageNano {
    public static volatile C2632zm[] b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public long f6436a;

    public C2632zm() {
        a();
    }

    public static C2632zm[] b() {
        if (b == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (b == null) {
                    b = new C2632zm[0];
                }
            }
        }
        return b;
    }

    public final C2632zm a() {
        this.f6436a = WorkRequest.MAX_BACKOFF_MILLIS;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        return CodedOutputByteBufferNano.computeInt64Size(1, this.f6436a) + super.computeSerializedSize();
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        codedOutputByteBufferNano.writeInt64(1, this.f6436a);
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2632zm mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
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
                this.f6436a = codedInputByteBufferNano.readInt64();
            }
        }
        return this;
    }

    public static C2632zm b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2632zm().mergeFrom(codedInputByteBufferNano);
    }

    public static C2632zm a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2632zm) MessageNano.mergeFrom(new C2632zm(), bArr);
    }
}
