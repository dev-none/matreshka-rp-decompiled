package com.pushwoosh.i;

import java.io.Serializable;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements Serializable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5095a;
    public final String b;
    public final String c;

    public a(String str, String str2, String str3) {
        this.f5095a = str;
        this.b = str2;
        this.c = str3;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && a.class == obj.getClass()) {
            a aVar = (a) obj;
            String str = this.f5095a;
            if (str != null) {
                return str.equals(aVar.f5095a);
            }
            if (aVar.f5095a == null) {
                String str2 = this.b;
                String str3 = aVar.b;
                if (str2 == null ? str3 == null : str2.equals(str3)) {
                    return true;
                }
            }
        }
        return false;
    }

    public final int hashCode() {
        String str = this.f5095a;
        int iHashCode = (str != null ? str.hashCode() : 0) * 31;
        String str2 = this.b;
        return iHashCode + (str2 != null ? str2.hashCode() : 0);
    }

    public final String toString() {
        return "HtmlData{code='" + this.f5095a + "', url='" + this.b + "'}";
    }
}
