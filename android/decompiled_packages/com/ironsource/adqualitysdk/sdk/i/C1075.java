package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﺓ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1075 extends AbstractC0912 {
    static {
        StringFog.decrypt("3DK4PfjBbErd\n", "r1fWWb2zHiU=\n");
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8882(C1013 c1013, ArrayList arrayList) {
        boolean zBooleanValue;
        JSONObject jSONObject;
        boolean zBooleanValue2 = false;
        String str = (String) AbstractC0912.m8788(arrayList, 0, String.class);
        String str2 = c1013.m8859() + StringFog.decrypt("aQ==\n", "Uw64NM7yhPk=\n") + Integer.toHexString(str.hashCode());
        Throwable th = (Throwable) AbstractC0912.m8788(arrayList, 1, Throwable.class);
        try {
            if (arrayList.size() <= 2) {
                AbstractC1104.m8886(c1013.m8859(), str, str2, th, null, null, true, false, false);
                return;
            }
            if (AbstractC0912.m8787(arrayList, 2, JSONObject.class)) {
                JSONObject jSONObject2 = (JSONObject) AbstractC0912.m8788(arrayList, 2, JSONObject.class);
                if (arrayList.size() > 3 && AbstractC0912.m8787(arrayList, 3, Boolean.class)) {
                    zBooleanValue2 = ((Boolean) AbstractC0912.m8788(arrayList, 3, Boolean.class)).booleanValue();
                }
                jSONObject = jSONObject2;
                zBooleanValue = zBooleanValue2;
            } else {
                zBooleanValue = AbstractC0912.m8787(arrayList, 2, Boolean.class) ? ((Boolean) AbstractC0912.m8788(arrayList, 2, Boolean.class)).booleanValue() : false;
                jSONObject = null;
            }
            AbstractC1104.m8886(c1013.m8859(), str, str2, th, null, jSONObject, true, false, zBooleanValue);
        } catch (Throwable unused) {
        }
    }
}
