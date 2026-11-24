package com.google.android.gms.auth.api.identity;

import android.os.Bundle;
import com.google.android.gms.common.api.Api;
import com.google.android.gms.common.internal.Objects;
import com.vk.id.analytics.stat.StatTracker;

/* JADX INFO: compiled from: com.google.android.gms:play-services-auth@@21.0.0 */
/* JADX INFO: loaded from: classes4.dex */
public final class zbc implements Api.ApiOptions.Optional {
    private final String zba;

    public zbc(String str) {
        this.zba = str;
    }

    public final boolean equals(Object obj) {
        return obj instanceof zbc;
    }

    public final int hashCode() {
        return Objects.hashCode(zbc.class);
    }

    public final Bundle zba() {
        Bundle bundle = new Bundle();
        bundle.putString(StatTracker.EXTERNAL_PARAM_SESSION_ID, this.zba);
        return bundle;
    }

    public final String zbb() {
        return this.zba;
    }
}
