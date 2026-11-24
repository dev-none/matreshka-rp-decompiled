package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class ua extends t {
    public na b;
    public boolean c = true;

    public static ua e() {
        return new ua();
    }

    public void a(boolean z) {
        this.c = z;
    }

    public na c() {
        return this.b;
    }

    public boolean d() {
        return this.c;
    }

    public void a(na naVar) {
        this.b = naVar;
    }

    @Override // com.my.target.t
    public int a() {
        return this.b == null ? 0 : 1;
    }
}
