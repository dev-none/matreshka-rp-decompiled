package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.ISAdQualityInitError;
import com.ironsource.adqualitysdk.sdk.ISAdQualityInitListener;
import com.ironsource.adqualitysdk.sdk.IronSourceAdQuality;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ւ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0418 {

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public final C0935 f1522;

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public final C0719 f1523;

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public final C0345 f1524;

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public final String f1525;

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public volatile C0331 f1526;

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public static final String f1521 = StringFog.decrypt("j0XOXksxPMa+Z8FeTzUt2w==\n", "zCqgMC5SSKk=\n");

    /* JADX INFO: renamed from: ףּ, reason: contains not printable characters */
    public static final String f1520 = StringFog.decrypt("0syu1wq4hg==\n", "l4LvlUb9wpE=\n");

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final AtomicBoolean f1535 = new AtomicBoolean(false);

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public boolean f1534 = false;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public volatile ArrayList f1533 = new ArrayList();

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final ArrayList f1532 = new ArrayList();

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final HashMap f1531 = new HashMap();

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final HashMap f1530 = new HashMap();

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final C0429 f1529 = new C0429();

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public C0704 f1528 = C0704.m8624();

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public HashMap f1527 = new HashMap();

    static {
        StringFog.decrypt("vmkb+EjjACA=\n", "+iBIuQqvRWQ=\n");
    }

    public C0418(C0719 c0719, C0763 c0763, String str, C0331 c0331, C0345 c0345) {
        this.f1523 = c0719;
        C0935 c0935 = new C0935(AbstractC1766n.f457, c0763);
        this.f1522 = c0935;
        AbstractC1104.f3933 = new WeakReference(c0935);
        c0935.f3306.add(new C0525(this));
        this.f1525 = str;
        this.f1526 = c0331;
        this.f1524 = c0345;
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static ArrayList m8516(C0418 c0418) {
        ArrayList arrayList;
        synchronized (c0418) {
            arrayList = c0418.f1532;
        }
        return arrayList;
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static HashMap m8517(C0418 c0418) {
        HashMap map;
        synchronized (c0418) {
            map = c0418.f1531;
        }
        return map;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static void m8518(C0418 c0418) {
        synchronized (c0418) {
            C1775s.m8416();
            C0331 c0331 = c0418.f1526;
            if (c0331 == null) {
                return;
            }
            if (c0331.m8493(c0418.m8523())) {
                ((C0345) c0418.m8528()).adQualitySdkInitSuccess();
            } else {
                ((C0345) c0418.m8528()).adQualitySdkInitFailed(ISAdQualityInitError.CONNECTOR_LOAD_TIMEOUT, StringFog.decrypt("2oc2RRL5i173nHlUDreSXuaNNkoS9oFe8MhlUx70gEjnjmNKEe4=\n", "lOgWJn2X5Ts=\n"));
            }
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static HashMap m8519(C0418 c0418) {
        HashMap map;
        synchronized (c0418) {
            map = c0418.f1530;
        }
        return map;
    }

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final synchronized void m8522() {
        if (this.f1535.getAndSet(true)) {
            return;
        }
        C0331 c0331 = this.f1526;
        AbstractC1766n.m8388(new C0492(this));
        if (c0331 != null) {
            AbstractC1766n.m8384(new C0365(c0331));
        }
        this.f1526 = null;
    }

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final synchronized boolean m8523() {
        return AbstractC0895.m8747().mo8750();
    }

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final synchronized boolean m8524() {
        return this.f1534;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static JSONObject m8520(C0418 c0418, C0929 c0929) {
        c0418.getClass();
        String strM8499 = c0929.f3281.m8499();
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(AbstractC1033.f3716, strM8499);
        } catch (JSONException e) {
            String str = f1521;
            AbstractC0323.m8479(str, str, StringFog.decrypt("Abm483ZoUGshqr71ai8TeiulpPlnPFxrZL2v7nchXHdkobnzag==\n", "RMvKnARIMxk=\n"), e, null, false);
        }
        try {
            jSONObject.put(AbstractC1033.f3717, c0929.f3284.f2307);
        } catch (JSONException e2) {
            String str2 = f1521;
            AbstractC0323.m8479(str2, str2, StringFog.decrypt("sUVaw9YTK0qRVlzFylRoW5tZRsnHRydK1EFN3tdaJ1bUXVvDyg==\n", "9DcorKQzSDg=\n"), e2, null, false);
        }
        return jSONObject;
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final synchronized List m8525() {
        return this.f1533;
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final JSONObject m8526() {
        HashMap map;
        try {
            synchronized (this) {
                map = this.f1531;
            }
            return m8521(map);
        } catch (JSONException e) {
            String str = f1521;
            AbstractC0323.m8479(str, str, StringFog.decrypt("q+gh6yHZ1LiK8z3jc5rasoD/MPA8i5Wqi+gg7TyXxg==\n", "7ppThFP5tdw=\n"), e, null, false);
            return new JSONObject();
        }
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final synchronized HashMap m8527() {
        return this.f1530;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized void m8529(Context context, C0259 c0259, LinkedHashMap linkedHashMap) {
        if (this.f1535.get()) {
            return;
        }
        if (m8524()) {
            AbstractC1766n.m8384(new C0513(c0259));
            return;
        }
        String strDecrypt = StringFog.decrypt("KlblxGN2dPYSYfD6\n", "azK0sQIaHYI=\n");
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("/MB6QGN0+/j8wHpAY3T2vKOCOT4hLKS2tM0WCR8st7m4mS5N\n", "0e1XbU5Z1tU=\n"));
        sb.append(IronSourceAdQuality.getSDKVersion());
        AbstractC0323.m8480(strDecrypt, strDecrypt, AbstractC0970.m8850("OtDYvioksqk30Ni+KiSy\n", "Gv31kwcJn4Q=\n", sb), true);
        boolean zM8523 = m8523();
        AbstractC1766n.m8384(new C0511(this, linkedHashMap, zM8523, context, AbstractC0895.m8747().mo8751()));
        C0496 c0496 = new C0496(this, c0259, context, linkedHashMap);
        if (zM8523) {
            String str = AbstractC0702.f2427;
            ArrayList arrayList = new ArrayList(Arrays.asList(new C0204(), new C0217(), new C0242()));
            ArrayList arrayList2 = new ArrayList(AbstractC0702.f2426);
            if (!arrayList.isEmpty()) {
                AbstractC1766n.m8384(new C0473(this, (String) arrayList2.remove(0), context, (AbstractC0265) arrayList.remove(0), arrayList.isEmpty() ? c0496 : new C0483(this, context, arrayList, arrayList2, c0496)));
            }
        } else {
            AbstractC1766n.m8384(new C0473(this, AbstractC0702.f2427, context, new C0209(), c0496));
        }
        this.f1534 = true;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8531(Context context, LinkedHashMap linkedHashMap, C0448 c0448) {
        boolean zMo8748;
        if (linkedHashMap.size() > 0) {
            String str = (String) linkedHashMap.keySet().iterator().next();
            List list = (List) linkedHashMap.remove(str);
            String strMo8324 = (list == null || list.isEmpty() || list.get(0) == null) ? null : ((AbstractC0265) list.get(0)).mo8324();
            if (strMo8324 != null) {
                AbstractC1766n.m8386(new C0642(this, strMo8324, context, str, list, linkedHashMap, c0448));
                synchronized (this) {
                    zMo8748 = AbstractC0895.m8747().mo8748();
                }
                if (zMo8748) {
                    return;
                }
                m8531(context, linkedHashMap, c0448);
                return;
            }
            m8531(context, linkedHashMap, c0448);
            return;
        }
        AbstractC1766n.m8388(new C0628(c0448));
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8533(String str, JSONObject jSONObject) {
        C0331 c0331 = this.f1526;
        if (c0331 != null) {
            AbstractC1766n.m8384(new C0376(c0331, str, EnumC0398.f1489));
        }
        if (jSONObject != null) {
            try {
                jSONObject.put(StringFog.decrypt("bELT\n", "CCGguhHy2EE=\n"), true);
            } catch (JSONException unused) {
            }
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8530(Context context, String str, String str2, AbstractC0265 abstractC0265, AbstractRunnableC0910 abstractRunnableC0910) {
        HashMap map;
        int iMo8766;
        long j;
        AbstractC0620 c0660 = null;
        C0613 c0613 = abstractRunnableC0910 == null ? null : new C0613(new AtomicBoolean(false), abstractRunnableC0910);
        abstractC0265.getClass();
        String strMo8767 = AbstractC0895.m8747().mo8767();
        if (((C0896) AbstractC0895.m8747()).f3176.m8511()) {
            String strM8512 = ((C0896) AbstractC0895.m8747()).f3176.m8512(abstractC0265.mo8458());
            if (!TextUtils.isEmpty(strM8512)) {
                c0660 = new C0621(StringFog.decrypt("l9kikzwCGzKGxWM=\n", "9LZM/Vlhb10=\n") + abstractC0265.mo8458(), strMo8767, strM8512);
            }
        } else {
            c0660 = new C0660(StringFog.decrypt("7fSwii5iEYP86PE=\n", "jpve5EsBZew=\n") + abstractC0265.mo8458(), strMo8767);
        }
        AbstractC0620 abstractC0620 = c0660;
        if (abstractC0620 != null) {
            AbstractC0349 abstractC0349Mo8323 = abstractC0265.mo8323();
            String strM8499 = abstractC0349Mo8323.m8499();
            synchronized (this) {
                map = this.f1531;
            }
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.put(AbstractC1033.f3716, strM8499);
            } catch (JSONException e) {
                String str3 = f1521;
                AbstractC0323.m8479(str3, str3, StringFog.decrypt("Abm483ZoUGshqr71ai8TeiulpPlnPFxrZL2v7nchXHdkobnzag==\n", "RMvKnARIMxk=\n"), e, null, false);
            }
            map.put(str2, jSONObject);
            C0331 c0331 = this.f1526;
            if (c0331 != null) {
                AbstractC1766n.m8384(new C0376(c0331, str2, EnumC0398.f1492));
            }
            C0719 c0719 = this.f1523;
            c0719.getClass();
            C0581 c0581 = new C0581(this, context, this.f1523.m8660(abstractC0620, new C0610(this, c0719.f2458.m8723(C0719.m8657(abstractC0620).mo8598().replace(StringFog.decrypt("Vw==\n", "eAvz17XdJPs=\n"), StringFog.decrypt("9Q==\n", "2xR8/nPm9uo=\n"))) != null, str2, context, abstractC0349Mo8323, str, abstractC0265, c0613)), abstractC0349Mo8323, str, str2, abstractC0265, c0613);
            if (AbstractC0895.m8747().mo8752()) {
                iMo8766 = AbstractC0895.m8747().mo8766();
            } else {
                C0719 c07110 = this.f1523;
                c07110.getClass();
                if (c07110.f2458.m8723(C0719.m8657(abstractC0620).mo8598().replace(StringFog.decrypt("Vw==\n", "eAvz17XdJPs=\n"), StringFog.decrypt("9Q==\n", "2xR8/nPm9uo=\n"))) != null) {
                    j = 0;
                } else {
                    iMo8766 = AbstractC0895.m8747().mo8766();
                }
                AbstractC1766n.m8389(c0581, j);
                return;
            }
            j = iMo8766;
            AbstractC1766n.m8389(c0581, j);
            return;
        }
        AbstractC1766n.m8388(c0613);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final boolean m8534(String str) {
        return this.f1527.containsKey(str) && ((C0653) this.f1527.get(str)).m8608(this.f1525);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static JSONObject m8521(HashMap map) throws JSONException {
        JSONObject jSONObject = new JSONObject();
        JSONObject jSONObject2 = new JSONObject();
        for (String str : new HashSet(map.keySet())) {
            jSONObject2.put(str.toLowerCase(), (JSONObject) map.get(str));
        }
        jSONObject.put(StringFog.decrypt("Pq56fg==\n", "SN0UDSijGbc=\n"), jSONObject2);
        return jSONObject;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8532(String str, List list) {
        ArrayList arrayList;
        if (this.f1535.get()) {
            return;
        }
        if (this.f1533 != null) {
            arrayList = new ArrayList(this.f1533);
        } else {
            arrayList = new ArrayList();
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            for (C1013 c1013 : ((C0929) it.next()).m8806()) {
                c1013.getClass();
                String str2 = C1013.f3663 + str;
                AbstractC1766n.m8385(new C0507(c1013, str2, list));
                AbstractC1766n.m8384(new C0491(c1013, str2, list));
                try {
                    AbstractC1766n.m8386(new C0442(new C0452(c1013, str2, list)));
                } catch (Throwable unused) {
                }
            }
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized ISAdQualityInitListener m8528() {
        return this.f1524;
    }
}
