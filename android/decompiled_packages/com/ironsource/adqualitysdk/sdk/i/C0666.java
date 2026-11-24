package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᓖ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0666 {

    /* JADX INFO: renamed from: ףּ, reason: contains not printable characters */
    public static final String f2296;

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public static final String f2297;

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public static final String f2298;

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public static final String f2299;

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public static final String f2300;

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public LinkedHashMap f2301;

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public C0704 f2302;

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public S0 f2303;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public String f2304;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final String f2305;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final String f2306;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final String f2307;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final String f2308;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final String f2309;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0704 f2310;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final JSONObject f2311;

    static {
        StringFog.decrypt("WwOKiAaWrsxqL4uIBZy9\n", "GGzk5mP12qM=\n");
        StringFog.decrypt("FnXgTQ==\n", "eBSNKDZbRPM=\n");
        StringFog.decrypt("UalU5C4LaFdUrUI=\n", "NcAnlEJqERk=\n");
        StringFog.decrypt("VW4vXZT6tw==\n", "IwtdLv2V2SI=\n");
        StringFog.decrypt("YFE+wnAY\n", "DThQkRRz0Ns=\n");
        StringFog.decrypt("OglZU0KW\n", "V2ghACb9xA8=\n");
        f2300 = StringFog.decrypt("bA4oddZBikZxHhVEy3OETHEZ\n", "H2pDIbkA7SM=\n");
        f2299 = StringFog.decrypt("85tnKREdnUH3\n", "hP4Ff3h46gs=\n");
        f2298 = StringFog.decrypt("/LJ2mQUy\n", "n90Y6nFBaN8=\n");
        StringFog.decrypt("EZD1cf/PKY4Yj+5g\n", "dvyaE56jauE=\n");
        f2297 = StringFog.decrypt("F142qP7t1g==\n", "ejtbypufpXc=\n");
        f2296 = StringFog.decrypt("kCCFZx7nW4yP\n", "/En2E3uJPv4=\n");
        StringFog.decrypt("RH/F47MycjQ=\n", "JRuDitZeFkc=\n");
    }

    public C0666(String str, C0704 c0704) {
        this.f2311 = new JSONObject();
        try {
            JSONObject jSONObject = new JSONObject(str);
            this.f2311 = jSONObject;
            this.f2310 = c0704;
            this.f2309 = jSONObject.optString(StringFog.decrypt("XK3lJg==\n", "MsyIQ3M0Cac=\n"));
            this.f2308 = jSONObject.optString(StringFog.decrypt("k8HrnLVgpJiWxf0=\n", "96iY7NkB3dY=\n"));
            this.f2307 = jSONObject.optString(StringFog.decrypt("TR9IvmdMNQ==\n", "O3o6zQ4jW9A=\n"));
            this.f2306 = jSONObject.optString(StringFog.decrypt("qwSRkRKA\n", "xm3/wnbrdEg=\n"));
            this.f2305 = jSONObject.optString(StringFog.decrypt("xybglRB8\n", "qkeYxnQXRFY=\n"));
            if (jSONObject.has(StringFog.decrypt("YNF+5K2vi0NpzmX1\n", "B70RhszDyCw=\n"))) {
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(StringFog.decrypt("N5aaTvpfHG4+iYFf\n", "UPr1LJszXwE=\n"));
                Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    this.f2310.m8628(next, jSONObjectOptJSONObject.opt(next));
                }
            }
        } catch (Throwable th) {
            AbstractC0728.m8662(this.f2309, StringFog.decrypt("3RjGGu8uPfj9C8Ac82l+6fcE2hD+ejH4uAnbG/tnOQ==\n", "mGq0dZ0OXoo=\n"), th, null);
        }
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final LinkedHashMap m8613() {
        LinkedHashMap linkedHashMap;
        String str = f2296;
        if (this.f2301 == null) {
            JSONObject jSONObjectOptJSONObject = this.f2311.optJSONObject(str);
            if (jSONObjectOptJSONObject != null) {
                linkedHashMap = new LinkedHashMap();
                Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    linkedHashMap.put(next, new C0588(this.f2309, next, jSONObjectOptJSONObject.optJSONObject(next)));
                }
            } else {
                linkedHashMap = null;
            }
            this.f2301 = linkedHashMap;
        }
        return this.f2301;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0704 m8614() {
        ArrayList arrayList;
        if (this.f2302 == null) {
            C0704 c0704 = new C0704(AbstractC0939.m8812(this.f2311.optJSONObject(f2298), new C0671(this)), this.f2310, true);
            this.f2302 = c0704;
            JSONArray jSONArrayOptJSONArray = this.f2311.optJSONArray(f2297);
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
            if (arrayList != null) {
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    c0704.f2436.put((String) it.next(), null);
                }
            }
        }
        return this.f2302;
    }
}
