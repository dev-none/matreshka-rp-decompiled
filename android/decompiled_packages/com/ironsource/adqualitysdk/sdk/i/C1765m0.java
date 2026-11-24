package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.m0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1765m0 {

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public final List f437;

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public final List f438;

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public final List f439;

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public final List f440;

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public final boolean f441;

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public final boolean f442;

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public final boolean f443;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public final boolean f444;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final boolean f445;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final boolean f446;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final String f447;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final boolean f448;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final String f449;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final String f450;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f451;

    public C1765m0() {
        this.f440 = new ArrayList();
        this.f439 = new ArrayList();
        this.f438 = new ArrayList();
        this.f437 = new ArrayList();
    }

    public C1765m0(JSONObject jSONObject) {
        ArrayList arrayList;
        ArrayList arrayList2;
        ArrayList arrayList3;
        this.f440 = new ArrayList();
        this.f439 = new ArrayList();
        this.f438 = new ArrayList();
        this.f437 = new ArrayList();
        this.f451 = jSONObject.optString(StringFog.decrypt("Yt6TeYrgOIdiybZejvoe\n", "A7rFEO+Xe+s=\n"));
        this.f450 = jSONObject.optString(StringFog.decrypt("HbKY+bksgowfva/3uQ==\n", "fNbOkNxb0u0=\n"));
        this.f449 = jSONObject.optString(StringFog.decrypt("4lGwoIGjQNjrVg==\n", "iCLkz8jNKr0=\n"));
        this.f448 = jSONObject.optBoolean(StringFog.decrypt("ZG9IPGoVaMl0a24HZhJQ1A==\n", "ERwtaw93PqA=\n"));
        jSONObject.optBoolean(StringFog.decrypt("oJ3O5Ee1NYingcbWYbsfhbua\n", "1e6rsyLXduA=\n"));
        this.f447 = jSONObject.optString(StringFog.decrypt("PpueQV8y5+Mz\n", "S+nyES1XgYo=\n"));
        this.f446 = jSONObject.optBoolean(StringFog.decrypt("amYmD0FyOKZCcQ==\n", "AxVobjUbTsM=\n"));
        this.f445 = jSONObject.optBoolean(StringFog.decrypt("irVwdv9dAf2Im25533gB/Zip\n", "7NoCFZoOZJM=\n"));
        this.f444 = jSONObject.optBoolean(StringFog.decrypt("a/6yBjdnE4J8\n", "GZvRc0UUevQ=\n"));
        this.f443 = jSONObject.optBoolean(StringFog.decrypt("HhdcxZ3d1fkIFlD/iA==\n", "a2Q5j/yrtIo=\n"), true);
        this.f442 = jSONObject.optBoolean(StringFog.decrypt("uShKeo7U9FSGKA==\n", "zFsvP/aghjU=\n"));
        this.f441 = jSONObject.optBoolean(StringFog.decrypt("8U3qLwtQs+roWvI/IU2N3ehR0SQcRqHY\n", "gT+FTG4jwLw=\n"), true);
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(StringFog.decrypt("IPe1zgbQ2A==\n", "Vp7QuU+0q44=\n"));
        ArrayList arrayList4 = null;
        if (jSONArrayOptJSONArray != null) {
            arrayList = new ArrayList();
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                Object objOpt = jSONArrayOptJSONArray.opt(i);
                if (objOpt != null) {
                    arrayList.add(objOpt);
                }
            }
        } else {
            arrayList = null;
        }
        if (arrayList != null) {
            this.f440 = arrayList;
        }
        JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray(StringFog.decrypt("LeEzrfEiToAp8ROrzixUhj7n\n", "TIJHxIdLOuk=\n"));
        if (jSONArrayOptJSONArray2 != null) {
            arrayList2 = new ArrayList();
            for (int i2 = 0; i2 < jSONArrayOptJSONArray2.length(); i2++) {
                Object objOpt2 = jSONArrayOptJSONArray2.opt(i2);
                if (objOpt2 != null) {
                    arrayList2.add(objOpt2);
                }
            }
        } else {
            arrayList2 = null;
        }
        if (arrayList2 != null) {
            this.f439 = arrayList2;
        }
        JSONArray jSONArrayOptJSONArray3 = jSONObject.optJSONArray(StringFog.decrypt("c6DMUdokHn1ip8ZUzA==\n", "BcmpJqlwcTQ=\n"));
        if (jSONArrayOptJSONArray3 != null) {
            arrayList3 = new ArrayList();
            for (int i3 = 0; i3 < jSONArrayOptJSONArray3.length(); i3++) {
                Object objOpt3 = jSONArrayOptJSONArray3.opt(i3);
                if (objOpt3 != null) {
                    arrayList3.add(objOpt3);
                }
            }
        } else {
            arrayList3 = null;
        }
        if (arrayList3 != null) {
            this.f438 = arrayList3;
        }
        JSONArray jSONArrayOptJSONArray4 = jSONObject.optJSONArray(StringFog.decrypt("iVMWQJao366FdBJWlQ==\n", "6j93M+XNrPo=\n"));
        if (jSONArrayOptJSONArray4 != null) {
            arrayList4 = new ArrayList();
            for (int i4 = 0; i4 < jSONArrayOptJSONArray4.length(); i4++) {
                Object objOpt4 = jSONArrayOptJSONArray4.opt(i4);
                if (objOpt4 != null) {
                    arrayList4.add(objOpt4);
                }
            }
        }
        if (arrayList4 != null) {
            this.f437 = arrayList4;
        }
    }
}
