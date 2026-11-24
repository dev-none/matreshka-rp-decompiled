package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class s3 extends l {

    public static class a implements l.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f4811a;

        public a(int i) {
            this.f4811a = i;
        }

        @Override // com.my.target.l.a
        public v a() {
            return v3.a(this.f4811a);
        }

        @Override // com.my.target.l.a
        public s b() {
            return null;
        }

        @Override // com.my.target.l.a
        public boolean c() {
            return false;
        }

        @Override // com.my.target.l.a
        public q d() {
            return t3.a(this.f4811a);
        }
    }

    public interface b extends l.b {
    }

    public s3(j jVar, int i, h6.a aVar) {
        super(new a(i), jVar, aVar);
    }

    public static l a(j jVar, h6.a aVar, int i) {
        return new s3(jVar, i, aVar);
    }
}
