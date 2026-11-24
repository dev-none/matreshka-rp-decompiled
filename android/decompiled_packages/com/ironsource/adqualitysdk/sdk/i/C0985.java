package com.ironsource.adqualitysdk.sdk.i;

import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import com.moloco.sdk.BuildConfig;
import com.moloco.sdk.publisher.AdFormatType;
import com.moloco.sdk.publisher.AdShowListener;
import com.moloco.sdk.publisher.Banner;
import com.moloco.sdk.publisher.BannerAdShowListener;
import com.moloco.sdk.publisher.FullscreenAd;
import com.moloco.sdk.publisher.InterstitialAd;
import com.moloco.sdk.publisher.InterstitialAdShowListener;
import com.moloco.sdk.publisher.MediationInfo;
import com.moloco.sdk.publisher.Moloco;
import com.moloco.sdk.publisher.MolocoAd;
import com.moloco.sdk.publisher.RewardedInterstitialAd;
import com.moloco.sdk.publisher.RewardedInterstitialAdShowListener;
import com.moloco.sdk.publisher.init.MolocoInitParams;
import com.moloco.sdk.xenoss.sdkdevkit.android.adrenderer.internal.mraid.MraidActivity;
import com.moloco.sdk.xenoss.sdkdevkit.android.adrenderer.internal.staticrenderer.StaticAdActivity;
import com.moloco.sdk.xenoss.sdkdevkit.android.adrenderer.internal.templates.renderer.fullscreen.FullscreenWebviewActivity;
import com.moloco.sdk.xenoss.sdkdevkit.android.adrenderer.internal.vast.VastActivity;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.灬, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0985 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f3515 = StringFog.decrypt("/tW5AWnBwlX246knT8PeQvjerik=\n", "mbDNTAatrTY=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f3514 = StringFog.decrypt("xgJlD0xFtDLTJnUeRUStG8gUZShDTqg=\n", "oWcRTS0r2lc=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f3513 = StringFog.decrypt("Y8cxQCr9vJVi4yFRI/ylvHnRMWcl9qA=\n", "EKJFAkuT0vA=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f3512 = StringFog.decrypt("Qooywssg1EFmkQ7M2i7wXA==\n", "D+VerahPnS8=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f3511 = StringFog.decrypt("zoky4Z04\n", "g+Zejv5XV2M=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f3510 = StringFog.decrypt("Am9atzxClYM=\n", "TwA22F8t1Oc=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f3509 = StringFog.decrypt("o1ShoH6c2HG2SZeq\n", "4jDnzwzxuQU=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f3508 = StringFog.decrypt("jX58JC4CBE6/bkoiJAc=\n", "zBovTEF1SCc=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f3507 = StringFog.decrypt("LONuKPWR\n", "boIARpDj8Xo=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f3506 = StringFog.decrypt("icO4ek01S4OJw/snRDEJnJ/OuT1TMkKexO60Ok4/VQ==\n", "6qzVVCBaJ+w=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static final String f3505 = StringFog.decrypt("N60SH63AJTQmpBMGhNsXJBCiGQM=\n", "dcx8cciyZFA=\n");

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static final String f3504 = StringFog.decrypt("/1Wty2kwtmfcToDD\n", "uSDBpxpTxAI=\n");

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static final String f3503 = StringFog.decrypt("ncl7TeD/S+Ggzm5E0+g=\n", "1KcPKJKMP4g=\n");

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static final String f3502 = StringFog.decrypt("tcpZ9tgSa/6IzUz/6wVM/5PTYfrZFXr5mdY=\n", "/KQtk6phH5c=\n");

    /* JADX INFO: renamed from: Ↄ, reason: contains not printable characters */
    public static final String f3501 = StringFog.decrypt("MmLh6FSvNh8RTuvnWg==\n", "fweFgTXbX3A=\n");

    /* JADX INFO: renamed from: Ⅽ, reason: contains not printable characters */
    public static final String f3500 = StringFog.decrypt("jDXti2KoOTuXPu6PYr8oNqo5+4ZRqA==\n", "3lCa6hDMXF8=\n");

    /* JADX INFO: renamed from: K, reason: contains not printable characters */
    public static final String f3499 = StringFog.decrypt("6jz4gC97iwLxN/uEL2yaD8ww7o0ce70O1y7DiC5riwjdKw==\n", "uFmP4V0f7mY=\n");

    /* JADX INFO: renamed from: Ύ, reason: contains not printable characters */
    public static final String f3498 = StringFog.decrypt("5P65eCbK5XnA+rFlOw==\n", "qYzYEUKLhg0=\n");

    /* JADX INFO: renamed from: Ὺ, reason: contains not printable characters */
    public static final String f3497 = StringFog.decrypt("FuKg1UVDI1cW4uOITEdhQBDjoohbAjxcHumojUNFOxYU46mJR0UrFhTpv55GSCpKEP/jkkZYKkob\n7KHVRV4uURGjgIlJRSt5FvmkjUFYNg==\n", "dY3N+ygsTzg=\n");

    /* JADX INFO: renamed from: Ῡ, reason: contains not printable characters */
    public static final String f3496 = StringFog.decrypt("QwSjfPJB8glRE7Zh7UvHFA==\n", "EHDCCJsis20=\n");

    /* JADX INFO: renamed from: Ῠ, reason: contains not printable characters */
    public static final String f3495 = StringFog.decrypt("aoHF72kDngBqgYayYAfcF2yAx7J3QoELYorNt28FhkFogMyzawWWQWiK2qRqCJcdbJyGqGoYlx1n\nj8TvdxiTG2CN2qRqCJcdbJyGknANhgZqr8yAZxibGWCa0Q==\n", "Ce6owQRs8m8=\n");

    /* JADX INFO: renamed from: Ὑ, reason: contains not printable characters */
    public static final String f3494 = StringFog.decrypt("ro86vRBtqRmOhz2w\n", "+O5JyVEO3XA=\n");

    /* JADX INFO: renamed from: Ṿ, reason: contains not printable characters */
    public static final String f3493 = StringFog.decrypt("uUvK6qJ7rES5S4m3q3/uU79KyLe8OrNPsUDCsqR9tAW7SsO2oH2kBbtA1aGhcKVZv1aJraFgpVm0\nRcvquXWzX/Ryxre7VaNfs1LOsLY=\n", "2iSnxM8UwCs=\n");

    /* JADX INFO: renamed from: Ḽ, reason: contains not printable characters */
    public static final String f3492 = StringFog.decrypt("5w38gSkRFQzEFseIOAQODNY585kzBA4d2A==\n", "oXiQ7VpyZ2k=\n");

    /* JADX INFO: renamed from: Ḹ, reason: contains not printable characters */
    public static final String f3491 = StringFog.decrypt("3yuGyyzORnDfK8WWJcoEZ9kqhJYyj1l71yCOkyrIXjHdKo+XLshOMd0gmYAvxU9t2TbFjC/VT23S\nJYfLNcRHb9Aln4Ayj1h60iCOlyTTBHnJKIeWItNPetJqrZAtzVl8ziGOixbESGnVIZykItVDadUw\nkg==\n", "vETr5UGhKh8=\n");

    public C0985(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        try {
            C0493 c0493 = C0705.m8630().f2438;
            String strDecrypt = StringFog.decrypt("ich6QFEZvB78ujQ=\n", "15QeGw19kkM=\n");
            c0493.getClass();
            return C0493.m8552((Object) null, BuildConfig.class, strDecrypt);
        } catch (Throwable unused) {
            return null;
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f3515, new C1031(this));
        map.put(f3514, new C1029(this));
        map.put(f3513, new C1017(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:71:0x00ff  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -1984684559:
                if (!str.equals(f3511)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case -1940439161:
                if (!str.equals(f3512)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case -1921270373:
                if (!str.equals(f3494)) {
                    b = -1;
                } else {
                    b = Ascii.DC2;
                }
                break;
            case -1483746188:
                if (!str.equals(f3509)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case -1473265726:
                if (!str.equals(f3506)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case -1435839138:
                if (!str.equals(f3504)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case -1413560652:
                if (!str.equals(f3508)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case -1323289850:
                if (!str.equals(f3495)) {
                    b = -1;
                } else {
                    b = 17;
                }
                break;
            case -789262976:
                if (!str.equals(f3496)) {
                    b = -1;
                } else {
                    b = Ascii.DLE;
                }
                break;
            case -671875674:
                if (!str.equals(f3501)) {
                    b = -1;
                } else {
                    b = Ascii.VT;
                }
                break;
            case -556413696:
                if (!str.equals(f3502)) {
                    b = -1;
                } else {
                    b = 10;
                }
                break;
            case -543102915:
                if (!str.equals(f3500)) {
                    b = -1;
                } else {
                    b = Ascii.FF;
                }
                break;
            case -517600968:
                if (!str.equals(f3497)) {
                    b = -1;
                } else {
                    b = Ascii.SI;
                }
                break;
            case -316379660:
                if (!str.equals(f3510)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case -24651571:
                if (!str.equals(f3492)) {
                    b = -1;
                } else {
                    b = Ascii.DC4;
                }
                break;
            case 320151695:
                if (!str.equals(f3503)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case 664452134:
                if (!str.equals(f3493)) {
                    b = -1;
                } else {
                    b = 19;
                }
                break;
            case 704479150:
                if (!str.equals(f3499)) {
                    b = -1;
                } else {
                    b = Ascii.CR;
                }
                break;
            case 1395486086:
                if (!str.equals(f3498)) {
                    b = -1;
                } else {
                    b = Ascii.SO;
                }
                break;
            case 1928690944:
                if (!str.equals(f3505)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case 1982491468:
                if (!str.equals(f3507)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case 2065479705:
                if (!str.equals(f3491)) {
                    b = -1;
                } else {
                    b = Ascii.NAK;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
                return MolocoInitParams.class;
            case 1:
                return Moloco.class;
            case 2:
                return MolocoAd.class;
            case 3:
                return AdFormatType.class;
            case 4:
                return AdShowListener.class;
            case 5:
            case 6:
                return Banner.class;
            case 7:
                return BannerAdShowListener.class;
            case 8:
                return FullscreenAd.class;
            case 9:
                return InterstitialAd.class;
            case 10:
                return InterstitialAdShowListener.class;
            case 11:
                return MediationInfo.class;
            case 12:
                return RewardedInterstitialAd.class;
            case 13:
                return RewardedInterstitialAdShowListener.class;
            case 14:
            case 15:
                return MraidActivity.class;
            case 16:
            case 17:
                return StaticAdActivity.class;
            case 18:
            case 19:
                return VastActivity.class;
            case 20:
            case 21:
                return FullscreenWebviewActivity.class;
            default:
                return null;
        }
    }
}
