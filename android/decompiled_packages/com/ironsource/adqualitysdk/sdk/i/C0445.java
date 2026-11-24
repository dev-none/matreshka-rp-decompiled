package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ױ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0445 extends AbstractC0912 {
    static {
        StringFog.decrypt("A0Mpy6h7/zs3Ui/kr24=\n", "ZCZdjcEJjE8=\n");
        StringFog.decrypt("KHyruYbXSF8qfK2wttd9eD5noryXwA==\n", "Sw7O2PKyGzo=\n");
        StringFog.decrypt("p5QnnbXf+MK0\n", "wPFT0te1naE=\n");
        StringFog.decrypt("l8CJLLzHSXmE1g==\n", "8KX9Y96tLBo=\n");
        StringFog.decrypt("imX4AGwfY9CZRuUqYhE=\n", "7QCMTw51BrM=\n");
        StringFog.decrypt("b/aEY765MzB8xZFAqbY=\n", "CJPwLNzTVlM=\n");
        StringFog.decrypt("ujFqoAfVpE+pEneKCduy\n", "3VQe72W/wSw=\n");
        StringFog.decrypt("crRgl7OIrsRhh3W0pIe4\n", "FdEU2NHiy6c=\n");
        StringFog.decrypt("SQbd7wp1m6RqBtH/H0ebs0cN1A==\n", "LmOzingU78E=\n");
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:596)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static ArrayList m8539(ArrayList arrayList) {
        Object objM8788;
        C0575 c0575;
        Class<?> cls;
        int size = arrayList.size();
        Class<?> cls2 = null;
        cls2 = null;
        Object objM8789 = null;
        if (size == 2) {
            if (arrayList.get(0) instanceof Class) {
                cls2 = (Class) AbstractC0912.m8788(arrayList, 0, Class.class);
                objM8788 = null;
            } else {
                objM8788 = AbstractC0912.m8788(arrayList, 0, Object.class);
                if (objM8788 != null) {
                    cls2 = objM8788.getClass();
                }
            }
            c0575 = (C0575) AbstractC0912.m8788(arrayList, 1, C0575.class);
        } else if (size != 3) {
            c0575 = null;
            objM8788 = null;
        } else {
            if (arrayList.get(0) instanceof Class) {
                cls = (Class) AbstractC0912.m8788(arrayList, 0, Class.class);
                if (arrayList.get(1) instanceof C0575) {
                    c0575 = (C0575) AbstractC0912.m8788(arrayList, 1, C0575.class);
                } else {
                    objM8789 = AbstractC0912.m8788(arrayList, 1, Object.class);
                    c0575 = (C0575) AbstractC0912.m8788(arrayList, 2, C0575.class);
                }
            } else {
                objM8789 = AbstractC0912.m8788(arrayList, 0, Object.class);
                cls = objM8789.getClass();
                c0575 = (C0575) AbstractC0912.m8788(arrayList, 1, C0575.class);
            }
            Object obj = objM8789;
            cls2 = cls;
            objM8788 = obj;
        }
        C0493 c0493 = C0705.m8630().f2438;
        c0493.getClass();
        ArrayList arrayList2 = new ArrayList();
        try {
            C0558 c0558 = C0705.m8630().f2439;
            ArrayList arrayList3 = new ArrayList();
            c0558.m8579(cls2, c0575, arrayList3);
            Iterator it = arrayList3.iterator();
            while (it.hasNext()) {
                arrayList2.add(((Field) it.next()).get(objM8788));
            }
            return arrayList2;
        } catch (Throwable unused) {
            AbstractC0323.m8470(c0493.f1788, StringFog.decrypt("+XL+dqu/jgXIdOV3vr8=\n", "vACMGdmf6WA=\n") + c0575.f2059 + StringFog.decrypt("CgQoswO7TPFFHXE=\n", "KnBRw2abKoM=\n") + cls2 + StringFog.decrypt("BY1c1tmF\n", "Je4wt6r29ww=\n"));
            return arrayList2;
        }
    }

    /* JADX WARN: Code duplicated, block: B:29:0x00cf A[Catch: all -> 0x00d4, TRY_LEAVE, TryCatch #0 {all -> 0x00d4, blocks: (B:27:0x00c3, B:29:0x00cf), top: B:33:0x00c3 }] */
    /* JADX WARN: Code duplicated, block: B:35:? A[RETURN, SYNTHETIC] */
    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static Object m8540(ArrayList arrayList) {
        Object obj;
        Class<?> cls;
        Object objM8788;
        C0575 c0575;
        Object objM8789;
        C0493 c0493;
        Field fieldM8577;
        int size = arrayList.size();
        try {
            if (size != 2) {
                if (size != 3) {
                    if (size != 4) {
                        objM8789 = null;
                        cls = null;
                        objM8788 = null;
                        c0575 = null;
                    } else {
                        cls = (Class) AbstractC0912.m8788(arrayList, 0, Class.class);
                        objM8788 = AbstractC0912.m8788(arrayList, 1, Object.class);
                        c0575 = (C0575) AbstractC0912.m8788(arrayList, 2, C0575.class);
                        objM8789 = AbstractC0912.m8788(arrayList, 3, Object.class);
                    }
                } else if (arrayList.get(0) instanceof Class) {
                    cls = (Class) AbstractC0912.m8788(arrayList, 0, Class.class);
                    if (arrayList.get(1) instanceof C0575) {
                        c0575 = (C0575) AbstractC0912.m8788(arrayList, 1, C0575.class);
                        objM8789 = AbstractC0912.m8788(arrayList, 2, Object.class);
                        objM8788 = null;
                    } else {
                        objM8788 = AbstractC0912.m8788(arrayList, 1, Object.class);
                        c0575 = (C0575) AbstractC0912.m8788(arrayList, 2, C0575.class);
                    }
                } else {
                    Object objM87810 = AbstractC0912.m8788(arrayList, 0, Object.class);
                    Class<?> cls2 = objM87810.getClass();
                    C0575 c0576 = (C0575) AbstractC0912.m8788(arrayList, 1, C0575.class);
                    objM8789 = AbstractC0912.m8788(arrayList, 2, Object.class);
                    objM8788 = objM87810;
                    cls = cls2;
                    c0575 = c0576;
                }
                c0493 = C0705.m8630().f2438;
                c0493.getClass();
                fieldM8577 = C0705.m8630().f2439.m8577(cls, c0575);
                if (fieldM8577 != null) {
                    return fieldM8577.get(objM8788);
                }
                return objM8789;
            }
            if (arrayList.get(0) instanceof Class) {
                cls = (Class) AbstractC0912.m8788(arrayList, 0, Class.class);
                obj = null;
            } else {
                Object objM87811 = AbstractC0912.m8788(arrayList, 0, Object.class);
                if (objM87811 != null) {
                    obj = objM87811;
                    cls = objM87811.getClass();
                } else {
                    obj = objM87811;
                    cls = null;
                }
            }
            objM8788 = obj;
            c0575 = (C0575) AbstractC0912.m8788(arrayList, 1, C0575.class);
            fieldM8577 = C0705.m8630().f2439.m8577(cls, c0575);
            if (fieldM8577 != null) {
                return fieldM8577.get(objM8788);
            }
            return objM8789;
        } catch (Throwable unused) {
            AbstractC0323.m8470(c0493.f1788, StringFog.decrypt("KG7evWa7P3cZaMW8c7s=\n", "bRys0hSbWBI=\n") + c0575.f2059 + StringFog.decrypt("dUTo7CncgiI6XbE=\n", "VTCRnEz85FA=\n") + cls + StringFog.decrypt("KIu3yt4c\n", "COjbq61vOmE=\n"));
            return null;
        }
        objM8789 = null;
        c0493 = C0705.m8630().f2438;
        c0493.getClass();
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static ArrayList m8542(C1013 c1013, C0704 c0704, ArrayList arrayList) {
        ArrayList arrayList2 = new ArrayList();
        for (InterfaceC0681 interfaceC0681 : m8546(c1013, c0704, arrayList)) {
            if (interfaceC0681 != null) {
                arrayList2.add(((C0674) interfaceC0681).m8615());
            }
        }
        return arrayList2;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static Object m8543(C1013 c1013, C0704 c0704, ArrayList arrayList) {
        InterfaceC0681 interfaceC0681M8557;
        Object objM8788 = AbstractC0912.m8788(arrayList, 0, Object.class);
        C1064 c1064 = (C1064) AbstractC0912.m8788(arrayList, 1, C1064.class);
        List listM8789 = AbstractC0912.m8789(arrayList, 2);
        if (c1064 != null) {
            interfaceC0681M8557 = C0705.m8630().f2438.m8557(objM8788, c1064.f3824.m8612(new C0475(c1064, c0704, c1013, listM8789), null, c1064.f3822, c1064.f3821));
        } else {
            interfaceC0681M8557 = null;
        }
        if (interfaceC0681M8557 != null) {
            return ((C0674) interfaceC0681M8557).m8615();
        }
        return null;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static C1065 m8545(ArrayList arrayList) {
        return new C1065((List) AbstractC0912.m8788(arrayList, 0, List.class), ((Integer) AbstractC0912.m8788(arrayList, 1, Integer.class)).intValue());
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static ArrayList m8546(C1013 c1013, C0704 c0704, ArrayList arrayList) {
        Object objM8788 = AbstractC0912.m8788(arrayList, 0, Object.class);
        C1064 c1064 = (C1064) AbstractC0912.m8788(arrayList, 1, C1064.class);
        List listM8789 = AbstractC0912.m8789(arrayList, 2);
        if (c1064 == null) {
            return null;
        }
        C0572 c0572M8612 = c1064.f3824.m8612(new C0474(c1064, c0704, c1013, listM8789), null, c1064.f3822, c1064.f3821);
        C0493 c0493 = C0705.m8630().f2438;
        c0493.getClass();
        C0564 c0564 = new C0564(c0572M8612);
        c0564.f2035 = true;
        c0493.m8556(objM8788, c0564, 0, (C0674) null);
        return new ArrayList(c0564.f2033);
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static String m8541(ArrayList arrayList) {
        int i = 0;
        if (arrayList.get(0) instanceof Class) {
            Class cls = (Class) AbstractC0912.m8788(arrayList, 0, Class.class);
            String str = (String) AbstractC0912.m8788(arrayList, 1, String.class);
            C0705.m8630().f2438.getClass();
            return C0493.m8552((Object) null, cls, str);
        }
        Object objM8788 = AbstractC0912.m8788(arrayList, 0, Object.class);
        if (arrayList.get(1) instanceof List) {
            JSONArray jSONArray = new JSONArray((Collection) AbstractC0912.m8788(arrayList, 1, List.class));
            C0705.m8630().f2438.getClass();
            while (i < jSONArray.length()) {
                String strM8552 = C0493.m8552(objM8788, objM8788.getClass(), jSONArray.optString(i));
                if (strM8552 != null) {
                    return strM8552;
                }
                i++;
            }
            return null;
        }
        if (arrayList.get(1) instanceof JSONArray) {
            JSONArray jSONArray2 = (JSONArray) AbstractC0912.m8788(arrayList, 1, JSONArray.class);
            C0705.m8630().f2438.getClass();
            if (jSONArray2 != null) {
                while (i < jSONArray2.length()) {
                    String strM8553 = C0493.m8552(objM8788, objM8788.getClass(), jSONArray2.optString(i));
                    if (strM8553 != null) {
                        return strM8553;
                    }
                    i++;
                }
            }
            return null;
        }
        String str2 = (String) AbstractC0912.m8788(arrayList, 1, String.class);
        C0705.m8630().f2438.getClass();
        return C0493.m8552(objM8788, objM8788.getClass(), str2);
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static String m8544(ArrayList arrayList) {
        Object objM8788 = AbstractC0912.m8788(arrayList, 0, Object.class);
        List list = (List) AbstractC0912.m8788(arrayList, 1, List.class);
        int iIntValue = ((Integer) AbstractC0912.m8788(arrayList, 2, Integer.class)).intValue();
        C0705.m8630().f2438.getClass();
        return new C1170(list, iIntValue).m8960(objM8788);
    }
}
