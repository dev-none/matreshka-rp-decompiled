package com.google.android.gms.internal.measurement;

import com.unity3d.ads.core.domain.AndroidGetIsModulesInitEnabled;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@23.2.0 */
/* JADX INFO: loaded from: classes4.dex */
public final class zzrh implements zzrl {
    @Override // com.google.android.gms.internal.measurement.zzrl
    public final boolean zza(zzrg zzrgVar) {
        return zzrm.zza(zzrgVar.zza(), "false").equals(AndroidGetIsModulesInitEnabled.ENABLE_MODULES_INIT_VALUE);
    }
}
