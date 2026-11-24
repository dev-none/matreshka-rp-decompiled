package io.appmetrica.analytics.impl;

import android.os.Bundle;
import io.appmetrica.analytics.coreapi.internal.identifiers.AdvertisingIdsHolder;
import io.appmetrica.analytics.internal.IdentifiersResult;
import java.util.HashMap;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.b4, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2007b4 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Em f6012a;
    public final U b;

    public C2007b4(Em em, U u) {
        this.f6012a = em;
        this.b = u;
    }

    public final C1981a4 a(HashMap map) {
        AdvertisingIdsHolder advertisingIdsHolderA;
        C2231jm c2231jmE = this.f6012a.e();
        U u = this.b;
        synchronized (u) {
            advertisingIdsHolderA = u.a(new C2094ee());
        }
        return new C1981a4(C1981a4.a(c2231jmE.d), C1981a4.a(c2231jmE.f6159a), C1981a4.a(c2231jmE.b), C1981a4.a(c2231jmE.j), C1981a4.a(c2231jmE.i), C1981a4.a(AbstractC2322nb.a(Jm.a(c2231jmE.k))), C1981a4.a(AbstractC2322nb.a(map)), new IdentifiersResult(advertisingIdsHolderA.getGoogle().mAdTrackingInfo == null ? null : advertisingIdsHolderA.getGoogle().mAdTrackingInfo.advId, advertisingIdsHolderA.getGoogle().mStatus, advertisingIdsHolderA.getGoogle().mErrorExplanation), new IdentifiersResult(advertisingIdsHolderA.getHuawei().mAdTrackingInfo == null ? null : advertisingIdsHolderA.getHuawei().mAdTrackingInfo.advId, advertisingIdsHolderA.getHuawei().mStatus, advertisingIdsHolderA.getHuawei().mErrorExplanation), new IdentifiersResult(advertisingIdsHolderA.getYandex().mAdTrackingInfo == null ? null : advertisingIdsHolderA.getYandex().mAdTrackingInfo.advId, advertisingIdsHolderA.getYandex().mStatus, advertisingIdsHolderA.getYandex().mErrorExplanation), C1981a4.a(AbstractC2322nb.a(c2231jmE.h)), Kn.a(), c2231jmE.o + ((long) c2231jmE.z.f5696a), C1981a4.a(c2231jmE.n.f), new Bundle());
    }
}
