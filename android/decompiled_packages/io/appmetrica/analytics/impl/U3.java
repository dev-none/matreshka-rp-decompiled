package io.appmetrica.analytics.impl;

import android.util.Base64;
import android.util.Pair;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.appmetrica.analytics.coreutils.internal.WrapUtils;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import io.appmetrica.analytics.protobuf.nano.MessageNano;
import java.util.HashMap;
import java.util.Iterator;

/* JADX INFO: loaded from: classes7.dex */
public final class U3 extends W5 {
    public HashMap q;
    public C2000an r;
    public Ym s;
    public Ym t;
    public C2161h3 u;
    public C2000an v;

    public U3(PublicLogger publicLogger) {
        this.q = new HashMap();
        a(publicLogger);
    }

    public static W5 b(String str, String str2) {
        W5 w5 = new W5("", 0);
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        w5.d = 5376;
        w5.a(str, str2);
        return w5;
    }

    public static W5 n() {
        W5 w5 = new W5("", 0);
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        w5.d = 5632;
        return w5;
    }

    public static W5 o() {
        W5 w5 = new W5("", 0);
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        w5.d = 40961;
        return w5;
    }

    public final void a(String str, String str2, T3 t3) {
        if (StringUtils.equalsNullSafety(str, str2)) {
            this.q.remove(t3);
        } else {
            this.q.put(t3, Integer.valueOf(StringUtils.getUTF8Bytes(str).length - StringUtils.getUTF8Bytes(str2).length));
        }
        Iterator it = this.q.values().iterator();
        int iIntValue = 0;
        while (it.hasNext()) {
            iIntValue += ((Integer) it.next()).intValue();
        }
        this.g = iIntValue;
    }

    @Override // io.appmetrica.analytics.impl.W5
    public final void c(String str) {
        C2000an c2000an = this.v;
        c2000an.getClass();
        this.h = c2000an.a(str);
    }

    public final String d(String str) {
        C2000an c2000an = this.r;
        c2000an.getClass();
        String strA = c2000an.a(str);
        a(str, strA, T3.NAME);
        return strA;
    }

    public final String e(String str) {
        Ym ym = this.s;
        ym.getClass();
        String strA = ym.a(str);
        a(str, strA, T3.VALUE);
        return strA;
    }

    public final U3 f(String str) {
        Ym ym = this.t;
        ym.getClass();
        String strA = ym.a(str);
        a(str, strA, T3.VALUE);
        this.b = strA;
        return this;
    }

    public final HashMap<T3, Integer> p() {
        return this.q;
    }

    @Override // io.appmetrica.analytics.impl.W5, io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public final void setName(String str) {
        this.f5941a = d(str);
    }

    @Override // io.appmetrica.analytics.impl.W5, io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public final void setValue(String str) {
        this.b = e(str);
    }

    @Override // io.appmetrica.analytics.impl.W5, io.appmetrica.analytics.coreapi.internal.event.CounterReportApi
    public final void setValueBytes(byte[] bArr) {
        a(bArr);
    }

    public U3(String str, int i, PublicLogger publicLogger) {
        this("", str, i, publicLogger);
    }

    public U3(String str, String str2, int i, PublicLogger publicLogger) {
        this(str, str2, i, 0, publicLogger);
    }

    public final U3 a(HashMap<T3, Integer> map) {
        this.q = map;
        return this;
    }

    public U3(String str, String str2, int i, int i2, PublicLogger publicLogger) {
        this.q = new HashMap();
        a(publicLogger);
        this.b = e(str);
        this.f5941a = d(str2);
        setType(i);
        setCustomType(i2);
    }

    public final void a(PublicLogger publicLogger) {
        this.r = new C2000an(1000, "event name", publicLogger);
        this.s = new Ym(245760, "event value", publicLogger);
        this.t = new Ym(1024000, "event extended value", publicLogger);
        this.u = new C2161h3(245760, "event value bytes", publicLogger);
        this.v = new C2000an(200, "user profile id", publicLogger);
    }

    public final void a(byte[] bArr) {
        C2161h3 c2161h3 = this.u;
        c2161h3.getClass();
        byte[] bArrA = c2161h3.a(bArr);
        T3 t3 = T3.VALUE;
        if (bArr.length != bArrA.length) {
            this.q.put(t3, Integer.valueOf(bArr.length - bArrA.length));
        } else {
            this.q.remove(t3);
        }
        Iterator it = this.q.values().iterator();
        int iIntValue = 0;
        while (it.hasNext()) {
            iIntValue += ((Integer) it.next()).intValue();
        }
        this.g = iIntValue;
        super.setValueBytes(bArrA);
    }

    public static W5 a(C2259ko c2259ko) {
        W5 w5O = o();
        w5O.setValue(new String(Base64.encode(MessageNano.toByteArray(c2259ko), 0)));
        return w5O;
    }

    public static U3 a(PublicLogger publicLogger, Ti ti) {
        int length;
        U3 u3 = new U3(publicLogger);
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        u3.d = 40976;
        Ri ri = new Ri();
        ri.b = ti.f5908a.currency.getCurrencyCode().getBytes();
        ri.f = ti.f5908a.priceMicros;
        ri.c = StringUtils.stringToBytesForProtobuf(new C2000an(200, "revenue productID", ti.e).a(ti.f5908a.productID));
        ri.f5869a = ((Integer) WrapUtils.getOrDefault(ti.f5908a.quantity, 1)).intValue();
        Ym ym = ti.b;
        String str = ti.f5908a.payload;
        ym.getClass();
        ri.d = StringUtils.stringToBytesForProtobuf(ym.a(str));
        if (no.a(ti.f5908a.receipt)) {
            Mi mi = new Mi();
            String str2 = (String) ti.c.a(ti.f5908a.receipt.data);
            length = !StringUtils.equalsNullSafety(ti.f5908a.receipt.data, str2) ? ti.f5908a.receipt.data.length() : 0;
            String str3 = (String) ti.d.a(ti.f5908a.receipt.signature);
            mi.f5794a = StringUtils.stringToBytesForProtobuf(str2);
            mi.b = StringUtils.stringToBytesForProtobuf(str3);
            ri.e = mi;
        } else {
            length = 0;
        }
        Pair pair = new Pair(MessageNano.toByteArray(ri), Integer.valueOf(length));
        u3.b = u3.e(new String(Base64.encode((byte[]) pair.first, 0)));
        u3.g = ((Integer) pair.second).intValue();
        return u3;
    }

    public U3(byte[] bArr, String str, int i, PublicLogger publicLogger) {
        this.q = new HashMap();
        a(publicLogger);
        a(bArr);
        this.f5941a = d(str);
        setType(i);
    }

    public static U3 a(PublicLogger publicLogger, E e) {
        U3 u3 = new U3(publicLogger);
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        u3.d = 40977;
        kotlin.Pair pairA = e.a();
        u3.b = u3.e(new String(Base64.encode((byte[]) pairA.getFirst(), 0)));
        u3.g = ((Integer) pairA.getSecond()).intValue();
        return u3;
    }
}
