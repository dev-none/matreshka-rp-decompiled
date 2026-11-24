package io.appmetrica.analytics.impl;

import java.util.HashMap;
import java.util.LinkedList;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.e9, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2089e9 extends Kf {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2553wi f6059a;
    public final HashMap b;
    public final C2564x4 c;

    public C2089e9(C2085e5 c2085e5) {
        C2553wi c2553wi = new C2553wi(c2085e5);
        this.f6059a = c2553wi;
        this.c = new C2564x4(c2553wi);
        this.b = a();
    }

    public final HashMap a() {
        HashMap map = new HashMap();
        map.put(EnumC2195ib.EVENT_TYPE_ACTIVATION, new C2157h(this.f6059a));
        map.put(EnumC2195ib.EVENT_TYPE_START, new Il(this.f6059a));
        map.put(EnumC2195ib.EVENT_TYPE_REGULAR, new Lg(this.f6059a));
        C2372pb c2372pb = new C2372pb(this.f6059a);
        map.put(EnumC2195ib.EVENT_TYPE_EXCEPTION_USER_PROTOBUF, c2372pb);
        map.put(EnumC2195ib.EVENT_TYPE_EXCEPTION_USER_CUSTOM_PROTOBUF, c2372pb);
        map.put(EnumC2195ib.EVENT_TYPE_SEND_REFERRER, c2372pb);
        map.put(EnumC2195ib.EVENT_TYPE_CUSTOM_EVENT, c2372pb);
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_SET_SESSION_EXTRA;
        C2553wi c2553wi = this.f6059a;
        map.put(enumC2195ib, new Dl(c2553wi, c2553wi.t));
        map.put(EnumC2195ib.EVENT_TYPE_APP_OPEN, new Sg(this.f6059a));
        map.put(EnumC2195ib.EVENT_TYPE_PURGE_BUFFER, new Wf(this.f6059a));
        map.put(EnumC2195ib.EVENT_TYPE_CURRENT_SESSION_NATIVE_CRASH_PROTOBUF, new C2616z6(this.f6059a));
        map.put(EnumC2195ib.EVENT_TYPE_PREV_SESSION_NATIVE_CRASH_PROTOBUF, new Af(this.f6059a));
        map.put(EnumC2195ib.EVENT_TYPE_EXCEPTION_UNHANDLED_FROM_FILE, new Xn(this.f6059a));
        map.put(EnumC2195ib.EVENT_TYPE_PREV_SESSION_EXCEPTION_UNHANDLED_FROM_FILE, new Bf(this.f6059a));
        map.put(EnumC2195ib.EVENT_TYPE_EXCEPTION_UNHANDLED_PROTOBUF, new Wn(this.f6059a));
        map.put(EnumC2195ib.EVENT_TYPE_ANR, c2372pb);
        EnumC2195ib enumC2195ib2 = EnumC2195ib.EVENT_TYPE_APP_ENVIRONMENT_UPDATED;
        C2553wi c2553wi2 = this.f6059a;
        map.put(enumC2195ib2, new Dl(c2553wi2, c2553wi2.e));
        EnumC2195ib enumC2195ib3 = EnumC2195ib.EVENT_TYPE_APP_ENVIRONMENT_CLEARED;
        C2553wi c2553wi3 = this.f6059a;
        map.put(enumC2195ib3, new Dl(c2553wi3, c2553wi3.f));
        map.put(EnumC2195ib.EVENT_TYPE_SEND_USER_PROFILE, c2372pb);
        EnumC2195ib enumC2195ib4 = EnumC2195ib.EVENT_TYPE_SET_USER_PROFILE_ID;
        C2553wi c2553wi4 = this.f6059a;
        map.put(enumC2195ib4, new Dl(c2553wi4, c2553wi4.k));
        map.put(EnumC2195ib.EVENT_TYPE_SEND_REVENUE_EVENT, c2372pb);
        map.put(EnumC2195ib.EVENT_TYPE_SEND_AD_REVENUE_EVENT, c2372pb);
        map.put(EnumC2195ib.EVENT_TYPE_CLEANUP, c2372pb);
        map.put(EnumC2195ib.EVENT_TYPE_SEND_ECOMMERCE_EVENT, c2372pb);
        map.put(EnumC2195ib.EVENT_TYPE_WEBVIEW_SYNC, c2372pb);
        map.put(EnumC2195ib.EVENT_CLIENT_EXTERNAL_ATTRIBUTION, new L9(this.f6059a));
        return map;
    }

    public final C2553wi b() {
        return this.f6059a;
    }

    public final void a(EnumC2195ib enumC2195ib, AbstractC2520va abstractC2520va) {
        this.b.put(enumC2195ib, abstractC2520va);
    }

    @Override // io.appmetrica.analytics.impl.Kf
    public final AbstractC2064d9 a(int i) {
        LinkedList linkedList = new LinkedList();
        EnumC2195ib enumC2195ibA = EnumC2195ib.a(i);
        C2564x4 c2564x4 = this.c;
        if (c2564x4 != null) {
            c2564x4.a(enumC2195ibA, linkedList);
        }
        AbstractC2520va abstractC2520va = (AbstractC2520va) this.b.get(enumC2195ibA);
        if (abstractC2520va != null) {
            abstractC2520va.a(linkedList);
        }
        return new C2038c9(linkedList);
    }

    public final AbstractC2520va a(EnumC2195ib enumC2195ib) {
        return (AbstractC2520va) this.b.get(enumC2195ib);
    }
}
