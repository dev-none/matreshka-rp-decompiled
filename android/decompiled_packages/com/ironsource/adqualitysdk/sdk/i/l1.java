package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Arrays;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class l1 extends C0336 {

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public final String f434;

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public final String f435;

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public final String f436;

    public l1() {
    }

    public l1(JSONObject jSONObject) {
        this.f435 = jSONObject.optString(StringFog.decrypt("twRZE0Xt1jWsAEg2YunME5ATXiNF8A==\n", "wGE7RSyIoXY=\n"));
        this.f436 = jSONObject.optString(StringFog.decrypt("VLTzDzV8i69Rk/cVEw==\n", "It2WeHYQ6tw=\n"));
        this.f434 = jSONObject.optString(StringFog.decrypt("dR2BUywK1xhgC6NEJxjoCQ==\n", "BXzzNkJ+gXE=\n"));
        this.f1316 = jSONObject.optString(StringFog.decrypt("e5CKiKjxkBFylw==\n", "EePe5+Gf+nQ=\n"));
        this.f1314 = false;
        this.f1311 = !TextUtils.isEmpty(jSONObject.optString(StringFog.decrypt("PJDqVl+fuvs1lw==\n", "VuO+ORbx0J4=\n"))) || jSONObject.optBoolean(StringFog.decrypt("cMNREoam9zpgx3cpiqHPJw==\n", "BbA0RePEoVM=\n")) || jSONObject.optBoolean(StringFog.decrypt("urMQoQ5i1ti9rxiTKGz81aG0\n", "z8B19msAlbA=\n"));
        this.f1310 = jSONObject.optBoolean(StringFog.decrypt("GZGOEHNe10MJlagrf1nvXg==\n", "bOLrRxY8gSo=\n"));
        this.f1309 = jSONObject.optBoolean(StringFog.decrypt("9QKjs2qxrx/KAg==\n", "gHHG9hLF3X4=\n"));
        ArrayList arrayList = null;
        this.f1315 = TextUtils.isEmpty(jSONObject.optString(StringFog.decrypt("A0evXht5sJYO\n", "djXDDmkc1v8=\n"))) ? null : Arrays.asList(jSONObject.optString(StringFog.decrypt("M2MSiwQ3qFw+\n", "RhF+23ZSzjU=\n")).split(StringFog.decrypt("hw==\n", "qwe51gUr5fs=\n")));
        this.f1313 = jSONObject.optBoolean(StringFog.decrypt("wNBEM74ftrTW0UgJqw==\n", "taMhed9p18c=\n"), true);
        this.f1312 = false;
        this.f1308 = jSONObject.optBoolean(StringFog.decrypt("QhNiRRJn7h5mCH1FGnnhHlw=\n", "L2YOMXsXgns=\n"));
        this.f1307 = jSONObject.optBoolean(StringFog.decrypt("bRKtkEUEaKZw\n", "BH/d3ytUB9U=\n"));
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(StringFog.decrypt("DvGVh0ew+cEf9p+CUQ==\n", "eJjw8DTklog=\n"));
        if (jSONArrayOptJSONArray != null) {
            arrayList = new ArrayList();
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                Object objOpt = jSONArrayOptJSONArray.opt(i);
                if (objOpt != null) {
                    arrayList.add(objOpt);
                }
            }
        }
        if (arrayList != null) {
            this.f1306 = arrayList;
        }
    }
}
