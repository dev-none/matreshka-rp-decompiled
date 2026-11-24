package com.my.target;

import android.text.TextUtils;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class y5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f4870a;
    public final String b;
    public final String c;
    public String f;
    public t g;
    public final HashMap e = new HashMap();
    public int h = 10000;
    public float i = 0.0f;
    public final za d = za.a(h0.e);

    public y5(String str, String str2, String str3) {
        this.f4870a = str;
        this.b = str2;
        this.c = str3;
    }

    public static y5 a(String str, String str2, String str3) {
        return new y5(str, str2, str3);
    }

    public String b() {
        return this.f4870a;
    }

    public Map c() {
        return new HashMap(this.e);
    }

    public String d() {
        return this.f;
    }

    public String e() {
        return this.b;
    }

    public float f() {
        return this.i;
    }

    public t g() {
        return this.g;
    }

    public za h() {
        return this.d;
    }

    public int i() {
        return this.h;
    }

    public boolean j() {
        return "myTarget".equals(this.f4870a);
    }

    public String a() {
        return this.c;
    }

    public void a(String str) {
        this.f = str;
    }

    public void a(int i) {
        this.h = i;
    }

    public void a(float f) {
        this.i = f;
    }

    public void a(t tVar) {
        this.g = tVar;
    }

    public void a(String str, String str2) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (str2 == null) {
            this.e.remove(str);
        } else {
            this.e.put(str, str2);
        }
    }
}
