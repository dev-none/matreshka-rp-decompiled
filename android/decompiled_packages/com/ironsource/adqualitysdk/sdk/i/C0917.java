package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.reflect.Method;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ῐ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0917 extends AbstractC0912 {
    static {
        StringFog.decrypt("LGdP4OZbMNYv\n", "SwI7rYMvWLk=\n");
        StringFog.decrypt("BOZDfrC3Rc0H8A==\n", "Y4M3M9XDLaI=\n");
        StringFog.decrypt("ICIZ+h1TW483OBP/LVNwqDY5EP8MRA==\n", "Q1B8m2k2Fuo=\n");
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static ArrayList m8798(ArrayList arrayList) {
        C0920 c0920 = (C0920) AbstractC0912.m8788(arrayList, 1, C0920.class);
        return arrayList.get(0) instanceof Class ? AbstractC0919.m8801((Class) AbstractC0912.m8788(arrayList, 0, Class.class), c0920) : AbstractC0919.m8801(AbstractC0912.m8788(arrayList, 0, Object.class).getClass(), c0920);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static Method m8800(ArrayList arrayList) {
        C0920 c0920 = (C0920) AbstractC0912.m8788(arrayList, 1, C0920.class);
        if (arrayList.get(0) instanceof Class) {
            ArrayList arrayListM8801 = AbstractC0919.m8801((Class) AbstractC0912.m8788(arrayList, 0, Class.class), c0920);
            if (arrayListM8801.isEmpty()) {
                return null;
            }
            return (Method) arrayListM8801.get(0);
        }
        ArrayList arrayListM8802 = AbstractC0919.m8801(AbstractC0912.m8788(arrayList, 0, Object.class).getClass(), c0920);
        if (arrayListM8802.isEmpty()) {
            return null;
        }
        return (Method) arrayListM8802.get(0);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static C0933 m8799() {
        return new C0933();
    }
}
