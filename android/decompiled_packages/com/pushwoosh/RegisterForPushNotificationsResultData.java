package com.pushwoosh;

/* JADX INFO: loaded from: classes6.dex */
public class RegisterForPushNotificationsResultData {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f5029a;
    private final boolean b;

    public RegisterForPushNotificationsResultData(String str, boolean z) {
        this.f5029a = str;
        this.b = z;
    }

    public String getToken() {
        return this.f5029a;
    }

    public boolean isEnabled() {
        return this.b;
    }
}
