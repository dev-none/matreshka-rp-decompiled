package com.pushwoosh.e0;

import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.repository.RepositoryModule;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Callback f5068a;

    public h(Callback callback) {
        this.f5068a = callback;
    }

    public final void a() {
        BackgroundExecutor.executeOnPool(new Runnable() { // from class: com.pushwoosh.e0.h$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b();
            }
        });
    }

    public final /* synthetic */ void b() {
        final ArrayList arrayListC = ((com.pushwoosh.m0.m) RepositoryModule.getLockScreenMediaStorage()).c();
        if (this.f5068a != null) {
            BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.e0.h$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.a(arrayListC);
                }
            });
        }
    }

    public final /* synthetic */ void a(List list) {
        this.f5068a.process(Result.from(list, null));
    }
}
