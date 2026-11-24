package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.profile.UserProfile;

/* JADX INFO: loaded from: classes7.dex */
public final class Aj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ UserProfile f5598a;

    public Aj(UserProfile userProfile) {
        this.f5598a = userProfile;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        ya.reportUserProfile(this.f5598a);
    }
}
