package com.my.tracker;

import android.text.TextUtils;
import com.my.tracker.obfuscated.b3;
import com.my.tracker.obfuscated.l;
import com.my.tracker.obfuscated.s;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes6.dex */
public final class MyTrackerParams {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final List f4895a = new ArrayList();
    final Object b = new Object();
    volatile b3 c = b3.j;
    final Map d = new ConcurrentHashMap();
    volatile String e = null;
    volatile String f = null;
    volatile String g = null;
    volatile String h = null;

    @Retention(RetentionPolicy.SOURCE)
    public @interface Gender {
        public static final int FEMALE = 2;
        public static final int MALE = 1;
        public static final int UNKNOWN = 0;
        public static final int UNSPECIFIED = -1;
    }

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final String f4896a;
        public final String b;
        public final String c;
        public final String d;
        public final Map e;

        public a(String str, String str2, String str3, String str4, Map map) {
            this.f4896a = str;
            this.b = str2;
            this.c = str3;
            this.d = str4;
            this.e = new HashMap(map);
        }
    }

    private static String[] a(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        return new String[]{str};
    }

    private static String b(String[] strArr) {
        if (strArr == null || strArr.length <= 0) {
            return null;
        }
        return strArr[0];
    }

    public int getAge() {
        return this.c.f4912a;
    }

    public String getCustomParam(String str) {
        return (String) this.d.get(str.toLowerCase(Locale.ROOT));
    }

    public String getCustomUserId() {
        return b(this.c.g);
    }

    public String[] getCustomUserIds() {
        return a(this.c.g);
    }

    public String getEmail() {
        return b(this.c.e);
    }

    public String[] getEmails() {
        return a(this.c.e);
    }

    public int getGender() {
        return this.c.b;
    }

    public String getIcqId() {
        return b(this.c.f);
    }

    public String[] getIcqIds() {
        return a(this.c.f);
    }

    public String getLang() {
        return this.e;
    }

    public String getMrgsAppId() {
        return this.f;
    }

    public String getMrgsId() {
        return this.h;
    }

    public String getMrgsUserId() {
        return this.g;
    }

    public String getOkId() {
        return b(this.c.c);
    }

    public String[] getOkIds() {
        return a(this.c.c);
    }

    public String getPhone() {
        return b(this.c.h);
    }

    public String[] getPhones() {
        return a(this.c.h);
    }

    public String getVkConnectId() {
        return b(this.c.i);
    }

    public String[] getVkConnectIds() {
        return a(this.c.i);
    }

    public String getVkId() {
        return b(this.c.d);
    }

    public String[] getVkIds() {
        return a(this.c.d);
    }

    public MyTrackerParams setAge(int i) {
        synchronized (this.b) {
            if (this.c.f4912a != i) {
                b3 b3Var = new b3(i, this.c.b, this.c.c, this.c.d, this.c.e, this.c.f, this.c.g, this.c.h, this.c.i);
                a(b3Var);
                this.c = b3Var;
            }
        }
        return this;
    }

    public MyTrackerParams setCustomParam(String str, String str2) {
        String lowerCase = str.toLowerCase(Locale.ROOT);
        if (str2 == null) {
            this.d.remove(lowerCase);
            return this;
        }
        this.d.put(lowerCase, str2);
        return this;
    }

    public MyTrackerParams setCustomUserId(String str) {
        return setCustomUserIds(a(str));
    }

    public MyTrackerParams setCustomUserIds(String[] strArr) {
        synchronized (this.b) {
            String[] strArrA = a(strArr);
            if (l.a(this.c.g, strArr) != 0) {
                b3 b3Var = new b3(this.c.f4912a, this.c.b, this.c.c, this.c.d, this.c.e, this.c.f, strArrA, this.c.h, this.c.i);
                a(b3Var);
                this.c = b3Var;
            }
        }
        return this;
    }

    public MyTrackerParams setEmail(String str) {
        return setEmails(a(str));
    }

    public MyTrackerParams setEmails(String[] strArr) {
        synchronized (this.b) {
            String[] strArrA = a(strArr);
            if (l.a(this.c.e, strArr) != 0) {
                b3 b3Var = new b3(this.c.f4912a, this.c.b, this.c.c, this.c.d, strArrA, this.c.f, this.c.g, this.c.h, this.c.i);
                a(b3Var);
                this.c = b3Var;
            }
        }
        return this;
    }

    public MyTrackerParams setGender(int i) {
        synchronized (this.b) {
            if (this.c.b != i) {
                b3 b3Var = new b3(this.c.f4912a, i, this.c.c, this.c.d, this.c.e, this.c.f, this.c.g, this.c.h, this.c.i);
                a(b3Var);
                this.c = b3Var;
            }
        }
        return this;
    }

    public MyTrackerParams setIcqId(String str) {
        return setIcqIds(a(str));
    }

    public MyTrackerParams setIcqIds(String[] strArr) {
        synchronized (this.b) {
            String[] strArrA = a(strArr);
            if (l.a(this.c.f, strArr) != 0) {
                b3 b3Var = new b3(this.c.f4912a, this.c.b, this.c.c, this.c.d, this.c.e, strArrA, this.c.g, this.c.h, this.c.i);
                a(b3Var);
                this.c = b3Var;
            }
        }
        return this;
    }

    public MyTrackerParams setLang(String str) {
        this.e = str;
        return this;
    }

    public MyTrackerParams setMrgsAppId(String str) {
        this.f = str;
        return this;
    }

    public MyTrackerParams setMrgsId(String str) {
        this.h = str;
        return this;
    }

    public MyTrackerParams setMrgsUserId(String str) {
        this.g = str;
        return this;
    }

    public MyTrackerParams setOkId(String str) {
        return setOkIds(a(str));
    }

    public MyTrackerParams setOkIds(String[] strArr) {
        synchronized (this.b) {
            String[] strArrA = a(strArr);
            if (l.a(this.c.c, strArr) != 0) {
                b3 b3Var = new b3(this.c.f4912a, this.c.b, strArrA, this.c.d, this.c.e, this.c.f, this.c.g, this.c.h, this.c.i);
                a(b3Var);
                this.c = b3Var;
            }
        }
        return this;
    }

    public MyTrackerParams setPhone(String str) {
        return setPhones(a(str));
    }

    public MyTrackerParams setPhones(String[] strArr) {
        synchronized (this.b) {
            String[] strArrA = a(strArr);
            if (l.a(this.c.h, strArr) != 0) {
                b3 b3Var = new b3(this.c.f4912a, this.c.b, this.c.c, this.c.d, this.c.e, this.c.f, this.c.g, strArrA, this.c.i);
                a(b3Var);
                this.c = b3Var;
            }
        }
        return this;
    }

    public MyTrackerParams setVkConnectId(String str) {
        return setVkConnectIds(a(str));
    }

    public MyTrackerParams setVkConnectIds(String[] strArr) {
        synchronized (this.b) {
            String[] strArrA = a(strArr);
            if (l.a(this.c.i, strArr) != 0) {
                b3 b3Var = new b3(this.c.f4912a, this.c.b, this.c.c, this.c.d, this.c.e, this.c.f, this.c.g, this.c.h, strArrA);
                a(b3Var);
                this.c = b3Var;
            }
        }
        return this;
    }

    public MyTrackerParams setVkId(String str) {
        return setVkIds(a(str));
    }

    public MyTrackerParams setVkIds(String[] strArr) {
        synchronized (this.b) {
            String[] strArrA = a(strArr);
            if (l.a(this.c.d, strArr) != 0) {
                b3 b3Var = new b3(this.c.f4912a, this.c.b, this.c.c, strArrA, this.c.e, this.c.f, this.c.g, this.c.h, this.c.i);
                a(b3Var);
                this.c = b3Var;
            }
        }
        return this;
    }

    private static String[] a(String[] strArr) {
        if (strArr == null || strArr.length == 0) {
            return null;
        }
        return (String[]) strArr.clone();
    }

    public void a(s sVar, s sVar2) {
        synchronized (this.b) {
            synchronized (this.f4895a) {
                sVar.a(this.c);
                this.f4895a.add(sVar2);
            }
        }
    }

    private void a(b3 b3Var) {
        synchronized (this.f4895a) {
            Iterator it = this.f4895a.iterator();
            while (it.hasNext()) {
                ((s) it.next()).a(b3Var);
            }
        }
    }

    public a a() {
        return new a(this.f, this.g, this.h, this.e, this.d);
    }
}
