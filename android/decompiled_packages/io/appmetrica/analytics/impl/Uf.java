package io.appmetrica.analytics.impl;

import android.util.SparseArray;
import java.util.Calendar;
import java.util.Collections;
import java.util.GregorianCalendar;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes7.dex */
public abstract class Uf {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Map f5919a;
    public static final SparseArray b;
    public static final Map c;
    public static final Map d;

    static {
        HashMap map = new HashMap();
        EnumC1998al enumC1998al = EnumC1998al.FOREGROUND;
        map.put(enumC1998al, 0);
        EnumC1998al enumC1998al2 = EnumC1998al.BACKGROUND;
        map.put(enumC1998al2, 1);
        f5919a = Collections.unmodifiableMap(map);
        SparseArray sparseArray = new SparseArray();
        sparseArray.put(0, enumC1998al);
        sparseArray.put(1, enumC1998al2);
        b = sparseArray;
        HashMap map2 = new HashMap();
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_INIT;
        map2.put(enumC2195ib, 1);
        EnumC2195ib enumC2195ib2 = EnumC2195ib.EVENT_TYPE_REGULAR;
        map2.put(enumC2195ib2, 4);
        EnumC2195ib enumC2195ib3 = EnumC2195ib.EVENT_TYPE_SEND_REFERRER;
        map2.put(enumC2195ib3, 5);
        EnumC2195ib enumC2195ib4 = EnumC2195ib.EVENT_TYPE_ALIVE;
        map2.put(enumC2195ib4, 7);
        EnumC2195ib enumC2195ib5 = EnumC2195ib.EVENT_TYPE_EXCEPTION_UNHANDLED_PROTOBUF;
        map2.put(enumC2195ib5, 26);
        EnumC2195ib enumC2195ib6 = EnumC2195ib.EVENT_TYPE_PREV_SESSION_EXCEPTION_UNHANDLED_FROM_FILE;
        map2.put(enumC2195ib6, 26);
        EnumC2195ib enumC2195ib7 = EnumC2195ib.EVENT_TYPE_EXCEPTION_UNHANDLED_FROM_FILE;
        map2.put(enumC2195ib7, 26);
        EnumC2195ib enumC2195ib8 = EnumC2195ib.EVENT_TYPE_ANR;
        map2.put(enumC2195ib8, 25);
        EnumC2195ib enumC2195ib9 = EnumC2195ib.EVENT_TYPE_PREV_SESSION_NATIVE_CRASH_PROTOBUF;
        map2.put(enumC2195ib9, 26);
        EnumC2195ib enumC2195ib10 = EnumC2195ib.EVENT_TYPE_CURRENT_SESSION_NATIVE_CRASH_PROTOBUF;
        map2.put(enumC2195ib10, 26);
        EnumC2195ib enumC2195ib11 = EnumC2195ib.EVENT_TYPE_EXCEPTION_USER_PROTOBUF;
        map2.put(enumC2195ib11, 27);
        EnumC2195ib enumC2195ib12 = EnumC2195ib.EVENT_TYPE_EXCEPTION_USER_CUSTOM_PROTOBUF;
        map2.put(enumC2195ib12, 27);
        EnumC2195ib enumC2195ib13 = EnumC2195ib.EVENT_TYPE_FIRST_ACTIVATION;
        map2.put(enumC2195ib13, 13);
        EnumC2195ib enumC2195ib14 = EnumC2195ib.EVENT_TYPE_START;
        map2.put(enumC2195ib14, 2);
        EnumC2195ib enumC2195ib15 = EnumC2195ib.EVENT_TYPE_APP_OPEN;
        map2.put(enumC2195ib15, 16);
        EnumC2195ib enumC2195ib16 = EnumC2195ib.EVENT_TYPE_APP_UPDATE;
        map2.put(enumC2195ib16, 17);
        EnumC2195ib enumC2195ib17 = EnumC2195ib.EVENT_TYPE_PERMISSIONS;
        map2.put(enumC2195ib17, 18);
        EnumC2195ib enumC2195ib18 = EnumC2195ib.EVENT_TYPE_APP_FEATURES;
        map2.put(enumC2195ib18, 19);
        EnumC2195ib enumC2195ib19 = EnumC2195ib.EVENT_TYPE_SEND_USER_PROFILE;
        map2.put(enumC2195ib19, 20);
        EnumC2195ib enumC2195ib20 = EnumC2195ib.EVENT_TYPE_SEND_REVENUE_EVENT;
        map2.put(enumC2195ib20, 21);
        EnumC2195ib enumC2195ib21 = EnumC2195ib.EVENT_TYPE_SEND_AD_REVENUE_EVENT;
        map2.put(enumC2195ib21, 40);
        EnumC2195ib enumC2195ib22 = EnumC2195ib.EVENT_TYPE_SEND_ECOMMERCE_EVENT;
        map2.put(enumC2195ib22, 35);
        map2.put(EnumC2195ib.EVENT_TYPE_CLEANUP, 29);
        EnumC2195ib enumC2195ib23 = EnumC2195ib.EVENT_TYPE_WEBVIEW_SYNC;
        map2.put(enumC2195ib23, 38);
        EnumC2195ib enumC2195ib24 = EnumC2195ib.EVENT_CLIENT_EXTERNAL_ATTRIBUTION;
        map2.put(enumC2195ib24, 42);
        c = Collections.unmodifiableMap(map2);
        HashMap map3 = new HashMap();
        B8 b8 = new B8();
        H8 h8 = new H8(new M8());
        C8 c8 = new C8();
        C2238k3 c2238k3 = new C2238k3(new M8());
        Rn rn = new Rn(new M8());
        Qf qf = new Qf();
        C1986a9 c1986a9A = C2012b9.a();
        c1986a9A.b = qf;
        c1986a9A.c = qf;
        C2012b9 c2012b9 = new C2012b9(c1986a9A);
        C1986a9 c1986a9A2 = C2012b9.a();
        c1986a9A2.b = h8;
        C2012b9 c2012b10 = new C2012b9(c1986a9A2);
        C1986a9 c1986a9A3 = C2012b9.a();
        c1986a9A3.b = c2238k3;
        C2012b9 c2012b11 = new C2012b9(c1986a9A3);
        C1986a9 c1986a9A4 = C2012b9.a();
        c1986a9A4.b = rn;
        C2012b9 c2012b12 = new C2012b9(c1986a9A4);
        C1986a9 c1986a9A5 = C2012b9.a();
        c1986a9A5.f5999a = b8;
        C2012b9 c2012b13 = new C2012b9(c1986a9A5);
        C1986a9 c1986a9A6 = C2012b9.a();
        c1986a9A6.b = new wo(new H8());
        C2012b9 c2012b14 = new C2012b9(c1986a9A6);
        map3.put(enumC2195ib2, c2012b10);
        C1986a9 c1986a9A7 = C2012b9.a();
        c1986a9A7.b = new Sf();
        map3.put(enumC2195ib3, new C2012b9(c1986a9A7));
        C1986a9 c1986a9A8 = C2012b9.a();
        c1986a9A8.f5999a = b8;
        c1986a9A8.b = c8;
        c1986a9A8.e = new C2037c8();
        c1986a9A8.f = new C2063d8();
        map3.put(enumC2195ib4, new C2012b9(c1986a9A8));
        map3.put(enumC2195ib9, c2012b9);
        map3.put(enumC2195ib10, c2012b9);
        map3.put(enumC2195ib11, c2012b11);
        map3.put(enumC2195ib12, c2012b11);
        map3.put(enumC2195ib5, c2012b11);
        map3.put(enumC2195ib6, c2012b11);
        map3.put(enumC2195ib7, c2012b11);
        map3.put(enumC2195ib8, c2012b11);
        C1986a9 c1986a9A9 = C2012b9.a();
        c1986a9A9.f5999a = new B8();
        c1986a9A9.b = c2238k3;
        map3.put(enumC2195ib14, new C2012b9(c1986a9A9));
        EnumC2195ib enumC2195ib25 = EnumC2195ib.EVENT_TYPE_CUSTOM_EVENT;
        C1986a9 c1986a9A10 = C2012b9.a();
        c1986a9A10.d = new Tf();
        map3.put(enumC2195ib25, new C2012b9(c1986a9A10));
        map3.put(enumC2195ib15, c2012b10);
        map3.put(enumC2195ib17, c2012b13);
        map3.put(enumC2195ib18, c2012b13);
        map3.put(enumC2195ib19, c2012b11);
        map3.put(enumC2195ib20, c2012b11);
        map3.put(enumC2195ib21, c2012b11);
        map3.put(enumC2195ib22, c2012b12);
        map3.put(enumC2195ib, c2012b14);
        map3.put(enumC2195ib16, c2012b14);
        map3.put(enumC2195ib13, c2012b10);
        map3.put(enumC2195ib23, c2012b10);
        map3.put(enumC2195ib24, c2012b11);
        d = Collections.unmodifiableMap(map3);
    }

    public static C2370p9 a(Long l, Long l2, Boolean bool) {
        C2370p9 c2370p9 = new C2370p9();
        if (l != null) {
            c2370p9.f6254a = l.longValue();
            c2370p9.b = ((GregorianCalendar) Calendar.getInstance()).getTimeZone().getOffset(l.longValue() * 1000) / 1000;
        }
        if (l2 != null) {
            c2370p9.c = l2.longValue();
        }
        if (bool != null) {
            c2370p9.d = bool.booleanValue();
        }
        return c2370p9;
    }

    public static void a(C2320n9 c2320n9) {
        C2270l9[] c2270l9Arr = c2320n9.c;
        if (c2270l9Arr != null) {
            for (C2270l9 c2270l9 : c2270l9Arr) {
            }
        }
    }
}
