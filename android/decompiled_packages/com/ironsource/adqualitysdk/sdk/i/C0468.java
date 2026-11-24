package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.gms.ads.LoadAdError;
import com.google.android.gms.ads.appopen.AppOpenAd;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ٽ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0468 extends AppOpenAd.AppOpenAdLoadCallback implements InterfaceC0486 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0443 f1734;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0566 f1735;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final AppOpenAd.AppOpenAdLoadCallback f1736;

    public C0468(C0443 c0443, AppOpenAd.AppOpenAdLoadCallback appOpenAdLoadCallback, C0566 c0566) {
        this.f1734 = c0443;
        this.f1736 = appOpenAdLoadCallback;
        this.f1735 = c0566;
    }

    public final void onAdFailedToLoad(LoadAdError loadAdError) {
        this.f1734.m8501(this, this.f1735, StringFog.decrypt("RihoqXv0tDljFHeHb9K7FGs6eYVgv7UWRjxeh2L9vxxTN1SJavU=\n", "B1gY5guR2ng=\n"), loadAdError);
        AppOpenAd.AppOpenAdLoadCallback appOpenAdLoadCallback = this.f1736;
        if (appOpenAdLoadCallback != null) {
            appOpenAdLoadCallback.onAdFailedToLoad(loadAdError);
        }
    }

    public final void onAdLoaded(Object obj) {
        AppOpenAd appOpenAd = (AppOpenAd) obj;
        this.f1734.m8501(this, this.f1735, StringFog.decrypt("9eH7zZBN+zfQ3eTjhGv0Gtjz6uGLBvoY9fXH7YFM8BI=\n", "tJGLguAolXY=\n"), appOpenAd);
        AppOpenAd.AppOpenAdLoadCallback appOpenAdLoadCallback = this.f1736;
        if (appOpenAdLoadCallback != null) {
            appOpenAdLoadCallback.onAdLoaded(appOpenAd);
        }
    }

    public final void onAppOpenAdFailedToLoad(int i) {
        this.f1734.m8501(this, this.f1735, StringFog.decrypt("VG/gnFB/0hJxU/+yRFndP3l98bBLNNM9VG/gnFB/0hJxWfG6TH/YB3pT/7JE\n", "FR+Q0yAavFM=\n"), Integer.valueOf(i));
        AppOpenAd.AppOpenAdLoadCallback appOpenAdLoadCallback = this.f1736;
        if (appOpenAdLoadCallback != null) {
            appOpenAdLoadCallback.onAppOpenAdFailedToLoad(i);
        }
    }

    public final void onAppOpenAdLoaded(AppOpenAd appOpenAd) {
        this.f1734.m8501(this, this.f1735, StringFog.decrypt("Z57z7K4TN7JCouzCujU4n0qM4sC1WDadZ57z7K4TN7JCouzCuhM9\n", "Ju6Do952WfM=\n"), appOpenAd);
        AppOpenAd.AppOpenAdLoadCallback appOpenAdLoadCallback = this.f1736;
        if (appOpenAdLoadCallback != null) {
            appOpenAdLoadCallback.onAppOpenAdLoaded(appOpenAd);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0486
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8342() {
        return this.f1736;
    }

    public final void onAppOpenAdFailedToLoad(LoadAdError loadAdError) {
        this.f1734.m8501(this, this.f1735, StringFog.decrypt("da9n9dzvor9Qk3jbyMmtkli9dtnHpKOQda9n9dzvor9QmXbTwO+oqluTeNvI3aWKXJplyMP4\n", "NN8XuqyKzP4=\n"), loadAdError);
        AppOpenAd.AppOpenAdLoadCallback appOpenAdLoadCallback = this.f1736;
        if (appOpenAdLoadCallback != null) {
            appOpenAdLoadCallback.onAppOpenAdFailedToLoad(loadAdError);
        }
    }
}
