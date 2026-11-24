package com.my.tracker.obfuscated;

import java.io.IOException;
import java.io.OutputStream;

/* JADX INFO: loaded from: classes6.dex */
public class r implements s0.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final q f4991a;

    public r(q qVar) {
        this.f4991a = qVar;
    }

    @Override // com.my.tracker.obfuscated.s0.a
    public String a() {
        return "application/octet-stream";
    }

    @Override // com.my.tracker.obfuscated.s0.a
    public void a(OutputStream outputStream) throws IOException {
        this.f4991a.a(outputStream);
    }
}
