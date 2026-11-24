package com.my.tracker.ads;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

/* JADX INFO: loaded from: classes6.dex */
@Retention(RetentionPolicy.SOURCE)
public @interface AdFormat {
    public static final String BANNER = "banner";
    public static final String INTERSTITIAL = "interstitial";
    public static final String NATIVE = "native";
    public static final String REWARDED = "rewarded";
}
