package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Arrays;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ʕ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0272 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C1137 f977;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C1013 f978;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ boolean f979;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ String f980;

    public C0272(C1137 c1137, String str, boolean z, C1013 c1013) {
        this.f977 = c1137;
        this.f980 = str;
        this.f979 = z;
        this.f978 = c1013;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8461(Object obj, Method method, Object[] objArr) {
        if (method != null) {
            try {
                String str = this.f980 + StringFog.decrypt("4g==\n", "zDuI2Uht9a4=\n") + method.getName();
                ArrayList arrayListM8913 = C1137.m8913(this.f977, objArr != null ? Arrays.asList(objArr) : new ArrayList(), new Object[]{(InterfaceC0486) obj});
                ArrayList arrayList = new ArrayList();
                if (this.f979) {
                    arrayList.add(arrayListM8913);
                    arrayListM8913 = arrayList;
                }
                C0566 c0566 = this.f978.f3674;
                C1013.m8856(c0566.f2041, str, true, false, arrayListM8913);
                C1013 c1013 = c0566.f2041;
                C0604 c0604 = new C0604(c0566, str, false, arrayListM8913);
                c1013.getClass();
                try {
                    AbstractC1766n.m8388(c0604);
                } catch (Throwable unused) {
                }
                C1013 c1014 = c0566.f2041;
                C0604 c0605 = new C0604(c0566, str, true, arrayListM8913);
                c1014.getClass();
                try {
                    AbstractC1766n.m8386(new C0442(c0605));
                } catch (Throwable unused2) {
                }
            } catch (Throwable th) {
                String strM8859 = this.f978.m8859();
                StringBuilder sb = new StringBuilder();
                sb.append(StringFog.decrypt("7qC+PX0Iec7dvac7YU8w\n", "q9LMUg8oEKA=\n"));
                sb.append(method.getName());
                sb.append(StringFog.decrypt("ZcAXvolxc6sqw1I=\n", "Ra1yyuEeF4s=\n"));
                sb.append(this.f980);
                AbstractC1104.m8887(strM8859, AbstractC0970.m8850("1SzkDTdVSvaH\n", "9UCNfkMwJJM=\n", sb), th, false);
            }
        }
    }
}
