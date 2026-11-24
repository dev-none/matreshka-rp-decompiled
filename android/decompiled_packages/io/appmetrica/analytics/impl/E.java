package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.AdRevenue;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.Pair;
import kotlin.TuplesKt;
import kotlin.collections.CollectionsKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.functions.Function1;
import kotlin.text.Charsets;

/* JADX INFO: loaded from: classes7.dex */
public final class E {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final AdRevenue f5646a;
    public final boolean b;
    public final InterfaceC2459t c;
    public final C2000an d;
    public final Ym e;

    public E(AdRevenue adRevenue, boolean z, C2206in c2206in, PublicLogger publicLogger) {
        this.f5646a = adRevenue;
        this.b = z;
        this.c = c2206in;
        this.d = new C2000an(100, "ad revenue strings", publicLogger);
        this.e = new Ym(30720, "ad revenue payload", publicLogger);
    }

    public final Pair a() {
        Map linkedHashMap;
        C2434s c2434s = new C2434s();
        int length = 0;
        for (Pair pair : CollectionsKt.listOf((Object[]) new Pair[]{TuplesKt.to(this.f5646a.adNetwork, new C2559x(c2434s)), TuplesKt.to(this.f5646a.adPlacementId, new C2584y(c2434s)), TuplesKt.to(this.f5646a.adPlacementName, new C2609z(c2434s)), TuplesKt.to(this.f5646a.adUnitId, new A(c2434s)), TuplesKt.to(this.f5646a.adUnitName, new B(c2434s)), TuplesKt.to(this.f5646a.precision, new C(c2434s)), TuplesKt.to(this.f5646a.currency.getCurrencyCode(), new D(c2434s))})) {
            String str = (String) pair.getFirst();
            Function1 function1 = (Function1) pair.getSecond();
            C2000an c2000an = this.d;
            c2000an.getClass();
            String strA = c2000an.a(str);
            byte[] bArrStringToBytesForProtobuf = StringUtils.stringToBytesForProtobuf(str);
            byte[] bArrStringToBytesForProtobuf2 = StringUtils.stringToBytesForProtobuf(strA);
            function1.invoke(bArrStringToBytesForProtobuf2);
            length += bArrStringToBytesForProtobuf.length - bArrStringToBytesForProtobuf2.length;
        }
        Integer num = (Integer) F.f5667a.get(this.f5646a.adType);
        c2434s.d = num != null ? num.intValue() : 0;
        r rVar = new r();
        BigDecimal bigDecimal = this.f5646a.adRevenue;
        BigInteger bigInteger = F7.f5672a;
        int i = -bigDecimal.scale();
        BigInteger bigIntegerUnscaledValue = bigDecimal.unscaledValue();
        while (true) {
            if (bigIntegerUnscaledValue.compareTo(F7.f5672a) <= 0 && bigIntegerUnscaledValue.compareTo(F7.b) >= 0) {
                break;
            }
            bigIntegerUnscaledValue = bigIntegerUnscaledValue.divide(BigInteger.TEN);
            i++;
        }
        Pair pair2 = TuplesKt.to(Long.valueOf(bigIntegerUnscaledValue.longValue()), Integer.valueOf(i));
        long jLongValue = ((Number) pair2.getFirst()).longValue();
        int iIntValue = ((Number) pair2.getSecond()).intValue();
        rVar.f6282a = jLongValue;
        rVar.b = iIntValue;
        c2434s.b = rVar;
        Map<String, String> map = this.f5646a.payload;
        InterfaceC2459t interfaceC2459t = this.c;
        if (map == null || (linkedHashMap = MapsKt.toMutableMap(map)) == null) {
            linkedHashMap = new LinkedHashMap();
        }
        String strB = AbstractC2322nb.b(interfaceC2459t.a(linkedHashMap));
        Ym ym = this.e;
        ym.getClass();
        byte[] bArrStringToBytesForProtobuf3 = StringUtils.stringToBytesForProtobuf(ym.a(strB));
        c2434s.k = bArrStringToBytesForProtobuf3;
        int length2 = (StringUtils.stringToBytesForProtobuf(strB).length - bArrStringToBytesForProtobuf3.length) + length;
        if (this.b) {
            c2434s.f6302a = "autocollected".getBytes(Charsets.UTF_8);
        }
        return TuplesKt.to(MessageNano.toByteArray(c2434s), Integer.valueOf(length2));
    }
}
