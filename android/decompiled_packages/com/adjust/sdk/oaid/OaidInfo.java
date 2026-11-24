package com.adjust.sdk.oaid;

/* JADX INFO: loaded from: classes4.dex */
public class OaidInfo {
    private String oaid;
    private boolean trackingEnabled;

    public OaidInfo(String str, boolean z) {
        this.oaid = str;
        this.trackingEnabled = z;
    }

    public String getOaid() {
        return this.oaid;
    }

    public boolean isTrackingEnabled() {
        return this.trackingEnabled;
    }
}
