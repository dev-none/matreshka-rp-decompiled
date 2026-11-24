package io.appmetrica.analytics;

import java.util.Objects;

/* JADX INFO: loaded from: classes7.dex */
public final class StartupParamsItem {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f5392a;
    private final StartupParamsItemStatus b;
    private final String c;

    public StartupParamsItem(String str, StartupParamsItemStatus startupParamsItemStatus, String str2) {
        this.f5392a = str;
        this.b = startupParamsItemStatus;
        this.c = str2;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && StartupParamsItem.class == obj.getClass()) {
            StartupParamsItem startupParamsItem = (StartupParamsItem) obj;
            if (Objects.equals(this.f5392a, startupParamsItem.f5392a) && this.b == startupParamsItem.b && Objects.equals(this.c, startupParamsItem.c)) {
                return true;
            }
        }
        return false;
    }

    public String getErrorDetails() {
        return this.c;
    }

    public String getId() {
        return this.f5392a;
    }

    public StartupParamsItemStatus getStatus() {
        return this.b;
    }

    public int hashCode() {
        return Objects.hash(this.f5392a, this.b, this.c);
    }

    public String toString() {
        return "StartupParamsItem{id='" + this.f5392a + "', status=" + this.b + ", errorDetails='" + this.c + "'}";
    }
}
