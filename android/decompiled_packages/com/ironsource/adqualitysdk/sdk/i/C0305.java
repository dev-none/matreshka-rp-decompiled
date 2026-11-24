package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ˍ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0305 extends AbstractC0456 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final AbstractC0904 f1167;

    public C0305(AbstractC0904 abstractC0904, AbstractC0904 abstractC0905, AbstractC0904 abstractC0906) {
        super(abstractC0904, abstractC0905);
        this.f1167 = abstractC0906;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0456, com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        AbstractC0904 abstractC0904 = this.f1167;
        AbstractC0904 abstractC0905 = ((C0305) obj).f1167;
        if (abstractC0904 != null) {
            return abstractC0904.equals(abstractC0905);
        }
        return abstractC0905 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0456, com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final int hashCode() {
        int iHashCode = super.hashCode() * 31;
        AbstractC0904 abstractC0904 = this.f1167;
        return iHashCode + (abstractC0904 != null ? abstractC0904.hashCode() : 0);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0456
    public final String toString() {
        return super.toString() + StringFog.decrypt("YhJ0\n", "Qi9UZN6YlbU=\n") + this.f1167.toString();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        C0847 c0847M8777 = this.f1723.m8777(c0704, c1013);
        C0847 c0847M8778 = this.f1167.m8777(c0704, c1013);
        try {
            Object obj = this.f1724.m8777(c0704, c1013).f3060;
            if (obj instanceof JSONObject) {
                ((JSONObject) obj).put((String) c0847M8777.f3060, c0847M8778.f3060);
                return c0847M8778;
            }
            if (obj instanceof JSONArray) {
                ((JSONArray) obj).put(c0847M8777.m8736().intValue(), c0847M8778.f3060);
                return c0847M8778;
            }
            if (obj instanceof Map) {
                ((Map) obj).put(c0847M8777.f3060, c0847M8778.f3060);
                return c0847M8778;
            }
            if (obj instanceof List) {
                ((List) obj).set(c0847M8777.m8736().intValue(), c0847M8778.f3060);
                return c0847M8778;
            }
            if (obj.getClass().isArray()) {
                ((Object[]) obj)[c0847M8777.m8736().intValue()] = c0847M8778.f3060;
                return c0847M8778;
            }
            throw new C1106(c1013, c0704, StringFog.decrypt("w94dbZUvhQznwBpjk2aOHabfGmCUbJIT9thPcpJ7wB/+3B1nlHyJFeiMSA==\n", "hqxvAucP4Ho=\n") + this + StringFog.decrypt("ldwaSinM8SXVxk5Re8DrLpK9Zx4027gq3MZPUCjA6DvdlE5bP5X3KdiDWUp7\n", "suY6Plu1mEs=\n") + obj, null);
        } catch (JSONException e) {
            StringBuilder sb = new StringBuilder();
            sb.append(StringFog.decrypt("MPqphkZWT00U5K6IQB9EXFX7rotHFVhSBfz7mUECCl4N+KmMRwVDVBuo/A==\n", "dYjb6TR2Kjs=\n"));
            sb.append(this);
            throw new C1106(c1013, c0704, AbstractC0970.m8850("Iw==\n", "BFUuSSPz7hU=\n", sb), e);
        }
    }
}
