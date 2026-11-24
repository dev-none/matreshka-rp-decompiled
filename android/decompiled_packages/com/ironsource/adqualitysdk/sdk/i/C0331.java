package com.ironsource.adqualitysdk.sdk.i;

import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ε, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0331 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public ArrayList f1208;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public C0648 f1209;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final C0375 f1210;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public C1003 f1211;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final HashMap f1212 = new HashMap();

    public C0331(C0375 c0375) {
        this.f1210 = c0375;
        new Handler(Looper.getMainLooper());
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static ArrayList m8491(boolean z) {
        ArrayList arrayList = new ArrayList();
        if (!z) {
            arrayList.add(AbstractC0702.f2427.toLowerCase());
            return arrayList;
        }
        Iterator it = AbstractC0702.f2426.iterator();
        while (it.hasNext()) {
            arrayList.add(((String) it.next()).toLowerCase());
        }
        return arrayList;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final synchronized boolean m8493(boolean z) {
        C0396 c0396M8494;
        boolean z2;
        C0396 c0396M8495;
        ArrayList arrayListM8491 = m8491(z);
        Iterator it = arrayListM8491.iterator();
        do {
            if (!it.hasNext()) {
                HashMap map = this.f1212;
                if (map != null && !map.isEmpty()) {
                    for (String str : map.keySet()) {
                        z2 = (arrayListM8491.contains(str) || (c0396M8494 = m8494(str)) == null || c0396M8494.f1478 != EnumC0398.f1490) ? false : true;
                    }
                    break;
                }
                break;
            }
            c0396M8495 = m8494((String) it.next());
            if (c0396M8495 == null) {
                break;
            }
        } while (c0396M8495.f1478 == EnumC0398.f1490);
        return z2;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8492(C0331 c0331, String str, C0396 c0396) {
        EnumC0398 enumC0398;
        EnumC0398 enumC0399;
        ArrayList arrayList;
        EnumC0398 enumC03910;
        C1003 c1003 = c0331.f1211;
        if (c1003 != null && (enumC0399 = c0396.f1478) != EnumC0398.f1492 && enumC0399 != EnumC0398.f1491 && enumC0399 != EnumC0398.f1493 && !c1003.f3628) {
            String str2 = AbstractC0202.f862;
            c1003.f3624 = SystemClock.elapsedRealtime();
            c1003.f3623 = AbstractC1148.m8951(c1003.f3631.f1214);
            if (c1003.f3622 && !c1003.f3620) {
                Handler handler = c1003.f3630;
                if (handler != null) {
                    handler.removeCallbacksAndMessages(null);
                }
                Handler handler2 = c1003.f3630;
                if (handler2 != null) {
                    handler2.postDelayed(new C1032(c1003), c1003.f3621);
                }
            }
            if (c1003.f3627) {
                HashMap map = c1003.f3633.f1362.f1212;
                if (map != null && !map.isEmpty()) {
                    arrayList = new ArrayList(map.values());
                } else {
                    arrayList = new ArrayList();
                }
                Iterator it = arrayList.iterator();
                do {
                    if (it.hasNext()) {
                        enumC03910 = ((C0396) it.next()).f1478;
                        if (enumC03910 == EnumC0398.f1492 || enumC03910 == EnumC0398.f1491) {
                            break;
                        }
                    } else {
                        c1003.m8853(false);
                        break;
                    }
                } while (enumC03910 != EnumC0398.f1493);
            }
        }
        if (c0331.f1209 == null || !c0331.f1208.contains(str)) {
            return;
        }
        Iterator it2 = c0331.f1208.iterator();
        while (it2.hasNext()) {
            C0396 c0396M8494 = c0331.m8494((String) it2.next());
            if (c0396M8494 == null || c0396M8494.f1478 != EnumC0398.f1490) {
                Iterator it3 = c0331.f1208.iterator();
                while (it3.hasNext()) {
                    C0396 c0396M8495 = c0331.m8494((String) it3.next());
                    if (c0396M8495 != null && ((enumC0398 = c0396M8495.f1478) == EnumC0398.f1488 || enumC0398 == EnumC0398.f1489)) {
                        C0648 c0648 = c0331.f1209;
                        c0648.f2256 = true;
                        for (C0649 c0649 : new ArrayList(c0648.f2258)) {
                            if (!c0649.f2260) {
                                c0649.f2260 = true;
                                C0331 c0332 = c0648.f2259;
                                String str3 = c0649.f2263;
                                EnumC0405 enumC0405 = EnumC0405.f1501;
                                c0332.getClass();
                                AbstractC1766n.m8384(new C0394(c0332, str3, enumC0405));
                            }
                        }
                        return;
                    }
                }
                return;
            }
        }
        C0648 c06410 = c0331.f1209;
        c06410.f2257 = true;
        c06410.f2256 = false;
        ArrayList<C0649> arrayList2 = new ArrayList(c06410.f2258);
        c06410.f2258.clear();
        long jCurrentTimeMillis = System.currentTimeMillis();
        for (C0649 c06411 : arrayList2) {
            C0331 c0333 = c06410.f2259;
            String str4 = c06411.f2263;
            long j = jCurrentTimeMillis - c06411.f2261;
            C0396 c0396M8496 = c0333.m8494(str4);
            if (c0396M8496 != null) {
                c0396M8496.f1472 = j;
            }
            AbstractC1766n.m8388(c06411.f2262.f1470);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final JSONObject m8495() throws JSONException {
        ArrayList<C0396> arrayList;
        JSONObject jSONObject = new JSONObject();
        HashMap map = this.f1212;
        if (map != null && !map.isEmpty()) {
            arrayList = new ArrayList(map.values());
        } else {
            arrayList = new ArrayList();
        }
        for (C0396 c0396 : arrayList) {
            String str = c0396.f1485;
            JSONObject jSONObject2 = new JSONObject();
            try {
                jSONObject2.put(AbstractC1033.f3717, c0396.f1483);
                if (c0396.f1476) {
                    jSONObject2.put(StringFog.decrypt("ikAqcfG9\n", "6SFJGZTZ080=\n"), true);
                }
                jSONObject2.put(StringFog.decrypt("XLqa6HBM\n", "L877nAU/VEU=\n"), c0396.f1478.name());
                if (c0396.f1477 != EnumC0405.f1508) {
                    jSONObject2.put(StringFog.decrypt("Ah4/soc=\n", "Z2xN3fX37m8=\n"), c0396.f1478 == EnumC0398.f1488 ? c0396.f1477.name() : null);
                    EnumC0405 enumC0405 = c0396.f1477;
                    if (enumC0405 == EnumC0405.f1506 || enumC0405 == EnumC0405.f1507) {
                        jSONObject2.put(AbstractC1033.f3716, c0396.f1482);
                        if (c0396.f1477 == EnumC0405.f1507) {
                            jSONObject2.put(StringFog.decrypt("juQECDRjg0A=\n", "/IF1fEQV5jI=\n"), c0396.f1479);
                        }
                    }
                }
                if (c0396.f1474 > 0 && !c0396.f1476) {
                    jSONObject2.put(StringFog.decrypt("zBw=\n", "qmiq7wdQi40=\n"), c0396.f1474 - c0396.f1475);
                }
                if (c0396.f1473 > 0) {
                    jSONObject2.put(StringFog.decrypt("nfs=\n", "9I+thvOL+yQ=\n"), c0396.f1473 - c0396.f1474);
                }
                if (c0396.f1472 >= 0) {
                    jSONObject2.put(StringFog.decrypt("h7D9\n", "9MeJgs/HPC8=\n"), c0396.f1472);
                }
            } catch (JSONException unused) {
            }
            jSONObject.put(str, jSONObject2);
        }
        return jSONObject;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0396 m8494(String str) {
        HashMap map = this.f1212;
        if (map != null) {
            return (C0396) map.get(str);
        }
        return null;
    }
}
