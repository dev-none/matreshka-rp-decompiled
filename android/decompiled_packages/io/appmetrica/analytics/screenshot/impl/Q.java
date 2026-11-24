package io.appmetrica.analytics.screenshot.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: loaded from: classes7.dex */
public final class Q extends MessageNano {
    public static volatile Q[] d;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public N f6546a;
    public P b;
    public O c;

    public Q() {
        a();
    }

    public static Q[] b() {
        if (d == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (d == null) {
                    d = new Q[0];
                }
            }
        }
        return d;
    }

    public final Q a() {
        this.f6546a = null;
        this.b = null;
        this.c = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        N n = this.f6546a;
        if (n != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(1, n);
        }
        P p = this.b;
        if (p != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(2, p);
        }
        O o = this.c;
        return o != null ? CodedOutputByteBufferNano.computeMessageSize(3, o) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        N n = this.f6546a;
        if (n != null) {
            codedOutputByteBufferNano.writeMessage(1, n);
        }
        P p = this.b;
        if (p != null) {
            codedOutputByteBufferNano.writeMessage(2, p);
        }
        O o = this.c;
        if (o != null) {
            codedOutputByteBufferNano.writeMessage(3, o);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Q mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                if (this.f6546a == null) {
                    this.f6546a = new N();
                }
                codedInputByteBufferNano.readMessage(this.f6546a);
            } else if (tag == 18) {
                if (this.b == null) {
                    this.b = new P();
                }
                codedInputByteBufferNano.readMessage(this.b);
            } else if (tag != 26) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                if (this.c == null) {
                    this.c = new O();
                }
                codedInputByteBufferNano.readMessage(this.c);
            }
        }
        return this;
    }

    public static Q b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new Q().mergeFrom(codedInputByteBufferNano);
    }

    public static Q a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (Q) MessageNano.mergeFrom(new Q(), bArr);
    }
}
