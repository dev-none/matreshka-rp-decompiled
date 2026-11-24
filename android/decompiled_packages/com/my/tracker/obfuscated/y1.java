package com.my.tracker.obfuscated;

/* JADX INFO: loaded from: classes6.dex */
final class y1 implements x1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final d1 f5012a;

    private static final class a implements x1.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final d1 f5013a;
        private final d1.c b;

        public a(d1 d1Var, d1.c cVar) {
            this.f5013a = d1Var;
            this.b = cVar;
        }

        @Override // com.my.tracker.obfuscated.x1.a
        public boolean b() {
            return this.b.b();
        }

        @Override // com.my.tracker.obfuscated.x1.a
        public long c() {
            return this.b.c();
        }

        @Override // java.io.Closeable, java.lang.AutoCloseable
        public void close() {
            this.b.close();
        }

        @Override // com.my.tracker.obfuscated.x1.a
        public x1.b d() {
            return new b(this.f5013a.e(this.b.a()));
        }

        @Override // com.my.tracker.obfuscated.x1.a
        public long g() {
            return this.b.g();
        }

        @Override // com.my.tracker.obfuscated.x1.a
        public byte[] l() {
            return this.b.l();
        }
    }

    private static final class b implements x1.b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final d1.d f5014a;

        public b(d1.d dVar) {
            this.f5014a = dVar;
        }

        @Override // com.my.tracker.obfuscated.x1.b
        public boolean b() {
            return this.f5014a.b();
        }

        @Override // java.io.Closeable, java.lang.AutoCloseable
        public void close() {
            this.f5014a.close();
        }

        @Override // com.my.tracker.obfuscated.x1.b
        public long e() {
            return this.f5014a.e();
        }
    }

    public y1(d1 d1Var) {
        this.f5012a = d1Var;
    }

    @Override // com.my.tracker.obfuscated.x1
    public x1.a a() {
        d1 d1Var = this.f5012a;
        return new a(d1Var, d1Var.i());
    }
}
