package com.ironsource.adqualitysdk.sdk.i;

import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ὶ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0919 {
    /* JADX WARN: Code duplicated, block: B:45:0x00d5  */
    /* JADX WARN: Code duplicated, block: B:47:0x00d9  */
    /* JADX WARN: Code duplicated, block: B:48:0x00e4  */
    /* JADX WARN: Code duplicated, block: B:49:0x00ed  */
    /* JADX WARN: Code duplicated, block: B:51:0x00f0 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:53:0x00f3  */
    /* JADX WARN: Code duplicated, block: B:54:0x00f5 A[PHI: r1
  0x00f5: PHI (r1v2 int) = (r1v1 int), (r1v1 int), (r1v1 int), (r1v1 int), (r1v4 int), (r1v1 int), (r1v1 int), (r1v1 int) binds: [B:19:0x0084, B:21:0x008d, B:24:0x009b, B:50:0x00ee, B:53:0x00f3, B:34:0x00b4, B:64:0x00f5, B:29:0x00a8] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static ArrayList m8801(Class cls, C0920 c0920) {
        List<Method> listAsList;
        boolean z;
        Class cls2;
        boolean zIsAssignableFrom;
        ArrayList arrayList = new ArrayList();
        int i = c0920.f3250;
        boolean z2 = c0920.f4064;
        if (z2) {
            int i2 = c0920.f4063;
            Method[] methodArr = new Method[0];
            if (cls != null) {
                Method[] declaredMethods = cls.getDeclaredMethods();
                Method[] methods = cls.getMethods();
                String str = AbstractC0765.f2620;
                int length = declaredMethods.length;
                int length2 = methods.length;
                Method[] methodArr2 = new Method[length + length2];
                System.arraycopy(declaredMethods, 0, methodArr2, 0, length);
                System.arraycopy(methods, 0, methodArr2, length, length2);
                if (z2) {
                    Class superclass = cls.getSuperclass();
                    int i3 = 0;
                    methodArr = methodArr2;
                    while (superclass != null && i3 != i2) {
                        Method[] declaredMethods2 = superclass.getDeclaredMethods();
                        int length3 = methodArr.length;
                        int length4 = declaredMethods2.length;
                        int i4 = length3 + length4;
                        Method[] methodArr3 = new Method[i4];
                        System.arraycopy(methodArr, 0, methodArr3, 0, length3);
                        System.arraycopy(declaredMethods2, 0, methodArr3, length3, length4);
                        Method[] methods2 = superclass.getMethods();
                        int length5 = methods2.length;
                        Method[] methodArr4 = new Method[i4 + length5];
                        System.arraycopy(methodArr3, 0, methodArr4, 0, i4);
                        System.arraycopy(methods2, 0, methodArr4, i4, length5);
                        superclass = superclass.getSuperclass();
                        i3++;
                        methodArr = methodArr4;
                    }
                    listAsList = Arrays.asList(methodArr);
                } else {
                    listAsList = Arrays.asList(methodArr2);
                }
            } else {
                listAsList = Arrays.asList(methodArr);
            }
        } else {
            listAsList = Arrays.asList(cls.getDeclaredMethods());
        }
        for (Method method : listAsList) {
            int modifiers = method.getModifiers();
            int i5 = c0920.f4062;
            if ((modifiers & i5) == i5 && (method.getModifiers() & c0920.f4061) == 0 && !c0920.f3247.contains(method.getReturnType())) {
                Class<?>[] parameterTypes = method.getParameterTypes();
                int i6 = c0920.f3245;
                if (i6 == -1 || i6 == parameterTypes.length) {
                    List list = c0920.f3246;
                    if (list == null) {
                        cls2 = c0920.f3249;
                        z = true;
                        if (cls2 != null) {
                            zIsAssignableFrom = true;
                        } else if (c0920.f3248) {
                            zIsAssignableFrom = method.getReturnType().equals(c0920.f3249);
                        } else {
                            zIsAssignableFrom = cls2.isAssignableFrom(method.getReturnType());
                        }
                        if (zIsAssignableFrom) {
                            z = false;
                        } else if (i != 0) {
                            i--;
                            z = false;
                        }
                    } else {
                        if (list.size() == parameterTypes.length) {
                            int i7 = 0;
                            while (true) {
                                if (i7 >= list.size()) {
                                    cls2 = c0920.f3249;
                                    z = true;
                                    if (cls2 != null) {
                                        zIsAssignableFrom = true;
                                    } else if (c0920.f3248) {
                                        zIsAssignableFrom = method.getReturnType().equals(c0920.f3249);
                                    } else {
                                        zIsAssignableFrom = cls2.isAssignableFrom(method.getReturnType());
                                    }
                                    if (zIsAssignableFrom) {
                                        if (i != 0) {
                                            i--;
                                        }
                                    }
                                } else if (((Class) list.get(i7)).equals(parameterTypes[i7])) {
                                    i7++;
                                }
                            }
                        }
                        z = false;
                    }
                } else {
                    z = false;
                }
            } else {
                z = false;
            }
            if (z) {
                arrayList.add(method);
            }
        }
        return arrayList;
    }
}
