package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: loaded from: classes7.dex */
public final class Pi extends MessageNano {
    public static volatile Pi[] d;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public boolean f5839a;
    public Oi b;
    public Ni c;

    public Pi() {
        a();
    }

    public static Pi[] b() {
        if (d == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (d == null) {
                    d = new Pi[0];
                }
            }
        }
        return d;
    }

    public final Pi a() {
        this.f5839a = false;
        this.b = null;
        this.c = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        boolean z = this.f5839a;
        if (z) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeBoolSize(1, z);
        }
        Oi oi = this.b;
        if (oi != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(2, oi);
        }
        Ni ni = this.c;
        return ni != null ? CodedOutputByteBufferNano.computeMessageSize(3, ni) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        boolean z = this.f5839a;
        if (z) {
            codedOutputByteBufferNano.writeBool(1, z);
        }
        Oi oi = this.b;
        if (oi != null) {
            codedOutputByteBufferNano.writeMessage(2, oi);
        }
        Ni ni = this.c;
        if (ni != null) {
            codedOutputByteBufferNano.writeMessage(3, ni);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Pi mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 8) {
                this.f5839a = codedInputByteBufferNano.readBool();
            } else if (tag == 18) {
                if (this.b == null) {
                    this.b = new Oi();
                }
                codedInputByteBufferNano.readMessage(this.b);
            } else if (tag != 26) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                if (this.c == null) {
                    this.c = new Ni();
                }
                codedInputByteBufferNano.readMessage(this.c);
            }
        }
        return this;
    }

    public static Pi b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new Pi().mergeFrom(codedInputByteBufferNano);
    }

    public static Pi a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (Pi) MessageNano.mergeFrom(new Pi(), bArr);
    }
}
