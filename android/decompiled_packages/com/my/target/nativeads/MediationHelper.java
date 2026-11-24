package com.my.target.nativeads;

import android.view.View;
import com.my.target.nativeads.views.MediaAdView;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class MediationHelper {
    public static void registerView(NativeAd nativeAd, View view, List<View> list, MediaAdView mediaAdView) {
        nativeAd.a(view, list, mediaAdView);
    }
}
