package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.BuildConfig;
import io.appmetrica.analytics.coreutils.internal.executors.BlockingExecutor;
import io.appmetrica.analytics.coreutils.internal.network.UserAgent;
import io.appmetrica.analytics.networktasks.internal.AESRSARequestBodyEncrypter;
import io.appmetrica.analytics.networktasks.internal.AllHostsExponentialBackoffPolicy;
import io.appmetrica.analytics.networktasks.internal.DefaultResponseValidityChecker;
import io.appmetrica.analytics.networktasks.internal.ExponentialBackoffDataHolder;
import io.appmetrica.analytics.networktasks.internal.FullUrlFormer;
import io.appmetrica.analytics.networktasks.internal.NetworkTask;
import io.appmetrica.analytics.networktasks.internal.RequestDataHolder;
import io.appmetrica.analytics.networktasks.internal.ResponseDataHolder;
import java.util.LinkedHashMap;
import kotlin.collections.CollectionsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ce, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2043ce {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final C2043ce f6029a = new C2043ce();
    public static final LinkedHashMap b = new LinkedHashMap();
    public static final String c = UserAgent.getFor(BuildConfig.LIBRARY_PACKAGE_NAME, "7.13.0", "50142752");

    public final synchronized ExponentialBackoffDataHolder a(EnumC1991ae enumC1991ae) {
        Object exponentialBackoffDataHolder;
        LinkedHashMap linkedHashMap = b;
        exponentialBackoffDataHolder = linkedHashMap.get(enumC1991ae);
        if (exponentialBackoffDataHolder == null) {
            exponentialBackoffDataHolder = new ExponentialBackoffDataHolder(new Da(C2495ua.H.z(), enumC1991ae), enumC1991ae.name());
            linkedHashMap.put(enumC1991ae, exponentialBackoffDataHolder);
        }
        return (ExponentialBackoffDataHolder) exponentialBackoffDataHolder;
    }

    public static final NetworkTask a(C2085e5 c2085e5) {
        AESRSARequestBodyEncrypter aESRSARequestBodyEncrypter = new AESRSARequestBodyEncrypter();
        C2097eh c2097eh = new C2097eh(aESRSARequestBodyEncrypter);
        Fb fb = new Fb(c2085e5);
        return new NetworkTask(new BlockingExecutor(), new C2540w5(c2085e5.f6057a), new AllHostsExponentialBackoffPolicy(f6029a.a(EnumC1991ae.REPORT)), new C2627zh(c2085e5, c2097eh, fb, new FullUrlFormer(c2097eh, fb), new RequestDataHolder(), new ResponseDataHolder(new DefaultResponseValidityChecker()), c2085e5.i(), c2085e5.p(), c2085e5.u(), aESRSARequestBodyEncrypter), CollectionsKt.listOf(new mo()), c);
    }
}
