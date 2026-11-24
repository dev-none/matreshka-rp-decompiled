package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.ApiKeyUtils;

/* JADX INFO: loaded from: classes7.dex */
public class X4 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5952a;
    public final String b;

    public X4(String str, String str2) {
        this.f5952a = str;
        this.b = str2;
    }

    public final String a() {
        return ApiKeyUtils.createPartialApiKey(this.b);
    }

    public final String b() {
        return this.b;
    }

    public final String c() {
        return this.f5952a;
    }

    public boolean d() {
        return false;
    }

    public String e() {
        return this.f5952a + "_" + ApiKeyUtils.createPartialApiKey(this.b);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            X4 x4 = (X4) obj;
            String str = this.f5952a;
            if (str == null ? x4.f5952a != null : !str.equals(x4.f5952a)) {
                return false;
            }
            String str2 = this.b;
            String str3 = x4.b;
            if (str2 != null) {
                return str2.equals(str3);
            }
            if (str3 == null) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        String str = this.f5952a;
        int iHashCode = (str != null ? str.hashCode() : 0) * 31;
        String str2 = this.b;
        return iHashCode + (str2 != null ? str2.hashCode() : 0);
    }

    public String toString() {
        return this.f5952a + "_" + this.b;
    }
}
