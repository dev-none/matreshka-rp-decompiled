package com.my.tracker;

/* JADX INFO: loaded from: classes6.dex */
public final class MyTrackerAttribution {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f4893a;

    private MyTrackerAttribution(String str) {
        this.f4893a = str;
    }

    public static MyTrackerAttribution newAttribution(String str) {
        return new MyTrackerAttribution(str);
    }

    public String getDeeplink() {
        return this.f4893a;
    }
}
