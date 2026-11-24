package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import com.chartboost.sdk.ChartboostDelegate;
import com.chartboost.sdk.Model.CBError;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ỳ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0888 extends ChartboostDelegate implements InterfaceC0486 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0869 f3146;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0566 f3147;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final ChartboostDelegate f3148;

    public C0888(C0869 c0869, ChartboostDelegate chartboostDelegate, C0566 c0566) {
        this.f3146 = c0869;
        this.f3148 = chartboostDelegate;
        this.f3147 = c0566;
    }

    public final void didCacheInPlay(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("kJsydxEBCBSghxdgCQYAGqeWfWEMByQasJs2TAszCxqq\n", "0/NTBWVjZ3s=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didCacheInPlay(str);
        }
    }

    public final void didCacheInterstitial(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("nmkp5TQ808iudQzyLDvbxqlkZvMpOv/Gvmkt3i4q2dWudSHjKT/Q\n", "3QFIl0BevKc=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didCacheInterstitial(str);
        }
    }

    public final void didCacheMoreApps(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("g3z8pAd/A0mzYNmzH3gLR7Rxs7IaeS9Ho3z4mxxvCWewZO4=\n", "wBSd1nMdbCY=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didCacheMoreApps(str);
        }
    }

    public final void didCacheRewardedVideo(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("TrsGu7ke3Vp+pyOsoRnVVHm2Sa2kGPFUbrsCm6gL00dptgOfpBjXWg==\n", "DdNnyc18sjU=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didCacheRewardedVideo(str);
        }
    }

    public final void didClickInterstitial(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("9vSUEh1lHq7G6LEFBWIWoMH52wQAYzKt3P+eKQdzFLPG6JwUAGYd\n", "tZz1YGkHccE=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didClickInterstitial(str);
        }
    }

    public final void didClickMoreApps(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("FMggbETsJ2kk1AV7XOsvZyPFb3pZ6gtqPsMqU1/8LUcn0DI=\n", "V6BBHjCOSAY=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didClickMoreApps(str);
        }
    }

    public final void didClickRewardedVideo(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("8OVFuvt3cnbA+WCt43B6eMfoCqzmcV512u5PmupifGvX6ECe5nF4dg==\n", "s40kyI8VHRk=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didClickRewardedVideo(str);
        }
    }

    public final void didCloseInterstitial(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("PCc/ynRtZ8MMOxrdbGpvzQsqcNxpa0vAEDw78W57bd4MOzfMaW5k\n", "f09euAAPCKw=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didCloseInterstitial(str);
        }
    }

    public final void didCloseMoreApps(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("u+zRwTvlZkaL8PTWI+JuSIzhntcm40pFl/fV/iD1bGiI9MM=\n", "+ISws0+HCSk=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didCloseMoreApps(str);
        }
    }

    public final void didCloseRewardedVideo(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("cCjpgs/d4khANMyV19rqRkclppTS285LXDPtot7I7FVXJeym0tvoSA==\n", "M0CI8Lu/jSc=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didCloseRewardedVideo(str);
        }
    }

    public final void didCompleteInterstitial(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("xWPVuplETYj1f/CtgUNFhvJumqyEQmGI63vYrZlDa4nybsa7mU9Wjudn\n", "hgu0yO0mIuc=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didCompleteInterstitial(str);
        }
    }

    public final void didCompleteRewardedVideo(String str, int i) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("+2jnDu5/Xa3LdMIZ9nhVo8xlqBjzeXGt1XDqGe54YKfPYfQY/3lkq9xl6Q==\n", "uACGfJodMsI=\n"), str, Integer.valueOf(i));
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didCompleteRewardedVideo(str, i);
        }
    }

    public final void didDismissInterstitial(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("Qi28VGuYI4dyMZlDc58riXUg80J2ngiBcii0VWyzIpxkN65Sdo4liW0=\n", "AUXdJh/6TOg=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didDismissInterstitial(str);
        }
    }

    public final void didDismissMoreApps(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("Wwt0OFw9TvFrF1EvRDpG/2wGOy5BO2X3aw58OVsSTux9ImU6Ww==\n", "GGMVSihfIZ4=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didDismissMoreApps(str);
        }
    }

    public final void didDismissRewardedVideo(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("julr/cWxEHC+9U7q3bYYfrnkJOvYtzt2vuxj/MKBGmis827q1YUWe6ju\n", "zYEKj7HTfx8=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didDismissRewardedVideo(str);
        }
    }

    public final void didDisplayInterstitial(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("HEMve1K3hoYsXwpsSrCOiCtOYG1Psa2ALFsiaF+ch506WT19T6GAiDM=\n", "XytOCSbV6ek=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didDisplayInterstitial(str);
        }
    }

    public final void didDisplayMoreApps(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("qKOmfxh777aYv4NoAHznuJ+u6WkFfcSwmLurbBVU76uOird9Hw==\n", "68vHDWwZgNk=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didDisplayMoreApps(str);
        }
    }

    public final void didDisplayRewardedVideo(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("mGijntHsu22odIaJyeuzY69l7IjM6pBrqHCujdzcsXW6cqaJwdi9Zr5v\n", "2wDC7KWO1AI=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didDisplayRewardedVideo(str);
        }
    }

    public final void didFailToLoadInPlay(String str, CBError.CBImpressionError cBImpressionError) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("Sa8ZXJddawl5szxLj1pjB36iVkqKW0IHY6ssQa9QZQJDqShCgkY=\n", "Csd4LuM/BGY=\n"), str, cBImpressionError);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didFailToLoadInPlay(str, cBImpressionError);
        }
    }

    public final void didFailToLoadInterstitial(String str, CBError.CBImpressionError cBImpressionError) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("QX+wi6FLbGNxY5WcuUxkbXZy/528TUVta3uFlplGYmhLeaWcp1p3ZXZ+sJU=\n", "AhfR+dUpAww=\n"), str, cBImpressionError);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didFailToLoadInterstitial(str, cBImpressionError);
        }
    }

    public final void didFailToLoadMoreApps(String str, CBError.CBImpressionError cBImpressionError) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("hS/+MZBBAeO1M9smiEYJ7bIisSeNRyjtryvLLKhMD+iLKO0mpVMe/w==\n", "xkefQ+Qjbow=\n"), str, cBImpressionError);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didFailToLoadMoreApps(str, cBImpressionError);
        }
    }

    public final void didFailToLoadRewardedVideo(String str, CBError.CBImpressionError cBImpressionError) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("NnN+lGM0MCIGb1uDezM4LAF+MYJ+MhksHHdLiVs5PiknfmiHZTI6KSNye4N4\n", "dRsf5hdWX00=\n"), str, cBImpressionError);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didFailToLoadRewardedVideo(str, cBImpressionError);
        }
    }

    public final void didFailToRecordClick(String str, CBError.CBClickError cBClickError) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("DDzRKD1OZIA8IPQ/JUlsjjsxnj4gSE2OJjjkNRtJaIA9MPM2IE9g\n", "T1SwWkksC+8=\n"), str, cBClickError);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didFailToRecordClick(str, cBClickError);
        }
    }

    public final void didInitialize() {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("M5rMh1MLaCEDhumQSwxgLwSXg5FODU4gGYbElEsAfSs=\n", "cPKt9SdpB04=\n"), new Object[0]);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.didInitialize();
        }
    }

    public final void didPauseClickForConfirmation(Activity activity) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("ivYp7lfL08e66gz5T8zbyb37ZvhKzezJvO0t30/A38OP8TrfTMfawbvzKehKxtI=\n", "yZ5InCOpvKg=\n"), activity);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            try {
                chartboostDelegate.getClass().getDeclaredMethod(StringFog.decrypt("U7v6mi1KNrd0vvepJ3kqoHS98KwlTSizQ7vxpA==\n", "N9Keykw/RdI=\n"), Activity.class).invoke(this.f3148, activity);
            } catch (Throwable unused) {
            }
        }
    }

    public final boolean shouldDisplayInterstitial(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("9lIxe/dePXXGThRs71k1e8FffnrrUyd20X45evNQM2P8VCRs8U8mc8FTMWU=\n", "tTpQCYM8Uho=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            return chartboostDelegate.shouldDisplayInterstitial(str);
        }
        return false;
    }

    public final boolean shouldDisplayMoreApps(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("xYcjwO6Gcif1mwbX9oF6KfKKbMHyi2gk4qsrweqIfDHLgDDX25RtOw==\n", "hu9CsprkHUg=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            return chartboostDelegate.shouldDisplayMoreApps(str);
        }
        return false;
    }

    public final boolean shouldDisplayRewardedVideo(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("R6H0BNry8UN3vdETwvX5TXCsuwXG/+tAYI38Bd78/1VWrOIX3PT7SFKg8RPB\n", "BMmVdq6Qniw=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            return chartboostDelegate.shouldDisplayRewardedVideo(str);
        }
        return false;
    }

    public final boolean shouldRequestInterstitial(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("Qb0Xnu0kOw5xoTKJ9SMzAHawWJ/xKSENZocTnewjJxVLuwKJ6zUgCHa8F4A=\n", "AtV27JlGVGE=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            return chartboostDelegate.shouldRequestInterstitial(str);
        }
        return false;
    }

    public final boolean shouldRequestMoreApps(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("gUV3poSduJSxWVKxnJqwmrZIOKeYkKKXpn9zpYWapI+PQmSxsY+niA==\n", "wi0W1PD/1/s=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            return chartboostDelegate.shouldRequestMoreApps(str);
        }
        return false;
    }

    public final void willDisplayVideo(String str) {
        this.f3146.m8501(this, this.f3147, StringFog.decrypt("Dc6+fwRL35Y90ptoHEzXmDrD8XoZRdy9J9WvYRFQ5pAqw7A=\n", "TqbfDXApsPk=\n"), str);
        ChartboostDelegate chartboostDelegate = this.f3148;
        if (chartboostDelegate != null) {
            chartboostDelegate.willDisplayVideo(str);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0486
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8342() {
        return this.f3148;
    }
}
