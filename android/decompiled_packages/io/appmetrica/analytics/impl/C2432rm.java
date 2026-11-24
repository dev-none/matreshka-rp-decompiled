package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.rm, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2432rm extends MessageNano {
    public static volatile C2432rm[] b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C2408qm[] f6301a;

    public C2432rm() {
        a();
    }

    public static C2432rm[] b() {
        if (b == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (b == null) {
                    b = new C2432rm[0];
                }
            }
        }
        return b;
    }

    public final C2432rm a() {
        this.f6301a = C2408qm.b();
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        C2408qm[] c2408qmArr = this.f6301a;
        if (c2408qmArr != null && c2408qmArr.length > 0) {
            int i = 0;
            while (true) {
                C2408qm[] c2408qmArr2 = this.f6301a;
                if (i >= c2408qmArr2.length) {
                    break;
                }
                C2408qm c2408qm = c2408qmArr2[i];
                if (c2408qm != null) {
                    iComputeSerializedSize = CodedOutputByteBufferNano.computeMessageSize(1, c2408qm) + iComputeSerializedSize;
                }
                i++;
            }
        }
        return iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        C2408qm[] c2408qmArr = this.f6301a;
        if (c2408qmArr != null && c2408qmArr.length > 0) {
            int i = 0;
            while (true) {
                C2408qm[] c2408qmArr2 = this.f6301a;
                if (i >= c2408qmArr2.length) {
                    break;
                }
                C2408qm c2408qm = c2408qmArr2[i];
                if (c2408qm != null) {
                    codedOutputByteBufferNano.writeMessage(1, c2408qm);
                }
                i++;
            }
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2432rm mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag != 10) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                int repeatedFieldArrayLength = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 10);
                C2408qm[] c2408qmArr = this.f6301a;
                int length = c2408qmArr == null ? 0 : c2408qmArr.length;
                int i = repeatedFieldArrayLength + length;
                C2408qm[] c2408qmArr2 = new C2408qm[i];
                if (length != 0) {
                    System.arraycopy(c2408qmArr, 0, c2408qmArr2, 0, length);
                }
                while (length < i - 1) {
                    C2408qm c2408qm = new C2408qm();
                    c2408qmArr2[length] = c2408qm;
                    codedInputByteBufferNano.readMessage(c2408qm);
                    codedInputByteBufferNano.readTag();
                    length++;
                }
                C2408qm c2408qm2 = new C2408qm();
                c2408qmArr2[length] = c2408qm2;
                codedInputByteBufferNano.readMessage(c2408qm2);
                this.f6301a = c2408qmArr2;
            }
        }
        return this;
    }

    public static C2432rm b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2432rm().mergeFrom(codedInputByteBufferNano);
    }

    public static C2432rm a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2432rm) MessageNano.mergeFrom(new C2432rm(), bArr);
    }
}
