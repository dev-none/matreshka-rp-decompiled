package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.ref.WeakReference;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.regex.Pattern;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ۃ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0493 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f1788 = StringFog.decrypt("tlkkzHL87y+XXyvb\n", "+TtOqRGIqUY=\n");

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final HashMap f1787 = new HashMap();

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final InterfaceC0681 m8556(Object obj, C0564 c0564, int i, C0674 c0674) {
        Field[] fieldArrM8576;
        if (i != c0564.f2038.f2054.f2114 && obj != null && !c0564.f2036.contains(obj) && (i <= 0 || !(obj instanceof Activity))) {
            c0564.f2036.add(obj);
            try {
                C1749e1 c1749e1 = c0564.f2038.f2052;
                if (c1749e1 != null) {
                    C0558 c0558 = C0705.m8630().f2439;
                    fieldArrM8576 = C0558.m8576(obj.getClass(), true, -1, c1749e1.f370);
                } else {
                    Class<?> superclass = obj.getClass();
                    C0572 c0572 = c0564.f2038;
                    int i2 = C0572.m8580(i, c0572.f2054.f2112) ? c0572.f2054.f2111 : 0;
                    Field[] declaredFields = superclass.getDeclaredFields();
                    for (int i3 = 0; superclass != null && i3 != i2; i3++) {
                        superclass = superclass.getSuperclass();
                        if (superclass != null) {
                            Field[] declaredFields2 = superclass.getDeclaredFields();
                            String str = AbstractC0765.f2620;
                            int length = declaredFields.length;
                            int length2 = declaredFields2.length;
                            Field[] fieldArr = new Field[length + length2];
                            System.arraycopy(declaredFields, 0, fieldArr, 0, length);
                            System.arraycopy(declaredFields2, 0, fieldArr, length, length2);
                            declaredFields = fieldArr;
                        }
                    }
                    fieldArrM8576 = declaredFields;
                }
                C0553 c0553 = c0564.f2037;
                for (Field field : fieldArrM8576) {
                    field.setAccessible(true);
                    ((List) c0553.f1980.get(c0553.f1979)).add(field);
                    InterfaceC0681 interfaceC0681M8554 = m8554(new C0674(field, obj, c0674), c0564, i);
                    if (interfaceC0681M8554 != null && !c0564.f2035) {
                        return interfaceC0681M8554;
                    }
                    ((List) c0553.f1980.get(c0553.f1979)).remove(field);
                }
            } catch (Throwable th) {
                String str2 = this.f1788;
                AbstractC0323.m8479(str2, str2, StringFog.decrypt("7dAYNhtZY87c1gM3DllLycLHCS0vEGHHzA==\n", "qKJqWWl5BKs=\n"), th, null, false);
            }
        }
        return null;
    }

    /* JADX WARN: Code duplicated, block: B:22:0x0086  */
    /* JADX WARN: Code duplicated, block: B:26:0x0091 A[Catch: Exception -> 0x0043, TryCatch #0 {Exception -> 0x0043, blocks: (B:13:0x004f, B:15:0x0053, B:23:0x0087, B:24:0x008b, B:26:0x0091, B:28:0x00a3, B:30:0x00b2, B:29:0x00ae, B:32:0x00bc, B:16:0x005c, B:18:0x0060, B:19:0x0069, B:21:0x0073), top: B:37:0x004f }] */
    /* JADX WARN: Code duplicated, block: B:28:0x00a3 A[Catch: Exception -> 0x0043, TryCatch #0 {Exception -> 0x0043, blocks: (B:13:0x004f, B:15:0x0053, B:23:0x0087, B:24:0x008b, B:26:0x0091, B:28:0x00a3, B:30:0x00b2, B:29:0x00ae, B:32:0x00bc, B:16:0x005c, B:18:0x0060, B:19:0x0069, B:21:0x0073), top: B:37:0x004f }] */
    /* JADX WARN: Code duplicated, block: B:29:0x00ae A[Catch: Exception -> 0x0043, TryCatch #0 {Exception -> 0x0043, blocks: (B:13:0x004f, B:15:0x0053, B:23:0x0087, B:24:0x008b, B:26:0x0091, B:28:0x00a3, B:30:0x00b2, B:29:0x00ae, B:32:0x00bc, B:16:0x005c, B:18:0x0060, B:19:0x0069, B:21:0x0073), top: B:37:0x004f }] */
    /* JADX WARN: Code duplicated, block: B:40:0x00bc A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:43:0x0043 A[SYNTHETIC] */
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final InterfaceC0681 m8555(InterfaceC0681 interfaceC0681, C0553 c0553, int i) {
        C0674 c0674;
        Object obj;
        if (i >= c0553.f1980.size()) {
            return interfaceC0681;
        }
        List<Field> list = (List) c0553.f1980.get(i);
        C0674 c0675 = (C0674) interfaceC0681;
        Object objM8615 = c0675.m8615();
        ArrayList arrayListM8553 = m8553(objM8615, true, true, true);
        if (arrayListM8553 == null) {
            AbstractC0323.m8470(this.f1788, StringFog.decrypt("37BWqNPg4/66i0mh3PHl7vOnSO3f5qbX+7gK7cLx5f/zvkOpkA==\n", "msgmzbCUhpo=\n") + objM8615.getClass());
            return null;
        }
        Iterator it = arrayListM8553.iterator();
        while (it.hasNext()) {
            Object next = it.next();
            if (objM8615 != null) {
                try {
                    if (objM8615 instanceof Collection) {
                        c0674 = new C0674((Collection) objM8615, next, c0675);
                    } else if (objM8615 instanceof Map) {
                        c0674 = new C0674((Map) objM8615, next, c0675);
                    } else if (objM8615.getClass().isArray()) {
                        c0674 = new C0674(new ArrayList(Arrays.asList(objM8615)), next, c0675);
                    } else {
                        c0674 = null;
                    }
                    for (Field field : list) {
                        if (WeakReference.class.isAssignableFrom(field.getType())) {
                            obj = ((WeakReference) field.get(next)).get();
                        } else {
                            obj = field.get(next);
                        }
                        C0674 c0676 = new C0674(field, next, c0674);
                        next = obj;
                        c0674 = c0676;
                    }
                    if (c0674 != null) {
                        return m8555(c0674, c0553, i + 1);
                    }
                    continue;
                } catch (Exception unused) {
                    continue;
                }
            } else {
                c0674 = null;
                while (r7.hasNext()) {
                    if (WeakReference.class.isAssignableFrom(field.getType())) {
                        obj = ((WeakReference) field.get(next)).get();
                    } else {
                        obj = field.get(next);
                    }
                    C0674 c0677 = new C0674(field, next, c0674);
                    next = obj;
                    c0674 = c0677;
                }
                if (c0674 != null) {
                    return m8555(c0674, c0553, i + 1);
                }
                continue;
            }
        }
        return null;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final InterfaceC0681 m8557(Object obj, C0572 c0572) {
        InterfaceC0681 interfaceC0681M8555;
        boolean zMo8349;
        Object obj2;
        long jCurrentTimeMillis = System.currentTimeMillis();
        Class<?> cls = obj.getClass();
        C0597 c0597 = c0572.f2054;
        c0597.f2118 = cls;
        C0553 c0553 = (C0553) this.f1787.get(c0597);
        if (c0553 != null) {
            try {
                Object obj3 = obj;
                C0674 c0674 = null;
                for (Field field : (List) c0553.f1980.get(0)) {
                    if (WeakReference.class.isAssignableFrom(field.getType())) {
                        obj2 = ((WeakReference) field.get(obj3)).get();
                    } else {
                        obj2 = field.get(obj3);
                    }
                    C0674 c0675 = new C0674(field, obj3, c0674);
                    obj3 = obj2;
                    c0674 = c0675;
                }
                interfaceC0681M8555 = m8555(c0674, c0553, 1);
            } catch (Exception e) {
                String str = this.f1788;
                AbstractC0323.m8479(str, str, StringFog.decrypt("SitSnLm72oN7LUmdrLvyhGU8Q4eN8tiKa3lGgaT2nZZuLUg=\n", "D1kg88ubveY=\n"), e, null, false);
                interfaceC0681M8555 = null;
            }
            if (interfaceC0681M8555 != null) {
                try {
                    zMo8349 = c0572.f2053.mo8349(interfaceC0681M8555);
                } catch (Exception unused) {
                    zMo8349 = false;
                }
                if (zMo8349) {
                    StringBuilder sb = new StringBuilder();
                    sb.append(StringFog.decrypt("/Uhc4rYmWAL0Sgn8s3JWUPJJCQ==\n", "mycpjNIGPnA=\n"));
                    sb.append(System.currentTimeMillis() - jCurrentTimeMillis);
                    m8558(interfaceC0681M8555, obj, AbstractC0970.m8850("olw=\n", "zy+G3vT5pf8=\n", sb));
                    return interfaceC0681M8555;
                }
            }
            AbstractC0323.m8470(this.f1788, obj + StringFog.decrypt("zR2ufteve6aeTq0=\n", "9z3eH6PHW8s=\n"));
            this.f1787.remove(c0597);
        }
        C0564 c0564 = new C0564(c0572);
        InterfaceC0681 interfaceC0681M8556 = m8556(obj, c0564, 0, (C0674) null);
        if (interfaceC0681M8556 != null) {
            StringBuilder sb2 = new StringBuilder();
            sb2.append(StringFog.decrypt("zN8B3IVSIUmK\n", "qrB0suFySCc=\n"));
            sb2.append(System.currentTimeMillis() - jCurrentTimeMillis);
            sb2.append(StringFog.decrypt("8zr5YQ==\n", "nknVQfxqSEs=\n"));
            sb2.append(c0564.f2036.size());
            m8558(interfaceC0681M8556, obj, AbstractC0970.m8850("4s/kuXBzj97iyejzZnWP\n", "wqCG0xUQ+60=\n", sb2));
            this.f1787.put(c0597, c0564.f2037);
            return interfaceC0681M8556;
        }
        StringBuilder sb3 = new StringBuilder();
        sb3.append(StringFog.decrypt("rvK4knL0TjCkvaXcNA==\n", "wJ3MshSbO14=\n"));
        sb3.append(System.currentTimeMillis() - jCurrentTimeMillis);
        sb3.append(StringFog.decrypt("6nYdrg==\n", "hwUxjhe2Eoo=\n"));
        sb3.append(c0564.f2036.size());
        m8558((InterfaceC0681) null, obj, AbstractC0970.m8850("JfLkkYo3X5Ul9OjbnDFf\n", "BZ2G++9UK+Y=\n", sb3));
        return null;
    }

    /* JADX WARN: Code duplicated, block: B:55:0x010f  */
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final InterfaceC0681 m8554(C0674 c0674, C0564 c0564, int i) {
        C0674 c0675;
        boolean zMo8349;
        Object objM8615 = c0674.m8615();
        if (c0564.f2036.contains(objM8615) || c0564.f2034.contains(objM8615)) {
            return null;
        }
        if (C0572.m8580(i, c0564.f2038.f2054.f2113)) {
            try {
                zMo8349 = c0564.f2038.f2053.mo8349(c0674);
            } catch (Exception unused) {
                zMo8349 = false;
            }
            if (zMo8349) {
                if (c0564.f2035) {
                    c0564.f2033.add(c0674);
                    c0564.f2034.add(objM8615);
                }
                return c0674;
            }
        }
        if (objM8615 instanceof WeakReference) {
            WeakReference weakReference = (WeakReference) objM8615;
            if (weakReference.get() != null && C0572.m8580(i, c0564.f2038.f2054.f2110)) {
                Object obj = weakReference.get();
                if (obj != null ? AbstractC0765.m8717(obj.getClass(), c0564.f2038.f2054.f2115) : false) {
                    return m8556(weakReference.get(), c0564, i + 1, c0674);
                }
            }
        }
        if (objM8615 != null ? AbstractC0765.m8717(objM8615.getClass(), c0564.f2038.f2054.f2115) : false) {
            return m8556(objM8615, c0564, i + 1, c0674);
        }
        if (c0564.f2038.f2054.f2106 && objM8615 != null) {
            c0564.f2036.add(objM8615);
        }
        C0572 c0572 = c0564.f2038;
        ArrayList arrayListM8553 = m8553(objM8615, C0572.m8580(i, c0572.f2054.f2109), C0572.m8580(i, c0572.f2054.f2108), C0572.m8580(i, c0572.f2054.f2107));
        C0553 c0553 = c0564.f2037;
        if (arrayListM8553 == null) {
            return null;
        }
        InterfaceC0681 interfaceC0681M8554 = null;
        for (Object obj2 : arrayListM8553) {
            if (objM8615 == null) {
                c0675 = null;
            } else if (objM8615 instanceof Collection) {
                c0675 = new C0674((Collection) objM8615, obj2, c0674);
            } else if (objM8615 instanceof Map) {
                c0675 = new C0674((Map) objM8615, obj2, c0674);
            } else if (objM8615.getClass().isArray()) {
                c0675 = new C0674(new ArrayList(Arrays.asList(objM8615)), obj2, c0674);
            } else {
                c0675 = null;
            }
            int i2 = c0553.f1979 + 1;
            c0553.f1979 = i2;
            c0553.f1980.add(i2, new ArrayList());
            interfaceC0681M8554 = m8554(c0675, c0564, i);
            if (interfaceC0681M8554 != null && !c0564.f2035) {
                return interfaceC0681M8554;
            }
            c0553.f1980.remove(c0553.f1979);
            c0553.f1979--;
        }
        return interfaceC0681M8554;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static ArrayList m8553(Object obj, boolean z, boolean z2, boolean z3) {
        if (obj == null) {
            return null;
        }
        if ((obj instanceof Collection) && z) {
            return new ArrayList((Collection) obj);
        }
        if (obj.getClass().isArray() && z3) {
            return new ArrayList(Arrays.asList(obj));
        }
        if (!(obj instanceof Map) || !z2) {
            return null;
        }
        Map map = (Map) obj;
        ArrayList arrayList = new ArrayList(map.values());
        arrayList.addAll(map.keySet());
        return arrayList;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8552(Object obj, Class cls, String str) {
        if (cls == null || cls.equals(Object.class)) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        for (Field field : cls.getDeclaredFields()) {
            if (field.getType().equals(String.class)) {
                arrayList.add(field);
            }
        }
        for (Field field2 : (Field[]) arrayList.toArray(new Field[0])) {
            field2.setAccessible(true);
            try {
                String str2 = (String) field2.get(obj);
                if (str2 != null && Pattern.compile(str).matcher(str2).matches()) {
                    return str2;
                }
            } catch (Exception unused) {
            }
        }
        return m8552(obj, cls.getSuperclass(), str);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8558(InterfaceC0681 interfaceC0681, Object obj, String str) {
        if (interfaceC0681 != null) {
            String str2 = this.f1788;
            StringBuilder sb = new StringBuilder();
            sb.append(obj);
            StringBuilder sbM8559 = AbstractC0502.m8559("kuY=\n", "qMbiOPcz5cU=\n", sb, str);
            sbM8559.append(StringFog.decrypt("tqcQmWETR8M=\n", "modm+A1mIuM=\n"));
            sbM8559.append(((C0674) interfaceC0681).m8615());
            AbstractC0323.m8471(str2, sbM8559.toString());
            return;
        }
        AbstractC0323.m8471(this.f1788, obj + StringFog.decrypt("eJQ=\n", "QrRD0l6N7pU=\n") + str);
    }
}
