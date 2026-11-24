package com.google.android.gms.internal.p002firebaseauthapi;

import java.security.GeneralSecurityException;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: compiled from: com.google.firebase:firebase-auth@@24.2.0 */
/* JADX INFO: loaded from: classes4.dex */
public final class zzqn {
    private final Map<Class<?>, zzoh<?>> zza;
    private final Map<String, zzod> zzb;
    private final Map<Class<?>, zzpq<?>> zzc;
    private final Map<String, zzpm> zzd;

    public final zzqn zza(zzod zzodVar) throws GeneralSecurityException {
        String strZza = zzodVar.zza();
        if (!this.zzb.containsKey(strZza)) {
            this.zzb.put(strZza, zzodVar);
            return this;
        }
        zzod zzodVar2 = this.zzb.get(strZza);
        if (zzodVar2.equals(zzodVar) && zzodVar.equals(zzodVar2)) {
            return this;
        }
        throw new GeneralSecurityException("Attempt to register non-equal parser for already existing object of type: " + strZza);
    }

    public final <KeyT extends zzbt> zzqn zza(zzoh<KeyT> zzohVar) throws GeneralSecurityException {
        if (this.zza.containsKey(zzohVar.zza())) {
            zzoh<?> zzohVar2 = this.zza.get(zzohVar.zza());
            if (zzohVar2.equals(zzohVar) && zzohVar.equals(zzohVar2)) {
                return this;
            }
            throw new GeneralSecurityException("Attempt to register non-equal serializer for already existing object of type: " + String.valueOf(zzohVar.zza()));
        }
        this.zza.put(zzohVar.zza(), zzohVar);
        return this;
    }

    public final zzqn zza(zzpm zzpmVar) throws GeneralSecurityException {
        String strZza = zzpmVar.zza();
        if (this.zzd.containsKey(strZza)) {
            zzpm zzpmVar2 = this.zzd.get(strZza);
            if (zzpmVar2.equals(zzpmVar) && zzpmVar.equals(zzpmVar2)) {
                return this;
            }
            throw new GeneralSecurityException("Attempt to register non-equal parser for already existing object of type: " + strZza);
        }
        this.zzd.put(strZza, zzpmVar);
        return this;
    }

    public final <ParametersT extends zzcs> zzqn zza(zzpq<ParametersT> zzpqVar) throws GeneralSecurityException {
        if (this.zzc.containsKey(zzpqVar.zza())) {
            zzpq<?> zzpqVar2 = this.zzc.get(zzpqVar.zza());
            if (zzpqVar2.equals(zzpqVar) && zzpqVar.equals(zzpqVar2)) {
                return this;
            }
            throw new GeneralSecurityException("Attempt to register non-equal serializer for already existing object of type: " + String.valueOf(zzpqVar.zza()));
        }
        this.zzc.put(zzpqVar.zza(), zzpqVar);
        return this;
    }

    public final zzqo zza() {
        return new zzqo(this);
    }

    public zzqn() {
        this.zza = new HashMap();
        this.zzb = new HashMap();
        this.zzc = new HashMap();
        this.zzd = new HashMap();
    }

    public zzqn(zzqo zzqoVar) {
        this.zza = new HashMap(zzqoVar.zza);
        this.zzb = new HashMap(zzqoVar.zzb);
        this.zzc = new HashMap(zzqoVar.zzc);
        this.zzd = new HashMap(zzqoVar.zzd);
    }
}
