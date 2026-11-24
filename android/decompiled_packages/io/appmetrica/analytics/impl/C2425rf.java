package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.rf, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2425rf extends MessageNano {
    public static volatile C2425rf[] d;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f6295a;
    public String b;
    public int c;

    public C2425rf() {
        a();
    }

    public static C2425rf[] b() {
        if (d == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (d == null) {
                    d = new C2425rf[0];
                }
            }
        }
        return d;
    }

    public final C2425rf a() {
        this.f6295a = "";
        this.b = "";
        this.c = 0;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        if (!this.f6295a.equals("")) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeStringSize(1, this.f6295a);
        }
        if (!this.b.equals("")) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeStringSize(2, this.b);
        }
        return CodedOutputByteBufferNano.computeInt32Size(3, this.c) + iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        if (!this.f6295a.equals("")) {
            codedOutputByteBufferNano.writeString(1, this.f6295a);
        }
        if (!this.b.equals("")) {
            codedOutputByteBufferNano.writeString(2, this.b);
        }
        codedOutputByteBufferNano.writeInt32(3, this.c);
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2425rf mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                this.f6295a = codedInputByteBufferNano.readString();
            } else if (tag == 18) {
                this.b = codedInputByteBufferNano.readString();
            } else if (tag != 24) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                int int32 = codedInputByteBufferNano.readInt32();
                if (int32 == 0 || int32 == 1 || int32 == 2 || int32 == 3) {
                    this.c = int32;
                }
            }
        }
        return this;
    }

    public static C2425rf b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2425rf().mergeFrom(codedInputByteBufferNano);
    }

    public static C2425rf a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2425rf) MessageNano.mergeFrom(new C2425rf(), bArr);
    }
}
