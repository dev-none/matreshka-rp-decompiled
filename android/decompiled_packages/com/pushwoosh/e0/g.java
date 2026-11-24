package com.pushwoosh.e0;

import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public abstract class g {
    public static void a() {
        BackgroundExecutor.executeOnPool(new Runnable() { // from class: com.pushwoosh.e0.g$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                ((com.pushwoosh.m0.m) RepositoryModule.getLockScreenMediaStorage()).a();
            }
        });
    }
}
