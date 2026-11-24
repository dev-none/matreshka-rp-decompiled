package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.qm, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2408qm extends MessageNano {
    public static volatile C2408qm[] c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f6280a;
    public C2383pm b;

    public C2408qm() {
        a();
    }

    public static C2408qm[] b() {
        if (c == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (c == null) {
                    c = new C2408qm[0];
                }
            }
        }
        return c;
    }

    public final C2408qm a() {
        this.f6280a = "";
        this.b = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        if (!this.f6280a.equals("")) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeStringSize(1, this.f6280a);
        }
        C2383pm c2383pm = this.b;
        return c2383pm != null ? CodedOutputByteBufferNano.computeMessageSize(2, c2383pm) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        if (!this.f6280a.equals("")) {
            codedOutputByteBufferNano.writeString(1, this.f6280a);
        }
        C2383pm c2383pm = this.b;
        if (c2383pm != null) {
            codedOutputByteBufferNano.writeMessage(2, c2383pm);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2408qm mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                this.f6280a = codedInputByteBufferNano.readString();
            } else if (tag != 18) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                if (this.b == null) {
                    this.b = new C2383pm();
                }
                codedInputByteBufferNano.readMessage(this.b);
            }
        }
        return this;
    }

    public static C2408qm b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2408qm().mergeFrom(codedInputByteBufferNano);
    }

    public static C2408qm a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2408qm) MessageNano.mergeFrom(new C2408qm(), bArr);
    }
}
