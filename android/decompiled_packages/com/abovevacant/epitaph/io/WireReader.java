package com.abovevacant.epitaph.io;

import java.io.ByteArrayOutputStream;
import java.io.EOFException;
import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.StandardCharsets;

/* JADX INFO: loaded from: classes4.dex */
public final class WireReader {
    public static final int WIRETYPE_FIXED32 = 5;
    public static final int WIRETYPE_FIXED64 = 1;
    public static final int WIRETYPE_LENGTH_DELIMITED = 2;
    public static final int WIRETYPE_VARINT = 0;
    private final byte[] buffer;
    private final int limit;
    private int position;

    public static int getFieldNumber(final int tag) {
        return tag >>> 3;
    }

    public static int getWireType(final int tag) {
        return tag & 7;
    }

    public WireReader(final byte[] data) {
        this(data, 0, data.length);
    }

    public WireReader(final byte[] data, final int offset, final int length) {
        this.buffer = data;
        this.position = offset;
        this.limit = offset + length;
    }

    public static WireReader fromInputStream(final InputStream stream) throws IOException {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        byte[] bArr = new byte[8192];
        while (true) {
            int i = stream.read(bArr);
            if (i != -1) {
                byteArrayOutputStream.write(bArr, 0, i);
            } else {
                return new WireReader(byteArrayOutputStream.toByteArray());
            }
        }
    }

    public boolean hasRemaining() {
        return this.position < this.limit;
    }

    public int remaining() {
        return this.limit - this.position;
    }

    public int readTag() throws IOException {
        if (hasRemaining()) {
            return (int) readVarInt();
        }
        return 0;
    }

    public long readVarInt() throws IOException {
        long j = 0;
        for (int i = 0; i < 64; i += 7) {
            if (!hasRemaining()) {
                throw new EOFException("Truncated varint");
            }
            byte[] bArr = this.buffer;
            int i2 = this.position;
            this.position = i2 + 1;
            byte b = bArr[i2];
            j |= ((long) (b & 127)) << i;
            if ((b & 128) == 0) {
                return j;
            }
        }
        throw new IOException("Malformed varint");
    }

    public int readVarInt32() throws IOException {
        return (int) readVarInt();
    }

    public long readFixed64() throws IOException {
        if (remaining() < 8) {
            throw new EOFException("Not enough bytes for fixed64");
        }
        long j = 0;
        for (int i = 0; i < 8; i++) {
            byte[] bArr = this.buffer;
            int i2 = this.position;
            this.position = i2 + 1;
            j |= ((long) (bArr[i2] & 255)) << (i * 8);
        }
        return j;
    }

    public int readFixed32() throws IOException {
        if (remaining() < 4) {
            throw new EOFException("Not enough bytes for fixed32");
        }
        int i = 0;
        for (int i2 = 0; i2 < 4; i2++) {
            byte[] bArr = this.buffer;
            int i3 = this.position;
            this.position = i3 + 1;
            i |= (bArr[i3] & 255) << (i2 * 8);
        }
        return i;
    }

    public byte[] readBytes() throws IOException {
        int varInt32 = readVarInt32();
        if (varInt32 < 0) {
            throw new IOException("Negative length: " + varInt32);
        }
        if (remaining() < varInt32) {
            throw new EOFException("Not enough bytes for length-delimited field");
        }
        byte[] bArr = new byte[varInt32];
        System.arraycopy(this.buffer, this.position, bArr, 0, varInt32);
        this.position += varInt32;
        return bArr;
    }

    public String readString() throws IOException {
        return new String(readBytes(), StandardCharsets.UTF_8);
    }

    public boolean readBool() throws IOException {
        return readVarInt() != 0;
    }

    public WireReader readMessage() throws IOException {
        return new WireReader(readBytes());
    }

    public static void expectWireType(final int fieldNumber, final int expected, final int actual) throws IOException {
        if (expected == actual) {
            return;
        }
        throw new IOException("Field " + fieldNumber + ": expected " + wireTypeName(expected) + " (wire type " + expected + ") but got " + wireTypeName(actual) + " (wire type " + actual + ")");
    }

    private static String wireTypeName(final int wireType) {
        if (wireType == 0) {
            return "varint";
        }
        if (wireType == 1) {
            return "fixed64";
        }
        if (wireType == 2) {
            return "length-delimited";
        }
        if (wireType == 5) {
            return "fixed32";
        }
        return "unknown";
    }

    public void skipField(final int wireType) throws IOException {
        if (wireType == 0) {
            readVarInt();
            return;
        }
        if (wireType == 1) {
            if (remaining() < 8) {
                throw new EOFException("Not enough bytes to skip fixed64");
            }
            this.position += 8;
        } else {
            if (wireType == 2) {
                int varInt32 = readVarInt32();
                if (remaining() < varInt32) {
                    throw new EOFException("Not enough bytes to skip length-delimited");
                }
                this.position += varInt32;
                return;
            }
            if (wireType == 5) {
                if (remaining() < 4) {
                    throw new EOFException("Not enough bytes to skip fixed32");
                }
                this.position += 4;
            } else {
                throw new IOException("Unknown wire type: " + wireType);
            }
        }
    }
}
