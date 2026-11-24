package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.WrapUtils;
import io.appmetrica.analytics.networktasks.internal.BaseRequestConfig;
import java.util.List;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.dm, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2077dm extends BaseRequestConfig.BaseRequestArguments {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6051a;
    public final String b;
    public final Map<String, String> c;
    public final boolean d;
    public final List<String> e;

    public C2077dm(P3 p3) {
        this(p3.a().c(), p3.a().d(), p3.a().a(), p3.a().h(), p3.a().b());
    }

    public final boolean a(C2077dm c2077dm) {
        return false;
    }

    @Override // io.appmetrica.analytics.networktasks.internal.ArgumentsMerger
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public final C2077dm mergeFrom(C2077dm c2077dm) {
        return new C2077dm((String) WrapUtils.getOrDefaultNullable(this.f6051a, c2077dm.f6051a), (String) WrapUtils.getOrDefaultNullable(this.b, c2077dm.b), (Map) WrapUtils.getOrDefaultNullable(this.c, c2077dm.c), this.d || c2077dm.d, c2077dm.d ? c2077dm.e : this.e);
    }

    @Override // io.appmetrica.analytics.networktasks.internal.ArgumentsMerger
    public final boolean compareWithOtherArguments(Object obj) {
        return false;
    }

    public final String toString() {
        return "Arguments{distributionReferrer='" + this.f6051a + "', installReferrerSource='" + this.b + "', clientClids=" + this.c + ", hasNewCustomHosts=" + this.d + ", newCustomHosts=" + this.e + '}';
    }

    public C2077dm(String str, String str2, Map<String, String> map, boolean z, List<String> list) {
        this.f6051a = str;
        this.b = str2;
        this.c = map;
        this.d = z;
        this.e = list;
    }

    public C2077dm() {
        this(null, null, null, false, null);
    }
}
