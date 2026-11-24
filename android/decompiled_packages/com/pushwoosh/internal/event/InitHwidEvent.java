package com.pushwoosh.internal.event;

/* JADX INFO: loaded from: classes6.dex */
public class InitHwidEvent implements Event {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f5192a;

    public InitHwidEvent(String str) {
        this.f5192a = str;
    }

    public String getHwid() {
        return this.f5192a;
    }
}
