package com.ironsource.adqualitysdk.sdk.i;

import com.google.android.gms.ads.AdListener;
import com.google.android.gms.ads.LoadAdError;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.پ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0469 extends AdListener implements InterfaceC0486 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0443 f1737;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0566 f1738;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final AdListener f1739;

    public C0469(C0443 c0443, AdListener adListener, C0566 c0566) {
        this.f1737 = c0443;
        this.f1739 = adListener;
        this.f1738 = c0566;
    }

    public final void onAdClosed() {
        this.f1737.m8501(this, this.f1738, StringFog.decrypt("GGWTSSDUrgg8c/FPPeGvJTVurEU3\n", "WQHfIFOgy2Y=\n"), new Object[0]);
        AdListener adListener = this.f1739;
        if (adListener != null) {
            adListener.onAdClosed();
        }
    }

    public final void onAdFailedToLoad(int i) {
        this.f1737.m8501(this, this.f1738, StringFog.decrypt("Q9HsiIs+s0Vnx46OlguybWPczIScHrlnbdTE\n", "ArWg4fhK1is=\n"), Integer.valueOf(i));
        AdListener adListener = this.f1739;
        if (adListener != null) {
            adListener.onAdFailedToLoad(i);
        }
    }

    public final void onAdImpression() {
        this.f1737.m8501(this, this.f1738, StringFog.decrypt("2PLKxvuZwD/85KjA5qzBGPTm9Mr7nsw+9w==\n", "mZaGr4jtpVE=\n"), new Object[0]);
        AdListener adListener = this.f1739;
        if (adListener != null) {
            adListener.onAdImpression();
        }
    }

    public final void onAdLeftApplication() {
        this.f1737.m8501(this, this.f1738, StringFog.decrypt("REiUuXVbjcxgXva/aG6M7mBKrJF2X4TLZk2suWlB\n", "BSzY0AYv6KI=\n"), new Object[0]);
        AdListener adListener = this.f1739;
        if (adListener != null) {
            adListener.onAdLeftApplication();
        }
    }

    public final void onAdLoaded() {
        this.f1737.m8501(this, this.f1738, StringFog.decrypt("22hfi2pmYYb/fj2Nd1NgpPVtd4d9\n", "mgwT4hkSBOg=\n"), new Object[0]);
        AdListener adListener = this.f1739;
        if (adListener != null) {
            adListener.onAdLoaded();
        }
    }

    public final void onAdOpened() {
        this.f1737.m8501(this, this.f1738, StringFog.decrypt("epp2vO/9F8dejBS68sgW5kubVLD4\n", "O/461ZyJcqk=\n"), new Object[0]);
        AdListener adListener = this.f1739;
        if (adListener != null) {
            adListener.onAdOpened();
        }
    }

    public final void onAdSwipeGestureClicked() {
        this.f1737.m8501(this, this.f1738, StringFog.decrypt("203Jub9fxEz/W6u/omrFce1A9bWLTtJW71vgk6BCwkn/TQ==\n", "mimF0MwroSI=\n"), new Object[0]);
        AdListener adListener = this.f1739;
        if (adListener != null) {
            adListener.onAdSwipeGestureClicked();
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0486
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8342() {
        return this.f1739;
    }

    public final void onAdFailedToLoad(LoadAdError loadAdError) {
        this.f1737.m8501(this, this.f1738, StringFog.decrypt("+pdcrrEu5bnegT6orBvkkdqafKKmDu+b1JJ0kKsu6JbftmK1rSg=\n", "u/MQx8JagNc=\n"), loadAdError);
        AdListener adListener = this.f1739;
        if (adListener != null) {
            adListener.onAdFailedToLoad(loadAdError);
        }
    }
}
