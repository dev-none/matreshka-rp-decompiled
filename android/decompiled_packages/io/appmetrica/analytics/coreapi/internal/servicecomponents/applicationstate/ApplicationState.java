package io.appmetrica.analytics.coreapi.internal.servicecomponents.applicationstate;

import io.appmetrica.analytics.impl.H2;

/* JADX INFO: loaded from: classes7.dex */
public enum ApplicationState {
    UNKNOWN("unknown"),
    BACKGROUND(H2.g),
    VISIBLE("visible");


    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f5480a;

    ApplicationState(String str) {
        this.f5480a = str;
    }

    public static ApplicationState fromString(String str) {
        ApplicationState applicationState = UNKNOWN;
        for (ApplicationState applicationState2 : values()) {
            if (applicationState2.f5480a.equals(str)) {
                return applicationState2;
            }
        }
        return applicationState;
    }

    public String getStringValue() {
        return this.f5480a;
    }
}
