package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.text.TextUtils;
import android.view.View;
import android.webkit.WebView;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.WeakHashMap;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.n0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1767n0 extends AbstractC0963 {

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public static final String f459 = StringFog.decrypt("rqnXw3vOR3OZrtbYX9g=\n", "+MCytDqqNDs=\n");

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public C1765m0 f461;

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public Class f462;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final C1757i0 f465;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public C0433 f467;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final WeakHashMap f468 = new WeakHashMap();

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public final WeakHashMap f464 = new WeakHashMap();

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public final WeakHashMap f463 = new WeakHashMap();

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public final ArrayList f460 = new ArrayList();

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final ViewOnLayoutChangeListenerC1755h0 f466 = new ViewOnLayoutChangeListenerC1755h0(this);

    public C1767n0(JSONObject jSONObject, C0433 c0433) {
        this.f461 = new C1765m0();
        this.f461 = new C1765m0(jSONObject);
        this.f467 = c0433;
        C1757i0 c1757i0 = new C1757i0(this);
        this.f465 = c1757i0;
        C0697.m8619().m8621(c1757i0);
    }

    /* JADX WARN: Code duplicated, block: B:28:0x0096  */
    /* JADX WARN: Code duplicated, block: B:30:0x009a  */
    /* JADX WARN: Code duplicated, block: B:32:0x00a4  */
    /* JADX WARN: Code duplicated, block: B:33:0x00b3  */
    /* JADX WARN: Code duplicated, block: B:35:0x00b7  */
    /* JADX WARN: Code duplicated, block: B:36:0x00c1  */
    /* JADX WARN: Code duplicated, block: B:38:0x00d7  */
    /* JADX WARN: Code duplicated, block: B:42:0x00e6  */
    /* JADX WARN: Code duplicated, block: B:55:0x0159 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:57:0x0159 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:65:0x00f4 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:68:0x00e0 A[ADDED_TO_REGION, REMOVE, SYNTHETIC] */
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8390(C1767n0 c1767n0, ArrayList arrayList) {
        ArrayList<WebView> arrayList2;
        C0944 c0944;
        C1013 c1013;
        C0704 c0704;
        c1767n0.getClass();
        for (int i = 0; i < arrayList.size(); i++) {
            View view = (View) arrayList.get(i);
            C1765m0 c1765m0 = c1767n0.f461;
            if (c1767n0.f467 != null) {
                List list = c1765m0.f437;
                if (list == null || list.isEmpty()) {
                    C0433 c0433 = c1767n0.f467;
                    c0944 = c0433.f1569;
                    c1013 = c0433.f1568;
                    c0704 = c1013.f3677;
                    if (c0944.m8820(c0704, c0704.f2434, c1013, Collections.singletonList(view)).m8737()) {
                        if (!c1765m0.f446) {
                            arrayList2 = new ArrayList();
                            AbstractC1769o0.m8402(view, WebView.class, null, false, c1765m0.f444, c1765m0.f440, c1765m0.f438, arrayList2);
                            if (view instanceof WebView) {
                                arrayList2.add((WebView) view);
                            }
                            for (WebView webView : arrayList2) {
                                if (c1767n0.f464.get(webView) != null && webView.getClass().getName().startsWith(c1765m0.f450)) {
                                    N0 n0 = new N0();
                                    c1767n0.f468.put(webView, n0);
                                    String str = c1765m0.f449;
                                    List listAsList = TextUtils.isEmpty(c1765m0.f447) ? null : Arrays.asList(c1765m0.f447.split(StringFog.decrypt("Ug==\n", "fnLQVlVH4zs=\n")));
                                    boolean z = c1765m0.f443;
                                    boolean z2 = c1765m0.f448;
                                    boolean z3 = c1765m0.f442;
                                    n0.f234 = z;
                                    n0.f230 = new V0(str, z3);
                                    n0.f233 = z2;
                                    n0.f236 = listAsList;
                                    n0.f3380 = new C1763l0(c1767n0);
                                    n0.m8338(webView);
                                    n0.f235 = Integer.toHexString(webView.hashCode());
                                    c1767n0.f464.put(webView, c1767n0);
                                }
                            }
                        } else if (((C1767n0) c1767n0.f464.get(view)) == null) {
                            c1767n0.f464.put(view, c1767n0);
                            c1767n0.mo8335(new JSONObject(), view, null);
                        } else if (c1765m0.f445) {
                            c1767n0.mo8335(new JSONObject(), view, null);
                        }
                    }
                } else {
                    String name = view.getClass().getPackage().getName();
                    Iterator it = list.iterator();
                    while (true) {
                        if (it.hasNext()) {
                            String strJoin = (String) it.next();
                            if (TextUtils.isEmpty(strJoin)) {
                                strJoin = null;
                            } else {
                                List listAsList2 = Arrays.asList(strJoin.split(StringFog.decrypt("KrdN\n", "cZkQegOTZ7Y=\n")));
                                if (listAsList2.size() > 3) {
                                    strJoin = TextUtils.join(StringFog.decrypt("zA==\n", "4qh3epOZeRI=\n"), listAsList2.subList(0, 3));
                                }
                            }
                            if (!TextUtils.isEmpty(strJoin) && name.startsWith(strJoin)) {
                                C0433 c0434 = c1767n0.f467;
                                c0944 = c0434.f1569;
                                c1013 = c0434.f1568;
                                c0704 = c1013.f3677;
                                if (c0944.m8820(c0704, c0704.f2434, c1013, Collections.singletonList(view)).m8737()) {
                                    if (!c1765m0.f446) {
                                        arrayList2 = new ArrayList();
                                        AbstractC1769o0.m8402(view, WebView.class, null, false, c1765m0.f444, c1765m0.f440, c1765m0.f438, arrayList2);
                                        if (view instanceof WebView) {
                                            arrayList2.add((WebView) view);
                                        }
                                        while (r3.hasNext()) {
                                            if (c1767n0.f464.get(webView) != null) {
                                            }
                                        }
                                    } else if (((C1767n0) c1767n0.f464.get(view)) == null) {
                                        c1767n0.f464.put(view, c1767n0);
                                        c1767n0.mo8335(new JSONObject(), view, null);
                                    } else if (c1765m0.f445) {
                                        c1767n0.mo8335(new JSONObject(), view, null);
                                    }
                                }
                            }
                        }
                    }
                }
            } else if (!c1765m0.f446) {
                arrayList2 = new ArrayList();
                AbstractC1769o0.m8402(view, WebView.class, null, false, c1765m0.f444, c1765m0.f440, c1765m0.f438, arrayList2);
                if (view instanceof WebView) {
                    arrayList2.add((WebView) view);
                }
                while (r3.hasNext()) {
                    if (c1767n0.f464.get(webView) != null) {
                    }
                }
            } else if (((C1767n0) c1767n0.f464.get(view)) == null) {
                c1767n0.f464.put(view, c1767n0);
                c1767n0.mo8335(new JSONObject(), view, null);
            } else if (c1765m0.f445) {
                c1767n0.mo8335(new JSONObject(), view, null);
            }
        }
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final void m8391(View view) {
        Activity activityM8403;
        try {
            if (this.f462 == null) {
                this.f462 = Class.forName(this.f461.f451);
            }
            Activity activityMo8870 = AbstractC1041.m8867().mo8870();
            if (activityMo8870 == null) {
                return;
            }
            if (this.f461.f439.isEmpty() || (activityM8403 = AbstractC1769o0.m8403(view)) == null || !this.f461.f439.contains(activityM8403.getClass().getName())) {
                AbstractC1766n.m8388(new C1761k0(this, activityMo8870, view));
            }
        } catch (Throwable th) {
            AbstractC0323.m8470(f459, StringFog.decrypt("UVKOBOcgPHlgVJUF8iA4cHVTj0s=\n", "FCD8a5UAWxw=\n") + this.f461.f451 + StringFog.decrypt("uHJ3\n", "mF9XQ+EnI54=\n") + th.getLocalizedMessage());
            m8392();
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0963
    /* JADX INFO: renamed from: ﾒ */
    public final /* bridge */ /* synthetic */ String mo8337(Object obj) {
        return null;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8392() {
        this.f3380 = null;
        C0697.m8619().m8620(this.f465);
        HashSet hashSet = new HashSet(this.f463.keySet());
        this.f463.clear();
        Iterator it = hashSet.iterator();
        while (it.hasNext()) {
            ((View) it.next()).removeOnLayoutChangeListener(this.f466);
        }
    }
}
