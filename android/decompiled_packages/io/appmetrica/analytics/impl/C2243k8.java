package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.k8, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2243k8 extends MessageNano {
    public static volatile C2243k8[] e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C2468t8 f6169a;
    public C2518v8 b;
    public C2294m8 c;
    public C2443s8 d;

    public C2243k8() {
        a();
    }

    public static C2243k8[] b() {
        if (e == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (e == null) {
                    e = new C2243k8[0];
                }
            }
        }
        return e;
    }

    public final C2243k8 a() {
        this.f6169a = null;
        this.b = null;
        this.c = null;
        this.d = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        C2468t8 c2468t8 = this.f6169a;
        if (c2468t8 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(1, c2468t8);
        }
        C2518v8 c2518v8 = this.b;
        if (c2518v8 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(2, c2518v8);
        }
        C2294m8 c2294m8 = this.c;
        if (c2294m8 != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(3, c2294m8);
        }
        C2443s8 c2443s8 = this.d;
        return c2443s8 != null ? CodedOutputByteBufferNano.computeMessageSize(4, c2443s8) + iComputeSerializedSize : iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        C2468t8 c2468t8 = this.f6169a;
        if (c2468t8 != null) {
            codedOutputByteBufferNano.writeMessage(1, c2468t8);
        }
        C2518v8 c2518v8 = this.b;
        if (c2518v8 != null) {
            codedOutputByteBufferNano.writeMessage(2, c2518v8);
        }
        C2294m8 c2294m8 = this.c;
        if (c2294m8 != null) {
            codedOutputByteBufferNano.writeMessage(3, c2294m8);
        }
        C2443s8 c2443s8 = this.d;
        if (c2443s8 != null) {
            codedOutputByteBufferNano.writeMessage(4, c2443s8);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2243k8 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                if (this.f6169a == null) {
                    this.f6169a = new C2468t8();
                }
                codedInputByteBufferNano.readMessage(this.f6169a);
            } else if (tag == 18) {
                if (this.b == null) {
                    this.b = new C2518v8();
                }
                codedInputByteBufferNano.readMessage(this.b);
            } else if (tag == 26) {
                if (this.c == null) {
                    this.c = new C2294m8();
                }
                codedInputByteBufferNano.readMessage(this.c);
            } else if (tag != 34) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                if (this.d == null) {
                    this.d = new C2443s8();
                }
                codedInputByteBufferNano.readMessage(this.d);
            }
        }
        return this;
    }

    public static C2243k8 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2243k8().mergeFrom(codedInputByteBufferNano);
    }

    public static C2243k8 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2243k8) MessageNano.mergeFrom(new C2243k8(), bArr);
    }
}
