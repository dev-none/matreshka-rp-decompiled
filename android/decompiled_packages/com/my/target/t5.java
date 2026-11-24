package com.my.target;

import java.util.Objects;

/* JADX INFO: loaded from: classes6.dex */
public abstract class t5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f4824a;
    public int b;
    public int c;
    public Object d;

    public t5(String str) {
        this.f4824a = str;
    }

    public Object a() {
        return this.d;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            t5 t5Var = (t5) obj;
            if (this.b == t5Var.b && this.c == t5Var.c && this.f4824a.equals(t5Var.f4824a) && Objects.equals(this.d, t5Var.d)) {
                return true;
            }
        }
        return false;
    }

    public int getHeight() {
        return this.c;
    }

    public String getUrl() {
        return this.f4824a;
    }

    public int getWidth() {
        return this.b;
    }

    public int hashCode() {
        return Objects.hash(this.f4824a);
    }

    public void setHeight(int i) {
        this.c = i;
    }

    public void setWidth(int i) {
        this.b = i;
    }

    public void a(Object obj) {
        this.d = obj;
    }
}
