package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.gms.ads.AdError;
import com.google.android.gms.ads.FullScreenContentCallback;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ث, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0451 extends FullScreenContentCallback implements InterfaceC0486 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0443 f1714;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0566 f1715;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final FullScreenContentCallback f1716;

    public C0451(C0443 c0443, FullScreenContentCallback fullScreenContentCallback, C0566 c0566) {
        this.f1714 = c0443;
        this.f1716 = fullScreenContentCallback;
        this.f1715 = c0566;
    }

    public final void onAdClicked() {
        this.f1714.m8501(this, this.f1715, StringFog.decrypt("JmUbzbr7ZqYFfjTOh+xxrRRTFs2F+nWgCz4Yz6j8V68JcxzEjQ==\n", "YBB3oemYFMM=\n"), new Object[0]);
        FullScreenContentCallback fullScreenContentCallback = this.f1716;
        if (fullScreenContentCallback != null) {
            fullScreenContentCallback.onAdClicked();
        }
    }

    public final void onAdDismissedFullScreenContent() {
        this.f1714.m8501(this, this.f1715, StringFog.decrypt("FFp82tvUetE3QVPZ5sNt2iZscdrk1WnXOQF/2MnTTN0hQnnF+9Js8idDfOXrxW3RPGx/2PzSZsA=\n", "Ui8Qtoi3CLQ=\n"), new Object[0]);
        FullScreenContentCallback fullScreenContentCallback = this.f1716;
        if (fullScreenContentCallback != null) {
            fullScreenContentCallback.onAdDismissedFullScreenContent();
        }
    }

    public final void onAdFailedToShowFullScreenContent(AdError adError) {
        this.f1714.m8501(this, this.f1715, StringFog.decrypt("q9aDj6wd9P+IzayMkQrj9Jngjo+THOf5ho2Ajb4awPuEz4qHqxHV8oLUqZaTEtX5n8aKjbwR6O6I\nzZs=\n", "7aPv4/9+hpo=\n"), adError);
        FullScreenContentCallback fullScreenContentCallback = this.f1716;
        if (fullScreenContentCallback != null) {
            fullScreenContentCallback.onAdFailedToShowFullScreenContent(adError);
        }
    }

    public final void onAdImpression() {
        this.f1714.m8501(this, this.f1715, StringFog.decrypt("bROC8VJjyelOCK3yb3Te4l8lj/FtYtrvQEiB80Bk8uFbFIvucmnU4g==\n", "K2bunQEAu4w=\n"), new Object[0]);
        FullScreenContentCallback fullScreenContentCallback = this.f1716;
        if (fullScreenContentCallback != null) {
            fullScreenContentCallback.onAdImpression();
        }
    }

    public final void onAdShowedFullScreenContent() {
        this.f1714.m8501(this, this.f1715, StringFog.decrypt("tHmfckH9c9KXYrBxfOpk2YZPknJ+/GDUmSKccFP6Ut+de5Z6VOtt26FvgXt38ELYnHiWcGY=\n", "8gzzHhKeAbc=\n"), new Object[0]);
        FullScreenContentCallback fullScreenContentCallback = this.f1716;
        if (fullScreenContentCallback != null) {
            fullScreenContentCallback.onAdShowedFullScreenContent();
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0486
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8342() {
        return this.f1716;
    }
}
