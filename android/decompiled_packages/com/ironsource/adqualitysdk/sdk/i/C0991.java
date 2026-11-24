package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;
import jp.maio.sdk.android.AdFullscreenActivity;
import jp.maio.sdk.android.HtmlBasedAdActivity;
import jp.maio.sdk.android.MaioAds;
import jp.maio.sdk.android.MaioAdsInstance;
import jp.maio.sdk.android.MaioAdsListener;
import jp.maio.sdk.android.MaioAdsListenerInterface;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﬧ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0991 extends AbstractC0349 {

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f3531 = StringFog.decrypt("qvBFG2Iv2zW95n0/cDLRGrzn\n", "2ZUxVgNGtHQ=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f3530 = StringFog.decrypt("DUf/pP6/KA==\n", "QCaWy7/bW3w=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f3529 = StringFog.decrypt("P+F8ZnmoYNQc82FoVq92\n", "coAVCTjME50=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f3528 = StringFog.decrypt("dhe27daH7qVSBavn+Ybv\n", "O3bfgpfjnek=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f3527 = StringFog.decrypt("1kr5FsKF4bzyWOQc7YTgufVf9QvlgPGV\n", "myuQeYPhkvA=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f3526 = StringFog.decrypt("d/1X0svkAihE/HTJ5usFIkDwZd4=\n", "NpkRp6eIcUs=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f3525 = StringFog.decrypt("phr5vMHITWm/Drz/wc9GNaMDs//hxWQyoAakstLERymNCaO41shWPg==\n", "zGrX0aChIkc=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f3524 = StringFog.decrypt("d8CaXOAAQhJb9ZNxwRVYAVbAjg==\n", "P7T3MKJhMXc=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f3523 = StringFog.decrypt("HaZtY8fcFf0Esiggx9seoRi/JyDuwRe/Nbcwa8L0HpIUoip4z8ED\n", "d9ZDDqa1etM=\n");

    public C0991(String str) {
        super(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﻛ */
    public final String mo8318() {
        return MaioAds.getSdkVersion();
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾇ */
    public final HashMap mo8320() {
        HashMap map = new HashMap();
        map.put(f3531, new C0995(this));
        return map;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:29:0x0058  */
    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0349
    /* JADX INFO: renamed from: ﾒ */
    public final Class mo8319(String str) {
        byte b;
        switch (str.hashCode()) {
            case -1799290762:
                if (!str.equals(f3530)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case -1455130644:
                if (!str.equals(f3525)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case -1303622385:
                if (!str.equals(f3527)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case -1069735125:
                if (!str.equals(f3529)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case -278703286:
                if (!str.equals(f3528)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case 357386522:
                if (!str.equals(f3524)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case 1819361677:
                if (!str.equals(f3526)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case 1914325723:
                if (!str.equals(f3523)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
                return MaioAds.class;
            case 1:
            case 2:
                return AdFullscreenActivity.class;
            case 3:
            case 4:
                return HtmlBasedAdActivity.class;
            case 5:
                return MaioAdsInstance.class;
            case 6:
                return MaioAdsListener.class;
            case 7:
                return MaioAdsListenerInterface.class;
            default:
                return null;
        }
    }
}
