package com.ironsource.adqualitysdk.sdk.i;

import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ย, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0558 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public ArrayList f1985;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public C0575 f1986;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public C0565 f1987;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Field m8578(Class cls, Class cls2) {
        Field fieldM8577;
        synchronized (AbstractC0202.class) {
            if (this.f1986 == null) {
                this.f1986 = new C0575();
            }
            C0575 c0575 = this.f1986;
            c0575.f2059 = cls2;
            fieldM8577 = m8577(cls, c0575);
        }
        return fieldM8577;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Field m8577(Class cls, C0575 c0575) {
        synchronized (AbstractC0202.class) {
            if (this.f1985 == null) {
                this.f1985 = new ArrayList();
            }
            this.f1985.clear();
            m8579(cls, c0575, this.f1985);
            if (this.f1985.isEmpty()) {
                return null;
            }
            return (Field) this.f1985.get(0);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8579(Class cls, C0575 c0575, ArrayList arrayList) {
        synchronized (C0558.class) {
            if (this.f1987 == null) {
                this.f1987 = new C0565();
            }
            C0565 c0565 = this.f1987;
            c0565.f2040 = c0575;
            c0565.f2039 = c0575.f2058;
            m8575(cls, c0565, arrayList);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static Field[] m8576(Class cls, boolean z, int i, List list) {
        while (cls != null && !AbstractC0765.m8717(cls, list)) {
            cls = cls.getSuperclass();
        }
        Field[] fieldArr = new Field[0];
        if (cls == null) {
            return fieldArr;
        }
        Field[] declaredFields = new Field[0];
        Field[] fields = new Field[0];
        try {
            declaredFields = cls.getDeclaredFields();
        } catch (Error unused) {
        }
        try {
            fields = cls.getFields();
        } catch (Error unused2) {
        }
        String str = AbstractC0765.f2620;
        int length = declaredFields.length;
        int length2 = fields.length;
        Field[] fieldArr2 = new Field[length + length2];
        System.arraycopy(declaredFields, 0, fieldArr2, 0, length);
        System.arraycopy(fields, 0, fieldArr2, length, length2);
        if (!z) {
            return fieldArr2;
        }
        Class superclass = cls.getSuperclass();
        for (int i2 = 0; superclass != null && i2 != i; i2++) {
            try {
                Field[] declaredFields2 = superclass.getDeclaredFields();
                int length3 = fieldArr2.length;
                int length4 = declaredFields2.length;
                Field[] fieldArr3 = new Field[length3 + length4];
                System.arraycopy(fieldArr2, 0, fieldArr3, 0, length3);
                System.arraycopy(declaredFields2, 0, fieldArr3, length3, length4);
                fieldArr2 = fieldArr3;
            } catch (Error unused3) {
            }
            try {
                Field[] fields2 = superclass.getFields();
                int length5 = fieldArr2.length;
                int length6 = fields2.length;
                Field[] fieldArr4 = new Field[length5 + length6];
                System.arraycopy(fieldArr2, 0, fieldArr4, 0, length5);
                System.arraycopy(fields2, 0, fieldArr4, length5, length6);
                fieldArr2 = fieldArr4;
            } catch (Error unused4) {
            }
            superclass = superclass.getSuperclass();
        }
        return fieldArr2;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8575(Class cls, C0565 c0565, ArrayList arrayList) {
        Field[] fields;
        boolean zIsAssignableFrom;
        boolean z;
        C0575 c0575 = c0565.f2040;
        if (c0575 != null && (z = c0575.f4064)) {
            fields = m8576(cls, z, c0575.f4063, null);
        } else {
            try {
                fields = cls.getDeclaredFields();
            } catch (Error unused) {
                fields = cls.getFields();
            }
        }
        for (Field field : fields) {
            if (c0565.f2040 != null) {
                int modifiers = field.getModifiers();
                int i = c0565.f2040.f4062;
                if ((modifiers & i) == i) {
                    int modifiers2 = field.getModifiers();
                    C0575 c0576 = c0565.f2040;
                    if ((modifiers2 & c0576.f4061) == 0 && !c0576.f2056.contains(field.getType())) {
                        C0575 c0577 = c0565.f2040;
                        if (c0577.f2057) {
                            zIsAssignableFrom = field.getType().equals(c0565.f2040.f2059);
                        } else {
                            zIsAssignableFrom = c0577.f2059.isAssignableFrom(field.getType());
                        }
                        if (zIsAssignableFrom) {
                            int i2 = c0565.f2039;
                            if (i2 != 0) {
                                c0565.f2039 = i2 - 1;
                            } else {
                                field.setAccessible(true);
                                arrayList.add(field);
                            }
                        }
                    }
                }
            }
        }
    }
}
