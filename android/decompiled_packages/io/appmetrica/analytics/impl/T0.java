package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.profile.UserProfile;

/* JADX INFO: loaded from: classes7.dex */
public final class T0 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ UserProfile f5893a;
    public final /* synthetic */ C2436s1 b;

    public T0(C2436s1 c2436s1, UserProfile userProfile) {
        this.b = c2436s1;
        this.f5893a = userProfile;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2436s1.a(this.b).reportUserProfile(this.f5893a);
    }
}
