package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.e1, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2081e1 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ String f6054a;
    public final /* synthetic */ String b;
    public final /* synthetic */ C2436s1 c;

    public RunnableC2081e1(C2436s1 c2436s1, String str, String str2) {
        this.c = c2436s1;
        this.f6054a = str;
        this.b = str2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2560x0 c2560x0 = this.c.f6303a;
        String str = this.f6054a;
        String str2 = this.b;
        c2560x0.getClass();
        C2535w0.c().putAppEnvironmentValue(str, str2);
    }
}
