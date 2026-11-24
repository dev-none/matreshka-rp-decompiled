package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import io.appmetrica.analytics.ndkcrashesapi.internal.NativeCrashSource;
import java.util.Map;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;

/* JADX INFO: loaded from: classes7.dex */
public final class Ld implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Kd f5774a = new Kd();
    public static final Map b = MapsKt.mapOf(TuplesKt.to(NativeCrashSource.UNKNOWN, 0), TuplesKt.to(NativeCrashSource.CRASHPAD, 3));

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2035c6 fromModel(Rd rd) {
        C2035c6 c2035c6 = new C2035c6();
        c2035c6.f = 1;
        C2009b6 c2009b6 = new C2009b6();
        c2009b6.f6013a = rd.f5865a;
        C2112f6 c2112f6 = new C2112f6();
        Integer num = (Integer) b.get(rd.b.f5819a);
        if (num != null) {
            c2112f6.f6071a = num.intValue();
        }
        String str = rd.b.b;
        if (str == null) {
            str = "";
        }
        c2112f6.b = str;
        c2009b6.b = c2112f6;
        c2035c6.g = c2009b6;
        return c2035c6;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public final Rd a(C2035c6 c2035c6) {
        throw new UnsupportedOperationException();
    }
}
