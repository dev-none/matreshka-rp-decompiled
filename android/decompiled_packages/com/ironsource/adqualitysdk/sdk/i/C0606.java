package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import org.json.JSONArray;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᐧ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0606 extends AbstractC0912 {
    static {
        StringFog.decrypt("YsnhjcY58FV7weOf3TM=\n", "FKyT/q9WnhY=\n");
        StringFog.decrypt("yTTPE+k7/YzcONU19g==\n", "rlG7UoVXrvg=\n");
        StringFog.decrypt("EMvQaudF3tUQy9xm6l3v2BLd\n", "d66kK4spjLA=\n");
        StringFog.decrypt("TvO5+oGZI+R786rZkKYx5Er+\n", "KZbNvOjrUJA=\n");
        StringFog.decrypt("jtldy1ykOTmK2mj0RqcfMrTeaPhbsw==\n", "56oakTXUelY=\n");
        StringFog.decrypt("pyyoFI1Jn1ywOowhiUm+TbEgpRw=\n", "w0nLe+A57Tk=\n");
    }

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static int m8582(ArrayList arrayList) {
        return AbstractC0607.m8591((String) AbstractC0912.m8788(arrayList, 0, String.class), (String) AbstractC0912.m8788(arrayList, 1, String.class));
    }

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static boolean m8583(ArrayList arrayList) {
        return AbstractC0607.m8590((String) AbstractC0912.m8788(arrayList, 0, String.class));
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static String m8584(ArrayList arrayList) {
        String str = (String) AbstractC0912.m8788(arrayList, 0, String.class);
        boolean zBooleanValue = arrayList.size() > 2 ? ((Boolean) AbstractC0912.m8788(arrayList, 2, Boolean.class)).booleanValue() : true;
        if (arrayList.get(1) instanceof String) {
            return AbstractC0607.m8593(str, (String) AbstractC0912.m8788(arrayList, 1, String.class), zBooleanValue);
        }
        JSONArray jSONArray = new JSONArray((Collection) AbstractC0912.m8788(arrayList, 1, List.class));
        for (int i = 0; i < jSONArray.length(); i++) {
            String strM8593 = AbstractC0607.m8593(str, jSONArray.optString(i), zBooleanValue);
            if (strM8593 != null) {
                return strM8593;
            }
        }
        return null;
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static ArrayList m8585(ArrayList arrayList) {
        Object objM8788 = AbstractC0912.m8788(arrayList, 0, Object.class);
        List list = (List) AbstractC0912.m8788(arrayList, 1, List.class);
        int iIntValue = ((Integer) AbstractC0912.m8788(arrayList, 2, Integer.class)).intValue();
        C0493 c0493 = C0705.m8630().f2438;
        c0493.getClass();
        C0541 c0541 = new C0541();
        C0572 c0572 = new C0572();
        C0597 c0597 = c0572.f2054;
        c0597.f2109 = -1;
        c0597.f2108 = -1;
        c0597.f2107 = -1;
        c0597.f2111 = -1;
        c0572.f2053 = c0541;
        c0572.f2052 = null;
        C0597 c0598 = c0572.f2054;
        c0598.f2115 = list;
        c0598.f2114 = iIntValue;
        c0598.f2117 = c0541.getClass();
        c0572.f2054.f2116 = null;
        C0564 c0564 = new C0564(c0572);
        c0564.f2035 = true;
        c0493.m8556(objM8788, c0564, 0, (C0674) null);
        return new ArrayList(c0564.f2034);
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static ArrayList m8586(ArrayList arrayList) {
        String str = (String) AbstractC0912.m8788(arrayList, 0, String.class);
        if (arrayList.get(1) instanceof String) {
            return AbstractC0607.m8589(str, (String) AbstractC0912.m8788(arrayList, 1, String.class), false);
        }
        JSONArray jSONArray = new JSONArray((Collection) AbstractC0912.m8788(arrayList, 1, List.class));
        ArrayList arrayList2 = new ArrayList();
        for (int i = 0; i < jSONArray.length(); i++) {
            arrayList2.addAll(AbstractC0607.m8589(str, jSONArray.optString(i), false));
        }
        return arrayList2;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8587(ArrayList arrayList) {
        return AbstractC0607.m8592((String) AbstractC0912.m8788(arrayList, 0, String.class));
    }
}
