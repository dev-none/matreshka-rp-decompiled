package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.x8, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2568x8 extends MessageNano {
    public static volatile C2568x8[] c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C2468t8 f6400a;
    public C2543w8 b;

    public C2568x8() {
        a();
    }

    public static C2568x8[] b() {
        if (c == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (c == null) {
                    c = new C2568x8[0];
                }
            }
        }
        return c;
    }

    public final C2568x8 a() {
        this.f6400a = null;
        this.b = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        C2468t8 c2468t8 = this.f6400a;
        if (c2468t8 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(1, c2468t8);
        }
        C2543w8 c2543w8 = this.b;
        return c2543w8 != null ? CodedOutputByteBufferNano.computeMessageSize(2, c2543w8) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        C2468t8 c2468t8 = this.f6400a;
        if (c2468t8 != null) {
            codedOutputByteBufferNano.writeMessage(1, c2468t8);
        }
        C2543w8 c2543w8 = this.b;
        if (c2543w8 != null) {
            codedOutputByteBufferNano.writeMessage(2, c2543w8);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2568x8 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                if (this.f6400a == null) {
                    this.f6400a = new C2468t8();
                }
                codedInputByteBufferNano.readMessage(this.f6400a);
            } else if (tag != 18) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                if (this.b == null) {
                    this.b = new C2543w8();
                }
                codedInputByteBufferNano.readMessage(this.b);
            }
        }
        return this;
    }

    public static C2568x8 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2568x8().mergeFrom(codedInputByteBufferNano);
    }

    public static C2568x8 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2568x8) MessageNano.mergeFrom(new C2568x8(), bArr);
    }
}
