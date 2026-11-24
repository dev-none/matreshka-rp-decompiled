package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ϯ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0349 extends AbstractC0912 implements InterfaceC0462 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public String f1343;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public String f1344;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final String f1345;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public Map f1346;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static final String f1342 = StringFog.decrypt("76R1HnDqJzH4qlc9d/UiDfI=\n", "nMEBWAWGS2I=\n");

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static final String f1341 = StringFog.decrypt("kRlyEUEVUxOTPFEWXhBvGasPQA==\n", "+Go0ZC15AHc=\n");

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static final String f1340 = StringFog.decrypt("VajvngZLWDk=\n", "Ms2b3WoqK0o=\n");

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public static final String f1339 = StringFog.decrypt("Avtj\n", "a5UX6P9VyWI=\n");

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public static final String f1338 = StringFog.decrypt("6+VCww==\n", "h4ospGRO86A=\n");

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public static final String f1337 = StringFog.decrypt("VnUMqJKe\n", "Mhp5yv77z4U=\n");

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public static final String f1336 = StringFog.decrypt("8NHTrU0=\n", "lr28zDkPlfc=\n");

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public static final String f1335 = StringFog.decrypt("oC7FXA==\n", "wkGqMJd+EWs=\n");

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public static final String f1334 = StringFog.decrypt("O1/GPA==\n", "WDenTo4MXJI=\n");

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public static final String f1333 = StringFog.decrypt("L5KV/A==\n", "TevhmSJ56Ng=\n");

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public static final String f1332 = StringFog.decrypt("+QuJ0A==\n", "j2TgtAWsbHE=\n");

    /* JADX INFO: renamed from: ףּ, reason: contains not printable characters */
    public static final String f1331 = StringFog.decrypt("7wn4oUY=\n", "nGGX0zIFNs8=\n");

    public AbstractC0349(String str) {
        this.f1345 = str;
    }

    /* JADX INFO: renamed from: ﻏ */
    public boolean mo8444() {
        return this instanceof C0240;
    }

    /* JADX INFO: renamed from: ﻐ */
    public boolean mo8441() {
        return this instanceof C0274;
    }

    /* JADX INFO: renamed from: ﻛ */
    public abstract String mo8318();

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final synchronized String m8499() {
        if (TextUtils.isEmpty(this.f1343) || this.f1343.equals(StringFog.decrypt("OwZtdGUeug==\n", "fkgsNilb/mY=\n"))) {
            this.f1343 = mo8318();
        }
        return this.f1343;
    }

    /* JADX INFO: renamed from: ﾇ */
    public abstract HashMap mo8320();

    /* JADX INFO: renamed from: ﾒ */
    public abstract Class mo8319(String str);

    /* JADX INFO: renamed from: ﾒ */
    public String mo8325() {
        String str = this.f1344;
        return str != null ? str : m8499();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0462
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8326(C1013 c1013, String str, ArrayList arrayList, C0566 c0566, C0704 c0704) {
        InterfaceC0350 interfaceC0350 = (InterfaceC0350) this.f1346.get(str);
        try {
            if (interfaceC0350 != null) {
                return interfaceC0350.mo8317(arrayList, c0566);
            }
            new C1742c0(c1013, c0704, this.f1345, str).m8596(this.f1345);
            return null;
        } catch (Exception e) {
            String str2 = this.f1345;
            StringBuilder sb = new StringBuilder();
            sb.append(StringFog.decrypt("ti0wywfgYA6aMyeEELhyBYYrK8oS4A==\n", "819CpHXAF2Y=\n"));
            sb.append(this.f1345);
            AbstractC0728.m8662(str2, AbstractC0970.m8850("Lw==\n", "CB0LBFtML5w=\n", AbstractC0502.m8559("Zxc=\n", "RzCEM5NkOGU=\n", sb, str)), e, null);
        }
    }

    /* JADX WARN: Code duplicated, block: B:42:0x00a5  */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r7v15, types: [java.lang.Class] */
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Class m8500(String str, boolean z) {
        byte b;
        try {
            if (str.contains(StringFog.decrypt("hQ==\n", "qxDUHQ8HFdw=\n"))) {
                String str2 = AbstractC0765.f2620;
                try {
                    str = Class.forName(str);
                    return str;
                } catch (Throwable th) {
                    if (z) {
                        AbstractC0728.m8662(AbstractC0765.f2620, StringFog.decrypt("0K1IQeLW\n", "k8EpMpH2C/o=\n") + str + StringFog.decrypt("ckvbtge6fMY8QQ==\n", "UiW0wifcE7M=\n"), th, null);
                    }
                    return null;
                }
            }
            switch (str.hashCode()) {
                case -1325958191:
                    if (!str.equals(f1337)) {
                        b = -1;
                    } else {
                        b = 2;
                    }
                    break;
                case 104431:
                    if (!str.equals(f1339)) {
                        b = -1;
                    } else {
                        b = 0;
                    }
                    break;
                case 3029738:
                    if (!str.equals(f1335)) {
                        b = -1;
                    } else {
                        b = 4;
                    }
                    break;
                case 3039496:
                    if (!str.equals(f1333)) {
                        b = -1;
                    } else {
                        b = 6;
                    }
                    break;
                case 3052374:
                    if (!str.equals(f1334)) {
                        b = -1;
                    } else {
                        b = 5;
                    }
                    break;
                case 3327612:
                    if (!str.equals(f1338)) {
                        b = -1;
                    } else {
                        b = 1;
                    }
                    break;
                case 3625364:
                    if (!str.equals(f1332)) {
                        b = -1;
                    } else {
                        b = 7;
                    }
                    break;
                case 97526364:
                    if (!str.equals(f1336)) {
                        b = -1;
                    } else {
                        b = 3;
                    }
                    break;
                case 109413500:
                    if (!str.equals(f1331)) {
                        b = -1;
                    } else {
                        b = 8;
                    }
                    break;
                default:
                    b = -1;
                    break;
            }
            switch (b) {
                case 0:
                    return Integer.TYPE;
                case 1:
                    return Long.TYPE;
                case 2:
                    return Double.TYPE;
                case 3:
                    return Float.TYPE;
                case 4:
                    return Boolean.TYPE;
                case 5:
                    return Character.TYPE;
                case 6:
                    return Byte.TYPE;
                case 7:
                    return Void.TYPE;
                case 8:
                    return Short.TYPE;
                default:
                    return mo8319(str);
            }
        } catch (Throwable th2) {
            if (z) {
                AbstractC0728.m8662(this.f1345, AbstractC0970.m8850("G0/9Bcf7D2JVRQ==\n", "OyGSceedYBc=\n", AbstractC0502.m8559("8Nhvyyv6\n", "s7QOuFjaNoM=\n", new StringBuilder(), str)), th2, null);
            }
            return null;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8501(InterfaceC0486 interfaceC0486, C0566 c0566, String str, Object... objArr) {
        try {
            ArrayList arrayList = new ArrayList(Arrays.asList(objArr));
            arrayList.add(0, interfaceC0486);
            C1013.m8856(c0566.f2041, str, true, false, arrayList);
            C1013 c1013 = c0566.f2041;
            C0604 c0604 = new C0604(c0566, str, false, arrayList);
            c1013.getClass();
            try {
                AbstractC1766n.m8388(c0604);
            } catch (Throwable unused) {
            }
            C1013 c1014 = c0566.f2041;
            C0604 c0605 = new C0604(c0566, str, true, arrayList);
            c1014.getClass();
            try {
                AbstractC1766n.m8386(new C0442(c0605));
            } catch (Throwable unused2) {
            }
        } catch (Throwable th) {
            AbstractC0728.m8662(this.f1345, StringFog.decrypt("l25QlMKkzXjy\n", "0hwi+7CEpBY=\n") + this, th, null);
        }
    }
}
