package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ko, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2259ko extends MessageNano {
    public static volatile C2259ko[] b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public C2182ho[] f6179a;

    public C2259ko() {
        a();
    }

    public static C2259ko[] b() {
        if (b == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (b == null) {
                    b = new C2259ko[0];
                }
            }
        }
        return b;
    }

    public final C2259ko a() {
        this.f6179a = C2182ho.b();
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        C2182ho[] c2182hoArr = this.f6179a;
        if (c2182hoArr != null && c2182hoArr.length > 0) {
            int i = 0;
            while (true) {
                C2182ho[] c2182hoArr2 = this.f6179a;
                if (i >= c2182hoArr2.length) {
                    break;
                }
                C2182ho c2182ho = c2182hoArr2[i];
                if (c2182ho != null) {
                    iComputeSerializedSize = CodedOutputByteBufferNano.computeMessageSize(1, c2182ho) + iComputeSerializedSize;
                }
                i++;
            }
        }
        return iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        C2182ho[] c2182hoArr = this.f6179a;
        if (c2182hoArr != null && c2182hoArr.length > 0) {
            int i = 0;
            while (true) {
                C2182ho[] c2182hoArr2 = this.f6179a;
                if (i >= c2182hoArr2.length) {
                    break;
                }
                C2182ho c2182ho = c2182hoArr2[i];
                if (c2182ho != null) {
                    codedOutputByteBufferNano.writeMessage(1, c2182ho);
                }
                i++;
            }
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2259ko mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
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
                C2182ho[] c2182hoArr = this.f6179a;
                int length = c2182hoArr == null ? 0 : c2182hoArr.length;
                int i = repeatedFieldArrayLength + length;
                C2182ho[] c2182hoArr2 = new C2182ho[i];
                if (length != 0) {
                    System.arraycopy(c2182hoArr, 0, c2182hoArr2, 0, length);
                }
                while (length < i - 1) {
                    C2182ho c2182ho = new C2182ho();
                    c2182hoArr2[length] = c2182ho;
                    codedInputByteBufferNano.readMessage(c2182ho);
                    codedInputByteBufferNano.readTag();
                    length++;
                }
                C2182ho c2182ho2 = new C2182ho();
                c2182hoArr2[length] = c2182ho2;
                codedInputByteBufferNano.readMessage(c2182ho2);
                this.f6179a = c2182hoArr2;
            }
        }
        return this;
    }

    public static C2259ko b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new C2259ko().mergeFrom(codedInputByteBufferNano);
    }

    public static C2259ko a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (C2259ko) MessageNano.mergeFrom(new C2259ko(), bArr);
    }
}
