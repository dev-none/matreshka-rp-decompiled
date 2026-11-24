package com.my.tracker.obfuscated;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.OutputStream;

/* JADX INFO: loaded from: classes6.dex */
public final class q extends r1 {
    private final a c;

    private static class a extends ByteArrayOutputStream {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final int f4988a;
        private int b;
        private int c;

        public a(int i) {
            super(i);
            this.f4988a = i;
            this.b = Integer.MAX_VALUE;
            this.c = -1;
        }

        public synchronized void m() {
            reset();
            if (x2.a()) {
                StringBuilder sb = new StringBuilder("SimpleByteArrayOutputStream: minSize=");
                int i = this.b;
                if (i == Integer.MAX_VALUE) {
                    i = 0;
                }
                sb.append(i);
                sb.append(", maxSize=");
                sb.append(this.c);
                sb.append(", truncate=");
                sb.append(this.f4988a);
                x2.a(sb.toString());
            }
            this.b = Integer.MAX_VALUE;
            this.c = -1;
            int length = ((ByteArrayOutputStream) this).buf.length;
            int i2 = this.f4988a;
            if (length > i2) {
                ((ByteArrayOutputStream) this).buf = new byte[i2];
            }
        }

        @Override // java.io.ByteArrayOutputStream
        public synchronized void reset() {
            int i = ((ByteArrayOutputStream) this).count;
            if (i > 0) {
                this.b = Integer.min(this.b, i);
            }
            this.c = Integer.max(((ByteArrayOutputStream) this).count, this.c);
            super.reset();
        }
    }

    public q(int i) {
        super(new a(i));
        this.c = (a) this.f4993a;
    }

    public void a() {
        this.c.reset();
    }

    public int b() {
        return this.c.size();
    }

    public byte[] c() {
        return this.c.toByteArray();
    }

    public void d() {
        this.c.m();
    }

    public void a(OutputStream outputStream) throws IOException {
        this.c.writeTo(outputStream);
    }
}
