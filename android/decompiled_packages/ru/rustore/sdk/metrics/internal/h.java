package ru.rustore.sdk.metrics.internal;

import java.util.List;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final s0 f6633a;
    public final w0 b;
    public final k c;

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class a extends Lambda implements Function0<String> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ j0 f6634a;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public a(j0 j0Var) {
            super(0);
            this.f6634a = j0Var;
        }

        @Override // kotlin.jvm.functions.Function0
        public final String invoke() {
            return "Discard poison metrics event after backend reject: " + ((Object) a0.a(this.f6634a.f6640a));
        }
    }

    public h(s0 persistentMetricsEventRepository, w0 remoteMetricsEventRepository, k logger) {
        Intrinsics.checkNotNullParameter(persistentMetricsEventRepository, "persistentMetricsEventRepository");
        Intrinsics.checkNotNullParameter(remoteMetricsEventRepository, "remoteMetricsEventRepository");
        Intrinsics.checkNotNullParameter(logger, "logger");
        this.f6633a = persistentMetricsEventRepository;
        this.b = remoteMetricsEventRepository;
        this.c = logger;
    }

    public final void a(List<j0> rejectedEvents) {
        Object objM9861constructorimpl;
        Intrinsics.checkNotNullParameter(rejectedEvents, "rejectedEvents");
        for (j0 j0Var : rejectedEvents) {
            try {
                Result.Companion companion = Result.INSTANCE;
                this.b.a(CollectionsKt.listOf(j0Var));
                objM9861constructorimpl = Result.m9861constructorimpl(Unit.INSTANCE);
            } catch (Throwable th) {
                Result.Companion companion2 = Result.INSTANCE;
                objM9861constructorimpl = Result.m9861constructorimpl(ResultKt.createFailure(th));
            }
            Throwable thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(objM9861constructorimpl);
            if (thM9864exceptionOrNullimpl == null) {
                this.f6633a.a(CollectionsKt.listOf(j0Var));
            } else {
                if (!(thM9864exceptionOrNullimpl instanceof l)) {
                    return;
                }
                this.c.a(new a(j0Var));
                this.f6633a.a(CollectionsKt.listOf(j0Var));
            }
        }
    }
}
