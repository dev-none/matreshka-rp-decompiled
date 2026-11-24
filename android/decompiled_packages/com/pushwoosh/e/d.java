package com.pushwoosh.e;

import com.pushwoosh.exception.ReloadInAppsException;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.internal.network.NetworkException;
import com.pushwoosh.internal.utils.BackgroundExecutor;

/* JADX INFO: loaded from: classes6.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Callback f5063a;

    public d(Callback callback) {
        this.f5063a = callback;
    }

    public final void a() {
        BackgroundExecutor.executeOnPool(new Runnable() { // from class: com.pushwoosh.e.d$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b();
            }
        });
    }

    public final void b() {
        com.pushwoosh.j.d dVarA = b.a();
        dVarA.getClass();
        final Result resultA = dVarA.a();
        BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.e.d$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(resultA);
            }
        });
    }

    public final void a(Result result) {
        if (this.f5063a != null) {
            if (result.isSuccess()) {
                this.f5063a.process(Result.fromData(Boolean.TRUE));
            } else {
                this.f5063a.process(Result.fromException(new ReloadInAppsException(result.getException() != null ? ((NetworkException) result.getException()).getMessage() : "Unknown error occurred while reloading inapps")));
            }
        }
    }
}
