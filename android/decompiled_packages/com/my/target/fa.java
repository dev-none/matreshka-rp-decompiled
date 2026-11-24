package com.my.target;

/* JADX INFO: loaded from: classes6.dex */
public class fa extends b {
    public final String L;
    public final long M;

    public fa(String str, long j) {
        this.M = j;
        this.z = "shoppable";
        this.L = str;
    }

    public static fa a(String str, long j) {
        return new fa(str, j);
    }

    public long L() {
        return this.M;
    }

    public String M() {
        return this.L;
    }
}
