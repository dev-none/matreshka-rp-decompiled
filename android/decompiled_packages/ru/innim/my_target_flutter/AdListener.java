package ru.innim.my_target_flutter;

import com.my.target.ads.InterstitialAd;
import kotlin.Metadata;
import kotlin.TuplesKt;
import kotlin.Unit;
import kotlin.collections.MapsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AdListener.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\b\u0018\u0000 \u00162\u00020\u0001:\u0001\u0016B:\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012!\u0010\u0006\u001a\u001d\u0012\u0013\u0012\u00110\u0005¢\u0006\f\b\b\u0012\b\b\t\u0012\u0004\b\b(\u0004\u0012\u0004\u0012\u00020\n0\u0007¢\u0006\u0004\b\u000b\u0010\fJ\u0010\u0010\r\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\u000fH\u0016J\u0018\u0010\u0010\u001a\u00020\n2\u0006\u0010\u0011\u001a\u00020\u00052\u0006\u0010\u000e\u001a\u00020\u000fH\u0016J\u0010\u0010\u0012\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\u000fH\u0016J\u0010\u0010\u0013\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\u000fH\u0016J\u0010\u0010\u0014\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\u000fH\u0016J\u0010\u0010\u0015\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\u000fH\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R)\u0010\u0006\u001a\u001d\u0012\u0013\u0012\u00110\u0005¢\u0006\f\b\b\u0012\b\b\t\u0012\u0004\b\b(\u0004\u0012\u0004\u0012\u00020\n0\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0017"}, d2 = {"Lru/innim/my_target_flutter/AdListener;", "Lcom/my/target/ads/InterstitialAd$InterstitialAdListener;", "adEventHandler", "Lru/innim/my_target_flutter/AdEventHandler;", "id", "", "onDone", "Lkotlin/Function1;", "Lkotlin/ParameterName;", "name", "", "<init>", "(Lru/innim/my_target_flutter/AdEventHandler;Ljava/lang/String;Lkotlin/jvm/functions/Function1;)V", "onLoad", "ad", "Lcom/my/target/ads/InterstitialAd;", "onNoAd", "reason", "onClick", "onDisplay", "onDismiss", "onVideoCompleted", "Companion", "my_target_flutter_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class AdListener implements InterstitialAd.InterstitialAdListener {
    private static final String ACTION_AD_DISMISS = "ad_dismiss";
    private static final String ACTION_AD_DISPLAY = "ad_display";
    private static final String ACTION_AD_LOADED = "ad_loaded";
    private static final String ACTION_AD_VIDEO_COMPLETED = "ad_video_completed";
    private static final String ACTION_CLICK_ON_AD = "click_on_ad";
    private static final String ACTION_NO_AD = "no_ad";
    private final AdEventHandler adEventHandler;
    private final String id;
    private final Function1<String, Unit> onDone;

    /* JADX WARN: Multi-variable type inference failed */
    public AdListener(AdEventHandler adEventHandler, String id, Function1<? super String, Unit> onDone) {
        Intrinsics.checkNotNullParameter(adEventHandler, "adEventHandler");
        Intrinsics.checkNotNullParameter(id, "id");
        Intrinsics.checkNotNullParameter(onDone, "onDone");
        this.adEventHandler = adEventHandler;
        this.id = id;
        this.onDone = onDone;
    }

    @Override // com.my.target.ads.InterstitialAd.InterstitialAdListener
    public void onLoad(InterstitialAd ad) {
        Intrinsics.checkNotNullParameter(ad, "ad");
        AdEventHandler.sendAdEvent$default(this.adEventHandler, this.id, ACTION_AD_LOADED, null, 4, null);
    }

    public void onNoAd(String reason, InterstitialAd ad) {
        Intrinsics.checkNotNullParameter(reason, "reason");
        Intrinsics.checkNotNullParameter(ad, "ad");
        this.adEventHandler.sendAdEvent(this.id, ACTION_NO_AD, MapsKt.mapOf(TuplesKt.to("reason", reason)));
        this.onDone.invoke(this.id);
    }

    @Override // com.my.target.ads.InterstitialAd.InterstitialAdListener
    public void onClick(InterstitialAd ad) {
        Intrinsics.checkNotNullParameter(ad, "ad");
        AdEventHandler.sendAdEvent$default(this.adEventHandler, this.id, ACTION_CLICK_ON_AD, null, 4, null);
    }

    @Override // com.my.target.ads.InterstitialAd.InterstitialAdListener
    public void onDisplay(InterstitialAd ad) {
        Intrinsics.checkNotNullParameter(ad, "ad");
        AdEventHandler.sendAdEvent$default(this.adEventHandler, this.id, ACTION_AD_DISPLAY, null, 4, null);
    }

    @Override // com.my.target.ads.InterstitialAd.InterstitialAdListener
    public void onDismiss(InterstitialAd ad) {
        Intrinsics.checkNotNullParameter(ad, "ad");
        AdEventHandler.sendAdEvent$default(this.adEventHandler, this.id, ACTION_AD_DISMISS, null, 4, null);
        this.onDone.invoke(this.id);
    }

    @Override // com.my.target.ads.InterstitialAd.InterstitialAdListener
    public void onVideoCompleted(InterstitialAd ad) {
        Intrinsics.checkNotNullParameter(ad, "ad");
        AdEventHandler.sendAdEvent$default(this.adEventHandler, this.id, ACTION_AD_VIDEO_COMPLETED, null, 4, null);
    }
}
