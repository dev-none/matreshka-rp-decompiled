package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ḯ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0856 implements InvocationHandler {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f3071 = StringFog.decrypt("ZxIpv156idFhAzifeHiKz2IWPpA=\n", "AHdd+zsZ5qM=\n");

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0272 f3072;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Object f3073;

    public C0856(Object obj, C0272 c0272) {
        this.f3073 = obj;
        this.f3072 = c0272;
    }

    @Override // java.lang.reflect.InvocationHandler
    public final Object invoke(Object obj, Method method, Object[] objArr) {
        String name = method.getName();
        if (name.hashCode() == 1622498214) {
            String str = f3071;
            if (name.equals(str)) {
                try {
                    String name2 = method.getName();
                    if (name2.hashCode() == 1622498214 && name2.equals(str)) {
                        return this.f3073;
                    }
                    return null;
                } catch (Throwable th) {
                    AbstractC1104.m8887(StringFog.decrypt("WQwtcvO9dONlDQ==\n", "CX5CCoroAIo=\n"), StringFog.decrypt("otrbupeutyWRx8Kwxe+6GpLJxbyR9/4mgtzBuoGu\n", "56ip1eWO3ks=\n") + method.getName(), th, true);
                    return null;
                }
            }
        }
        try {
            this.f3072.m8461(obj, method, objArr);
        } catch (Throwable th2) {
            String strDecrypt = StringFog.decrypt("KBpPEoi5ggoUGw==\n", "eGggavHs9mM=\n");
            StringBuilder sb = new StringBuilder();
            sb.append(StringFog.decrypt("T8xjnDtZ/yx80XqWaRX/MX7bf5Y7Q7Y=\n", "Cr4R80l5lkI=\n"));
            Object obj2 = this.f3073;
            sb.append(obj2 != null ? obj2.toString() : StringFog.decrypt("6R/hSA==\n", "h2qNJFxlFDY=\n"));
            sb.append(StringFog.decrypt("VqqbwpVkiwc=\n", "dsf+tv0L7z0=\n"));
            sb.append(method.getName());
            AbstractC1104.m8887(strDecrypt, sb.toString(), th2, true);
        }
        Object obj3 = this.f3073;
        if (obj3 != null) {
            return method.invoke(obj3, objArr);
        }
        if (!Object.class.equals(method.getDeclaringClass())) {
            return null;
        }
        if (objArr != null) {
            try {
                ArrayList arrayList = new ArrayList();
                for (Object obj4 : objArr) {
                    if (Proxy.isProxyClass(obj4.getClass())) {
                        arrayList.add(Proxy.getInvocationHandler(obj4));
                    } else {
                        arrayList.add(obj4);
                    }
                }
                objArr = arrayList.toArray();
            } catch (Throwable th3) {
                AbstractC1104.m8887(StringFog.decrypt("15o6ip10x53rmw==\n", "h+hV8uQhs/Q=\n"), StringFog.decrypt("jVrGLJrnFTG8XN0tj+cbOr5H1yKcrh066EnGJJs=\n", "yCi0Q+jHclQ=\n"), th3, true);
            }
        }
        return method.invoke(this, objArr);
    }
}
