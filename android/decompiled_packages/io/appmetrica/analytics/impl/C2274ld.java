package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.concurrent.TimeUnit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.IntIterator;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;
import kotlin.ranges.RangesKt;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ld, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2274ld implements Yj {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final InterfaceC2606yl f6190a;
    public final String b;
    public final SystemTimeProvider c;
    public final List d;
    public final String e;
    public final long f;

    public C2274ld(InterfaceC2606yl interfaceC2606yl, String str, SystemTimeProvider systemTimeProvider, List<C2197id> list) {
        this.f6190a = interfaceC2606yl;
        this.b = str;
        this.c = systemTimeProvider;
        this.d = list;
        this.e = str.toUpperCase(Locale.ROOT) + "_STATUS";
        this.f = TimeUnit.DAYS.toMillis(1L);
    }

    public final Xj a() {
        Ad ad;
        C2197id c2197id;
        if (this.d.isEmpty()) {
            return null;
        }
        List listSortedWith = CollectionsKt.sortedWith(this.d, new C2248kd());
        String strC = ((Fd) this.f6190a).c(this.e, (String) null);
        if (strC != null) {
            try {
                JSONObject jSONObject = new JSONObject(strC);
                JSONArray jSONArray = jSONObject.getJSONArray("modulesStatus");
                IntRange intRangeUntil = RangesKt.until(0, jSONArray.length());
                ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(intRangeUntil, 10));
                Iterator<Integer> it = intRangeUntil.iterator();
                while (it.hasNext()) {
                    JSONObject jSONObject2 = jSONArray.getJSONObject(((IntIterator) it).nextInt());
                    try {
                        c2197id = new C2197id(jSONObject2.getString("moduleName"), jSONObject2.getBoolean("loaded"));
                    } catch (Throwable unused) {
                        c2197id = new C2197id("", false);
                    }
                    arrayList.add(c2197id);
                }
                ad = new Ad(arrayList, jSONObject.getLong("lastSendTime"));
            } catch (Throwable unused2) {
                ad = new Ad(CollectionsKt.emptyList(), 0L);
            }
        } else {
            ad = null;
        }
        long jCurrentTimeMillis = this.c.currentTimeMillis();
        if (ad != null && jCurrentTimeMillis - ad.b <= this.f && Intrinsics.areEqual(listSortedWith, ad.f5596a)) {
            return null;
        }
        Ad ad2 = new Ad(listSortedWith, jCurrentTimeMillis);
        InterfaceC2606yl interfaceC2606yl = this.f6190a;
        Fd fd = (Fd) interfaceC2606yl;
        return new Xj(this.b + "_status", ad2.a());
    }

    public /* synthetic */ C2274ld(InterfaceC2606yl interfaceC2606yl, String str, SystemTimeProvider systemTimeProvider, List list, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(interfaceC2606yl, str, (i & 4) != 0 ? new SystemTimeProvider() : systemTimeProvider, list);
    }
}
