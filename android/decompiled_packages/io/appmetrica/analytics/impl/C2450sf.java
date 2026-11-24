package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.sf, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2450sf extends MessageNano {
    public static final int c = 0;
    public static final int d = 1;
    public static final int e = 2;
    public static final int f = 3;
    public static volatile C2450sf[] g;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C2401qf f6313a;
    public C2425rf[] b;

    public C2450sf() {
        a();
    }

    public static C2450sf[] b() {
        if (g == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (g == null) {
                    g = new C2450sf[0];
                }
            }
        }
        return g;
    }

    public final C2450sf a() {
        this.f6313a = null;
        this.b = C2425rf.b();
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        C2401qf c2401qf = this.f6313a;
        if (c2401qf != null) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeMessageSize(1, c2401qf);
        }
        C2425rf[] c2425rfArr = this.b;
        if (c2425rfArr != null && c2425rfArr.length > 0) {
            int i = 0;
            while (true) {
                C2425rf[] c2425rfArr2 = this.b;
                if (i >= c2425rfArr2.length) {
                    break;
                }
                C2425rf c2425rf = c2425rfArr2[i];
                if (c2425rf != null) {
                    iComputeSerializedSize = CodedOutputByteBufferNano.computeMessageSize(2, c2425rf) + iComputeSerializedSize;
                }
                i++;
            }
        }
        return iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        C2401qf c2401qf = this.f6313a;
        if (c2401qf != null) {
            codedOutputByteBufferNano.writeMessage(1, c2401qf);
        }
        C2425rf[] c2425rfArr = this.b;
        if (c2425rfArr != null && c2425rfArr.length > 0) {
            int i = 0;
            while (true) {
                C2425rf[] c2425rfArr2 = this.b;
                if (i >= c2425rfArr2.length) {
                    break;
                }
                C2425rf c2425rf = c2425rfArr2[i];
                if (c2425rf != null) {
                    codedOutputByteBufferNano.writeMessage(2, c2425rf);
                }
                i++;
            }
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2450sf mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 10) {
                if (this.f6313a == null) {
                    this.f6313a = new C2401qf();
                }
                codedInputByteBufferNano.readMessage(this.f6313a);
            } else if (tag != 18) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                int repeatedFieldArrayLength = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 18);
                C2425rf[] c2425rfArr = this.b;
                int length = c2425rfArr == null ? 0 : c2425rfArr.length;
                int i = repeatedFieldArrayLength + length;
                C2425rf[] c2425rfArr2 = new C2425rf[i];
                if (length != 0) {
                    System.arraycopy(c2425rfArr, 0, c2425rfArr2, 0, length);
                }
                while (length < i - 1) {
                    C2425rf c2425rf = new C2425rf();
                    c2425rfArr2[length] = c2425rf;
                    codedInputByteBufferNano.readMessage(c2425rf);
                    codedInputByteBufferNano.readTag();
                    length++;
                }
                C2425rf c2425rf2 = new C2425rf();
                c2425rfArr2[length] = c2425rf2;
                codedInputByteBufferNano.readMessage(c2425rf2);
                this.b = c2425rfArr2;
            }
        }
        return this;
    }

    public static C2450sf b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2450sf().mergeFrom(codedInputByteBufferNano);
    }

    public static C2450sf a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2450sf) MessageNano.mergeFrom(new C2450sf(), bArr);
    }
}
