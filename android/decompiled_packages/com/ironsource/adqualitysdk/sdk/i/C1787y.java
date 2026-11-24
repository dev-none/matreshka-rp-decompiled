package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.y, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1787y {

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public volatile C0547 f573;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public C0587 f574;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public Context f575;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final C0540 f576;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final C1119 f577;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final C0862 f578;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0913 f579;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0698 f580;

    public C1787y(C0698 c0698) {
        C0913 c0913 = new C0913();
        this.f573 = new C0547(new C0568());
        this.f580 = c0698;
        this.f579 = c0913;
        C0862 c0862 = new C0862();
        this.f578 = c0862;
        this.f577 = new C1119(c0913, c0862, c0698);
        this.f576 = new C0540();
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8432(Context context) {
        this.f575 = context.getApplicationContext();
        Context context2 = this.f575;
        C0909 c0909 = new C0909(this.f575);
        C0690 c0690 = new C0690(this.f575);
        Context context3 = this.f575;
        this.f574 = new C0587(context2, Arrays.asList(c0909, c0690, new C1118(context3), new C0490(context3)));
        m8431();
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0547 m8431() {
        C0813 c0813;
        C0638 c0638;
        C0587 c0587 = this.f574;
        if (c0587 != null) {
            ArrayList arrayList = new ArrayList();
            ArrayList arrayList2 = new ArrayList();
            int i = 1;
            try {
                C0753 c0753 = c0587.f2088;
                Context context = c0587.f2089;
                c0753.getClass();
                c0813 = C0753.m8686(context);
            } catch (Exception e) {
                arrayList.add(StringFog.decrypt("J+MEyD4xP2Mc/x/VFSdwMQ==\n", "dYxrvHZUShE=\n") + e.getMessage());
                ArrayList arrayList3 = new ArrayList();
                arrayList3.add(7);
                c0813 = new C0813(true, true, arrayList3);
            }
            arrayList2.addAll(c0813.f2889);
            try {
                C0636 c0636 = c0587.f2087;
                Context context2 = c0587.f2089;
                c0636.getClass();
                c0638 = C0636.m8605(context2);
            } catch (Exception e2) {
                arrayList.add(StringFog.decrypt("Uq/kxltafIx1tfbGQEB/oX605dtaW3iKaPu3\n", "G8GXsikvEek=\n") + e2.getMessage());
                ArrayList arrayList4 = new ArrayList();
                arrayList4.add(21);
                c0638 = new C0638(true, true, true, true, arrayList4);
            }
            arrayList2.addAll(c0638.f2238);
            HashMap map = new HashMap();
            ArrayList arrayList5 = new ArrayList();
            ArrayList arrayList6 = new ArrayList();
            ArrayList<C0589> arrayList7 = new ArrayList();
            for (InterfaceC0573 interfaceC0573 : c0587.f2086) {
                try {
                    C0885 c0885Mo8551 = interfaceC0573.mo8551();
                    arrayList7.add(new C0589(interfaceC0573.getName(), c0885Mo8551));
                    arrayList2.addAll(c0885Mo8551.f3143);
                    if (!c0885Mo8551.f3144 && c0885Mo8551.f3141 != null) {
                        arrayList.add(interfaceC0573.getName() + StringFog.decrypt("Bc8=\n", "P++q3jxt1eQ=\n") + c0885Mo8551.f3141);
                    }
                    if (c0885Mo8551.f3142 != null) {
                        map.put(interfaceC0573.getName(), c0885Mo8551.f3142);
                    }
                    interfaceC0573.getName();
                    for (Integer num : c0885Mo8551.f3143) {
                        int iIntValue = num.intValue();
                        if (iIntValue != 30 && iIntValue != 31 && iIntValue != 33 && iIntValue != 32 && iIntValue != 40 && iIntValue != 42 && iIntValue != 44 && iIntValue != 41) {
                            if (iIntValue == 63 || iIntValue == 64 || iIntValue == 61 || iIntValue == 62 || iIntValue == 60) {
                                arrayList5.add(num);
                            } else if (iIntValue >= 50 && iIntValue <= 56) {
                                arrayList6.add(num);
                            }
                        }
                    }
                } catch (Exception e3) {
                    arrayList.add(interfaceC0573.getName() + StringFog.decrypt("u/M=\n", "gdNqhTAzkOo=\n") + e3.getMessage());
                    arrayList7.add(new C0589(interfaceC0573.getName(), new C0885(false, Collections.EMPTY_LIST, null, null)));
                    i = i;
                }
            }
            int i2 = i;
            boolean z = c0813.f2891;
            boolean z2 = c0813.f2890;
            boolean z3 = c0638.f2242;
            boolean z4 = c0638.f2241;
            boolean z5 = c0638.f2240;
            boolean z6 = c0638.f2239;
            int iIntValue2 = !z ? 1 : 0;
            if (!z2) {
                iIntValue2++;
            }
            if (!z3 && !z4 && !z5 && !z6) {
                iIntValue2 += 2;
            }
            for (C0589 c0589 : arrayList7) {
                if (c0589.f2098.f3144) {
                    Integer num2 = (Integer) C0587.f2084.get(c0589.f2099);
                    iIntValue2 += num2 != null ? num2.intValue() : i2;
                }
            }
            C0568 c0568 = new C0568();
            c0568.f2048 = iIntValue2;
            c0568.f2047 = arrayList5;
            c0568.f2046 = arrayList6;
            c0568.f2045 = map;
            c0568.f2044 = arrayList2;
            c0568.f2043 = arrayList;
            C0547 c0547 = new C0547(c0568);
            this.f573 = c0547;
            return c0547;
        }
        throw new IllegalStateException(StringFog.decrypt("SWUGk2erwKo8Si22BK3cpmhNI65NvterMgQBo0iokqZyTTarRajbtXkMIa1KsNe3aA1ipE22wbsy\n", "HCRCwiTEss8=\n"));
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final byte[] m8433(byte[] bArr, String str) {
        C0540 c0540 = this.f576;
        C1009 c1009 = (C1009) c0540.f1965.remove(str);
        if (c1009 == null || System.currentTimeMillis() - c1009.f3647 > c0540.f1966) {
            c1009 = null;
        }
        if (c1009 != null) {
            return AbstractC0997.m8852(bArr, c1009, this.f579);
        }
        throw new IllegalStateException(AbstractC0343.m8497("atodCpk+BPxL2x0fkzgZ8QTTUgvcPxLkUdBODbUpTbU=\n", "JLU9efxNd5U=\n", new StringBuilder(), str));
    }
}
