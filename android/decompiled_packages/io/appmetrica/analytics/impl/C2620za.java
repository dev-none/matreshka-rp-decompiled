package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.za, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2620za extends K2 {
    public C2620za(int i) {
        super(i);
    }

    @Override // io.appmetrica.analytics.impl.K2, io.appmetrica.analytics.impl.Aa
    public final On a(String str) {
        int length = 0;
        if (str != null) {
            int length2 = str.length();
            int i = this.f5754a;
            if (length2 > i) {
                String strSubstring = str.substring(0, i);
                length = str.getBytes().length - strSubstring.getBytes().length;
                str = strSubstring;
            }
        }
        return new On(str, new C2187i3(length));
    }
}
