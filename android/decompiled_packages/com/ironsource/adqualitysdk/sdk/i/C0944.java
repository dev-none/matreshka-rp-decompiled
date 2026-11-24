package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ⅹ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0944 {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public int f3330 = -1;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final C0944 f3331;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final C0767 f3332;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final String[] f3333;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0588 f3334;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f3335;

    static {
        StringFog.decrypt("GsOBJg==\n", "e7HmVTs05UA=\n");
        StringFog.decrypt("rJbaeg==\n", "zvm+A1xTtFs=\n");
    }

    /* JADX WARN: Unreachable blocks removed: 2, instructions: 4 */
    public C0944(C0588 c0588, String str, JSONObject jSONObject, C0944 c0944) {
        ArrayList arrayList;
        this.f3334 = c0588;
        this.f3335 = AbstractC0289.m8467(str);
        this.f3331 = c0944;
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(StringFog.decrypt("JGwcJQ==\n", "RR57Vv4Lxhs=\n"));
        if (jSONArrayOptJSONArray != null) {
            arrayList = new ArrayList();
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                String strM8467 = AbstractC0289.m8467(jSONArrayOptJSONArray.optString(i));
                if (strM8467 != null) {
                    arrayList.add(strM8467);
                }
            }
        } else {
            arrayList = null;
        }
        String[] strArr = new String[arrayList.size()];
        this.f3333 = strArr;
        arrayList.toArray(strArr);
        String str2 = c0588.f2096;
        String str3 = c0588.f2097;
        try {
            this.f3332 = AbstractC0777.m8719(str2, str, jSONObject.optString(StringFog.decrypt("wKhVcQ==\n", "oscxCAkiMt0=\n")));
        } catch (C0732 e) {
            new C0956(str2, str3, str, m8819(), StringFog.decrypt("/rgn4AWgc4zJuTzhEKBuiM+iOutXpw==\n", "u8pVj3eAA+0=\n") + this.f3335 + StringFog.decrypt("b0eVe2B+pT0tRw==\n", "SGf0D0ASzFM=\n") + (m8819() + e.f2475) + StringFog.decrypt("BDs=\n", "PhuhXZIfoo8=\n") + e.getMessage(), e).m8596(str2);
        } catch (Throwable th) {
            String str4 = StringFog.decrypt("wk/GZFo6bLT1Tt1lTzpxsPNV228IPQ==\n", "hz20CygaHNU=\n") + this.f3335 + StringFog.decrypt("qE+I\n", "j3WoV2pAQXU=\n") + th.getMessage();
            AbstractC0728.m8662(str2, str4, th, new C0956(str2, str3, str, m8819(), str4));
        }
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("FT51Dytlq0VT\n", "c0sbbF8MxCs=\n"));
        sb.append(this.f3335);
        sb.append(StringFog.decrypt("NA==\n", "HNdwxcEg0Ls=\n"));
        sb.append(String.join(StringFog.decrypt("HPs=\n", "MNvjJN5OqeI=\n"), this.f3333));
        sb.append(StringFog.decrypt("ozI=\n", "ihI5rtiKlqk=\n"));
        C0767 c0767 = this.f3332;
        sb.append(c0767 != null ? c0767.toString() : StringFog.decrypt("X+Xv\n", "JMWS1b0oRTU=\n"));
        return sb.toString();
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0847 m8820(C0704 c0704, C0704 c0705, C1013 c1013, List list) {
        HashMap map;
        List listAsList = Arrays.asList(this.f3333);
        if (list.size() != listAsList.size()) {
            AbstractC0728.m8662(c1013.m8859(), this.f3335 + StringFog.decrypt("1oVivfB9QE6TkHes+2ZBCtY=\n", "9ugHyZgSJG4=\n") + listAsList.size() + StringFog.decrypt("lyKouzlmVg3DMPq+OX8TEdIgv7U6bldD\n", "t0Pa3EwLM2M=\n") + list.size(), null, null);
            map = null;
        } else {
            HashMap map2 = new HashMap();
            for (int i = 0; i < list.size(); i++) {
                map2.put((String) listAsList.get(i), list.get(i));
            }
            map = map2;
        }
        C0704 c0706 = new C0704(map, c0705, this, c0704, c0705 == null);
        C0767 c0767 = this.f3332;
        if (c0767 != null) {
            return c0767.m8515(c0706, c1013);
        }
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("0NoRuRfdza3jxwi/C5qErvDcC7kB3YM=\n", "lahj1mX9pMM=\n"));
        sb.append(this.f3335);
        new C1106(c1013, c0706, AbstractC0970.m8850("DY5OMwjLYRVOlAY/Hp9nD0bYTjwC23A=\n", "KrRuXm2/CXo=\n", sb), null).m8596(c1013.m8859());
        return null;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final int m8819() {
        if (this.f3330 == -1) {
            C0944 c0944 = this.f3331;
            if (c0944 == null) {
                this.f3330 = 1;
            } else {
                int iM8819 = c0944.m8819();
                C0767 c0767 = this.f3331.f3332;
                this.f3330 = iM8819 + (c0767 != null ? c0767.mo8373() : 1) + 1;
            }
        }
        return this.f3330;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0847 m8821(C0704 c0704, C1013 c1013, List list) {
        return m8820(c0704, c0704.f2434, c1013, list);
    }
}
