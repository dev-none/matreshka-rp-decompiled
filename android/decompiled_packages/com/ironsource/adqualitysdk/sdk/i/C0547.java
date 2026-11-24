package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.TreeSet;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.จ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0547 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final List f1972;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final int f1973;

    public C0547(C0568 c0568) {
        this.f1973 = c0568.f2048;
        Collections.unmodifiableList(new ArrayList(c0568.f2047));
        Collections.unmodifiableList(new ArrayList(c0568.f2046));
        Collections.unmodifiableMap(new HashMap(c0568.f2045));
        this.f1972 = Collections.unmodifiableList(new ArrayList(c0568.f2044));
        Collections.unmodifiableList(new ArrayList(c0568.f2043));
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String m8574() {
        String string;
        List<Integer> list = this.f1972;
        if (list.isEmpty()) {
            string = StringFog.decrypt("Z5yLdg==\n", "CfPlE52c5lY=\n");
        } else {
            TreeSet<Integer> treeSet = new TreeSet();
            for (Integer num : list) {
                if (num != null) {
                    treeSet.add(num);
                }
            }
            if (treeSet.isEmpty()) {
                string = StringFog.decrypt("UThk3w==\n", "P1cKulEUQ3E=\n");
            } else {
                StringBuilder sb = new StringBuilder();
                boolean z = true;
                for (Integer num2 : treeSet) {
                    if (!z) {
                        sb.append(',');
                    }
                    sb.append(num2);
                    z = false;
                }
                string = sb.toString();
            }
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(StringFog.decrypt("69o7f+bAlaWn\n", "negADIWv58A=\n"));
        sb2.append(this.f1973);
        sb2.append(StringFog.decrypt("2Q==\n", "9mjvYuWdy9g=\n"));
        sb2.append(13);
        return AbstractC0343.m8497("ElweZw5y6awT\n", "KS93AGAThd8=\n", sb2, string);
    }
}
