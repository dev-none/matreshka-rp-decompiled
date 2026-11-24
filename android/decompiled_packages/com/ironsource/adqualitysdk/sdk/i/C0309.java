package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ˑ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0309 extends AbstractC0456 {
    public C0309(AbstractC0904 abstractC0904, AbstractC0904 abstractC0905) {
        super(abstractC0904, abstractC0905);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        C0847 c0847M8777 = this.f1723.m8777(c0704, c1013);
        Object obj = this.f1724.m8777(c0704, c1013).f3060;
        if (obj instanceof JSONObject) {
            return new C0847(((JSONObject) obj).opt((String) c0847M8777.f3060));
        }
        if (obj instanceof JSONArray) {
            return new C0847(((JSONArray) obj).opt(c0847M8777.m8736().intValue()));
        }
        if (obj instanceof Map) {
            return new C0847(((Map) obj).get(c0847M8777.f3060));
        }
        if (obj instanceof List) {
            return new C0847(((List) obj).get(c0847M8777.m8736().intValue()));
        }
        if (obj.getClass().isArray()) {
            return new C0847(((Object[]) obj)[c0847M8777.m8736().intValue()]);
        }
        throw new C1106(c1013, c0704, StringFog.decrypt("hhcMx39WYyCiCQvJeR9oMeMWC8p+FXQ/sxFez2gCJjO7FQzNfgVvOa1FWQ==\n", "w2V+qA12BlY=\n") + this + StringFog.decrypt("Bbj6vKPMvvdFoq6n8cCk/ALZh+i+2/f4TKKvpqLAp+lN8K6ttZW4+0jnubzx\n", "IoLayNG115k=\n") + obj, null);
    }
}
