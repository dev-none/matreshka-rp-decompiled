package io.appmetrica.analytics.impl;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;

/* JADX INFO: loaded from: classes7.dex */
public final class V5 implements Parcelable.Creator {
    @Override // android.os.Parcelable.Creator
    public final Object createFromParcel(Parcel parcel) {
        EnumC2469t9 enumC2469t9;
        Bundle bundle = parcel.readBundle(I6.class.getClassLoader());
        if (bundle.containsKey("CounterReport.Source")) {
            int i = bundle.getInt("CounterReport.Source");
            EnumC2469t9[] enumC2469t9ArrValues = EnumC2469t9.values();
            int length = enumC2469t9ArrValues.length;
            int i2 = 0;
            while (true) {
                if (i2 >= length) {
                    enumC2469t9 = EnumC2469t9.NATIVE;
                    break;
                }
                enumC2469t9 = enumC2469t9ArrValues[i2];
                if (enumC2469t9.f6330a == i) {
                    break;
                }
                i2++;
            }
        } else {
            enumC2469t9 = null;
        }
        W5 w5 = new W5("", "", 0);
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        w5.d = bundle.getInt("CounterReport.Type", -1);
        w5.e = bundle.getInt("CounterReport.CustomType");
        w5.b = StringUtils.ifIsNullToDef(bundle.getString("CounterReport.Value"), "");
        w5.c = bundle.getString("CounterReport.Environment");
        w5.f5941a = bundle.getString("CounterReport.Event");
        w5.f = W5.a(bundle);
        w5.g = bundle.getInt("CounterReport.TRUNCATED");
        w5.h = bundle.getString("CounterReport.ProfileID");
        w5.i = bundle.getLong("CounterReport.CreationElapsedRealtime");
        w5.j = bundle.getLong("CounterReport.CreationTimestamp");
        w5.k = EnumC2245ka.a(Integer.valueOf(bundle.getInt("CounterReport.UniquenessStatus")));
        w5.l = enumC2469t9;
        w5.m = bundle.getBundle("CounterReport.Payload");
        w5.n = bundle.containsKey("CounterReport.AttributionIdChanged") ? Boolean.valueOf(bundle.getBoolean("CounterReport.AttributionIdChanged")) : null;
        w5.o = bundle.containsKey("CounterReport.OpenId") ? Integer.valueOf(bundle.getInt("CounterReport.OpenId")) : null;
        w5.p = CollectionUtils.bundleToMap(bundle.getBundle("CounterReport.Extras"));
        return w5;
    }

    @Override // android.os.Parcelable.Creator
    public final Object[] newArray(int i) {
        return new W5[i];
    }
}
