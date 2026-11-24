package io.appmetrica.analytics.idsync.impl;

import io.appmetrica.analytics.protobuf.nano.CodedInputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.CodedOutputByteBufferNano;
import io.appmetrica.analytics.protobuf.nano.InternalNano;
import io.appmetrica.analytics.protobuf.nano.InvalidProtocolBufferNanoException;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import io.appmetrica.analytics.protobuf.nano.WireFormatNano;
import java.io.IOException;

/* JADX INFO: loaded from: classes7.dex */
public final class n extends MessageNano {
    public static volatile n[] c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public long f5570a;
    public m[] b;

    public n() {
        a();
    }

    public static n[] b() {
        if (c == null) {
            synchronized (InternalNano.LAZY_INIT_LOCK) {
                if (c == null) {
                    c = new n[0];
                }
            }
        }
        return c;
    }

    public final n a() {
        this.f5570a = 10000L;
        this.b = m.b();
        this.cachedSize = -1;
        return this;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final int computeSerializedSize() {
        int iComputeSerializedSize = super.computeSerializedSize();
        long j = this.f5570a;
        if (j != 10000) {
            iComputeSerializedSize += CodedOutputByteBufferNano.computeUInt64Size(1, j);
        }
        m[] mVarArr = this.b;
        if (mVarArr != null && mVarArr.length > 0) {
            int i = 0;
            while (true) {
                m[] mVarArr2 = this.b;
                if (i >= mVarArr2.length) {
                    break;
                }
                m mVar = mVarArr2[i];
                if (mVar != null) {
                    iComputeSerializedSize = CodedOutputByteBufferNano.computeMessageSize(2, mVar) + iComputeSerializedSize;
                }
                i++;
            }
        }
        return iComputeSerializedSize;
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    public final void writeTo(CodedOutputByteBufferNano codedOutputByteBufferNano) throws IOException {
        long j = this.f5570a;
        if (j != 10000) {
            codedOutputByteBufferNano.writeUInt64(1, j);
        }
        m[] mVarArr = this.b;
        if (mVarArr != null && mVarArr.length > 0) {
            int i = 0;
            while (true) {
                m[] mVarArr2 = this.b;
                if (i >= mVarArr2.length) {
                    break;
                }
                m mVar = mVarArr2[i];
                if (mVar != null) {
                    codedOutputByteBufferNano.writeMessage(2, mVar);
                }
                i++;
            }
        }
        super.writeTo(codedOutputByteBufferNano);
    }

    @Override // io.appmetrica.analytics.protobuf.nano.MessageNano
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final n mergeFrom(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        while (true) {
            int tag = codedInputByteBufferNano.readTag();
            if (tag == 0) {
                break;
            }
            if (tag == 8) {
                this.f5570a = codedInputByteBufferNano.readUInt64();
            } else if (tag != 18) {
                if (!WireFormatNano.parseUnknownField(codedInputByteBufferNano, tag)) {
                    break;
                }
            } else {
                int repeatedFieldArrayLength = WireFormatNano.getRepeatedFieldArrayLength(codedInputByteBufferNano, 18);
                m[] mVarArr = this.b;
                int length = mVarArr == null ? 0 : mVarArr.length;
                int i = repeatedFieldArrayLength + length;
                m[] mVarArr2 = new m[i];
                if (length != 0) {
                    System.arraycopy(mVarArr, 0, mVarArr2, 0, length);
                }
                while (length < i - 1) {
                    m mVar = new m();
                    mVarArr2[length] = mVar;
                    codedInputByteBufferNano.readMessage(mVar);
                    codedInputByteBufferNano.readTag();
                    length++;
                }
                m mVar2 = new m();
                mVarArr2[length] = mVar2;
                codedInputByteBufferNano.readMessage(mVar2);
                this.b = mVarArr2;
            }
        }
        return this;
    }

    public static n b(CodedInputByteBufferNano codedInputByteBufferNano) throws IOException {
        return new n().mergeFrom(codedInputByteBufferNano);
    }

    public static n a(byte[] bArr) throws InvalidProtocolBufferNanoException {
        return (n) MessageNano.mergeFrom(new n(), bArr);
    }
}
