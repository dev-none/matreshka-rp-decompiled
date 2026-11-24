package com.google.android.gms.internal.p002firebaseauthapi;

import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.internal.Preconditions;
import com.google.android.gms.tasks.TaskCompletionSource;
import com.google.firebase.auth.FirebaseAuth;

/* JADX INFO: compiled from: com.google.firebase:firebase-auth@@24.2.0 */
/* JADX INFO: loaded from: classes4.dex */
public final class zzafu<ResultT, CallbackT> implements zzafl<ResultT> {
    private final zzafn<ResultT, CallbackT> zza;
    private final TaskCompletionSource<ResultT> zzb;

    public zzafu(zzafn<ResultT, CallbackT> zzafnVar, TaskCompletionSource<ResultT> taskCompletionSource) {
        this.zza = zzafnVar;
        this.zzb = taskCompletionSource;
    }

    @Override // com.google.android.gms.internal.p002firebaseauthapi.zzafl
    public final void zza(ResultT resultt, Status status) {
        Preconditions.checkNotNull(this.zzb, "completion source cannot be null");
        if (status != null) {
            if (this.zza.zzq != null) {
                this.zzb.setException(zzaew.zza(FirebaseAuth.getInstance(this.zza.zzc), this.zza.zzq, ("reauthenticateWithCredential".equals(this.zza.zza()) || "reauthenticateWithCredentialWithData".equals(this.zza.zza())) ? this.zza.zzd : null));
                return;
            } else if (this.zza.zzn != null) {
                this.zzb.setException(zzaew.zza(status, this.zza.zzn, this.zza.zzo, this.zza.zzp));
                return;
            } else {
                this.zzb.setException(zzaew.zza(status));
                return;
            }
        }
        this.zzb.setResult(resultt);
    }
}
