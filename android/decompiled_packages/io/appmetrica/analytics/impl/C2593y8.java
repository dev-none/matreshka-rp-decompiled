package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.y8, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2593y8 extends MessageNano {
    public static volatile C2593y8[] c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C2468t8 f6412a;
    public C2518v8 b;

    public C2593y8() {
        a();
    }

    public static C2593y8[] b() {
        if (c == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (c == null) {
                    c = new C2593y8[0];
                }
            }
        }
        return c;
    }

    public final C2593y8 a() {
        this.f6412a = null;
        this.b = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        C2468t8 c2468t8 = this.f6412a;
        if (c2468t8 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(1, c2468t8);
        }
        C2518v8 c2518v8 = this.b;
        return c2518v8 != null ? CodedOutputByteBufferNano.computeMessageSize(2, c2518v8) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        C2468t8 c2468t8 = this.f6412a;
        if (c2468t8 != null) {
            codedOutputByteBufferNano.writeMessage(1, c2468t8);
        }
        C2518v8 c2518v8 = this.b;
        if (c2518v8 != null) {
            codedOutputByteBufferNano.writeMessage(2, c2518v8);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2593y8 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                if (this.f6412a == null) {
                    this.f6412a = new C2468t8();
                }
                codedInputByteBufferNano.readMessage(this.f6412a);
            } else if (tag != 18) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                if (this.b == null) {
                    this.b = new C2518v8();
                }
                codedInputByteBufferNano.readMessage(this.b);
            }
        }
        return this;
    }

    public static C2593y8 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2593y8().mergeFrom(codedInputByteBufferNano);
    }

    public static C2593y8 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2593y8) MessageNano.mergeFrom(new C2593y8(), bArr);
    }
}
