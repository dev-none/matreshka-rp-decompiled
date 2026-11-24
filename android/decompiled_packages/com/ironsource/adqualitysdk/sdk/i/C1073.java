package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﺑ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1073 extends AbstractC1060 {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public C1073(String str, String str2, C0704 c0704) {
        super(str, str2);
        C0704 c0705 = c0704;
        if (c0705 != null) {
            C1013 c1013 = c0705.f2431;
            String str3 = c1013 != null ? c1013.f3678.f2225.f2097 : null;
            String str4 = c1013 != null ? c1013.f3671.f3284.f2309 : null;
            ArrayList<C0704> arrayList = new ArrayList();
            while (c0705 != null && c0705.f2432 != null) {
                arrayList.add(c0705);
                c0705 = c0705.f2433;
            }
            for (C0704 c0706 : arrayList) {
                C0944 c0944 = c0706.f2432;
                C0588 c0588 = c0944.f3334;
                String str5 = c0588.f2096 + StringFog.decrypt("ZA==\n", "SuZM6OQZZ6Q=\n") + c0588.f2097;
                StringBuilder sb = new StringBuilder();
                sb.append(StringFog.decrypt("+OX2w1RnjQM=\n", "mYuSsTsO6S4=\n"));
                sb.append(c0588.f2096);
                sb.append(StringFog.decrypt("ww==\n", "7oC96hIflnI=\n"));
                sb.append(c0588.f2097);
                this.f3816.add(new C1056(str5, c0944.f3335, AbstractC0970.m8850("j6JRrA==\n", "odEjwPtUV8Y=\n", sb), (c0706.m8625() + c0706.f2432.m8819()) - 1, (str3 == null || str4 == null || !str4.equals(c0588.f2096) || str3.equals(c0588.f2097)) ? null : str3));
            }
        } else {
            StringBuilder sb2 = new StringBuilder();
            sb2.append(str);
            this.f3816.add(new C1056(str, str2, AbstractC0970.m8850("5VRfE6SyU62nRR4Xubhe\n", "yDcwfcrXMNk=\n", sb2), 0, null));
        }
        StackTraceElement[] stackTrace = new Exception().getStackTrace();
        ArrayList<StackTraceElement> arrayList2 = new ArrayList();
        String name = C0944.class.getName();
        for (int length = stackTrace.length - 1; length >= 0; length--) {
            StackTraceElement stackTraceElement = stackTrace[length];
            if (stackTraceElement.getClassName().equals(name)) {
                break;
            }
            arrayList2.add(0, stackTraceElement);
        }
        for (StackTraceElement stackTraceElement2 : arrayList2) {
            this.f3816.add(new C1056(stackTraceElement2.getClassName(), stackTraceElement2.getMethodName(), stackTraceElement2.getFileName(), stackTraceElement2.getLineNumber(), null));
        }
    }
}
