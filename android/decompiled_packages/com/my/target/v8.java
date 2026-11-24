package com.my.target;

import android.content.Context;
import android.content.SharedPreferences;

/* JADX INFO: loaded from: classes6.dex */
public class v8 {
    public static volatile v8 b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final SharedPreferences f4846a;

    public v8(SharedPreferences sharedPreferences) {
        this.f4846a = sharedPreferences;
    }

    public static v8 a(Context context) {
        v8 v8Var;
        v8 v8Var2 = b;
        if (v8Var2 != null) {
            return v8Var2;
        }
        synchronized (v8.class) {
            v8Var = b;
            if (v8Var == null) {
                b = new v8(context.getSharedPreferences("mytarget_prefs", 0));
                v8Var = b;
            }
        }
        return v8Var;
    }

    public int b() {
        return a("asis");
    }

    public void c(String str) {
        a("asid", str);
    }

    public void d(String str) {
        a("hoaid", str);
    }

    public String e() {
        return b("hoaid");
    }

    public String f() {
        return b("hosts");
    }

    public String g() {
        return b("instanceId");
    }

    public void b(int i) {
        a("sdk_flags", i);
    }

    public int c() {
        return a("sdk_flags");
    }

    public String d() {
        return b("hlimit");
    }

    public void e(String str) {
        a("hlimit", str);
    }

    public void f(String str) {
        a("hosts", str);
    }

    public void g(String str) {
        a("instanceId", str);
    }

    public final String b(String str) {
        try {
            String string = this.f4846a.getString(str, null);
            return string != null ? string : "";
        } catch (Throwable th) {
            gb.c("PrefsCache exception - " + th);
            return "";
        }
    }

    public String a() {
        return b("asid");
    }

    public void a(int i) {
        a("asis", i);
    }

    public final int a(String str) {
        try {
            return this.f4846a.getInt(str, -1);
        } catch (Throwable th) {
            gb.c("PrefsCache exception - " + th);
            return 0;
        }
    }

    public final void a(String str, String str2) {
        try {
            SharedPreferences.Editor editorEdit = this.f4846a.edit();
            editorEdit.putString(str, str2);
            editorEdit.commit();
        } catch (Throwable th) {
            gb.c("PrefsCache exception - " + th);
        }
    }

    public final void a(String str, int i) {
        try {
            SharedPreferences.Editor editorEdit = this.f4846a.edit();
            editorEdit.putInt(str, i);
            editorEdit.commit();
        } catch (Throwable th) {
            gb.c("PrefsCache exception - " + th);
        }
    }
}
