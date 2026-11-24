package com.my.tracker.obfuscated;

/* JADX INFO: loaded from: classes6.dex */
final class a2 implements z1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final d1 f4908a;
    private final String b;

    private static final class a implements z1.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final d1 f4909a;
        private final d1.f b;

        public a(d1 d1Var, d1.f fVar) {
            this.f4909a = d1Var;
            this.b = fVar;
        }

        @Override // com.my.tracker.obfuscated.z1.a
        public long a() {
            return this.b.a();
        }

        @Override // com.my.tracker.obfuscated.z1.a
        public boolean b() {
            return this.b.b();
        }

        @Override // com.my.tracker.obfuscated.z1.a
        public long c() {
            return this.b.c();
        }

        @Override // java.io.Closeable, java.lang.AutoCloseable
        public void close() {
            this.b.close();
        }

        @Override // com.my.tracker.obfuscated.z1.a
        public z1.b d() {
            return new b(this.f4909a.h(this.b.a()));
        }

        @Override // com.my.tracker.obfuscated.z1.a
        public String k() {
            return this.b.k();
        }
    }

    private static final class b implements z1.b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final d1.g f4910a;

        public b(d1.g gVar) {
            this.f4910a = gVar;
        }

        @Override // com.my.tracker.obfuscated.z1.b
        public boolean b() {
            return this.f4910a.b();
        }

        @Override // java.io.Closeable, java.lang.AutoCloseable
        public void close() {
            this.f4910a.close();
        }

        @Override // com.my.tracker.obfuscated.z1.b
        public boolean f() {
            return this.f4910a.o();
        }

        @Override // com.my.tracker.obfuscated.z1.b
        public long h() {
            return this.f4910a.n();
        }

        @Override // com.my.tracker.obfuscated.z1.b
        public long j() {
            return this.f4910a.m();
        }
    }

    a2(d1 d1Var, String str) {
        this.f4908a = d1Var;
        this.b = str;
    }

    @Override // com.my.tracker.obfuscated.z1
    public z1.a a() {
        d1 d1Var = this.f4908a;
        return new a(d1Var, d1Var.a(this.b));
    }
}
