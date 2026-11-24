package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ho, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2182ho extends MessageNano {
    public static final int e = 0;
    public static final int f = 1;
    public static final int g = 2;
    public static final int h = 3;
    public static volatile C2182ho[] i;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public byte[] f6119a;
    public int b;
    public C2207io c;
    public C2233jo d;

    public C2182ho() {
        a();
    }

    public static C2182ho[] b() {
        if (i == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (i == null) {
                    i = new C2182ho[0];
                }
            }
        }
        return i;
    }

    public final C2182ho a() {
        this.f6119a = WireFormatNano.EMPTY_BYTES;
        this.b = 0;
        this.c = null;
        this.d = null;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeInt32Size = CodedOutputByteBufferNano.computeInt32Size(2, this.b) + CodedOutputByteBufferNano.computeBytesSize(1, this.f6119a) + super.computeSerializedSize();
        C2207io c2207io = this.c;
        if (c2207io != null) {
            iComputeInt32Size += CodedOutputByteBufferNano.computeMessageSize(3, c2207io);
        }
        C2233jo c2233jo = this.d;
        return c2233jo != null ? CodedOutputByteBufferNano.computeMessageSize(4, c2233jo) + iComputeInt32Size : iComputeInt32Size;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        codedOutputByteBufferNano.writeBytes(1, this.f6119a);
        codedOutputByteBufferNano.writeInt32(2, this.b);
        C2207io c2207io = this.c;
        if (c2207io != null) {
            codedOutputByteBufferNano.writeMessage(3, c2207io);
        }
        C2233jo c2233jo = this.d;
        if (c2233jo != null) {
            codedOutputByteBufferNano.writeMessage(4, c2233jo);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2182ho mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                this.f6119a = codedInputByteBufferNano.readBytes();
            } else if (tag == 16) {
                int int32 = codedInputByteBufferNano.readInt32();
                if (int32 == 0 || int32 == 1 || int32 == 2 || int32 == 3) {
                    this.b = int32;
                }
            } else if (tag == 26) {
                if (this.c == null) {
                    this.c = new C2207io();
                }
                codedInputByteBufferNano.readMessage(this.c);
            } else if (tag != 34) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                if (this.d == null) {
                    this.d = new C2233jo();
                }
                codedInputByteBufferNano.readMessage(this.d);
            }
        }
        return this;
    }

    public static C2182ho b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2182ho().mergeFrom(codedInputByteBufferNano);
    }

    public static C2182ho a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2182ho) MessageNano.mergeFrom(new C2182ho(), bArr);
    }
}
