package io.appmetrica.analytics.impl;

import android.content.Context;
import android.content.pm.PackageInfo;
import com.adjust.sdk.Constants;
import io.appmetrica.analytics.coreutils.internal.services.SafePackageManager;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import java.util.NoSuchElementException;
import java.util.concurrent.TimeUnit;
import kotlin.Pair;
import kotlin.TuplesKt;
import kotlin.collections.CollectionsKt;
import kotlin.comparisons.ComparisonsKt;
import kotlin.math.MathKt;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class Bg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5613a;
    public final SafePackageManager b;
    public final Ya c;
    public final Kc d;
    public final long e;
    public final String f;
    public final String g;

    public Bg(Context context, SafePackageManager safePackageManager, Ya ya) {
        this.f5613a = context;
        this.b = safePackageManager;
        this.c = ya;
        Kc kc = new Kc(0);
        kc.a(EnumC2426rg.d, 1);
        kc.a(EnumC2426rg.c, 2);
        this.d = kc;
        this.e = TimeUnit.DAYS.toSeconds(1L);
        this.f = "com.android.vending";
        this.g = "com.huawei.appmarket";
    }

    /* JADX WARN: Code duplicated, block: B:24:0x0098  */
    public final C2451sg a(List list) {
        C2451sg c2451sg;
        if (list.isEmpty()) {
            return null;
        }
        if (list.size() == 1) {
            return (C2451sg) list.get(0);
        }
        SafePackageManager safePackageManager = this.b;
        Context context = this.f5613a;
        PackageInfo packageInfo = safePackageManager.getPackageInfo(context, context.getPackageName(), 0);
        if (packageInfo != null) {
            long seconds = TimeUnit.MILLISECONDS.toSeconds(packageInfo.firstInstallTime);
            Iterator it = list.iterator();
            if (!it.hasNext()) {
                throw new NoSuchElementException();
            }
            C2451sg c2451sg2 = (C2451sg) it.next();
            Pair pair = TuplesKt.to(c2451sg2, Long.valueOf(Math.abs(c2451sg2.c - seconds)));
            while (it.hasNext()) {
                C2451sg c2451sg3 = (C2451sg) it.next();
                Pair pair2 = TuplesKt.to(c2451sg3, Long.valueOf(Math.abs(c2451sg3.c - seconds)));
                if (ComparisonsKt.compareValues((Comparable) pair.getSecond(), (Comparable) pair2.getSecond()) > 0) {
                    pair = pair2;
                }
            }
            c2451sg = (C2451sg) pair.component1();
            if (((Number) pair.component2()).longValue() >= this.e) {
                c2451sg = null;
            }
        } else {
            c2451sg = null;
        }
        if (c2451sg == null) {
            Comparator comparator = new Comparator() { // from class: io.appmetrica.analytics.impl.Bg$$ExternalSyntheticLambda0
                @Override // java.util.Comparator
                public final int compare(Object obj, Object obj2) {
                    return Bg.a(this.f$0, (C2451sg) obj, (C2451sg) obj2);
                }
            };
            Iterator it2 = list.iterator();
            if (!it2.hasNext()) {
                throw new NoSuchElementException();
            }
            C2451sg c2451sg4 = (C2451sg) it2.next();
            while (it2.hasNext()) {
                C2451sg c2451sg5 = (C2451sg) it2.next();
                if (comparator.compare(c2451sg4, c2451sg5) < 0) {
                    c2451sg4 = c2451sg5;
                }
            }
            c2451sg = c2451sg4;
        }
        Ya ya = this.c;
        JSONObject jSONObject = new JSONObject();
        ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(list, 10));
        Iterator it3 = list.iterator();
        while (it3.hasNext()) {
            C2451sg c2451sg6 = (C2451sg) it3.next();
            arrayList.add(new JSONObject().put(Constants.REFERRER, c2451sg6.f6314a).put("install_timestamp_seconds", c2451sg6.c).put("click_timestamp_seconds", c2451sg6.b).put("source", c2451sg6.d.f6296a));
        }
        ya.reportEvent("several_filled_referrers", jSONObject.put("candidates", no.a((Collection) arrayList) ? null : new JSONArray((Collection) arrayList)).put("chosen", new JSONObject().put(Constants.REFERRER, c2451sg.f6314a).put("install_timestamp_seconds", c2451sg.c).put("click_timestamp_seconds", c2451sg.b).put("source", c2451sg.d.f6296a)).putOpt("install_time", packageInfo != null ? Long.valueOf(packageInfo.firstInstallTime) : null).toString());
        return c2451sg;
    }

    public /* synthetic */ Bg(Context context) {
        this(context, new SafePackageManager(), AbstractC2536w1.a());
    }

    public static final int a(Bg bg, C2451sg c2451sg, C2451sg c2451sg2) {
        int sign = MathKt.getSign(c2451sg.c - c2451sg2.c);
        return sign == 0 ? ((Number) bg.d.a(c2451sg.d)).intValue() - ((Number) bg.d.a(c2451sg2.d)).intValue() : sign;
    }
}
