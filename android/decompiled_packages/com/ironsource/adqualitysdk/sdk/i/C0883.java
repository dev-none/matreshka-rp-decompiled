package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ỉ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0883 extends AbstractC0904 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final HashMap f3137 = new HashMap();

    public C0883(HashMap map) {
        for (String str : map.keySet()) {
            this.f3137.put(AbstractC0289.m8467(str), (AbstractC0904) map.get(str));
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        HashMap map = this.f3137;
        HashMap map2 = ((C0883) obj).f3137;
        if (map != null) {
            return map.equals(map2);
        }
        return map2 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final int hashCode() {
        HashMap map = this.f3137;
        if (map != null) {
            return map.hashCode();
        }
        return 0;
    }

    public final String toString() {
        if (this.f3137.isEmpty()) {
            return StringFog.decrypt("MbM=\n", "Ss4XxY/5USo=\n");
        }
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("WtY=\n", "IfbkbAyVXRU=\n"));
        boolean z = true;
        for (String str : this.f3137.keySet()) {
            if (!z) {
                sb.append(StringFog.decrypt("Ptw=\n", "EvyP4xl7e5E=\n"));
            }
            sb.append(StringFog.decrypt("uQ==\n", "m+GUnLV3FI8=\n"));
            sb.append(str);
            sb.append(StringFog.decrypt("Z+rN\n", "RdDt1C4TwMs=\n"));
            sb.append(this.f3137.get(str));
            z = false;
        }
        sb.append(StringFog.decrypt("xVQ=\n", "5SmoZki6mvU=\n"));
        return sb.toString();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        JSONObject jSONObject = new JSONObject();
        for (String str : this.f3137.keySet()) {
            C0847 c0847M8777 = ((AbstractC0904) this.f3137.get(str)).m8777(c0704, c1013);
            try {
                jSONObject.put(str, c0847M8777.f3060);
            } catch (JSONException e) {
                StringBuilder sb = new StringBuilder();
                sb.append(StringFog.decrypt("PGX2pM3kWBMNY+2l2ORBBRZ5pL3eqF4TWQ==\n", "eReEy7/EK3Y=\n"));
                sb.append(c0847M8777.f3060);
                throw new C1106(c1013, c0704, AbstractC0343.m8497("ivfz712D9ZiK\n", "qpGcnX3okOE=\n", sb, str), e);
            }
        }
        return new C0847(jSONObject);
    }
}
