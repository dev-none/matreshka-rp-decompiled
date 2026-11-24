package com.pushwoosh.m0;

import com.pushwoosh.internal.network.PushRequest;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public final class b0 extends PushRequest {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5244a;
    public final String b = RepositoryModule.getRegistrationPreferences().userId().get();

    public b0(String str) {
        this.f5244a = str;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getApplicationId() {
        return this.f5244a;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "unregisterDevice";
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getUserId() {
        return this.b;
    }
}
