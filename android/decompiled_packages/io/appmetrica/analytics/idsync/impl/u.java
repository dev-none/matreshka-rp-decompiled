package io.appmetrica.analytics.idsync.impl;

import com.google.firebase.analytics.FirebaseAnalytics;

/* JADX INFO: loaded from: classes7.dex */
public abstract /* synthetic */ class u {
    public static /* synthetic */ String a(int i) {
        if (i == 1) {
            return "none";
        }
        if (i == 2) {
            return FirebaseAnalytics.Param.SUCCESS;
        }
        if (i == 3) {
            return "incompatible_precondition";
        }
        if (i == 4) {
            return "failure";
        }
        throw null;
    }

    public static /* synthetic */ String b(int i) {
        if (i == 1) {
            return "NONE";
        }
        if (i == 2) {
            return "SUCCESS";
        }
        if (i != 3) {
            return i != 4 ? "null" : "FAILURE";
        }
        return "INCOMPATIBLE_PRECONDITION";
    }
}
