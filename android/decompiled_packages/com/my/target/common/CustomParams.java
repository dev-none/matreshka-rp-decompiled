package com.my.target.common;

import android.text.TextUtils;
import com.my.target.a2;
import com.my.target.e0;
import com.my.target.gb;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class CustomParams {
    public volatile String[] c;
    public volatile String[] d;
    public volatile String[] e;
    public volatile String[] f;
    public volatile String[] g;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Map f4579a = new HashMap();
    public final Map b = new HashMap();
    public a2.a h = a2.f;

    public interface Gender {
        public static final int FEMALE = 2;
        public static final int MALE = 1;
        public static final int UNKNOWN = 0;
        public static final int UNSPECIFIED = -1;
    }

    public final synchronized void a(String str, String str2) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (str2 == null) {
            this.b.remove(str);
        } else {
            this.b.put(str, str2);
        }
    }

    public final boolean b(String str, String str2) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        synchronized (this) {
            if ("exb".equals(str)) {
                this.h = a2.e.a(str2);
            }
            if (str2 == null) {
                return b(str);
            }
            this.f4579a.put(str, str2);
            return true;
        }
    }

    public int getAge() {
        String strA = a("ea");
        if (strA == null) {
            return 0;
        }
        try {
            return Integer.parseInt(strA);
        } catch (Throwable unused) {
            return 0;
        }
    }

    public String getCustomParam(String str) {
        return a(str);
    }

    public String getCustomUserId() {
        String[] strArr = this.g;
        if (strArr == null || strArr.length <= 0) {
            return null;
        }
        return strArr[0];
    }

    public String[] getCustomUserIds() {
        String[] strArr = this.g;
        if (strArr == null) {
            return null;
        }
        return (String[]) strArr.clone();
    }

    public String getEmail() {
        String[] strArr = this.c;
        if (strArr == null || strArr.length <= 0) {
            return null;
        }
        return strArr[0];
    }

    public String[] getEmails() {
        String[] strArr = this.c;
        if (strArr == null) {
            return null;
        }
        return (String[]) strArr.clone();
    }

    public int getGender() {
        String strA = a("eg");
        if (strA == null) {
            return -1;
        }
        try {
            return Integer.parseInt(strA);
        } catch (Throwable unused) {
            return -1;
        }
    }

    public String getIcqId() {
        String[] strArr = this.f;
        if (strArr == null || strArr.length <= 0) {
            return null;
        }
        return strArr[0];
    }

    public String[] getIcqIds() {
        String[] strArr = this.f;
        if (strArr == null) {
            return null;
        }
        return (String[]) strArr.clone();
    }

    public String getLang() {
        return a("lang");
    }

    public String getMrgsAppId() {
        return a("mrgs_app_id");
    }

    public String getMrgsId() {
        return a("mrgs_device_id");
    }

    public String getMrgsUserId() {
        return a("mrgs_user_id");
    }

    public String getOkId() {
        String[] strArr = this.d;
        if (strArr == null || strArr.length <= 0) {
            return null;
        }
        return strArr[0];
    }

    public String[] getOkIds() {
        String[] strArr = this.d;
        if (strArr == null) {
            return null;
        }
        return (String[]) strArr.clone();
    }

    public String getVKId() {
        String[] strArr = this.e;
        if (strArr == null || strArr.length <= 0) {
            return null;
        }
        return strArr[0];
    }

    public String[] getVKIds() {
        String[] strArr = this.e;
        if (strArr == null) {
            return null;
        }
        return (String[]) strArr.clone();
    }

    public void putCustomDataToMap(Map<String, String> map) {
        map.putAll(this.b);
    }

    public void putDataTo(Map<String, String> map) {
        synchronized (this) {
            map.putAll(this.f4579a);
        }
    }

    public void setAge(int i) {
        if (i < 0) {
            gb.a("CustomParams: Age param removed");
            b("ea");
        } else {
            gb.a("CustomParams: Age param set to " + i);
            b("ea", String.valueOf(i));
        }
    }

    public void setCustomParam(String str, String str2) {
        b(str, str2);
        a(str, str2);
    }

    public void setCustomUserId(String str) {
        if (str == null) {
            this.g = null;
        } else {
            this.g = new String[]{str};
        }
        b("custom_user_id", str);
    }

    public void setCustomUserIds(String[] strArr) {
        if (strArr == null) {
            this.g = null;
            b("custom_user_id");
        } else {
            this.g = (String[]) Arrays.copyOf(strArr, strArr.length);
            b("custom_user_id", e0.a(strArr));
        }
    }

    public void setEmail(String str) {
        if (str == null) {
            this.c = null;
        } else {
            this.c = new String[]{str};
        }
        b("email", str);
    }

    public void setEmails(String[] strArr) {
        if (strArr == null) {
            this.c = null;
            b("email");
        } else {
            this.c = (String[]) Arrays.copyOf(strArr, strArr.length);
            b("email", e0.a(strArr));
        }
    }

    public void setGender(int i) {
        if (i != 0 && i != 1 && i != 2) {
            b("eg");
            gb.a("CustomParams: Gender param removed");
        } else {
            gb.a("CustomParams: Gender param is set to " + i);
            b("eg", String.valueOf(i));
        }
    }

    public void setIcqId(String str) {
        if (str == null) {
            this.f = null;
        } else {
            this.f = new String[]{str};
        }
        b("icq_id", str);
    }

    public void setIcqIds(String[] strArr) {
        if (strArr == null) {
            this.f = null;
            b("icq_id");
        } else {
            this.f = (String[]) Arrays.copyOf(strArr, strArr.length);
            b("icq_id", e0.a(strArr));
        }
    }

    public void setLang(String str) {
        b("lang", str);
    }

    public void setMrgsAppId(String str) {
        b("mrgs_app_id", str);
    }

    public void setMrgsId(String str) {
        b("mrgs_device_id", str);
    }

    public void setMrgsUserId(String str) {
        b("mrgs_user_id", str);
    }

    public void setOkId(String str) {
        if (str == null) {
            this.d = null;
        } else {
            this.d = new String[]{str};
        }
        b("ok_id", str);
    }

    public void setOkIds(String[] strArr) {
        if (strArr == null) {
            this.d = null;
            b("ok_id");
        } else {
            this.d = (String[]) Arrays.copyOf(strArr, strArr.length);
            b("ok_id", e0.a(strArr));
        }
    }

    public void setVKId(String str) {
        if (str == null) {
            this.e = null;
        } else {
            this.e = new String[]{str};
        }
        b("vk_id", str);
    }

    public void setVKIds(String[] strArr) {
        if (strArr == null) {
            this.e = null;
            b("vk_id");
        } else {
            this.e = (String[]) Arrays.copyOf(strArr, strArr.length);
            b("vk_id", e0.a(strArr));
        }
    }

    public final String a(String str) {
        String str2;
        synchronized (this) {
            str2 = (String) this.f4579a.get(str);
        }
        return str2;
    }

    public final boolean b(String str) {
        synchronized (this) {
            if (!this.f4579a.containsKey(str)) {
                return false;
            }
            this.f4579a.remove(str);
            return true;
        }
    }
}
