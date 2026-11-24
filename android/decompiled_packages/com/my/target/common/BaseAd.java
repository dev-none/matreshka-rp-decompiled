package com.my.target.common;

import com.my.target.h6;
import com.my.target.j;
import com.my.target.mediation.AdNetworkConfig;
import java.util.UUID;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes6.dex */
public abstract class BaseAd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final j f4578a;
    public final h6.a b;
    public final AtomicBoolean c = new AtomicBoolean();
    public final String d = UUID.randomUUID().toString();

    public BaseAd(int i, String str) {
        this.f4578a = j.a(i, str);
        this.b = h6.a(i);
    }

    public CustomParams getCustomParams() {
        return this.f4578a.g();
    }

    public boolean isLoadCalled() {
        return !this.c.compareAndSet(false, true);
    }

    public void setAdNetworkConfig(String str, AdNetworkConfig adNetworkConfig) {
        this.f4578a.a(str, adNetworkConfig);
    }
}
