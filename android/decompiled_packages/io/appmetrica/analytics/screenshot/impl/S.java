package io.appmetrica.analytics.screenshot.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: loaded from: classes7.dex */
public final class S extends MessageNano {
    public static volatile S[] c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public boolean f6547a;
    public Q b;

    public S() {
        a();
    }

    public static S[] b() {
        if (c == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (c == null) {
                    c = new S[0];
                }
            }
        }
        return c;
    }

    public final S a() {
        this.f6547a = true;
        this.b = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        boolean z = this.f6547a;
        if (!z) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeBoolSize(1, z);
        }
        Q q = this.b;
        return q != null ? CodedOutputByteBufferNano.computeMessageSize(2, q) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        boolean z = this.f6547a;
        if (!z) {
            codedOutputByteBufferNano.writeBool(1, z);
        }
        Q q = this.b;
        if (q != null) {
            codedOutputByteBufferNano.writeMessage(2, q);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final S mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 8) {
                this.f6547a = codedInputByteBufferNano.readBool();
            } else if (tag != 18) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                if (this.b == null) {
                    this.b = new Q();
                }
                codedInputByteBufferNano.readMessage(this.b);
            }
        }
        return this;
    }

    public static S b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new S().mergeFrom(codedInputByteBufferNano);
    }

    public static S a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (S) MessageNano.mergeFrom(new S(), bArr);
    }
}
