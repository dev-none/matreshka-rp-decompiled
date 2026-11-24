package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.p9, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2370p9 extends MessageNano {
    public static volatile C2370p9[] e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public long f6254a;
    public int b;
    public long c;
    public boolean d;

    public C2370p9() {
        a();
    }

    public static C2370p9[] b() {
        if (e == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (e == null) {
                    e = new C2370p9[0];
                }
            }
        }
        return e;
    }

    public final C2370p9 a() {
        this.f6254a = 0L;
        this.b = 0;
        this.c = 0L;
        this.d = false;
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSInt32Size = CodedOutputByteBufferNano.computeSInt32Size(2, this.b) + CodedOutputByteBufferNano.computeUInt64Size(1, this.f6254a) + super.computeSerializedSize();
        long j = this.c;
        if (j != 0) {
            iComputeSInt32Size += CodedOutputByteBufferNano.computeInt64Size(3, j);
        }
        boolean z = this.d;
        return z ? CodedOutputByteBufferNano.computeBoolSize(4, z) + iComputeSInt32Size : iComputeSInt32Size;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        codedOutputByteBufferNano.writeUInt64(1, this.f6254a);
        codedOutputByteBufferNano.writeSInt32(2, this.b);
        long j = this.c;
        if (j != 0) {
            codedOutputByteBufferNano.writeInt64(3, j);
        }
        boolean z = this.d;
        if (z) {
            codedOutputByteBufferNano.writeBool(4, z);
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2370p9 mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 8) {
                this.f6254a = codedInputByteBufferNano.readUInt64();
            } else if (tag == 16) {
                this.b = codedInputByteBufferNano.readSInt32();
            } else if (tag == 24) {
                this.c = codedInputByteBufferNano.readInt64();
            } else if (tag != 32) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                this.d = codedInputByteBufferNano.readBool();
            }
        }
        return this;
    }

    public static C2370p9 b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2370p9().mergeFrom(codedInputByteBufferNano);
    }

    public static C2370p9 a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2370p9) MessageNano.mergeFrom(new C2370p9(), bArr);
    }
}
