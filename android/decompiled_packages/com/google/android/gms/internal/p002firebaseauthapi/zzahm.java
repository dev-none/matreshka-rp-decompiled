package com.google.android.gms.internal.p002firebaseauthapi;

import net.openid.appauth.GrantTypeValues;

/* JADX INFO: compiled from: com.google.firebase:firebase-auth@@24.2.0 */
/* JADX INFO: loaded from: classes4.dex */
public enum zzahm {
    REFRESH_TOKEN(GrantTypeValues.REFRESH_TOKEN),
    AUTHORIZATION_CODE(GrantTypeValues.AUTHORIZATION_CODE);

    private final String zzd;

    @Override // java.lang.Enum
    public final String toString() {
        return this.zzd;
    }

    zzahm(String str) {
        this.zzd = str;
    }
}
