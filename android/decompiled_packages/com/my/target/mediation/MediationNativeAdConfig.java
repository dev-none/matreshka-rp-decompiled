package com.my.target.mediation;

import com.my.target.common.menu.MenuFactory;

/* JADX INFO: loaded from: classes6.dex */
public interface MediationNativeAdConfig extends MediationAdConfig {
    int getAdChoicesPlacement();

    int getCachePolicy();

    MenuFactory getMenuFactory();

    @Deprecated
    boolean isAutoLoadImages();

    @Deprecated
    boolean isAutoLoadVideo();
}
