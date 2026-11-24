package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.ISAdQualityAdType;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ი, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0580 {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final String f2065;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final String f2066;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final List f2067;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final JSONObject f2068;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final ISAdQualityAdType f2069;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f2070;

    static {
        StringFog.decrypt("K4hHkg==\n", "X/E394o1yEQ=\n");
        StringFog.decrypt("gOcnNbkt\n", "4YNzTMlIK7o=\n");
        StringFog.decrypt("5VKaUBn5\n", "lTPoMXSKOjw=\n");
        StringFog.decrypt("JIPnXyUg1LUgkw==\n", "ReCTNlNJoNw=\n");
        StringFog.decrypt("D4pYMtvtfZ0ckQ==\n", "eeM9RZ2EEek=\n");
        StringFog.decrypt("G26tfbMXwqArbrtfvwA=\n", "bAvPK9pytdM=\n");
    }

    public C0580(JSONObject jSONObject) {
        this.f2069 = ISAdQualityAdType.UNKNOWN;
        this.f2070 = AbstractC0289.m8467(jSONObject.optString(StringFog.decrypt("HpxBow==\n", "auUxxodnRMs=\n")));
        String strM8467 = AbstractC0289.m8467(jSONObject.optString(StringFog.decrypt("8n9P8X4R\n", "kxsbiA500Rk=\n")));
        if (!TextUtils.isEmpty(strM8467)) {
            this.f2069 = ISAdQualityAdType.fromInt(Integer.parseInt(strM8467));
        }
        this.f2068 = jSONObject.optJSONObject(StringFog.decrypt("pqHNNrJN\n", "1sC/V98+N18=\n"));
        String strDecrypt = StringFog.decrypt("Xn2SNsSBZ7pabQ==\n", "Px7mX7LoE9M=\n");
        List arrayList = new ArrayList();
        String str = AbstractC0939.f3313;
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(strDecrypt);
        this.f2067 = jSONArrayOptJSONArray != null ? AbstractC0939.m8813(jSONArrayOptJSONArray) : arrayList;
        this.f2066 = AbstractC0289.m8467(jSONObject.optString(StringFog.decrypt("HLShJSI3HV4Prw==\n", "at3EUmRecSo=\n")));
        this.f2065 = AbstractC0289.m8467(jSONObject.optString(StringFog.decrypt("I1ANuooHT94TUBuYhhA=\n", "VDVv7ONiOK0=\n")));
    }
}
