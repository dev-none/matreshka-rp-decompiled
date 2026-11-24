package com.ironsource.adqualitysdk.sdk.i;

import android.os.Process;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ọ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0887 implements Thread.UncaughtExceptionHandler {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0763 f3145;

    public C0887(C0763 c0763) {
        this.f3145 = c0763;
    }

    @Override // java.lang.Thread.UncaughtExceptionHandler
    public final void uncaughtException(Thread thread, Throwable th) {
        try {
            AbstractC1104.m8886(StringFog.decrypt("iAU66gHwg5e6\n", "yWtbhniE6vQ=\n"), StringFog.decrypt("uLtEnC1c+cnNsF+ePUvl1IK7\n", "7dUn/Vg7kb0=\n"), StringFog.decrypt("GizErJpBXQ0l\n", "Tl6lz/8jPG4=\n"), th, null, null, false, false, false);
        } catch (Throwable unused) {
        }
        this.f3145.m8703();
        Thread.UncaughtExceptionHandler uncaughtExceptionHandler = this.f3145.f2604;
        if (uncaughtExceptionHandler != null) {
            uncaughtExceptionHandler.uncaughtException(thread, th);
            return;
        }
        try {
            Process.killProcess(Process.myPid());
            System.exit(10);
        } catch (SecurityException unused2) {
        }
    }
}
