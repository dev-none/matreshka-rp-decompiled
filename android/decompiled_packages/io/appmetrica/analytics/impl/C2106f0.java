package io.appmetrica.analytics.impl;

import android.os.Looper;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.f0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2106f0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Map f6068a;
    public final Thread b = Looper.getMainLooper().getThread();

    public C2106f0(InterfaceC2132g0 interfaceC2132g0, Map map) {
        this.f6068a = map;
    }
}
