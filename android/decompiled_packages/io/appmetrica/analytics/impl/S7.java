package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.identifiers.AdTrackingInfo;
import io.appmetrica.analytics.coreapi.internal.identifiers.AdTrackingInfoResult;
import io.appmetrica.analytics.coreapi.internal.identifiers.AdvertisingIdsHolder;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Locale;
import java.util.UUID;
import java.util.concurrent.ExecutionException;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;

/* JADX INFO: loaded from: classes7.dex */
public final class S7 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final U f5879a;
    public final C2211j2 b;

    public S7(U u, C2211j2 c2211j2) {
        this.f5879a = u;
        this.b = c2211j2;
    }

    public final String a() {
        AdvertisingIdsHolder advertisingIdsHolder;
        byte[] bArrDigest;
        U u = this.f5879a;
        Ln ln = new Ln(5, 500);
        synchronized (u) {
            try {
                u.a((Li) ln, true).get();
            } catch (InterruptedException | ExecutionException unused) {
            }
            advertisingIdsHolder = u.k;
        }
        AdTrackingInfoResult yandex = advertisingIdsHolder.getYandex();
        if (!yandex.isValid()) {
            String id = this.b.getAppSetId().getId();
            if (id != null && id.length() != 0) {
                try {
                    UUID.fromString(id);
                    if (!Intrinsics.areEqual(id, "00000000-0000-0000-0000-000000000000")) {
                        return StringsKt.replace$default(id, "-", "", false, 4, (Object) null);
                    }
                } catch (Throwable unused2) {
                }
            }
            return StringsKt.replace$default(UUID.randomUUID().toString(), "-", "", false, 4, (Object) null).toLowerCase(Locale.US);
        }
        AdTrackingInfo adTrackingInfo = yandex.mAdTrackingInfo;
        Intrinsics.checkNotNull(adTrackingInfo);
        String str = adTrackingInfo.advId;
        Intrinsics.checkNotNull(str);
        try {
            bArrDigest = MessageDigest.getInstance("MD5").digest(str.getBytes(Charsets.UTF_8));
        } catch (NoSuchAlgorithmException unused3) {
            bArrDigest = new byte[0];
        }
        return StringUtils.toHexString(bArrDigest);
    }

    public S7() {
        this(C2495ua.k().c(), C2495ua.k().d());
    }
}
