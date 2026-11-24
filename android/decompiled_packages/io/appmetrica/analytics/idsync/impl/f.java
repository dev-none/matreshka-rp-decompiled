package io.appmetrica.analytics.idsync.impl;

import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable;
import io.appmetrica.analytics.idsync.internal.model.IdSyncConfig;
import io.appmetrica.analytics.idsync.internal.model.RequestConfig;
import java.util.Iterator;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes7.dex */
public final class f extends SafeRunnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ h f5563a;

    public f(h hVar) {
        this.f5563a = hVar;
    }

    @Override // io.appmetrica.analytics.coreutils.internal.executors.SafeRunnable
    public final void runSafety() {
        IdSyncConfig idSyncConfig;
        if (this.f5563a.f && (idSyncConfig = this.f5563a.e) != null) {
            this.f5563a.getClass();
            if (h.a(idSyncConfig)) {
                List<RequestConfig> requests = idSyncConfig.getRequests();
                h hVar = this.f5563a;
                Iterator<T> it = requests.iterator();
                while (it.hasNext()) {
                    hVar.d.a((RequestConfig) it.next());
                }
                h hVar2 = this.f5563a;
                IHandlerExecutor iHandlerExecutor = hVar2.c;
                f fVar = hVar2.g;
                if (fVar == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("syncRunnable");
                    fVar = null;
                }
                iHandlerExecutor.executeDelayed(fVar, this.f5563a.b);
            }
        }
    }
}
