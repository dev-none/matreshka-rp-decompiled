package com.google.android.gms.internal.p002firebaseauthapi;

import io.flutter.plugins.firebase.auth.Constants;

/* JADX INFO: compiled from: com.google.firebase:firebase-auth@@24.2.0 */
/* JADX INFO: loaded from: classes4.dex */
public enum zzahp {
    ACCESS_TOKEN("ACCESS_TOKEN"),
    ID_TOKEN(Constants.ID_TOKEN);

    private final String zzd;

    @Override // java.lang.Enum
    public final String toString() {
        return this.zzd;
    }

    zzahp(String str) {
        this.zzd = str;
    }
}
