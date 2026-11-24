package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.modulesapi.internal.client.adrevenue.AdRevenueConstants;
import java.util.HashMap;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.hn, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2181hn extends Lambda implements Function0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2206in f6118a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public C2181hn(C2206in c2206in) {
        super(0);
        this.f6118a = c2206in;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        HashMap map = new HashMap();
        C2206in c2206in = this.f6118a;
        String strA = c2206in.f6140a.a();
        if (strA != null) {
        }
        String strA2 = c2206in.b.a();
        if (strA2 != null) {
            map.put(AdRevenueConstants.PLUGIN_SUPPORTED_SOURCES_KEY, strA2);
        }
        return map;
    }
}
