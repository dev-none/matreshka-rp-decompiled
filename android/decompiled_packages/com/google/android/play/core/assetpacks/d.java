package com.google.android.play.core.assetpacks;

import android.content.Context;

/* JADX INFO: compiled from: com.google.android.play:asset-delivery@@2.3.0 */
/* JADX INFO: loaded from: classes5.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static a f4276a;

    static synchronized a a(Context context) {
        if (f4276a == null) {
            cm cmVar = new cm(null);
            cmVar.b(new p(com.google.android.play.core.assetpacks.internal.ag.a(context)));
            f4276a = cmVar.a();
        }
        return f4276a;
    }
}
