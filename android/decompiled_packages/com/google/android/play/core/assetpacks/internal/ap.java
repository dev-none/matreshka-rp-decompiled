package com.google.android.play.core.assetpacks.internal;

/* JADX INFO: compiled from: com.google.android.play:asset-delivery@@2.3.0 */
/* JADX INFO: loaded from: classes5.dex */
public final class ap implements as {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private as f4342a;

    public static void b(as asVar, as asVar2) {
        ap apVar = (ap) asVar;
        if (apVar.f4342a != null) {
            throw new IllegalStateException();
        }
        apVar.f4342a = asVar2;
    }

    @Override // com.google.android.play.core.assetpacks.internal.aw, com.google.android.play.core.assetpacks.internal.av
    public final Object a() {
        as asVar = this.f4342a;
        if (asVar != null) {
            return asVar.a();
        }
        throw new IllegalStateException();
    }
}
