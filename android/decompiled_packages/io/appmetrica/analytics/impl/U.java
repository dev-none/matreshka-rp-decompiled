package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.executors.ICommonExecutor;
import io.appmetrica.analytics.coreapi.internal.identifiers.AdTrackingInfoResult;
import io.appmetrica.analytics.coreapi.internal.identifiers.AdvertisingIdsHolder;
import io.appmetrica.analytics.coreapi.internal.identifiers.IdentifierStatus;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.FutureTask;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes7.dex */
public final class U implements Ha {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5913a;
    public final ICommonExecutor b;
    public FutureTask i;
    public final J j;
    public boolean m;
    public final String c = "advertising identifiers collecting is forbidden by client configuration";
    public final String d = "advertising identifiers collecting is forbidden by startup";
    public final String e = "advertising identifiers collecting is forbidden by unknown reason";
    public final N f = new N(new Eg("google"));
    public final N g = new N(new Eg("huawei"));
    public final N h = new N(new Eg("yandex"));
    public volatile AdvertisingIdsHolder k = new AdvertisingIdsHolder();
    public G l = new G(4, 4, 4);

    public U(Context context, ICommonExecutor iCommonExecutor, C2231jm c2231jm) {
        this.f5913a = context;
        this.b = iCommonExecutor;
        this.j = new J(c2231jm);
    }

    public static final Void e(U u) {
        u.k = new AdvertisingIdsHolder(u.a(u.l.f5682a, new Q(u)), u.a(u.l.b, new S(u)), u.a(u.l.c, new T(u, new C2094ee())));
        return null;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.identifiers.SimpleAdvertisingIdGetter
    public final synchronized AdvertisingIdsHolder getIdentifiers(Context context) {
        return getIdentifiers();
    }

    @Override // io.appmetrica.analytics.impl.Ha
    public final synchronized void init() {
        if (this.i == null) {
            this.l = this.j.a();
            FutureTask futureTask = new FutureTask(new Callable() { // from class: io.appmetrica.analytics.impl.U$$ExternalSyntheticLambda1
                @Override // java.util.concurrent.Callable
                public final Object call() {
                    return U.e(this.f$0);
                }
            });
            this.i = futureTask;
            this.b.execute(futureTask);
        }
    }

    @Override // io.appmetrica.analytics.impl.Ha, io.appmetrica.analytics.impl.InterfaceC2358om
    public final synchronized void a(C2231jm c2231jm) {
        this.j.a(c2231jm);
        a((Li) new C2094ee(), false);
    }

    @Override // io.appmetrica.analytics.impl.Ha
    public final synchronized void b(boolean z) {
        this.m = true;
        this.j.b.update(z);
        a((Li) new C2094ee(), false);
    }

    @Override // io.appmetrica.analytics.impl.Ha
    public final synchronized void c(boolean z) {
        if (!this.m) {
            b(z);
        }
    }

    @Override // io.appmetrica.analytics.impl.Ha
    public final synchronized AdvertisingIdsHolder getIdentifiers() {
        FutureTask futureTask = this.i;
        if (futureTask == null) {
            Intrinsics.throwUninitializedPropertyAccessException("refresh");
            futureTask = null;
        }
        try {
            futureTask.get();
        } catch (InterruptedException | ExecutionException unused) {
        }
        return this.k;
    }

    @Override // io.appmetrica.analytics.impl.Ha
    public final synchronized AdvertisingIdsHolder a() {
        return a(new C2094ee());
    }

    @Override // io.appmetrica.analytics.impl.Ha
    public final synchronized AdvertisingIdsHolder a(Li li) {
        try {
            a(li, true).get();
        } catch (InterruptedException | ExecutionException unused) {
        }
        return this.k;
    }

    public final FutureTask a(final Li li, final boolean z) {
        final G gA = this.j.a();
        FutureTask futureTask = new FutureTask(new Callable() { // from class: io.appmetrica.analytics.impl.U$$ExternalSyntheticLambda0
            @Override // java.util.concurrent.Callable
            public final Object call() {
                return U.a(z, gA, this, li);
            }
        });
        this.i = futureTask;
        this.b.execute(futureTask);
        FutureTask futureTask2 = this.i;
        if (futureTask2 != null) {
            return futureTask2;
        }
        Intrinsics.throwUninitializedPropertyAccessException("refresh");
        return null;
    }

    public static final Void a(boolean z, G g, U u, Li li) {
        if (!z && Intrinsics.areEqual(g, u.l)) {
            return null;
        }
        AdvertisingIdsHolder advertisingIdsHolder = u.k;
        AdTrackingInfoResult adTrackingInfoResultA = u.a(g.f5682a, new Q(u));
        AdTrackingInfoResult google = advertisingIdsHolder.getGoogle();
        IdentifierStatus identifierStatus = adTrackingInfoResultA.mStatus;
        IdentifierStatus identifierStatus2 = IdentifierStatus.UNKNOWN;
        if (identifierStatus == identifierStatus2) {
            adTrackingInfoResultA = new AdTrackingInfoResult(google.mAdTrackingInfo, adTrackingInfoResultA.mStatus, adTrackingInfoResultA.mErrorExplanation);
        }
        AdTrackingInfoResult adTrackingInfoResultA2 = u.a(g.b, new S(u));
        AdTrackingInfoResult huawei = advertisingIdsHolder.getHuawei();
        if (adTrackingInfoResultA2.mStatus == identifierStatus2) {
            adTrackingInfoResultA2 = new AdTrackingInfoResult(huawei.mAdTrackingInfo, adTrackingInfoResultA2.mStatus, adTrackingInfoResultA2.mErrorExplanation);
        }
        AdTrackingInfoResult adTrackingInfoResultA3 = u.a(g.c, new T(u, li));
        AdTrackingInfoResult yandex = advertisingIdsHolder.getYandex();
        if (adTrackingInfoResultA3.mStatus == identifierStatus2) {
            adTrackingInfoResultA3 = new AdTrackingInfoResult(yandex.mAdTrackingInfo, adTrackingInfoResultA3.mStatus, adTrackingInfoResultA3.mErrorExplanation);
        }
        u.k = new AdvertisingIdsHolder(adTrackingInfoResultA, adTrackingInfoResultA2, adTrackingInfoResultA3);
        return null;
    }

    public final AdTrackingInfoResult a(int i, Function0 function0) {
        if (i == 0) {
            throw null;
        }
        int i2 = i - 1;
        if (i2 == 0) {
            return (AdTrackingInfoResult) function0.invoke();
        }
        if (i2 == 1) {
            return new AdTrackingInfoResult(null, IdentifierStatus.FORBIDDEN_BY_CLIENT_CONFIG, this.c);
        }
        if (i2 == 2) {
            return new AdTrackingInfoResult(null, IdentifierStatus.FEATURE_DISABLED, this.d);
        }
        if (i2 != 3) {
            throw new NoWhenBranchMatchedException();
        }
        return new AdTrackingInfoResult(null, IdentifierStatus.UNKNOWN, this.e);
    }
}
