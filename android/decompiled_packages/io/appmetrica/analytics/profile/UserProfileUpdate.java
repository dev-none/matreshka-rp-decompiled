package io.appmetrica.analytics.profile;

import io.appmetrica.analytics.impl.Hd;
import io.appmetrica.analytics.impl.InterfaceC2156go;

/* JADX INFO: loaded from: classes7.dex */
public class UserProfileUpdate<T extends InterfaceC2156go> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final InterfaceC2156go f6525a;

    UserProfileUpdate(Hd hd) {
        this.f6525a = hd;
    }

    public T getUserProfileUpdatePatcher() {
        return (T) this.f6525a;
    }
}
