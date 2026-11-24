package io.appmetrica.analytics.impl;

import kotlin.NoWhenBranchMatchedException;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ke, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2249ke {
    public static final H9 a(C2249ke c2249ke, Q9 q9) {
        int i;
        c2249ke.getClass();
        H9 h9 = new H9();
        switch (q9) {
            case UNKNOWN:
                i = 0;
                break;
            case APPSFLYER:
                i = 1;
                break;
            case ADJUST:
                i = 2;
                break;
            case KOCHAVA:
                i = 3;
                break;
            case TENJIN:
                i = 4;
                break;
            case AIRBRIDGE:
                i = 5;
                break;
            case SINGULAR:
                i = 6;
                break;
            default:
                throw new NoWhenBranchMatchedException();
        }
        h9.f5704a = i;
        return h9;
    }
}
