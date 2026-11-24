package com.google.android.gms.internal.p002firebaseauthapi;

import com.google.android.gms.common.internal.Preconditions;
import io.flutter.plugins.firebase.auth.Constants;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: com.google.firebase:firebase-auth@@24.2.0 */
/* JADX INFO: loaded from: classes4.dex */
public final class zzahd implements zzaff {
    private String zza;

    @Override // com.google.android.gms.internal.p002firebaseauthapi.zzaff
    public final String zza() throws JSONException {
        JSONObject jSONObject = new JSONObject();
        jSONObject.put(Constants.ID_TOKEN, this.zza);
        return jSONObject.toString();
    }

    public zzahd(String str) {
        this.zza = Preconditions.checkNotEmpty(str);
    }
}
