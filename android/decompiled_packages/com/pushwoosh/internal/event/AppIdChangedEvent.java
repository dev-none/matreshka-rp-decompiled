package com.pushwoosh.internal.event;

/* JADX INFO: loaded from: classes6.dex */
public class AppIdChangedEvent implements Event {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f5189a;
    private final String b;

    public AppIdChangedEvent(String str, String str2) {
        this.f5189a = str;
        this.b = str2;
    }

    public String getNewAppId() {
        return this.f5189a;
    }

    public String getOldAppId() {
        return this.b;
    }
}
