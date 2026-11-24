package com.my.tracker.obfuscated;

import java.io.IOException;
import java.io.OutputStream;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.Map;
import java.util.TreeSet;

/* JADX INFO: loaded from: classes6.dex */
public abstract class r1 {
    private static final Charset b = StandardCharsets.UTF_8;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected final OutputStream f4993a;

    public r1(OutputStream outputStream) {
        this.f4993a = outputStream;
    }

    public int a(int i, int i2) {
        return b(i, 0) + b(i2);
    }

    public int b(byte[] bArr) throws IOException {
        this.f4993a.write(bArr);
        return bArr.length;
    }

    private int b(int i) {
        if (i < 0) {
            return a(i);
        }
        return a(i);
    }

    public int a(int i, long j) {
        return b(i, 0) + a(j);
    }

    public int a(int i, double d) {
        return b(i, 1) + a(d);
    }

    private int b(int i, int i2) {
        return a((i << 3) | i2);
    }

    public int a(int i, float f) {
        return b(i, 5) + a(f);
    }

    public int a(int i, byte[] bArr) {
        if (bArr == null) {
            return 0;
        }
        return b(i, 2) + a(bArr);
    }

    public int a(int i, q qVar) throws IOException {
        if (qVar == null) {
            return 0;
        }
        int iB = b(i, 2);
        int iB2 = qVar.b();
        int iB3 = iB + b(iB2) + iB2;
        qVar.a(this.f4993a);
        return iB3;
    }

    public int a(int i, String str) {
        if (str == null) {
            return 0;
        }
        return b(i, 2) + a(str.getBytes(b));
    }

    public int a(int i, String[] strArr) {
        if (strArr == null) {
            return 0;
        }
        int iA = 0;
        for (String str : strArr) {
            iA += a(i, str);
        }
        return iA;
    }

    public int a(int i, Map map, q qVar) {
        int iA = 0;
        if (map != null && !map.isEmpty()) {
            for (String str : new TreeSet(map.keySet())) {
                qVar.a();
                qVar.a(1, str);
                qVar.a(2, (String) map.get(str));
                if (qVar.b() > 0) {
                    iA += a(i, qVar);
                }
            }
        }
        return iA;
    }

    private int a(long j) throws IOException {
        int i = 0;
        while (true) {
            i++;
            if (((-128) & j) == 0) {
                this.f4993a.write((int) j);
                return i;
            }
            this.f4993a.write(((int) (127 & j)) | 128);
            j >>>= 7;
        }
    }

    private int a(double d) throws IOException {
        long jDoubleToRawLongBits = Double.doubleToRawLongBits(d);
        this.f4993a.write(((int) jDoubleToRawLongBits) & 255);
        this.f4993a.write(((int) (jDoubleToRawLongBits >> 8)) & 255);
        this.f4993a.write(((int) (jDoubleToRawLongBits >> 16)) & 255);
        this.f4993a.write(((int) (jDoubleToRawLongBits >> 24)) & 255);
        this.f4993a.write(((int) (jDoubleToRawLongBits >> 32)) & 255);
        this.f4993a.write(((int) (jDoubleToRawLongBits >> 40)) & 255);
        this.f4993a.write(((int) (jDoubleToRawLongBits >> 48)) & 255);
        this.f4993a.write(((int) (jDoubleToRawLongBits >> 56)) & 255);
        return 8;
    }

    private int a(float f) throws IOException {
        int iFloatToRawIntBits = Float.floatToRawIntBits(f);
        this.f4993a.write(iFloatToRawIntBits & 255);
        this.f4993a.write((iFloatToRawIntBits >> 8) & 255);
        this.f4993a.write((iFloatToRawIntBits >> 16) & 255);
        this.f4993a.write((iFloatToRawIntBits >> 24) & 255);
        return 4;
    }

    private int a(byte[] bArr) throws IOException {
        int iB = b(bArr.length) + bArr.length;
        this.f4993a.write(bArr);
        return iB;
    }

    private int a(int i) throws IOException {
        int i2 = 0;
        while (true) {
            i2++;
            if ((i & (-128)) == 0) {
                this.f4993a.write(i);
                return i2;
            }
            this.f4993a.write((i & 127) | 128);
            i >>>= 7;
        }
    }
}
