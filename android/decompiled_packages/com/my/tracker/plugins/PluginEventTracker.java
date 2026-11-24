package com.my.tracker.plugins;

import com.my.tracker.obfuscated.e0;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;

/* JADX INFO: loaded from: classes6.dex */
public final class PluginEventTracker {
    private static final Executor b = Executors.newSingleThreadExecutor();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final e0 f5025a;

    private PluginEventTracker(e0 e0Var) {
        this.f5025a = e0Var;
    }

    public static PluginEventTracker a(e0 e0Var) {
        return new PluginEventTracker(e0Var);
    }

    public static void onBackground(Runnable runnable) {
        b.execute(runnable);
    }

    public void trackPluginEvent(int i, byte[] bArr, boolean z, boolean z2, Runnable runnable) {
        this.f5025a.a(i, bArr, z, z2, runnable);
    }
}
