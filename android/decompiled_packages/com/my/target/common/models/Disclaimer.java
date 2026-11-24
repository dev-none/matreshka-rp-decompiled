package com.my.target.common.models;

/* JADX INFO: loaded from: classes6.dex */
public class Disclaimer {
    public final int disclaimerType;
    public final String text;

    public Disclaimer(int i, String str) {
        this.disclaimerType = i;
        this.text = str;
    }

    public String toString() {
        return "Disclaimer{disclaimerType=" + this.disclaimerType + ", text='" + this.text + "'}";
    }
}
