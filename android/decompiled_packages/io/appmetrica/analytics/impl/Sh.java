package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.profile.UserProfile;

/* JADX INFO: loaded from: classes7.dex */
public final class Sh implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ UserProfile f5885a;
    public final /* synthetic */ C2279li b;

    public Sh(C2279li c2279li, UserProfile userProfile) {
        this.b = c2279li;
        this.f5885a = userProfile;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.b;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).reportUserProfile(this.f5885a);
    }
}
