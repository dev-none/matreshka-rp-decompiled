package com.ironsource.adqualitysdk.sdk.i;

import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import com.ogury.sdk.Ogury;
import io.presage.Presage;
import io.presage.common.AdConfig;
import io.presage.common.PresageSdk;
import io.presage.common.network.models.RewardItem;
import io.presage.interstitial.InterstitialActivity;
import io.presage.interstitial.PresageInterstitial;
import io.presage.interstitial.PresageInterstitialCallback;
import io.presage.interstitial.optinvideo.PresageOptinVideo;
import io.presage.interstitial.optinvideo.PresageOptinVideoCallback;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ǐ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0230 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f911 = StringFog.decrypt("yroiFuM9DhjKuh8o4iwcF866\n", "rd9WRpFYfXk=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f910 = StringFog.decrypt("OW2yKxXYCh85fK8WEs0DLitkqgAazwQ=\n", "SgjGYnusb20=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f909 = StringFog.decrypt("tuRrg8j/STqT6Hup18hBOKnjfq/T\n", "xYEfzLiLIFQ=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f908 = StringFog.decrypt("1hSL4EfIEprYHov5W9kEicwPzORczA3V9hXR9UfeFZLLEsT8dM4VkskS0ek=\n", "v3ulkDWtYfs=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f907 = StringFog.decrypt("aG2dDV/MCvJVaogEbNwK8ldqnRE=\n", "IQPpaC2/fps=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f906 = StringFog.decrypt("iCL9VYzpIKiGKP1MkPg2u5I5ulGX7T/nlCT9bJD4NruSObpRl+0/iII5ulOX+Co=\n", "4U3TJf6MU8k=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f905 = StringFog.decrypt("s9a00MCIL8KS1onX1YEc0pLWi9fAlA==\n", "5r/9vrTtXbE=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f904 = StringFog.decrypt("Qyc+TxM=\n", "DEBLPWqK3jg=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f903 = StringFog.decrypt("Ru35A/nWQg==\n", "Fp+ccJixJzc=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f902 = StringFog.decrypt("4c4DXylOETvV1w==\n", "sbxmLEgpdGg=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f901 = StringFog.decrypt("OGp+4NfSRRIGbH7hxcFJLwF5dw==\n", "aBgbk7a1IFs=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f900 = StringFog.decrypt("n4Wvj0PCUxuhg6+OUdFfJqaWpr9DyVowrpSh\n", "z/fK/CKlNlI=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f899 = StringFog.decrypt("h6OoexP1/B2npaRmJPv9N7g=\n", "19HNCHKSmVI=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f898 = StringFog.decrypt("BalkiVFibTslr2iUZmxsETqYYJZcZ2kXPg==\n", "VdsB+jAFCHQ=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f897 = StringFog.decrypt("Hd6I33jcoB0q1g==\n", "T7v/vgq46Wk=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f896 = StringFog.decrypt("wSe9f9tPD24=\n", "gEP+ELUpZgk=\n");

    public C0230(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        String strMo8325 = mo8325();
        if (strMo8325 != null) {
            return strMo8325.split(StringFog.decrypt("MQ==\n", "HBYas3kay0Q=\n"))[0];
        }
        return null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f911, new C0329(this));
        map.put(f910, new C0264(this));
        map.put(f909, new C0234(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:44:0x0093  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -2101347995:
                if (!str.equals(f896)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case -1907784110:
                if (!str.equals(f899)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case -1704786309:
                if (!str.equals(f907)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case -938422005:
                if (!str.equals(f902)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case -610604286:
                if (!str.equals(f897)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case -126768170:
                if (!str.equals(f908)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case 76142724:
                if (!str.equals(f904)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case 698887547:
                if (!str.equals(f901)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case 1067648736:
                if (!str.equals(f900)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case 1346371759:
                if (!str.equals(f903)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case 1871097647:
                if (!str.equals(f905)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case 2109755994:
                if (!str.equals(f906)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case 2128976055:
                if (!str.equals(f898)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
            case 1:
                return InterstitialActivity.class;
            case 2:
            case 3:
                return io.presage.interstitial.ui.InterstitialActivity.class;
            case 4:
                return Ogury.class;
            case 5:
                return Presage.class;
            case 6:
                return PresageSdk.class;
            case 7:
                return PresageInterstitial.class;
            case 8:
                return PresageInterstitialCallback.class;
            case 9:
                return PresageOptinVideo.class;
            case 10:
                return PresageOptinVideoCallback.class;
            case 11:
                return RewardItem.class;
            case 12:
                return AdConfig.class;
            default:
                return null;
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final String mo8325() {
        try {
            try {
                return (String) Class.forName(StringFog.decrypt("h7p1RRAL4DCJsHVWDQP+PoD7MlNMOPIyhrApXAwK5jmPoC9xDRvxIqO6NUEGIeE=\n", "7tVbNWJuk1E=\n")).getMethod(StringFog.decrypt("7g==\n", "j8qVH2auNHo=\n"), null).invoke(null, null);
            } catch (Exception unused) {
                return PresageSdk.getAdsSdkVersion();
            }
        } catch (Throwable unused2) {
            return null;
        }
    }
}
